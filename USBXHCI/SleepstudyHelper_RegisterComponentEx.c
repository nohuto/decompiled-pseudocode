__int64 __fastcall SleepstudyHelper_RegisterComponentEx(__int64 a1, __int128 *a2, __int128 *a3, __int64 a4, _QWORD *a5)
{
  __int128 v5; // xmm1
  __int64 result; // rax
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int128 v8; // [rsp+40h] [rbp-18h] BYREF

  if ( !qword_1C0064B10
    || (v5 = *a2, v7 = *a3, v8 = v5, result = qword_1C0064B10(a1, &v8, &v7), (_DWORD)result == -1073741637) )
  {
    *a5 = &SleepstudyHelperUnsupportedHandle;
    return 0LL;
  }
  return result;
}
