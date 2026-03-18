/*
 * XREFs of NtGdiHT_Get8BPPMaskPalette @ 0x1C0142E30
 * Callers:
 *     <none>
 * Callees:
 *     HT_Get8BPPMaskPalette @ 0x1C0142F60 (HT_Get8BPPMaskPalette.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C0143064 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     ?bSafeReadBits@@YAHPEAX0K@Z @ 0x1C01431C4 (-bSafeReadBits@@YAHPEAX0K@Z.c)
 */

__int64 __fastcall NtGdiHT_Get8BPPMaskPalette(
        void *a1,
        BOOL Use8BPPMaskPal,
        BYTE CMYMask,
        USHORT a4,
        USHORT GreenGamma,
        USHORT BlueGamma)
{
  LONG v10; // eax
  unsigned int v11; // edi
  struct tagPALETTEENTRY *v12; // rbx
  unsigned int v13; // ebp
  struct tagPALETTEENTRY *v14; // rax

  v10 = HT_Get8BPPMaskPalette(0LL, Use8BPPMaskPal, CMYMask, a4, GreenGamma, BlueGamma);
  v11 = v10;
  if ( a1 )
  {
    if ( (v12 = 0LL, v13 = 4 * v10, 4 * v10 > 0)
      && (unsigned __int64)v10 <= 0x9C4000
      && (v14 = (struct tagPALETTEENTRY *)Win32AllocPool(v13, 1886221639LL), (v12 = v14) != 0LL)
      && (unsigned int)bSafeReadBits(v14, a1, v13)
      && (v11 = HT_Get8BPPMaskPalette(v12, Use8BPPMaskPal, CMYMask, a4, GreenGamma, BlueGamma)) != 0
      && bSafeCopyBits(a1, v12, v13)
      || (v11 = 0, v12) )
    {
      Win32FreePool(v12);
    }
  }
  return v11;
}
