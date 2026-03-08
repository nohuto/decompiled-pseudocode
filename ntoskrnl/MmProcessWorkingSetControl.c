/*
 * XREFs of MmProcessWorkingSetControl @ 0x140A408A4
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     VmpPauseResumeNotify @ 0x1409DA524 (VmpPauseResumeNotify.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MiEmptyWorkingSet @ 0x140619C4C (MiEmptyWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140619C68 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiLogWsEmptyControl @ 0x140650470 (MiLogWsEmptyControl.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     PsSwapProcessWorkingSet @ 0x1409AB6DC (PsSwapProcessWorkingSet.c)
 *     SmStoreCompressionStart @ 0x1409D4A38 (SmStoreCompressionStart.c)
 *     SmStoreCompressionStop @ 0x1409D4AD8 (SmStoreCompressionStop.c)
 */

__int64 __fastcall MmProcessWorkingSetControl(
        ULONG_PTR BugCheckParameter1,
        __int64 *a2,
        unsigned int a3,
        KPROCESSOR_MODE a4)
{
  __int64 result; // rax
  _KPROCESS *v7; // rsi
  unsigned int v8; // ebx
  unsigned int v9; // eax
  int v10; // r12d
  char v11; // dl
  __int64 v12; // [rsp+40h] [rbp-98h]
  unsigned int v13; // [rsp+48h] [rbp-90h]
  PVOID Object[2]; // [rsp+50h] [rbp-88h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v15; // [rsp+60h] [rbp-78h] BYREF

  Object[1] = (PVOID)BugCheckParameter1;
  Object[0] = 0LL;
  memset(&v15, 0, sizeof(v15));
  if ( a3 < 0xC )
    return 3221225476LL;
  v12 = *a2;
  v13 = *((_DWORD *)a2 + 2);
  if ( (unsigned int)*a2 != 3 )
    return 3221225561LL;
  if ( HIDWORD(v12) >= 2 )
    return 3221225485LL;
  if ( !HIDWORD(v12) && !SeSinglePrivilegeCheck(SeDebugPrivilege, a4) )
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
    v7 = (_KPROCESS *)Object[0];
    if ( KeGetCurrentThread()->ApcState.Process == Object[0] )
    {
      LODWORD(Object[0]) = 0;
    }
    else
    {
      LODWORD(Object[0]) = 1;
      KiStackAttachProcess(v7, 0, (__int64)&v15);
    }
    if ( HIDWORD(v12) )
    {
      if ( (v13 & 0xFFFFFFC0) != 0 )
        goto LABEL_16;
      if ( (v13 & 1) == ((v13 & 2) == 0) || (v13 & 8) != 0 && (v13 & 2) == 0 || (v13 & 0x10) != 0 && (v13 & 8) == 0 )
      {
        v8 = -1073741637;
        goto LABEL_34;
      }
      MiLogWsEmptyControl((__int64)&v7[1].ActiveProcessors.StaticBitmap[26]);
      v10 = (v13 >> 3) & 4;
      if ( (v13 & 1) != 0 )
      {
        if ( (v13 & 8) != 0 )
          SmStoreCompressionStart();
        v8 = MiEmptyWorkingSetPrivatePagesByVa((__int64)&v7[1].ActiveProcessors.StaticBitmap[26], v10);
        if ( (v13 & 8) != 0 )
          SmStoreCompressionStop((v13 & 0x10) != 0);
        goto LABEL_34;
      }
      v11 = v10 | 1;
      if ( (v13 & 4) == 0 )
        v11 = (v13 >> 3) & 4;
      v9 = MiEmptyWorkingSet((__int64)&v7[1].ActiveProcessors.StaticBitmap[26], v11);
    }
    else
    {
      if ( (v13 & 0xFFFFFFFE) != 0 )
      {
LABEL_16:
        v8 = -1073741811;
LABEL_34:
        if ( LODWORD(Object[0]) )
          KiUnstackDetachProcess(&v15);
        ObfDereferenceObjectWithTag(v7, 0x73576D4Du);
        return v8;
      }
      v9 = PsSwapProcessWorkingSet(v7, (v13 & 1) == 0);
    }
    v8 = v9;
    goto LABEL_34;
  }
  return result;
}
