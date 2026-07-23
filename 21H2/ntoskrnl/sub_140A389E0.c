/*
 * XREFs of sub_140A389E0 @ 0x140A389E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A1DEE4 @ 0x140A1DEE4 (sub_140A1DEE4.c)
 */

void __fastcall sub_140A389E0(_BYTE *Parameter)
{
  Parameter[28] = sub_140A1DEE4(
                    *(_DWORD *)Parameter,
                    *((_DWORD *)Parameter + 1),
                    *((_DWORD *)Parameter + 2),
                    *((_QWORD *)Parameter + 2),
                    *((_DWORD *)Parameter + 6));
}
