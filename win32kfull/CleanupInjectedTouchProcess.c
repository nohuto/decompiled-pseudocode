__int64 __fastcall CleanupInjectedTouchProcess(__int64 a1)
{
  __int64 v1; // rbx
  void *v3; // rsi
  __int64 v4; // rbp
  __int64 *v5; // rcx
  __int64 *v6; // rdx
  __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 880);
  v3 = *(void **)(v1 + 88);
  if ( v3 )
  {
    v4 = *(_QWORD *)(v1 + 96);
    if ( v4 )
    {
      HMAssignmentUnlock(v1 + 16);
      RIMRemoveInjectionDevice(v3, v4);
      ZwClose(v3);
    }
  }
  Win32FreePool(*(void **)(v1 + 80));
  Win32FreePool((void *)v1);
  v5 = (__int64 *)gpTouchInjectorProcesses;
  v6 = 0LL;
  *(_QWORD *)(a1 + 880) = 0LL;
  if ( v5 )
  {
    while ( 1 )
    {
      v7 = *v5;
      if ( v5[1] == a1 )
        break;
      v6 = v5;
      v5 = (__int64 *)*v5;
      if ( !v7 )
        return 1LL;
    }
    if ( v6 )
      *v6 = v7;
    else
      gpTouchInjectorProcesses = *v5;
    Win32FreePool(v5);
  }
  return 1LL;
}
