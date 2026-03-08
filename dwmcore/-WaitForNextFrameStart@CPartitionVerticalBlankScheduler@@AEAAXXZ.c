/*
 * XREFs of ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18004DCA8
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18004DAF0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x1800525D0 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801292C6 (McTemplateU0qq_EventWriteTransfer.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 *     McTemplateU0qn_EventWriteTransfer @ 0x1801CEB94 (McTemplateU0qn_EventWriteTransfer.c)
 *     McTemplateU0ttqtq_EventWriteTransfer @ 0x1801CECCC (McTemplateU0ttqtq_EventWriteTransfer.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::WaitForNextFrameStart(CPartitionVerticalBlankScheduler *this)
{
  unsigned int v1; // esi
  int v3; // r13d
  unsigned __int8 v4; // r15
  unsigned __int8 v5; // r14
  char v6; // di
  __int64 v7; // rcx
  int v8; // esi
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  unsigned __int64 v10; // rdx
  int v11; // ecx
  int v12; // r9d
  struct IMonitorTarget *v13; // r12
  char *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  DWORD v20; // eax
  char v21; // si
  bool v22; // al
  char v23; // al
  DWORD v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  void *v28; // [rsp+40h] [rbp-40h] BYREF
  __int128 v29; // [rsp+48h] [rbp-38h] BYREF
  __int64 v30; // [rsp+58h] [rbp-28h]
  int v31; // [rsp+60h] [rbp-20h]
  HANDLE Handles[2]; // [rsp+68h] [rbp-18h] BYREF

  v1 = 0;
  v30 = 0LL;
  v29 = 0LL;
  v3 = 80;
  v31 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_WFVB_Start,
      1LL,
      1LL,
      Handles);
  v7 = *((_QWORD *)this + 527);
  *((_BYTE *)this + 4552) = 0;
  if ( v7 && !*(_BYTE *)(v7 + 170) && *(_BYTE *)(v7 + 172) )
  {
    v8 = *(_DWORD *)(v7 + 128);
    if ( v8 + 1 <= (unsigned int)(*(_DWORD *)(*((_QWORD *)this + 526) + 128LL) + 1) )
      v8 = *(_DWORD *)(*((_QWORD *)this + 526) + 128LL);
    v1 = v8 + 1;
  }
  PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 8)
                                                                                                + 216LL));
  v13 = PrimaryMonitorTarget;
  if ( PrimaryMonitorTarget )
  {
    v14 = (char *)PrimaryMonitorTarget + *(int *)(*((_QWORD *)PrimaryMonitorTarget + 1) + 12LL) + 8;
    v15 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v14 + 8LL))(v14);
    v29 = *(_OWORD *)v15;
    v30 = *(_QWORD *)(v15 + 16);
    v31 = *(_DWORD *)(v15 + 24);
    v16 = (*(__int64 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)v13 + 88LL))(v13);
    v10 = (unsigned __int64)(1000 * v16) % g_qpcFrequency.QuadPart;
    *((_DWORD *)this + 22) = (unsigned __int64)(1000 * v16) / g_qpcFrequency.QuadPart;
  }
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
    McTemplateU0qn_EventWriteTransfer(v11, v10, v1, v12, (__int64)&v29);
  if ( (unsigned int)(2 * *((_DWORD *)this + 22)) < 0x50 )
    v3 = 2 * *((_DWORD *)this + 22);
  if ( !v13 )
  {
    v21 = 0;
    v4 = 1;
    goto LABEL_32;
  }
  v28 = 0LL;
  v17 = (*(__int64 (__fastcall **)(struct IMonitorTarget *, _QWORD, void **))(*(_QWORD *)v13 + 128LL))(v13, v1, &v28);
  if ( v17 < 0 )
  {
    v25 = (*(__int64 (__fastcall **)(struct IMonitorTarget *, _QWORD))(*(_QWORD *)v13 + 120LL))(
            v13,
            *((_QWORD *)this + 5));
    if ( v25 >= 0 )
    {
      if ( !v25 )
      {
        *((_BYTE *)this + 4552) = 1;
        goto LABEL_39;
      }
      v26 = v25 - 1;
      if ( !v26 )
      {
        v5 = 1;
        goto LABEL_39;
      }
      v27 = v26 - 257;
      if ( !v27 )
      {
        v6 = 1;
        goto LABEL_39;
      }
      if ( v27 != 142212863 )
      {
LABEL_39:
        v21 = 1;
        goto LABEL_21;
      }
    }
    v4 = 1;
    goto LABEL_39;
  }
  if ( v17 == 142213121 )
  {
    v4 = 1;
  }
  else
  {
    Handles[0] = v28;
    Handles[1] = *((HANDLE *)this + 5);
    v20 = WaitForMultipleObjects(2u, Handles, 0, v3);
    if ( v20 )
    {
      v19 = 1;
      switch ( v20 )
      {
        case 1u:
          v5 = 1;
          break;
        case 0x102u:
          v6 = 1;
          break;
        case 0xFFFFFFFF:
          v4 = 1;
          break;
      }
    }
    else
    {
      *((_BYTE *)this + 4552) = 1;
    }
  }
  v21 = 0;
LABEL_21:
  if ( !v4 )
  {
    v22 = *((_BYTE *)this + 4548) && *((_BYTE *)this + 4552);
    *((_BYTE *)this + 4549) = v22;
    goto LABEL_25;
  }
LABEL_32:
  v24 = WaitForSingleObject(*((HANDLE *)this + 5), v3);
  if ( v24 )
  {
    if ( v24 == 258 )
      v6 = 1;
  }
  else
  {
    v5 = 1;
  }
LABEL_25:
  v23 = byte_1803E2BE8;
  if ( *((_BYTE *)this + 4552) )
    v23 = 1;
  byte_1803E2BE8 = v23;
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
    McTemplateU0ttqtq_EventWriteTransfer(v19, v18, v4, v5, v21, v6, v3);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_WFVB_Stop,
      v4,
      v3 & (unsigned int)-(v6 != 0));
}
