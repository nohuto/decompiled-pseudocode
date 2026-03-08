/*
 * XREFs of ?InsertMaskElement@VectorSubchannelMaskInfo@@QEAAJE@Z @ 0x18027D0D8
 * Callers:
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1802619B0 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VectorSubchannelMaskInfo::InsertMaskElement(VectorSubchannelMaskInfo *this, char a2)
{
  unsigned __int8 v2; // r8
  char v3; // al

  v2 = *((_BYTE *)this + 4);
  if ( v2 >= 4u )
    return 2147942487LL;
  v3 = a2 & 3 | (4 * *((_BYTE *)this + 8));
  *((_BYTE *)this + 4) = v2 + 1;
  *((_BYTE *)this + 8) = v3;
  return 0LL;
}
