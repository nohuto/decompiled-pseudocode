/*
 * XREFs of ?PrepareFallbackKeyboardFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@@Z @ 0x1C01AAB50
 * Callers:
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C006A210 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C002C2D0 (Win32AllocPool.c)
 */

struct tagKbdLayer *__fastcall PrepareFallbackKeyboardFile(struct tagKBDFILE *a1)
{
  struct tagKbdLayer *result; // rax

  result = (struct tagKbdLayer *)Win32AllocPool(104LL, 0x746B7355u);
  if ( result )
  {
    *(_OWORD *)result = *(_OWORD *)KbdTablesFallback;
    *((_OWORD *)result + 1) = unk_1C027C040;
    *((_OWORD *)result + 2) = *(_OWORD *)&off_1C027C050;
    *((_OWORD *)result + 3) = *(_OWORD *)&off_1C027C060;
    *((_OWORD *)result + 4) = *(_OWORD *)&off_1C027C070;
    *((_OWORD *)result + 5) = xmmword_1C027C080;
    *((_QWORD *)result + 12) = qword_1C027C090;
  }
  *((_QWORD *)a1 + 6) = 0LL;
  *((_QWORD *)a1 + 3) = result;
  return result;
}
