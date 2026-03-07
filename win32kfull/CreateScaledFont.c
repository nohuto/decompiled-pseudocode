__int64 __fastcall CreateScaledFont(HBRUSH a1, __int64 *a2, __int64 a3, INT a4, _DWORD *a5, _DWORD *a6, __int64 a7)
{
  unsigned int v10; // edi
  __int64 FontIndirectW; // rax
  __int64 v12; // rbx
  int CharDimensions; // eax
  INT a; // [rsp+20h] [rbp-A8h] BYREF
  INT v16; // [rsp+24h] [rbp-A4h]

  memset_0(&a, 0, 0x5CuLL);
  *a2 = 0LL;
  v10 = 0;
  if ( (unsigned int)GreExtGetObjectW(a1, 92LL, &a) )
  {
    a = EngMulDiv(a, a4, 96);
    v16 = EngMulDiv(v16, a4, 96);
    FontIndirectW = GreCreateFontIndirectW((__int64)&a, 0x88u);
    *a2 = FontIndirectW;
    if ( FontIndirectW )
    {
      v10 = 1;
      if ( a5 || a6 || a7 )
      {
        v12 = GreSelectFontInternal(*(_QWORD *)(gpDispInfo + 64LL), FontIndirectW, 1);
        CharDimensions = GetCharDimensions(*(_QWORD *)(gpDispInfo + 64LL), a7, a6);
        if ( a5 )
          *a5 = CharDimensions;
        GreSelectFontInternal(*(_QWORD *)(gpDispInfo + 64LL), v12, 1);
      }
    }
  }
  return v10;
}
