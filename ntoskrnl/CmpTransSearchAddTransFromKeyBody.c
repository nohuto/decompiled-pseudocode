/*
 * XREFs of CmpTransSearchAddTransFromKeyBody @ 0x1406B5A64
 * Callers:
 *     NtDeleteKey @ 0x1406B72F0 (NtDeleteKey.c)
 *     CmDeleteKey @ 0x1406B762C (CmDeleteKey.c)
 *     CmpSetKeySecurity @ 0x1406B7E3C (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x1406B9764 (CmDeleteValueKey.c)
 *     CmQueryMultipleValueKey @ 0x1407A6F60 (CmQueryMultipleValueKey.c)
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 *     CmEnumerateValueKey @ 0x1407AB770 (CmEnumerateValueKey.c)
 *     CmpQueryKeySecurity @ 0x1407AC310 (CmpQueryKeySecurity.c)
 *     CmEnumerateKey @ 0x1407ACAE0 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1407AE5C0 (CmQueryKey.c)
 *     CmQueryValueKey @ 0x1407B4730 (CmQueryValueKey.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140A12D14 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A13248 (CmSetLastWriteTimeKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A14D34 (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     CmpTransSearchAddTrans @ 0x1406B570C (CmpTransSearchAddTrans.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1406B5B04 (CmpTransSearchAddLightWeightTrans.c)
 */

__int64 __fastcall CmpTransSearchAddTransFromKeyBody(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // r8
  __int64 v5; // rax
  struct _EX_RUNDOWN_REF *v6; // rcx
  __int64 result; // rax
  __int64 Count; // r8
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v3 = a1[7];
  if ( !v3 && !a1[8] )
    return 3222863874LL;
  v5 = a1[1] ^ 1LL;
  if ( (a1[1] & 1) == 0 )
    v5 = a1[1];
  v6 = *(struct _EX_RUNDOWN_REF **)(v5 + 32);
  if ( (v3 & 1) != 0 )
  {
    result = CmpTransSearchAddLightWeightTrans(a1[7], *(_QWORD *)(v5 + 32), 0LL, &v9);
  }
  else
  {
    Count = v6[519].Count;
    if ( !Count )
      return 3222863877LL;
    result = CmpTransSearchAddTrans(a1[7], a1[8], Count, v6, 0, &v9);
  }
  if ( (int)result >= 0 )
  {
    *a2 = v9;
    return 0LL;
  }
  return result;
}
