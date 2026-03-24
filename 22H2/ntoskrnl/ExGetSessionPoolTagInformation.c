/*
 * XREFs of ExGetSessionPoolTagInformation @ 0x14066070C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406C9E30 (ExpQuerySystemInformation.c)
 * Callees:
 *     MmGetNextSession @ 0x140263DE0 (MmGetNextSession.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     MmDetachSession @ 0x1402EC090 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402EC130 (MmAttachSession.c)
 *     ExUnlockUserBuffer @ 0x1402EC94C (ExUnlockUserBuffer.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ExLockUserBuffer @ 0x1406605D0 (ExLockUserBuffer.c)
 *     ExGetAttachedSessionPoolTagInfo @ 0x1406608F8 (ExGetAttachedSessionPoolTagInfo.c)
 */

__int64 __fastcall ExGetSessionPoolTagInformation(unsigned __int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  int AttachedSessionPoolTagInfo; // ebx
  _QWORD *v5; // r14
  unsigned int v8; // esi
  __int64 result; // rax
  unsigned int SessionId; // eax
  int v11; // r12d
  _KPROCESS *NextSession; // rdi
  _QWORD *v13; // r15
  unsigned int v14; // r13d
  unsigned int v15; // [rsp+30h] [rbp-39h] BYREF
  _QWORD *v16; // [rsp+38h] [rbp-31h] BYREF
  _DWORD *v17; // [rsp+40h] [rbp-29h]
  PVOID P; // [rsp+48h] [rbp-21h] BYREF
  _DWORD *v19; // [rsp+50h] [rbp-19h]
  _OWORD v20[3]; // [rsp+58h] [rbp-11h] BYREF

  v16 = 0LL;
  P = 0LL;
  AttachedSessionPoolTagInfo = 0;
  *a3 = 0;
  v5 = 0LL;
  v15 = 0;
  v17 = a4;
  v19 = a3;
  v8 = a2;
  memset(v20, 0, sizeof(v20));
  if ( a2 )
  {
    result = ExLockUserBuffer(a1, a2, KeGetCurrentThread()->PreviousMode, IoWriteAccess, &v16, (struct _MDL **)&P);
    AttachedSessionPoolTagInfo = result;
    if ( (int)result < 0 )
      return result;
  }
  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( *a4 != -1 && *a4 == SessionId )
  {
    v5 = v16;
    AttachedSessionPoolTagInfo = ExGetAttachedSessionPoolTagInfo(v16, v8, a3, SessionId);
    if ( AttachedSessionPoolTagInfo >= 0 )
      goto LABEL_15;
    goto LABEL_18;
  }
  v11 = 0;
  NextSession = (_KPROCESS *)MmGetNextSession(0LL);
  if ( !NextSession )
    goto LABEL_14;
  v13 = v16;
  while ( 1 )
  {
    v14 = MmGetSessionIdEx((__int64)NextSession);
    if ( *v17 != -1 && *v17 != v14 )
      goto LABEL_13;
    AttachedSessionPoolTagInfo = MmAttachSession(NextSession, (__int64)v20);
    if ( AttachedSessionPoolTagInfo < 0 )
      goto LABEL_14;
    AttachedSessionPoolTagInfo = ExGetAttachedSessionPoolTagInfo(v13, v8, &v15, v14);
    MmDetachSession((__int64)NextSession, (__int64)v20);
    if ( AttachedSessionPoolTagInfo < 0 )
    {
      if ( AttachedSessionPoolTagInfo != -1073741820 )
        goto LABEL_30;
      v8 = 0;
      goto LABEL_12;
    }
    if ( v15 > v8 || v15 < 0x38 )
      break;
    v5 = v13;
    v13 = (_QWORD *)((char *)v13 + v15);
    v8 -= v15;
LABEL_12:
    v11 += v15;
    if ( *v17 != -1 )
      goto LABEL_30;
LABEL_13:
    NextSession = (_KPROCESS *)MmGetNextSession((struct _DMA_ADAPTER *)NextSession);
    if ( !NextSession )
      goto LABEL_14;
  }
  AttachedSessionPoolTagInfo = -1073741675;
LABEL_30:
  HalPutDmaAdapter((PADAPTER_OBJECT)NextSession);
LABEL_14:
  *v19 = v11;
LABEL_15:
  if ( AttachedSessionPoolTagInfo >= 0 && v5 )
    *v5 = 0LL;
LABEL_18:
  if ( P )
    ExUnlockUserBuffer((struct _MDL *)P);
  return (unsigned int)AttachedSessionPoolTagInfo;
}
