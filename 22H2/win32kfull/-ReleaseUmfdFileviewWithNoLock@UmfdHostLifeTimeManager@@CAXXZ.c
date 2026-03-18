/*
 * XREFs of ?ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C00A5D18
 * Callers:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00A5158 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C00A5278 (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1C00A5810 (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock(__int64 a1)
{
  __int64 v1; // rdi
  PVOID *v2; // rbx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  v2 = *(PVOID **)(v1 + 23472);
  if ( v2 )
  {
    ExFreePoolWithTag(v2[6], 0);
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(v1 + 23472) = 0LL;
  }
}
