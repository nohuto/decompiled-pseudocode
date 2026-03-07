__int64 __fastcall DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CResourceMarshaler *this,
        int a2,
        float *a3)
{
  const struct DirectComposition::ResPropInfo *TargetProperty; // rax
  __int64 v4; // r9
  _DWORD *v5; // r10
  int v6; // ecx
  __int64 result; // rax

  TargetProperty = DirectComposition::CResourceMarshaler::GetTargetProperty(this, a2);
  if ( !TargetProperty || *((_DWORD *)TargetProperty + 2) != 18 )
    return 3221225485LL;
  v6 = *(_DWORD *)(v4 + *((_QWORD *)TargetProperty + 2));
  result = 0LL;
  *v5 = v6;
  return result;
}
