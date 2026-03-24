/*
 * XREFs of sub_140A379E0 @ 0x140A379E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A1CEE4 @ 0x140A1CEE4 (sub_140A1CEE4.c)
 */

void __fastcall sub_140A379E0(_BYTE *Parameter)
{
  Parameter[28] = sub_140A1CEE4(
                    *(_DWORD *)Parameter,
                    *((_DWORD *)Parameter + 1),
                    *((_DWORD *)Parameter + 2),
                    *((_QWORD *)Parameter + 2),
                    *((_DWORD *)Parameter + 6));
}
