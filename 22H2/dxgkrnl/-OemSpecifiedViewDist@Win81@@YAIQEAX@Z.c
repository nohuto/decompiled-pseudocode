/*
 * XREFs of ?OemSpecifiedViewDist@Win81@@YAIQEAX@Z @ 0x1C02B0388
 * Callers:
 *     ?DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HHPEAI@Z @ 0x1C02AFD5C (-DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HHPEAI@Z.c)
 * Callees:
 *     DpiReadPnpRegistryValue @ 0x1C0188F90 (DpiReadPnpRegistryValue.c)
 */

__int64 __fastcall Win81::OemSpecifiedViewDist(Win81 *this, void *const a2)
{
  __int64 v2; // rcx
  wchar_t *v3; // rax
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 27);
  v5 = 0;
  if ( (int)DpiReadPnpRegistryValue(v2, L"ViewDistanceOverride", (char *)&v5, 4u, 2u) < 0 )
    return 0LL;
  v3 = (wchar_t *)&unk_1C0085A20;
  while ( v5 != *(_DWORD *)v3 )
  {
    v3 += 2;
    if ( v3 == L"ProcessName" )
      return 0LL;
  }
  return v5;
}
