/*
 * XREFs of FsRtlRegisterUncProviderEx2 @ 0x14084EEC0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpRegisterUncProvider @ 0x14084EEE8 (FsRtlpRegisterUncProvider.c)
 */

__int64 __fastcall FsRtlRegisterUncProviderEx2(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  if ( *(_WORD *)(a3 + 2) >= 0x200u )
    return FsRtlpRegisterUncProvider();
  *a4 = -1LL;
  return 3221225485LL;
}
