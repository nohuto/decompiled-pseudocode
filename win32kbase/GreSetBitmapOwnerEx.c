/*
 * XREFs of GreSetBitmapOwnerEx @ 0x1C001D614
 * Callers:
 *     GreSetBrushOwner @ 0x1C001BD80 (GreSetBrushOwner.c)
 * Callees:
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C001D270 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareLockCheck @ 0x1C0049E60 (HmgShareLockCheck.c)
 *     HmgSetOwner @ 0x1C00522C0 (HmgSetOwner.c)
 */

__int64 __fastcall GreSetBitmapOwnerEx(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int v4; // edi
  SURFACE *v5; // rax
  SURFACE *v6; // rbx
  __int64 v7; // r8

  v2 = a2;
  LOBYTE(a2) = 5;
  v4 = 0;
  v5 = (SURFACE *)HmgShareLockCheck(a1, a2);
  v6 = v5;
  if ( v5 )
  {
    if ( (!(unsigned int)SURFACE::bDIBSection(v5) || v2) && (a1 & 0x800000) == 0 )
    {
      LOBYTE(v7) = 5;
      v4 = HmgSetOwner(a1, v2, v7);
    }
    HmgDecrementShareReferenceCountEx(v6, 0LL);
  }
  return v4;
}
