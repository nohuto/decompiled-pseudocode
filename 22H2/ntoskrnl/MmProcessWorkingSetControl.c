/*
 * XREFs of MmProcessWorkingSetControl @ 0x140689770
 * Callers:
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 *     VmpPauseResumeNotify @ 0x14092F744 (VmpPauseResumeNotify.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140317C38 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiLogWsEmptyControl @ 0x140317F80 (MiLogWsEmptyControl.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MiEmptyWorkingSet @ 0x14053040C (MiEmptyWorkingSet.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14063E320 (ObpReferenceObjectByHandleWithTag.c)
 *     SmStoreCompressionStop @ 0x14068999C (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x140689A80 (SmStoreCompressionStart.c)
 *     PsSwapProcessWorkingSet @ 0x140907A30 (PsSwapProcessWorkingSet.c)
 */

__int64 __fastcall MmProcessWorkingSetControl(
        ULONG_PTR BugCheckParameter1,
        __int64 *a2,
        unsigned int a3,
        KPROCESSOR_MODE a4)
{
  unsigned int v6; // edi
  __int64 result; // rax
  _DWORD *v8; // r9
  _KPROCESS *v9; // r14
  int v10; // r15d
  unsigned int v11; // ebx
  unsigned int v12; // eax
  char v13; // dl
  __int64 v14; // [rsp+40h] [rbp-98h]
  int v15; // [rsp+48h] [rbp-90h]
  PVOID Object[2]; // [rsp+50h] [rbp-88h] BYREF
  _OWORD v17[3]; // [rsp+60h] [rbp-78h] BYREF

  Object[1] = (PVOID)BugCheckParameter1;
  v6 = 0;
  Object[0] = 0LL;
  memset(v17, 0, sizeof(v17));
  if ( a3 < 0xC )
    return 3221225476LL;
  v14 = *a2;
  v15 = *((_DWORD *)a2 + 2);
  if ( (unsigned int)*a2 != 3 )
    return 3221225561LL;
  if ( HIDWORD(v14) >= 2 )
    return 3221225485LL;
  if ( !HIDWORD(v14) && !SeSinglePrivilegeCheck(SeDebugPrivilege, a4) )
    return 3221225569LL;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             0x2000,
             (__int64)PsProcessType,
             a4,
             0x73576D4Du,
             Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v9 = (_KPROCESS *)Object[0];
    if ( KeGetCurrentThread()->ApcState.Process == Object[0] )
    {
      LODWORD(Object[0]) = 0;
    }
    else
    {
      LODWORD(Object[0]) = 1;
      KiStackAttachProcess(v9, 0LL, (__int64)v17, v8);
    }
    if ( HIDWORD(v14) )
    {
      if ( (v15 & 0xFFFFFFC0) == 0 )
      {
        if ( ((v15 & 0x20) == 0 || !a4)
          && (v15 & 1) != ((v15 & 2) == 0)
          && ((v15 & 8) == 0 || (v15 & 2) != 0)
          && ((v15 & 0x10) == 0 || (v15 & 8) != 0) )
        {
          MiLogWsEmptyControl((__int64)&v9[1].ActiveProcessorsPadding[6]);
          v10 = (v15 & 0x20) != 0 ? 4 : 0;
          if ( (v15 & 1) != 0 )
          {
            if ( (v15 & 8) != 0 )
              SmStoreCompressionStart();
            v11 = MiEmptyWorkingSetPrivatePagesByVa((__int64)&v9[1].ActiveProcessorsPadding[6], v10);
            if ( (v15 & 8) != 0 )
            {
              LOBYTE(v6) = (v15 & 0x10) != 0;
              SmStoreCompressionStop(v6);
            }
            goto LABEL_20;
          }
          v13 = v10 | 1;
          if ( (v15 & 4) == 0 )
            v13 = (v15 & 0x20) != 0 ? 4 : 0;
          v12 = MiEmptyWorkingSet((__int64)&v9[1].ActiveProcessorsPadding[6], v13);
          goto LABEL_40;
        }
        v11 = -1073741637;
LABEL_20:
        if ( LODWORD(Object[0]) == 1 )
          KiUnstackDetachProcess((__int64)v17, 0);
        ObfDereferenceObjectWithTag(v9, 0x73576D4Du);
        return v11;
      }
    }
    else if ( (v15 & 0xFFFFFFFE) == 0 )
    {
      v12 = PsSwapProcessWorkingSet(v9);
LABEL_40:
      v11 = v12;
      goto LABEL_20;
    }
    v11 = -1073741811;
    goto LABEL_20;
  }
  return result;
}
