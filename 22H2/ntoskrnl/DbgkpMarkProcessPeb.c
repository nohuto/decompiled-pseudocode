/*
 * XREFs of DbgkpMarkProcessPeb @ 0x140884B7C
 * Callers:
 *     DbgkCopyProcessDebugPort @ 0x140607E1C (DbgkCopyProcessDebugPort.c)
 *     DbgkClearProcessDebugObject @ 0x140772C50 (DbgkClearProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x140884880 (DbgkpCloseObject.c)
 *     DbgkpSetProcessDebugObject @ 0x140885860 (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

void __fastcall DbgkpMarkProcessPeb(ULONG_PTR BugCheckParameter1)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  _DWORD *v3; // r9
  _WORD *v4; // rax
  __int16 v5; // cx
  _OWORD v6[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v6, 0, sizeof(v6));
  v2 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112);
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
  {
    if ( *(_QWORD *)(BugCheckParameter1 + 1360) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v6, v3);
      ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
      *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 1360) + 2LL) = *(_QWORD *)(BugCheckParameter1 + 1400) != 0LL;
      v4 = *(_WORD **)(BugCheckParameter1 + 1408);
      if ( v4 )
      {
        v5 = v4[4];
        if ( v5 == 332 || v5 == 452 )
        {
          if ( *(_QWORD *)v4 )
            *(_BYTE *)(*(_QWORD *)v4 + 2LL) = *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 1360) + 2LL);
        }
      }
      KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
      KiUnstackDetachProcess((__int64)v6, 0);
    }
    ExReleaseRundownProtection(v2);
  }
}
