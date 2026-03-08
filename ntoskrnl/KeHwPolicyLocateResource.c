/*
 * XREFs of KeHwPolicyLocateResource @ 0x140B60C10
 * Callers:
 *     KiLoadPolicyFromImage @ 0x140A8D470 (KiLoadPolicyFromImage.c)
 *     HalpWheaInitDiscard @ 0x140B60A80 (HalpWheaInitDiscard.c)
 * Callees:
 *     LdrResSearchResource @ 0x1407EACB0 (LdrResSearchResource.c)
 *     KiHwPolicyFindDriverImage @ 0x140B60CB8 (KiHwPolicyFindDriverImage.c)
 */

__int64 __fastcall KeHwPolicyLocateResource(__int64 a1, __int64 a2, __int64 a3, unsigned int **a4, __int64 *a5)
{
  ULONGLONG v7; // rcx
  _QWORD v11[5]; // [rsp+40h] [rbp-28h] BYREF

  v7 = KiHwPolicyDriverImageBase;
  if ( KiHwPolicyDriverImageBase
    || !KiHwPolicyDriverNotPresent
    && (KiHwPolicyDriverImageBase = KiHwPolicyFindDriverImage(a1), (v7 = KiHwPolicyDriverImageBase) != 0) )
  {
    v11[2] = 0LL;
    v11[0] = a2;
    v11[1] = a3;
    return LdrResSearchResource(v7, v11, 3u, 48, a4, a5, 0LL, 0LL);
  }
  else
  {
    KiHwPolicyDriverNotPresent = 1;
    return 3221226092LL;
  }
}
