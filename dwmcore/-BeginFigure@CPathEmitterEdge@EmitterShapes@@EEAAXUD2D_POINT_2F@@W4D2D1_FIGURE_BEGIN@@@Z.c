void __fastcall EmitterShapes::CPathEmitterEdge::BeginFigure(
        EmitterShapes::CPathEmitterEdge *this,
        struct D2D_POINT_2F a2,
        enum D2D1_FIGURE_BEGIN a3)
{
  __int64 v4; // rdx
  __int128 v5; // [rsp+20h] [rbp-40h] BYREF
  __int128 v6; // [rsp+30h] [rbp-30h] BYREF
  __int128 v7; // [rsp+40h] [rbp-20h]
  struct D2D_POINT_2F v8; // [rsp+70h] [rbp+10h] BYREF
  struct D2D_POINT_2F v9; // [rsp+88h] [rbp+28h] BYREF

  v8 = a2;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v9 = a2;
  std::vector<Windows::Foundation::Numerics::float2>::_Emplace_reallocate<Windows::Foundation::Numerics::float2>(
    &v5,
    0LL,
    &v9);
  v4 = v7;
  v8.x = 0.0;
  if ( (_QWORD)v7 == *((_QWORD *)&v7 + 1) )
  {
    std::vector<float>::_Emplace_reallocate<float>((_QWORD *)&v6 + 1, (_BYTE *)v7, &v8);
  }
  else
  {
    *(_DWORD *)v7 = 0;
    *(_QWORD *)&v7 = v4 + 4;
  }
  std::vector<EmitterShapes::CPathEmitterEdge::Figure>::emplace_back<EmitterShapes::CPathEmitterEdge::Figure const &>(
    (__int64 *)this + 3,
    (__int64)&v5);
  std::vector<float>::_Tidy((__int64)&v6 + 8);
  std::vector<CDataSourceReader *>::_Tidy((__int64)&v5);
}
