__int64 __fastcall NtGdiHT_Get8BPPMaskPalette(
        char *a1,
        BOOL Use8BPPMaskPal,
        BYTE CMYMask,
        USHORT a4,
        USHORT GreenGamma,
        USHORT BlueGamma)
{
  LONG v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // esi
  struct tagPALETTEENTRY *v14; // rbx
  unsigned int v15; // ebp
  struct tagPALETTEENTRY *v16; // rax

  v10 = HT_Get8BPPMaskPalette(0LL, Use8BPPMaskPal, CMYMask, a4, GreenGamma, BlueGamma);
  v13 = v10;
  if ( a1 )
  {
    if ( (v14 = 0LL, v15 = 4 * v10, 4 * v10 > 0)
      && (unsigned __int64)v10 <= 0x9C4000
      && (v16 = (struct tagPALETTEENTRY *)Win32AllocPool(v15, 1886221639LL, v11, v12), (v14 = v16) != 0LL)
      && (unsigned int)bSafeReadBits(v16, a1, v15)
      && (v13 = HT_Get8BPPMaskPalette(v14, Use8BPPMaskPal, CMYMask, a4, GreenGamma, BlueGamma)) != 0
      && (unsigned int)bSafeCopyBits(a1, v14, v15)
      || (v13 = 0, v14) )
    {
      Win32FreePool(v14);
    }
  }
  return v13;
}
