/*
 * XREFs of NtGdiSetBitmapBits @ 0x1C0018710
 * Callers:
 *     <none>
 * Callees:
 *     GreSetBitmapBits @ 0x1C00187F0 (GreSetBitmapBits.c)
 */

__int64 __fastcall NtGdiSetBitmapBits(HSURF a1, SIZE_T Size, char *Address)
{
  HANDLE v4; // r14
  unsigned int v5; // ebx

  if ( (_DWORD)Size
    && ((unsigned __int64)&Address[(unsigned int)Size] > MmUserProbeAddress || &Address[(unsigned int)Size] < Address) )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  v4 = MmSecureVirtualMemory(Address, (unsigned int)Size, 2u);
  v5 = v4 != 0LL;
  if ( v5 )
    v5 = GreSetBitmapBits(a1);
  if ( v4 )
    MmUnsecureVirtualMemory(v4);
  return v5;
}
