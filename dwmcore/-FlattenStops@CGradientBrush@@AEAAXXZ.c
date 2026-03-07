void __fastcall CGradientBrush::FlattenStops(CGradientBrush *this)
{
  char *v1; // rbx
  __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 i; // rdi
  __int64 v7; // rdx
  int v8; // xmm0_4
  int v9; // eax
  _BYTE v10[20]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (char *)this + 192;
  v3 = *((_QWORD *)this + 24);
  *((_QWORD *)this + 25) = v3;
  v4 = (__int64)(*((_QWORD *)this + 22) - *((_QWORD *)this + 21)) >> 3;
  if ( v4 > 0xCCCCCCCCCCCCCCCDuLL * ((*((_QWORD *)v1 + 2) - v3) >> 2) )
  {
    if ( v4 > 0xCCCCCCCCCCCCCCCLL )
      std::_Xlength_error("vector too long");
    std::vector<D2D1_GRADIENT_STOP>::_Reallocate_exactly(v1, v4);
  }
  v5 = *((_QWORD *)this + 22);
  for ( i = *((_QWORD *)this + 21); i != v5; i += 8LL )
  {
    v7 = *((_QWORD *)v1 + 1);
    v8 = *(_DWORD *)(*(_QWORD *)i + 64LL);
    *(_OWORD *)&v10[4] = *(_OWORD *)(*(_QWORD *)i + 68LL);
    *(_DWORD *)v10 = v8;
    if ( v7 == *((_QWORD *)v1 + 2) )
    {
      std::vector<D2D1_GRADIENT_STOP>::_Emplace_reallocate<D2D1_GRADIENT_STOP const &>(v1, v7, v10);
    }
    else
    {
      v9 = *(_DWORD *)&v10[16];
      *(_OWORD *)v7 = *(_OWORD *)v10;
      *(_DWORD *)(v7 + 16) = v9;
      *((_QWORD *)v1 + 1) += 20LL;
    }
  }
}
