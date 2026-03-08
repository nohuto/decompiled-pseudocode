/*
 * XREFs of IovUtilMarkStack @ 0x1402FBF78
 * Callers:
 *     PipCallDriverAddDevice @ 0x1406C644C (PipCallDriverAddDevice.c)
 * Callees:
 *     VfDevObjAdjustFdoForVerifierFilters @ 0x140ACF080 (VfDevObjAdjustFdoForVerifierFilters.c)
 *     IovpUtilMarkDeviceObject @ 0x140ACFE10 (IovpUtilMarkDeviceObject.c)
 */

__int64 __fastcall IovUtilMarkStack(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // r10
  int v7; // r9d
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  result = a3;
  v5 = a2;
  v6 = a1;
  if ( a2 && IovUtilVerifierEnabled )
    result = IovpUtilMarkDeviceObject(a2, 1LL);
  if ( !result )
  {
    if ( !a4 || !IovUtilVerifierEnabled )
      return result;
    IovpUtilMarkDeviceObject(v6, 2LL);
    v9 = 3LL;
    return IovpUtilMarkDeviceObject(v8, v9);
  }
  v7 = IovUtilVerifierEnabled;
  v10 = result;
  if ( IovUtilVerifierEnabled )
  {
    VfDevObjAdjustFdoForVerifierFilters(&v10, a2, v5);
    result = v10;
  }
  if ( result && v7 )
  {
    v9 = 2LL;
    v8 = result;
    return IovpUtilMarkDeviceObject(v8, v9);
  }
  return result;
}
