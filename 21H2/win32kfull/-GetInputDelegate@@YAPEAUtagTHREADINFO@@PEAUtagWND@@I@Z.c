/*
 * XREFs of ?GetInputDelegate@@YAPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1C00AC9A0
 * Callers:
 *     AdjustPwndPtiPqForDelegation @ 0x1C00AC8D8 (AdjustPwndPtiPqForDelegation.c)
 *     EditionGetInputDelegate @ 0x1C01DCA50 (EditionGetInputDelegate.c)
 * Callees:
 *     <none>
 */

struct tagTHREADINFO *__fastcall GetInputDelegate(struct tagWND *a1, int a2)
{
  struct tagTHREADINFO *result; // rax
  int v3; // r8d

  result = 0LL;
  if ( a1 )
  {
    v3 = *((_DWORD *)a1 + 65);
    if ( v3 )
    {
      if ( (v3 & a2) != 0 )
        return (struct tagTHREADINFO *)*((_QWORD *)a1 + 33);
    }
  }
  return result;
}
