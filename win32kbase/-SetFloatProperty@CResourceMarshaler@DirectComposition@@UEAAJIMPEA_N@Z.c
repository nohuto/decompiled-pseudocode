__int64 __fastcall DirectComposition::CResourceMarshaler::SetFloatProperty(
        DirectComposition::CResourceMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  const struct DirectComposition::ResPropInfo *TargetProperty; // rax
  _BYTE *v5; // r9
  __int64 v6; // r10
  __int64 v7; // rcx

  TargetProperty = DirectComposition::CResourceMarshaler::GetTargetProperty(this, a2);
  if ( !TargetProperty || *((_DWORD *)TargetProperty + 2) != 18 )
    return 3221225485LL;
  v7 = *((_QWORD *)TargetProperty + 2);
  if ( *(float *)(v6 + v7) != a3 )
  {
    *(float *)(v6 + v7) = a3;
    *(_DWORD *)(v6 + 16) |= *((_DWORD *)TargetProperty + 6);
    *v5 = 1;
  }
  return 0LL;
}
