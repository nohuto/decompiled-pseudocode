/*
 * XREFs of sub_140AF2480 @ 0x140AF2480
 * Callers:
 *     <none>
 * Callees:
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 */

void __fastcall sub_140AF2480(_BYTE *Parameter)
{
  Parameter[28] = sub_140AD7DE4(
                    *(_DWORD *)Parameter,
                    *((_DWORD *)Parameter + 1),
                    *((_DWORD *)Parameter + 2),
                    *((_QWORD *)Parameter + 2),
                    *((_DWORD *)Parameter + 6));
}
