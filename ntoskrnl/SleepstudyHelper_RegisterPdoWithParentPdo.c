__int64 __fastcall SleepstudyHelper_RegisterPdoWithParentPdo(__int64 a1, __int64 a2, __int64 a3, KSPIN_LOCK **a4)
{
  KSPIN_LOCK *v4; // rsi
  __int64 *v5; // rbx
  int v7; // eax
  int v8; // edi
  __int64 *v10; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v11[4]; // [rsp+28h] [rbp-20h] BYREF
  KSPIN_LOCK *v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v12 = 0LL;
  v10 = 0LL;
  if ( a1 && a2 && a3 && a4 )
  {
    v11[1] = 0LL;
    v11[0] = a2;
    v7 = SleepstudyHelperCreateBlockerFromDevice(a1, v11, a3, &v10);
    v5 = v10;
    v8 = v7;
    if ( v7 >= 0 )
    {
      v8 = SleepstudyHelperBuildBlocker(v10, &v12);
      if ( v8 >= 0 )
      {
        *a4 = v12;
        return (unsigned int)v8;
      }
      v4 = v12;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v5 )
    SleepstudyHelperDestroyBlockerBuilder(v5);
  if ( v4 )
    SleepstudyHelperDestroyBlocker(v4);
  return (unsigned int)v8;
}
