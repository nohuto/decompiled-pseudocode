/*
 * XREFs of Callout @ 0x140780880
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406DC290 @ 0x1406DC290 (sub_1406DC290.c)
 */

void __fastcall Callout(_DWORD *Parameter)
{
  Parameter[7] = sub_1406DC290(
                   *(unsigned int **)Parameter,
                   Parameter[2],
                   Parameter[3],
                   (_QWORD *)Parameter + 2,
                   Parameter + 6);
}
