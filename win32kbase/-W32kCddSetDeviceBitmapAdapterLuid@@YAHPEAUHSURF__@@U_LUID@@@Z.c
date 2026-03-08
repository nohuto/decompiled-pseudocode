/*
 * XREFs of ?W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z @ 0x1C00C1250
 * Callers:
 *     <none>
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareLockIgnoreStockBit @ 0x1C00BC754 (HmgShareLockIgnoreStockBit.c)
 */

__int64 __fastcall W32kCddSetDeviceBitmapAdapterLuid(HSURF a1, struct _LUID a2)
{
  struct OBJECT *v3; // rax
  unsigned int v4; // edi

  v3 = HmgShareLockIgnoreStockBit((unsigned int)a1);
  if ( v3 && ((v4 = 1, (*((_DWORD *)v3 + 28) & 0x400000) != 0) || *((_WORD *)v3 + 50) == 1) )
  {
    *((struct _LUID *)v3 + 72) = a2;
  }
  else
  {
    v4 = 0;
    if ( !v3 )
      return v4;
  }
  HmgDecrementShareReferenceCountEx((int *)v3, 0LL);
  return v4;
}
