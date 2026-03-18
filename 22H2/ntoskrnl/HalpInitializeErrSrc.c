/*
 * XREFs of HalpInitializeErrSrc @ 0x140A8B540
 * Callers:
 *     <none>
 * Callees:
 *     HalpInitializeNMI @ 0x140381048 (HalpInitializeNMI.c)
 *     HalpInitializeCmc @ 0x140A8B58C (HalpInitializeCmc.c)
 *     HalpInitializeMce @ 0x140A8B600 (HalpInitializeMce.c)
 *     HalpInitializeGenericErrorSource @ 0x140A8B6FC (HalpInitializeGenericErrorSource.c)
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
