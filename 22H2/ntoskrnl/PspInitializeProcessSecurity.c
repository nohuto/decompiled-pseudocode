/*
 * XREFs of PspInitializeProcessSecurity @ 0x140703CD0
 * Callers:
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
 * Callees:
 *     MmGetSessionId @ 0x140252DB0 (MmGetSessionId.c)
 *     ObFastDereferenceObject @ 0x140345620 (ObFastDereferenceObject.c)
 *     PspIdentityBasedJobBreakaway @ 0x1405D9294 (PspIdentityBasedJobBreakaway.c)
 *     SeSubProcessToken @ 0x140603E44 (SeSubProcessToken.c)
 *     PsReferencePrimaryToken @ 0x140654390 (PsReferencePrimaryToken.c)
 *     ObInitializeFastReference @ 0x140703ECC (ObInitializeFastReference.c)
 *     SeAssignPrimaryToken @ 0x1407BC390 (SeAssignPrimaryToken.c)
 */

__int64 __fastcall PspInitializeProcessSecurity(
        PEPROCESS Process,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        __int64 a9,
        unsigned int a10,
        __int64 a11,
        int a12,
        __int64 a13,
        _DWORD *a14)
{
  _DWORD *v14; // rsi
  int *v17; // r14
  struct _DMA_ADAPTER *v20; // r15
  int SessionId; // eax
  int v22; // r9d
  int v23; // r12d
  int v24; // eax
  signed __int64 v25; // rax
  PADAPTER_OBJECT v27; // [rsp+68h] [rbp-29h] BYREF
  _DWORD v28[4]; // [rsp+70h] [rbp-21h] BYREF
  PEPROCESS v29; // [rsp+80h] [rbp-11h]
  __int64 v30; // [rsp+88h] [rbp-9h]
  __int16 v31; // [rsp+C8h] [rbp+37h] BYREF
  char v32; // [rsp+CAh] [rbp+39h]

  v14 = a14;
  v31 = 0;
  v32 = 0;
  v27 = 0LL;
  *a14 = 0;
  v17 = v14 + 1;
  v14[1] = 0;
  v20 = 0LL;
  if ( Process )
  {
    v28[0] = a5;
    v28[1] = a12;
    v28[2] = a6;
    v28[3] = a7;
    v30 = a13;
    v29 = Process;
    SessionId = MmGetSessionId(a2);
    v23 = SeSubProcessToken(a2, a3, &v27, v22 != 0 ? 1 : 3, SessionId, (__int64)v28, a8, a9, a10, a11, &v31);
    if ( v23 >= 0 )
    {
      ObInitializeFastReference(a2 + 1208, v27);
      if ( a4 || (_BYTE)v31 )
        *v14 = 1;
      if ( HIBYTE(v31) )
      {
        *v17 = 1;
        v24 = 1;
      }
      else
      {
        v24 = *v17;
      }
      if ( !v24 && v32 )
      {
        v20 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(Process);
        v23 = PspIdentityBasedJobBreakaway(v20, v27, v14 + 1);
      }
    }
    if ( *v14
      || SLODWORD(Process[2].ReadyListHead.Blink) < 0
      || (*(_DWORD *)(a2 + 2172) & 0x800000) != 0 && !*(_QWORD *)&Process[2].ActiveProcessors.Count )
    {
      v25 = _InterlockedIncrement64(&PsNextSecurityDomain);
    }
    else
    {
      v25 = *(_QWORD *)&Process[2].ActiveProcessors.Count;
    }
    *(_QWORD *)(a2 + 2528) = v25;
    *(_QWORD *)(a2 + 2536) = v25;
  }
  else
  {
    ObInitializeFastReference(a2 + 1208, 0LL);
    SeAssignPrimaryToken(a2, a3);
    v23 = 0;
  }
  if ( v20 )
    ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], v20);
  return (unsigned int)v23;
}
