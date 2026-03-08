/*
 * XREFs of PiDqOpenObjectRegKey @ 0x140747218
 * Callers:
 *     PiDqPropertyCallback @ 0x1406CC9A0 (PiDqPropertyCallback.c)
 *     PiDqActionDataGetRequestedProperties @ 0x140746928 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqIrpPropertySet @ 0x1407FB7F4 (PiDqIrpPropertySet.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x14083A4C8 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetChangedProperties @ 0x14083AC48 (PiDqActionDataGetChangedProperties.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x140958F20 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 * Callees:
 *     _PnpOpenObjectRegKey @ 0x1406CECB8 (_PnpOpenObjectRegKey.c)
 *     PiDqOpenUserObjectRegKey @ 0x140747298 (PiDqOpenUserObjectRegKey.c)
 */

__int64 __fastcall PiDqOpenObjectRegKey(int a1, __int64 a2, unsigned int a3, int a4, char a5, __int64 a6, _QWORD *a7)
{
  int v8; // r8d

  *a7 = 0LL;
  if ( !a1 )
    return PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, a2, a3, a4, a5, (__int64)a7);
  if ( a1 != 1 )
    return 3221225485LL;
  v8 = a4;
  LOBYTE(a4) = a5;
  return PiDqOpenUserObjectRegKey(a2, a3, v8, a4, a6, (__int64)a7);
}
