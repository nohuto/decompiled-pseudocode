__int64 __fastcall CmpKeyEnumStackVerifyResumeContext(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // r11
  __int16 v3; // dx
  __int64 KcbAtLayerHeight; // rax
  __int16 v5; // dx
  __int16 v6; // r9
  __int64 v7; // r10

  v1 = 0;
  v2 = a1;
  v3 = 0;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v2, v3);
      if ( KcbAtLayerHeight != *(_QWORD *)(v7 + 24LL * v5 + 16)
        || *(_QWORD *)(KcbAtLayerHeight + 304) != *(_QWORD *)(v7 + 24LL * v5 + 8) )
      {
        break;
      }
      v3 = v5 + 1;
      if ( v3 > v6 )
        return v1;
    }
    return (unsigned int)-1073741735;
  }
  return v1;
}
