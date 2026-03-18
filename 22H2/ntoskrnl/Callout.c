/*
 * XREFs of Callout @ 0x1407CF8E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406EF620 @ 0x1406EF620 (sub_1406EF620.c)
 */

void __fastcall Callout(_DWORD *Parameter)
{
  Parameter[7] = sub_1406EF620(
                   *(unsigned int **)Parameter,
                   Parameter[2],
                   Parameter[3],
                   (_QWORD *)Parameter + 2,
                   Parameter + 6);
}
