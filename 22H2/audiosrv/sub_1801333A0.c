/*
 * XREFs of sub_1801333A0 @ 0x1801333A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180133460 @ 0x180133460 (sub_180133460.c)
 */

int sub_1801333A0()
{
  int result; // eax
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  result = InitOnceBeginInitialize(&stru_18019EE00, 1u, &fPending, &Context);
  if ( result )
  {
    if ( !fPending )
      return sub_180133460(Context, 0LL);
  }
  return result;
}
