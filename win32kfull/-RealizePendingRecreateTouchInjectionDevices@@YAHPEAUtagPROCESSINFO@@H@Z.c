__int64 __fastcall RealizePendingRecreateTouchInjectionDevices(struct tagPROCESSINFO *a1, int a2)
{
  __int64 v2; // rbx
  unsigned int v5; // ebp
  _QWORD *v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rdx

  v2 = *((_QWORD *)a1 + 110);
  v5 = 1;
  ForceUpdatePointerDeviceSystemMetrics();
  if ( gpTouchInjectorProcesses )
  {
    if ( v2 )
    {
      if ( !a2 && !*(_DWORD *)(v2 + 52) )
        return v5;
      v5 = InitializeTouchInjectionWorker(
             *(unsigned int *)(*((_QWORD *)a1 + 110) + 28LL),
             *(unsigned int *)(*((_QWORD *)a1 + 110) + 24LL),
             a1);
    }
    if ( a2 )
    {
      v6 = (_QWORD *)gpTouchInjectorProcesses;
      if ( gpTouchInjectorProcesses )
      {
        do
        {
          v7 = v6[1];
          v8 = (_QWORD *)*v6;
          if ( (struct tagPROCESSINFO *)v7 != a1 )
            *(_DWORD *)(*(_QWORD *)(v7 + 880) + 52LL) = 1;
          v6 = v8;
        }
        while ( v8 );
      }
    }
  }
  return v5;
}
