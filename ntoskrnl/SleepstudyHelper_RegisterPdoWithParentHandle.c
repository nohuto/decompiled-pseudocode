/*
 * XREFs of SleepstudyHelper_RegisterPdoWithParentHandle @ 0x14099F390
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelperDestroyBlocker @ 0x1403AFD80 (SleepstudyHelperDestroyBlocker.c)
 *     SleepstudyHelperBuildBlocker @ 0x1407261A0 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x140726370 (SleepstudyHelperDestroyBlockerBuilder.c)
 *     SleepstudyHelperGetBlockerGuid @ 0x140799D20 (SleepstudyHelperGetBlockerGuid.c)
 *     SleepstudyHelperCreateBlockerFromDevice @ 0x140842D00 (SleepstudyHelperCreateBlockerFromDevice.c)
 */

__int64 __fastcall SleepstudyHelper_RegisterPdoWithParentHandle(
        __int64 a1,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        KSPIN_LOCK **a4)
{
  KSPIN_LOCK *v4; // rsi
  __int64 *v5; // rdi
  int BlockerGuid; // ebx
  int v10; // eax
  __int64 *v12; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13[3]; // [rsp+28h] [rbp-30h] BYREF
  KSPIN_LOCK *v14; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v14 = 0LL;
  v12 = 0LL;
  v13[0] = 0LL;
  if ( a1 && a2 && a3 && a4 )
  {
    BlockerGuid = SleepstudyHelperGetBlockerGuid(a2, v13);
    if ( BlockerGuid < 0 )
      return (unsigned int)BlockerGuid;
    v10 = SleepstudyHelperCreateBlockerFromDevice(a1, v13, a3, &v12);
    v5 = v12;
    BlockerGuid = v10;
    if ( v10 >= 0 )
    {
      BlockerGuid = SleepstudyHelperBuildBlocker(v12, &v14);
      if ( BlockerGuid >= 0 )
      {
        *a4 = v14;
        return (unsigned int)BlockerGuid;
      }
      v4 = v14;
    }
  }
  else
  {
    BlockerGuid = -1073741811;
  }
  if ( v5 )
    SleepstudyHelperDestroyBlockerBuilder(v5);
  if ( v4 )
    SleepstudyHelperDestroyBlocker(v4);
  return (unsigned int)BlockerGuid;
}
