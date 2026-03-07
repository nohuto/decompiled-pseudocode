__int64 __fastcall UserSetAltScaleFont(HBRUSH a1, __int64 *a2)
{
  int ObjectW; // eax
  unsigned int v5; // ebx
  __int64 FontIndirectW; // rax
  INT a; // [rsp+20h] [rbp-78h] BYREF
  INT v9; // [rsp+24h] [rbp-74h]

  memset_0(&a, 0, 0x5CuLL);
  ObjectW = GreExtGetObjectW(a1, 92LL, &a);
  v5 = 0;
  if ( !ObjectW )
    return 0LL;
  a = EngMulDiv(a, 96, *(unsigned __int16 *)(gpsi + 6998LL));
  v9 = EngMulDiv(v9, 96, *(unsigned __int16 *)(gpsi + 6998LL));
  FontIndirectW = GreCreateFontIndirectW((__int64)&a, 0x88u);
  *a2 = FontIndirectW;
  LOBYTE(v5) = FontIndirectW != 0;
  return v5;
}
