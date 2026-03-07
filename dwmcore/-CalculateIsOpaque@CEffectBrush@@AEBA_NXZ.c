char __fastcall CEffectBrush::CalculateIsOpaque(CEffectBrush *this)
{
  __int64 v2; // rsi
  __int64 v4; // rbx
  __int64 v5; // rcx
  _DWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  struct D2D_RECT_F v7; // [rsp+28h] [rbp-30h] BYREF
  struct D2D_RECT_F v8; // [rsp+38h] [rbp-20h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 16LL))(*((_QWORD *)this + 14));
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 120LL))(v2) )
    return 0;
  v4 = 0LL;
  v6[0] = 2139095040;
  v6[1] = 2139095040;
  v7 = (struct D2D_RECT_F)_xmm;
  if ( *((_DWORD *)this + 36) )
  {
    while ( 1 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 128LL))(v2, (unsigned int)v4) )
      {
        v5 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v4);
        if ( !v5
          || !(*(unsigned __int8 (__fastcall **)(__int64, _DWORD *, struct D2D_RECT_F *))(*(_QWORD *)v5 + 296LL))(
                v5,
                v6,
                &v8)
          || !AreEqual(&v8, &v7) )
        {
          break;
        }
      }
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *((_DWORD *)this + 36) )
        return 1;
    }
    return 0;
  }
  return 1;
}
