/*
 * XREFs of SleepstudyHelper_RegisterComponentEx @ 0x14084DE70
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelperCreateBlockerFromGuid @ 0x1402B36C0 (SleepstudyHelperCreateBlockerFromGuid.c)
 *     SleepstudyHelperDestroyBlocker @ 0x1403AFD80 (SleepstudyHelperDestroyBlocker.c)
 *     SleepstudyHelperBuildBlocker @ 0x1407261A0 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x140726370 (SleepstudyHelperDestroyBlockerBuilder.c)
 */

__int64 __fastcall SleepstudyHelper_RegisterComponentEx(
        __int64 a1,
        __int128 *a2,
        __int128 *a3,
        __int64 a4,
        KSPIN_LOCK **a5)
{
  KSPIN_LOCK *v5; // rsi
  __int64 *v6; // rbx
  KSPIN_LOCK **v7; // r14
  __int128 v8; // xmm1
  int v9; // eax
  int v10; // edi
  __int64 *v12; // [rsp+30h] [rbp-30h] BYREF
  __int128 v13; // [rsp+38h] [rbp-28h] BYREF
  __int128 v14; // [rsp+48h] [rbp-18h] BYREF
  KSPIN_LOCK *v15; // [rsp+80h] [rbp+20h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v15 = 0LL;
  v12 = 0LL;
  if ( a1 && a4 && (v7 = a5) != 0LL )
  {
    v8 = *a3;
    v14 = *a2;
    v13 = v8;
    v9 = SleepstudyHelperCreateBlockerFromGuid(a1, &v14, &v13, a4, 0, (__int64 *)&v12);
    v6 = v12;
    v10 = v9;
    if ( v9 >= 0 )
    {
      v10 = SleepstudyHelperBuildBlocker(v12, &v15);
      if ( v10 >= 0 )
      {
        *v7 = v15;
        return (unsigned int)v10;
      }
      v5 = v15;
    }
  }
  else
  {
    v10 = -1073741811;
  }
  if ( v6 )
    SleepstudyHelperDestroyBlockerBuilder(v6);
  if ( v5 )
    SleepstudyHelperDestroyBlocker(v5);
  return (unsigned int)v10;
}
