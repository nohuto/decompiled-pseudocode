/*
 * XREFs of NtGdiHT_Get8BPPFormatPalette @ 0x1C02CF0F0
 * Callers:
 *     <none>
 * Callees:
 *     HT_Get8BPPFormatPalette @ 0x1C0252D80 (HT_Get8BPPFormatPalette.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C02CA494 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 */

__int64 __fastcall NtGdiHT_Get8BPPFormatPalette(char *a1, USHORT a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  USHORT v5; // bp
  USHORT v6; // r14
  struct tagPALETTEENTRY *v9; // rax
  struct tagPALETTEENTRY *v10; // rdi
  LONG v11; // ebx

  v4 = 0;
  v5 = a4;
  v6 = a3;
  if ( !a1 )
    return 216LL;
  v9 = (struct tagPALETTEENTRY *)Win32AllocPool(864LL, 1886221639LL, a3, a4);
  v10 = v9;
  if ( v9 )
  {
    v11 = HT_Get8BPPFormatPalette(v9, a2, v6, v5);
    v4 = (unsigned int)bSafeCopyBits(a1, v10, 0x360u) != 0 ? v11 : 0;
    Win32FreePool(v10);
  }
  return v4;
}
