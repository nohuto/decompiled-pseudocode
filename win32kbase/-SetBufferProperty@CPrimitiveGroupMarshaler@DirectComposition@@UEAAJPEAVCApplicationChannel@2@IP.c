/*
 * XREFs of ?SetBufferProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00B97E0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CPrimitiveGroupMarshaler::SetBufferProperty(
        DirectComposition::CPrimitiveGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int128 *a4,
        size_t Size,
        bool *a6)
{
  unsigned int v6; // ebx
  int v7; // r8d
  __int128 v9; // xmm0

  v6 = 0;
  *a6 = 0;
  v7 = a3 - 5;
  if ( v7 )
  {
    if ( v7 == 1 && Size == 16 )
    {
      v9 = *a4;
      *((_DWORD *)this + 4) |= 0x100u;
      *(_OWORD *)((char *)this + 180) = v9;
      goto LABEL_5;
    }
    return (unsigned int)-1073741811;
  }
  if ( Size - 1 > 0x3F || (Size & 0xF) != 0 )
    return (unsigned int)-1073741811;
  *((_DWORD *)this + 44) = Size >> 4;
  memmove((char *)this + 112, a4, Size);
LABEL_5:
  *a6 = 1;
  return v6;
}
