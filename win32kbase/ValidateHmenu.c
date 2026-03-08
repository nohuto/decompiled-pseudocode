/*
 * XREFs of ValidateHmenu @ 0x1C00796D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C004FE50 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandle @ 0x1C0079718 (HMValidateHandle.c)
 */

__int64 __fastcall ValidateHmenu(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rdx
  struct tagTHREADINFO *v7; // rdi
  __int64 result; // rax

  v5 = PtiCurrentShared(a1, a2, a3, a4);
  LOBYTE(v6) = 2;
  v7 = v5;
  result = HMValidateHandle(a1, v6);
  if ( result )
  {
    if ( *(_QWORD *)(result + 24) != *((_QWORD *)v7 + 57) )
    {
      UserSetLastError(1401);
      return 0LL;
    }
  }
  return result;
}
