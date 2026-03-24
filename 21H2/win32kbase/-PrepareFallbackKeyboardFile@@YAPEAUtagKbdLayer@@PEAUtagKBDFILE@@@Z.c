/*
 * XREFs of ?PrepareFallbackKeyboardFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@@Z @ 0x1C01AAC20
 * Callers:
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0069760 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C002AE60 (Win32AllocPool.c)
 */

struct tagKbdLayer *__fastcall PrepareFallbackKeyboardFile(struct tagKBDFILE *a1)
{
  struct tagKbdLayer *result; // rax

  result = (struct tagKbdLayer *)Win32AllocPool(104LL, 0x746B7355u);
  if ( result )
  {
    *(_OWORD *)result = *(_OWORD *)KbdTablesFallback;
    *((_OWORD *)result + 1) = unk_1C027D040;
    *((_OWORD *)result + 2) = *(_OWORD *)&off_1C027D050;
    *((_OWORD *)result + 3) = *(_OWORD *)&off_1C027D060;
    *((_OWORD *)result + 4) = *(_OWORD *)&off_1C027D070;
    *((_OWORD *)result + 5) = xmmword_1C027D080;
    *((_QWORD *)result + 12) = qword_1C027D090;
  }
  *((_QWORD *)a1 + 6) = 0LL;
  *((_QWORD *)a1 + 3) = result;
  return result;
}
