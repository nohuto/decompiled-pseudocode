/*
 * XREFs of ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndChild@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00F9BAC
 * Callers:
 *     LinkWindow @ 0x1C006F9A0 (LinkWindow.c)
 *     UnlinkWindow @ 0x1C0072CAC (UnlinkWindow.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall LockPointer(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a2 - 72);
  if ( a3 )
    *(_QWORD *)(v3 + 56) = *(_QWORD *)(a3 + 48);
  else
    *(_QWORD *)(v3 + 56) = 0LL;
  *a1 = a2;
  result = a1;
  a1[1] = a3;
  return result;
}
