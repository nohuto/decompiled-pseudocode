/*
 * XREFs of EmpParseInfDatabase @ 0x140B4CEE0
 * Callers:
 *     EmInitSystem @ 0x140B4CBA8 (EmInitSystem.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     EmpParseEntryTypes @ 0x140B4D1D4 (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x140B4D34C (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x140B4DBC0 (EmpParseRules.c)
 *     EmpParseStrings @ 0x140B4DEC4 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x140B4E0F0 (EmpParseTargetRules.c)
 *     CmpFreeSectionList @ 0x140B4ECD4 (CmpFreeSectionList.c)
 *     CmpParseInfBuffer @ 0x140B5BC3C (CmpParseInfBuffer.c)
 */

__int64 __fastcall EmpParseInfDatabase(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  PVOID *v5; // rdi
  int v6; // ebx
  char v7; // al
  int v9; // [rsp+40h] [rbp+18h] BYREF

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpParseLock, 0LL);
  v9 = 0;
  v4 = CmpParseInfBuffer(a1, a2, &v9);
  v5 = (PVOID *)v4;
  if ( v4 )
  {
    v6 = EmpParseEntryTypes(v4);
    if ( v6 >= 0 )
    {
      v6 = EmpParseCallbacks(v5);
      if ( v6 >= 0 )
      {
        v6 = EmpParseRules(v5);
        if ( v6 >= 0 )
        {
          v6 = EmpParseStrings(v5);
          if ( v6 >= 0 )
            v6 = EmpParseTargetRules(v5);
        }
      }
    }
    CmpFreeSectionList(*v5);
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    v6 = -1073741816;
  }
  v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)&EmpParseLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpParseLock);
  KeAbPostRelease((ULONG_PTR)&EmpParseLock);
  return (unsigned int)v6;
}
