/*
 * XREFs of ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x1C009A06C
 * Callers:
 *     ?UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE_TYPE@@PEAKPEAH@Z @ 0x1C0099D90 (-UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, __int64 a2, int *a3, int *a4, _QWORD *a5)
{
  int PackageClaims; // eax
  unsigned int v8; // edx
  int v9; // eax
  int v11; // eax

  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  v8 = PackageClaims;
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    v8 = 0;
    *a4 = 0;
    *a3 = 0;
    goto LABEL_4;
  }
  *a3 = 0;
  if ( PackageClaims >= 0 )
  {
LABEL_4:
    if ( (*a5 & 1) != 0 )
    {
      if ( (*a5 & 8) != 0 )
        goto LABEL_17;
      v11 = *a4;
      if ( (*a4 & 0x10000) != 0 || (v11 & 0x4000) != 0 || (v11 & 4) != 0 || (v11 & 0x400) != 0 )
        goto LABEL_5;
      if ( (v11 & 0x800) != 0 )
      {
LABEL_17:
        v9 = 196609;
        goto LABEL_6;
      }
      if ( (v11 & 0x40) == 0 && (v11 & 0x1000) == 0 )
      {
        v9 = ((unsigned __int8)v11 >> 2) & 2 | 0x30001;
        goto LABEL_6;
      }
    }
LABEL_5:
    v9 = 196608;
LABEL_6:
    *a3 = v9;
  }
  return v8;
}
