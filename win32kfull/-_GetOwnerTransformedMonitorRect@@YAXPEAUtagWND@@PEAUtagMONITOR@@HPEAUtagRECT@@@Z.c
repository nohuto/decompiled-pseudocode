void __fastcall _GetOwnerTransformedMonitorRect(struct tagWND *a1, struct tagMONITOR *a2, int a3, struct tagRECT *a4)
{
  __m128i *MonitorWorkRect; // rax
  __int64 v9; // rcx
  struct tagMONITOR *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __m128i v14; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v16; // [rsp+40h] [rbp-38h] BYREF

  if ( a3 )
    MonitorWorkRect = GetMonitorWorkRect(&v14, (__int64)a2);
  else
    MonitorWorkRect = (__m128i *)GetMonitorRect(&v15, (__int64)a2);
  v9 = *((_QWORD *)a1 + 5);
  v16 = (struct tagRECT)*MonitorWorkRect;
  if ( (*(_DWORD *)(v9 + 288) & 0xF) != 2 )
  {
    v10 = (struct tagMONITOR *)ValidateHmonitorNoRip(*(_QWORD *)(v9 + 256));
    v14.m128i_i64[0] = (__int64)v10;
    if ( v10 )
    {
      if ( v10 != a2 )
      {
        v12 = *((_QWORD *)a2 + 5) + (a3 != 0 ? 44LL : 28LL);
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v11);
        PhysicalToLogicalDPIRect(&v16, v12, CurrentThreadDpiAwarenessContext, &v14);
      }
    }
  }
  *a4 = v16;
}
