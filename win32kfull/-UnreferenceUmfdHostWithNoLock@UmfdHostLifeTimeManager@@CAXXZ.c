/*
 * XREFs of ?UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C0125930
 * Callers:
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1C00BAEC0 (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C01255E8 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C0125770 (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall UmfdHostLifeTimeManager::UnreferenceUmfdHostWithNoLock(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  v2 = *(void **)(v1 + 23496);
  if ( v2 )
  {
    ObfDereferenceObject(v2);
    *(_QWORD *)(v1 + 23496) = 0LL;
  }
}
