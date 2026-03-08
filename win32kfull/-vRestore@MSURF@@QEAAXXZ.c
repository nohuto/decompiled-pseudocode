/*
 * XREFs of ?vRestore@MSURF@@QEAAXXZ @ 0x1C02B5634
 * Callers:
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C014E3F0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 * Callees:
 *     <none>
 */

void __fastcall MSURF::vRestore(MSURF *this)
{
  __int64 v1; // rax

  if ( *((_QWORD *)this + 3) )
  {
    v1 = *((_QWORD *)this + 9);
    if ( v1 )
    {
      *(_OWORD *)(v1 + 4) = *(_OWORD *)((char *)this + 8);
      *(_BYTE *)(*((_QWORD *)this + 9) + 20LL) = *((_BYTE *)this + 88);
    }
  }
  if ( *((_DWORD *)this + 13) == 1 )
    EngDeleteClip(*((CLIPOBJ **)this + 9));
}
