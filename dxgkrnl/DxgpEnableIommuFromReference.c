__int64 __fastcall DxgpEnableIommuFromReference(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbx
  __int64 result; // rax

  v3 = *a3;
  result = 0LL;
  if ( *a3 == -1 )
    return 3221225485LL;
  if ( v3 || (result = SysMmEnableIommu(a1, a2), (int)result >= 0) )
    *a3 = v3 + 1;
  return result;
}
