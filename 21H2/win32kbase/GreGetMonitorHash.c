/*
 * XREFs of GreGetMonitorHash @ 0x1C0067ED0
 * Callers:
 *     ?GetMonitorId@CMonitorTopology@@CAXPEAUtagMONITOR@@PEAUMonitorId@1@@Z @ 0x1C0067D64 (-GetMonitorId@CMonitorTopology@@CAXPEAUtagMONITOR@@PEAUMonitorId@1@@Z.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0072044 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0072080 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreGetMonitorHash(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r10d
  __int64 v6; // r9
  unsigned int v7; // ebx
  struct _LUID *v8; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = a1;
  v5 = -1073741811;
  if ( a1 && (*(_DWORD *)(a1 + 40) & 1) != 0 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v10) )
  {
    v7 = *(_DWORD *)(*(_QWORD *)(v6 + 2552) + 256LL);
    v8 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v10);
    return (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))qword_1C0296970)(*v8, v7, a2, a3);
  }
  return v5;
}
