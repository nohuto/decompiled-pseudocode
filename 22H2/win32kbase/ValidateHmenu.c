/*
 * XREFs of ValidateHmenu @ 0x1C00528F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandle @ 0x1C0052938 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 */

__int64 __fastcall ValidateHmenu(__int64 a1)
{
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rdx
  struct tagTHREADINFO *v4; // rdi
  __int64 result; // rax

  v2 = PtiCurrentShared();
  LOBYTE(v3) = 2;
  v4 = v2;
  result = HMValidateHandle(a1, v3);
  if ( result )
  {
    if ( *(_QWORD *)(result + 24) != *((_QWORD *)v4 + 57) )
    {
      UserSetLastError(1401LL);
      return 0LL;
    }
  }
  return result;
}
