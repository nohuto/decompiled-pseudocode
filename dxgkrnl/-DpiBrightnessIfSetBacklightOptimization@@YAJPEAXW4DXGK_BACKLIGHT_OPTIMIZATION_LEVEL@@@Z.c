__int64 __fastcall DpiBrightnessIfSetBacklightOptimization(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  struct _KMUTANT *v7; // r14
  int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // rdx

  v2 = 0LL;
  v4 = a1[8];
  if ( *(_WORD *)(v4 + 4682) == 2 )
    v2 = v4 + 4680;
  if ( !v2 )
    return 3221225659LL;
  v7 = (struct _KMUTANT *)(v4 + 4408);
  v8 = -1073741661;
  KeWaitForSingleObject((PVOID)(v4 + 4408), Executive, 0, 0, 0LL);
  if ( *(_QWORD *)(v2 + 72) )
  {
    v8 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 0);
    if ( v8 >= 0 )
    {
      v9 = a1[8];
      v10 = 0LL;
      if ( *(_WORD *)(v9 + 4682) == 2 )
        v10 = v9 + 4680;
      if ( v10 )
      {
        if ( !*(_QWORD *)(v10 + 72) || a2 == *(_DWORD *)(v9 + 4396) )
        {
          v8 = 0;
        }
        else
        {
          v8 = DpiCallDrvSetBacklightOptimizationLevel(a1, v10, a2);
          if ( v8 >= 0 )
            *(_DWORD *)(v9 + 4396) = a2;
        }
      }
      else
      {
        v8 = -1073741637;
      }
      DpiReleaseCoreSyncAccessSafe((__int64)a1, 0);
    }
  }
  KeReleaseMutex(v7, 0);
  return (unsigned int)v8;
}
