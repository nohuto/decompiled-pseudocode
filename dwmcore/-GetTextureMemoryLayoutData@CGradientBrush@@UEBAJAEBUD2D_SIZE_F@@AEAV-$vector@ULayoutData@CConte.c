__int64 __fastcall CGradientBrush::GetTextureMemoryLayoutData(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rcx
  __int128 v5; // xmm1
  __int64 v6; // rdx
  __int128 v8; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v9[24]; // [rsp+30h] [rbp-28h]

  a3[1] = *a3;
  if ( *(_BYTE *)(a1 + 224) )
  {
    v4 = *(_QWORD *)(a1 + 216);
    *(_OWORD *)&v9[8] = _xmm;
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v4 + 208LL))(v4, a2, &v8);
      v5 = v8;
    }
    else
    {
      v5 = *(_OWORD *)&_xmm;
      *(_QWORD *)v9 = 0LL;
      v8 = *(_OWORD *)&_xmm;
    }
    v6 = a3[1];
    if ( v6 == a3[2] )
    {
      std::vector<CContent::LayoutData>::_Emplace_reallocate<CContent::LayoutData const &>(
        a3,
        (_BYTE *)v6,
        (__int64)&v8);
    }
    else
    {
      *(_OWORD *)v6 = v5;
      *(_OWORD *)(v6 + 16) = *(_OWORD *)v9;
      *(_QWORD *)(v6 + 32) = *(_QWORD *)&v9[16];
      a3[1] += 40LL;
    }
  }
  return 0LL;
}
