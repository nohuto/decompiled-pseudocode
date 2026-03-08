/*
 * XREFs of ?AddDescriptorsToCache@MonitorDescriptorState@DxgMonitor@@AEAAXXZ @ 0x1C01FFCB8
 * Callers:
 *     ?OnDeviceNodeReady@MonitorDescriptorState@DxgMonitor@@QEAAXAEA_N@Z @ 0x1C01FDB34 (-OnDeviceNodeReady@MonitorDescriptorState@DxgMonitor@@QEAAXAEA_N@Z.c)
 *     ?OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x1C01FEB78 (-OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A240 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgMonitor::MonitorDescriptorState::AddDescriptorsToCache(DxgMonitor::MonitorDescriptorState *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  _QWORD *v4; // r9
  __int64 v5; // rcx
  unsigned __int8 (__fastcall *v6)(_QWORD *, _QWORD, __int128 *); // rax
  PVOID v7; // r14
  __int64 v8; // rbp
  void (__fastcall *v9)(PVOID, _QWORD, _QWORD, __int64, __int64, _DWORD); // r15
  char v10; // si
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v11; // eax
  unsigned int v12; // ebx
  _QWORD *v13; // rax
  __int64 v14; // r9
  __int128 v15; // [rsp+40h] [rbp-38h] BYREF
  __int128 v16; // [rsp+50h] [rbp-28h]
  char v17; // [rsp+80h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 16);
  if ( v2 )
  {
    v3 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v4 = v3;
    if ( v3 )
    {
      v5 = *v3;
      v15 = 0LL;
      v6 = *(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD, __int128 *))(v5 + 32);
      v16 = 0LL;
      if ( v6(v4, 0LL, &v15) )
      {
        v7 = DxgMonitor::EDIDCACHE::s_pEdidCache;
        v8 = v16;
        v9 = *(void (__fastcall **)(PVOID, _QWORD, _QWORD, __int64, __int64, _DWORD))(*(_QWORD *)DxgMonitor::EDIDCACHE::s_pEdidCache
                                                                                    + 8LL);
        v10 = 1;
        if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 48LL))(*((_QWORD *)this + 14)) != 1
          || (v11 = (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 40LL))(*((_QWORD *)this + 14)),
              !IsInternalVideoOutput(v11)) )
        {
          v10 = 0;
        }
        v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 16LL))(*((_QWORD *)this + 14));
        v13 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 14) + 8LL))(
                          *((_QWORD *)this + 14),
                          &v17);
        LOBYTE(v14) = v10;
        v9(v7, *v13, v12, v14, v8, DWORD2(v16));
      }
    }
  }
}
