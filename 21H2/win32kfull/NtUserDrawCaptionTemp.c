/*
 * XREFs of NtUserDrawCaptionTemp @ 0x1C01F2C90
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     xxxDrawCaptionTemp @ 0x1C00B97AC (xxxDrawCaptionTemp.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall NtUserDrawCaptionTemp(
        __int64 a1,
        HDC a2,
        struct tagRECT *a3,
        __int64 a4,
        __int64 a5,
        ULONG64 a6,
        unsigned int a7)
{
  ULONG64 v10; // r14
  __int64 v11; // rcx
  unsigned __int64 *v12; // rsi
  unsigned int v13; // edi
  struct tagCURSOR *v14; // rdi
  int v15; // ecx
  void *v16; // r14
  ULONG64 v17; // rdx
  _BYTE **v18; // rax
  void *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  void *v27[2]; // [rsp+40h] [rbp-C8h] BYREF
  int v28; // [rsp+50h] [rbp-B8h]
  int v29; // [rsp+54h] [rbp-B4h]
  __int64 v30; // [rsp+58h] [rbp-B0h]
  __int128 v31; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+70h] [rbp-98h]
  __int128 v33; // [rsp+78h] [rbp-90h] BYREF
  __int64 v34; // [rsp+88h] [rbp-80h]
  __int128 v35; // [rsp+90h] [rbp-78h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-68h]
  struct tagRECT v37; // [rsp+B0h] [rbp-58h] BYREF

  v30 = a4;
  v10 = a6;
  v33 = 0LL;
  v34 = 0LL;
  v37 = 0LL;
  *(_OWORD *)v27 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v28 = 0;
  EnterCrit(0LL, 0LL);
  if ( a1 )
  {
    v12 = (unsigned __int64 *)ValidateHwnd(a1);
    if ( !v12 )
    {
LABEL_3:
      v13 = 0;
      goto LABEL_33;
    }
  }
  else
  {
    v12 = 0LL;
  }
  if ( a5 )
  {
    v14 = (struct tagCURSOR *)HMValidateHandle(a5, 3u);
    if ( !v14 )
      goto LABEL_3;
  }
  else
  {
    v14 = 0LL;
  }
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct tagRECT *)MmUserProbeAddress;
  v37 = *a3;
  if ( a6 >= MmUserProbeAddress )
    v10 = MmUserProbeAddress;
  v15 = *(_DWORD *)v10;
  v29 = v15;
  LODWORD(v27[0]) = v15;
  v16 = *(void **)(v10 + 8);
  v27[1] = v16;
  if ( v16 )
  {
    if ( ((unsigned __int8)v16 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v17 = (ULONG64)v16 + (unsigned __int16)v15 + 2;
    v18 = (_BYTE **)MmUserProbeAddress;
    if ( v17 < MmUserProbeAddress && (unsigned __int16)v15 <= HIWORD(v29) )
    {
      if ( (v15 & 1) != 0 )
        goto LABEL_21;
      if ( v17 > (unsigned __int64)v16 )
      {
LABEL_23:
        v19 = (void *)Win32AllocPoolWithQuotaZInit(LOWORD(v27[0]) + 2LL, 2020897621LL);
        v27[1] = v19;
        if ( !v19 )
          ExRaiseStatus(-1073741801);
        v28 = 1;
        PushW32ThreadLock((__int64)v19, &v35, (__int64)Win32FreePool);
        memmove(v27[1], v16, LOWORD(v27[0]));
        *((_WORD *)v27[1] + ((unsigned __int64)LOWORD(v27[0]) >> 1)) = 0;
        WORD1(v27[0]) = LOWORD(v27[0]) + 2;
        goto LABEL_25;
      }
    }
    if ( (v15 & 1) == 0 )
    {
LABEL_22:
      **v18 = 0;
      goto LABEL_23;
    }
LABEL_21:
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v18 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_22;
  }
LABEL_25:
  *(_QWORD *)&v31 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v31;
  *((_QWORD *)&v31 + 1) = v12;
  if ( v12 )
    HMLockObject(v12);
  *(_QWORD *)&v33 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v33;
  *((_QWORD *)&v33 + 1) = v14;
  if ( v14 )
    HMLockObject(v14);
  v13 = xxxDrawCaptionTemp(v12, a2, &v37, v30, v14, (unsigned __int64)v27 & -(__int64)(v27[1] != 0LL), a7);
  ThreadUnlock1(v21, v20, v22);
  ThreadUnlock1(v24, v23, v25);
  if ( v28 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v35);
LABEL_33:
  UserSessionSwitchLeaveCrit(v11);
  return v13;
}
