/*
 * XREFs of HalpInitializeErrSrc @ 0x140A87F30
 * Callers:
 *     <none>
 * Callees:
 *     HalpInitializeNMI @ 0x14037D5B8 (HalpInitializeNMI.c)
 *     HalpInitializeCmc @ 0x140A87F7C (HalpInitializeCmc.c)
 *     HalpInitializeMce @ 0x140A87FF0 (HalpInitializeMce.c)
 *     HalpInitializeGenericErrorSource @ 0x140A880EC (HalpInitializeGenericErrorSource.c)
 */

__int64 __fastcall HalpInitializeErrSrc(__int64 a1, __int64 a2)
{
  int v2; // r8d
  int v3; // r8d
  int v4; // r8d
  int v5; // r8d

  v2 = *(_DWORD *)(a2 + 8);
  if ( !v2 )
    return HalpInitializeMce();
  v3 = v2 - 1;
  if ( !v3 )
    return HalpInitializeCmc();
  v4 = v3 - 2;
  if ( !v4 )
    return HalpInitializeNMI(a1, a2);
  v5 = v4 - 2;
  if ( !v5 || v5 == 7 )
    return HalpInitializeGenericErrorSource();
  else
    return 3221225659LL;
}
