__int64 __fastcall BvgaSetTextColor(unsigned int a1)
{
  int v3; // [rsp+48h] [rbp+10h] BYREF
  int v4; // [rsp+4Ch] [rbp+14h]

  v4 = 40;
  BvgaTerminalTextColor = 37;
  v3 = 37;
  HeadlessDispatch(9LL, (__int64)&v3, 8LL, 0LL, 0LL);
  return VidSetTextColor(a1);
}
