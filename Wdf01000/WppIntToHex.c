/*
 * XREFs of WppIntToHex @ 0x1C0022EC0
 * Callers:
 *     WppGuidToStr @ 0x1C00229F8 (WppGuidToStr.c)
 * Callees:
 *     <none>
 */

void __fastcall WppIntToHex(wchar_t *Buf, unsigned int Value, int Digits)
{
  int v3; // eax
  __int64 v4; // r8
  __int64 v5; // rax

  v3 = Digits - 1;
  v4 = Digits - 1;
  if ( v3 >= 0 )
  {
    do
    {
      v5 = Value & 0xF;
      Value >>= 4;
      Buf[v4--] = a0123456789abcd[v5];
    }
    while ( v4 >= 0 );
  }
}
