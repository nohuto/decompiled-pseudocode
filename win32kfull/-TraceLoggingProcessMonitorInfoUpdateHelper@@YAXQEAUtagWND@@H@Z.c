void __fastcall TraceLoggingProcessMonitorInfoUpdateHelper(struct tagWND *const a1, int a2)
{
  __int64 v3; // rbx
  struct tagMONITOR *v4; // rax
  struct tagMONITOR *v5; // r9
  int *v6; // rdx
  int v7; // r10d
  int v8; // r8d
  int v9; // eax
  int v10; // ecx

  v3 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
  if ( v3 )
  {
    v4 = _MonitorFromWindowInternal(a1, 1u, 0);
    v5 = v4;
    if ( v4 )
    {
      v6 = (int *)(v3 + 960);
      *(_OWORD *)(v3 + 944) = *(_OWORD *)(*((_QWORD *)v4 + 5) + 28LL);
      if ( a2 )
      {
        v7 = *v6;
        v8 = *(_DWORD *)(v3 + 972) | 1;
        *(_DWORD *)(v3 + 972) = v8;
        if ( v7 != *(unsigned __int16 *)(*((_QWORD *)v4 + 5) + 60LL) )
        {
          *(_DWORD *)(v3 + 968) = v7;
          *(_DWORD *)(v3 + 972) = v8 | 2;
        }
      }
      else
      {
        v9 = *(unsigned __int16 *)(*((_QWORD *)v4 + 5) + 60LL);
        if ( *(_DWORD *)(v3 + 920) )
        {
          v10 = *v6;
          if ( *v6 != v9 )
          {
            *(_DWORD *)(v3 + 972) |= 4u;
            *(_DWORD *)(v3 + 968) = v10;
          }
        }
        else
        {
          *(_DWORD *)(v3 + 964) = v9;
        }
      }
      *v6 = *(unsigned __int16 *)(*((_QWORD *)v5 + 5) + 60LL);
    }
    else
    {
      *(_DWORD *)(v3 + 960) = 0;
      *(_DWORD *)(v3 + 944) = 0;
      *(_DWORD *)(v3 + 948) = 0;
      *(_DWORD *)(v3 + 952) = 0;
      *(_DWORD *)(v3 + 956) = 0;
    }
  }
}
