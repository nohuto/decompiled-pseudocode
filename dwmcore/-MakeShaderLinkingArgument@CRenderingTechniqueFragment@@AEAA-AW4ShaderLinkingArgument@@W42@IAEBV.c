__int16 __fastcall CRenderingTechniqueFragment::MakeShaderLinkingArgument(
        CRenderingTechniqueFragment *a1,
        const struct CBrushRenderingGraph *a2,
        unsigned int a3,
        _QWORD **a4,
        _QWORD *a5)
{
  __int16 v5; // bx
  __int64 v6; // r11
  _QWORD *v7; // r8
  __int64 v8; // r9
  __int64 j; // rcx
  _QWORD *i; // rax
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  v5 = (__int16)a2;
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 16LL * a3 + 8);
  if ( v6 )
  {
    for ( i = *a4; i != a4[1] && *i != v6; ++i )
      ;
    return (i - *a4) | 0x500;
  }
  else
  {
    CRenderingTechniqueFragment::GetSurfaceDescription(
      a1,
      a2,
      a3,
      (struct CRenderingTechniqueFragment::SurfaceDescription *)v12);
    v7 = a5;
    v8 = *a5;
    for ( j = *a5;
          j != v7[1] && !(unsigned __int8)CRenderingTechniqueFragment::SurfaceDescription::operator==(j, v12);
          j += 12LL )
    {
      ;
    }
    return v5 | (-21845 * ((j - v8) >> 2));
  }
}
