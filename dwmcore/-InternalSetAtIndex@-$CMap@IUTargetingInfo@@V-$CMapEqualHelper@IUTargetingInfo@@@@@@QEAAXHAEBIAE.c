TargetingInfo *__fastcall CMap<unsigned int,TargetingInfo,CMapEqualHelper<unsigned int,TargetingInfo>>::InternalSetAtIndex(
        TargetingInfo **a1,
        int a2,
        unsigned int *a3,
        const struct TargetingInfo *a4)
{
  __int64 v5; // rcx
  TargetingInfo *result; // rax
  _DWORD *v7; // rdx
  TargetingInfo *v8; // rcx

  v5 = a2;
  result = *a1;
  v7 = (_DWORD *)((char *)*a1 + 4 * a2);
  if ( v7 )
  {
    result = (TargetingInfo *)*a3;
    *v7 = (_DWORD)result;
  }
  v8 = (TargetingInfo *)((char *)a1[1] + 16 * v5);
  if ( v8 )
    return TargetingInfo::TargetingInfo(v8, a4);
  return result;
}
