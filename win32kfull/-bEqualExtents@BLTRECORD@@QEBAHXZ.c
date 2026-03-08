/*
 * XREFs of ?bEqualExtents@BLTRECORD@@QEBAHXZ @ 0x1C007F64C
 * Callers:
 *     GreMaskBlt @ 0x1C007F6E8 (GreMaskBlt.c)
 *     GrePlgBlt @ 0x1C0293740 (GrePlgBlt.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall BLTRECORD::bEqualExtents(BLTRECORD *this)
{
  return *((_DWORD *)this + 44) - *((_DWORD *)this + 42) == *((_DWORD *)this + 38) - *((_DWORD *)this + 36)
      && *((_DWORD *)this + 45) - *((_DWORD *)this + 43) == *((_DWORD *)this + 39) - *((_DWORD *)this + 37);
}
