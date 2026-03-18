/*
 * XREFs of sub_140B35090 @ 0x140B35090
 * Callers:
 *     <none>
 * Callees:
 *     sub_140B1A730 @ 0x140B1A730 (sub_140B1A730.c)
 */

void __fastcall sub_140B35090(_BYTE *Parameter)
{
  Parameter[28] = sub_140B1A730(
                    *(_DWORD *)Parameter,
                    *((_DWORD *)Parameter + 1),
                    *((_DWORD *)Parameter + 2),
                    *((_QWORD *)Parameter + 2),
                    *((_DWORD *)Parameter + 6));
}
