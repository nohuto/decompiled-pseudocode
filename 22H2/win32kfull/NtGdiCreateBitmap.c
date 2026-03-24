/*
 * XREFs of NtGdiCreateBitmap @ 0x1C01059A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiCreateBitmap(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int16 a4,
        char *Address)
{
  __int64 Bitmap; // rbx
  HANDLE v9; // rdi
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  char *v13; // rcx

  Bitmap = 1LL;
  v9 = 0LL;
  if ( Address )
  {
    v11 = ((a1 * (unsigned __int16)a3 * (unsigned __int64)a4 + 15) >> 3) & 0x1FFFFFFFFFFFFFFELL;
    if ( v11 <= 0xFFFFFFFF && (v12 = a2 * v11, v12 <= 0xFFFFFFFF) && (_DWORD)v12 )
    {
      v13 = &Address[(int)v12];
      if ( (unsigned __int64)v13 > MmUserProbeAddress || v13 < Address )
        *(_BYTE *)MmUserProbeAddress = 0;
      v9 = MmSecureVirtualMemory(Address, (int)v12, 2u);
      Bitmap = -(__int64)(v9 != 0LL) & 1;
    }
    else
    {
      Bitmap = 0LL;
    }
  }
  if ( Bitmap )
    Bitmap = GreCreateBitmap(a1, a2, a3);
  if ( v9 )
    MmUnsecureVirtualMemory(v9);
  return Bitmap;
}
