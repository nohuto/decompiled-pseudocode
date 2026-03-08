/*
 * XREFs of GreGetMonitorHash @ 0x1C00E325C
 * Callers:
 *     ?GetMonitorId@CMonitorTopology@@CAXPEAUtagMONITOR@@PEAUMonitorId@1@@Z @ 0x1C00E3100 (-GetMonitorId@CMonitorTopology@@CAXPEAUtagMONITOR@@PEAUMonitorId@1@@Z.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C001F5A0 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreGetMonitorHash(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r9d
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int (__fastcall *v8)(struct _LUID, _QWORD, __int64, __int64); // rdi
  unsigned int v9; // ebx
  struct _LUID *v10; // rax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = a1;
  v5 = -1073741811;
  if ( a1 && (*(_DWORD *)(a1 + 40) & 1) != 0 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v12) )
  {
    v8 = *(unsigned int (__fastcall **)(struct _LUID, _QWORD, __int64, __int64))(DxDdGetDxgkWin32kInterface(v7, v6) + 784);
    v9 = *(_DWORD *)(*(_QWORD *)(v12 + 2552) + 248LL);
    v10 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v12);
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v8)(*v10, v9, a2, a3);
  }
  return v5;
}
