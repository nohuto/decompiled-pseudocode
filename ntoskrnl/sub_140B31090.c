/*
 * XREFs of sub_140B31090 @ 0x140B31090
 * Callers:
 *     <none>
 * Callees:
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 */

void __fastcall sub_140B31090(_BYTE *Parameter)
{
  Parameter[28] = sub_140B16730(
                    *(_DWORD *)Parameter,
                    *((_DWORD *)Parameter + 1),
                    *((_DWORD *)Parameter + 2),
                    *((_QWORD *)Parameter + 2),
                    *((_DWORD *)Parameter + 6));
}
