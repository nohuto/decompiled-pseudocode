/*
 * XREFs of NtGdiHfontCreate @ 0x1C00C7C90
 * Callers:
 *     <none>
 * Callees:
 *     hfontCreate @ 0x1C0027050 (hfontCreate.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

struct HOBJ__ *__fastcall NtGdiHfontCreate(char *Src, size_t Size, int a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rsi
  _DWORD Srca[108]; // [rsp+30h] [rbp-1D8h] BYREF

  v6 = (unsigned int)Size;
  if ( !Src || (unsigned int)(Size - 1) > 0x1A3 )
    return 0LL;
  memset_0(Srca, 0, 0x1A4uLL);
  if ( &Src[v6] < Src || (unsigned __int64)&Src[v6] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(Srca, Src, (unsigned int)v6);
  Srca[88] = 0;
  return hfontCreate(Srca, a3, 0, a5, 0);
}
