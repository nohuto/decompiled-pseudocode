/*
 * XREFs of ?_GetOwnerTransformedMonitorRect@@YAXPEAUtagWND@@PEAUtagMONITOR@@HPEAUtagRECT@@@Z @ 0x1C0238378
 * Callers:
 *     NtUserGetOwnerTransformedMonitorRect @ 0x1C01F5680 (NtUserGetOwnerTransformedMonitorRect.c)
 * Callees:
 *     GetMonitorRect @ 0x1C007CB08 (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1C007CB4C (GetMonitorWorkRect.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

void __fastcall _GetOwnerTransformedMonitorRect(struct tagWND *a1, struct tagMONITOR *a2, int a3, struct tagRECT *a4)
{
  struct tagRECT *MonitorWorkRect; // rax
  __int64 v9; // rcx
  struct tagMONITOR *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  _QWORD v15[2]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v16[16]; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v17; // [rsp+40h] [rbp-38h] BYREF

  if ( a3 )
    MonitorWorkRect = (struct tagRECT *)GetMonitorWorkRect((__int64)v15, (__int64)a2);
  else
    MonitorWorkRect = (struct tagRECT *)GetMonitorRect((__int64)v16, (__int64)a2);
  v9 = *((_QWORD *)a1 + 5);
  v17 = *MonitorWorkRect;
  if ( (*(_DWORD *)(v9 + 288) & 0xF) != 2 )
  {
    v10 = (struct tagMONITOR *)ValidateHmonitorNoRip(*(_QWORD *)(v9 + 256));
    v15[0] = v10;
    if ( v10 )
    {
      if ( v10 != a2 )
      {
        v13 = *((_QWORD *)a2 + 5) + (a3 != 0 ? 44LL : 28LL);
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v12, v11);
        PhysicalToLogicalDPIRect(&v17, v13, CurrentThreadDpiAwarenessContext, v15);
      }
    }
  }
  *a4 = v17;
}
