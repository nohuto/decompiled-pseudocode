/*
 * XREFs of ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1C015A776
 * Callers:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0285B9C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     NtGdiFillRgn @ 0x1C02A8FD0 (NtGdiFillRgn.c)
 *     NtGdiFrameRgn @ 0x1C02A9590 (NtGdiFrameRgn.c)
 *     NtGdiExtFloodFill @ 0x1C02D4500 (NtGdiExtFloodFill.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EBRUSHOBJ::mixBest(EBRUSHOBJ *this, char a2, char a3)
{
  unsigned __int8 v3; // dl

  v3 = ((a2 - 1) & 0xF) + 1;
  if ( a3 == 1 && (*((_DWORD *)this + 30) & 0x8000) != 0 )
    return v3 | 0xB00u;
  else
    return v3 | (v3 << 8);
}
