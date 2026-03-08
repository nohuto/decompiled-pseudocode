/*
 * XREFs of PopInitializeHibernateGlobals @ 0x14082ABAC
 * Callers:
 *     PoInitHiberServices @ 0x14082B1B0 (PoInitHiberServices.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x1404129D0 (ZwQuerySystemInformation.c)
 *     PopInitHiberPersistedRegValues @ 0x14080FC80 (PopInitHiberPersistedRegValues.c)
 *     PoDisableSleepStates @ 0x140980FB0 (PoDisableSleepStates.c)
 *     PoShutdownBugCheck @ 0x1409865B0 (PoShutdownBugCheck.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void PopInitializeHibernateGlobals()
{
  _DWORD *v0; // rbx
  __int64 Pool2; // rax
  unsigned int v2; // esi
  __int64 v3; // rdi
  __int64 v4; // rcx
  char v5; // [rsp+58h] [rbp+10h] BYREF

  v0 = 0LL;
  PopInitHiberPersistedRegValues();
  if ( (unsigned int)ZwQuerySystemInformation(112LL, 0LL) == -1073741789 )
  {
    Pool2 = ExAllocatePool2(64LL, 0LL, 1919052136LL);
    v0 = (_DWORD *)Pool2;
    if ( Pool2 )
    {
      if ( (int)ZwQuerySystemInformation(112LL, Pool2) >= 0 && *(_BYTE *)v0 && v0[1] != -1 )
      {
        PopBootFromVHD = 1;
        PoDisableSleepStates(2LL, 8LL, &v5);
      }
    }
  }
  v2 = 0;
  v3 = 0LL;
  do
  {
    if ( *(_DWORD *)((char *)&PopHiberForceDisabledReg + v3)
      && (int)PoDisableSleepStates(*(unsigned int *)((char *)PopHiberForceDisabledReasonMap + v3), 8LL, &v5) < 0 )
    {
      LOBYTE(v4) = 1;
      PoShutdownBugCheck(v4, 160LL, 272LL, 0LL, 0LL, 0LL);
    }
    ++v2;
    v3 += 4LL;
  }
  while ( v2 < 2 );
  if ( v0 )
    ExFreePoolWithTag(v0, 0x72626968u);
}
