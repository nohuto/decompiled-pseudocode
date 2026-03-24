/*
 * XREFs of ?StartVSync@BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x1C0300EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C001AC14 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?VmBusSendVsyncControl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IPEAX_N@Z @ 0x1C024E47C (-VmBusSendVsyncControl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IPEAX_N@Z.c)
 *     ?FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER@1@0@Z @ 0x1C02C43FC (-FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER@1@0@Z.c)
 *     ?LogUnexpectedStartFailure@BLTQUEUE_REMOTE_VSYNC_SOURCE@@AEAAXJW4StartExitReason@1@@Z @ 0x1C0300D4C (-LogUnexpectedStartFailure@BLTQUEUE_REMOTE_VSYNC_SOURCE@@AEAAXJW4StartExitReason@1@@Z.c)
 */

__int64 __fastcall BLTQUEUE_REMOTE_VSYNC_SOURCE::StartVSync(
        BLTQUEUE_REMOTE_VSYNC_SOURCE *this,
        struct _D3DDDI_RATIONAL a2,
        __int64 a3)
{
  __int64 v4; // rsi
  struct DXGADAPTER *Adapter; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGADAPTER *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  struct DXGGLOBAL *Global; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int MappingFromGuestId; // ebx
  struct DXGADAPTER *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  struct _KTHREAD **v21; // rcx
  __int64 v22; // rcx
  struct _LUID v23; // rbx
  unsigned int v24; // r14d
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rbp
  struct DXGADAPTER *v30; // rax
  _QWORD *v31; // rdx
  __int64 v32; // rcx
  struct _LUID v33; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v34; // [rsp+38h] [rbp-20h]
  __int64 v35; // [rsp+40h] [rbp-18h] BYREF
  int v36; // [rsp+48h] [rbp-10h]

  v4 = (unsigned int)a3;
  if ( *((_BYTE *)this + 104) )
    return 3221225473LL;
  if ( !*((_QWORD *)this + 12) )
  {
    *(_QWORD *)(((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdTrace)(this, a2) + 24) = 62LL;
    return 3221225473LL;
  }
  if ( (_DWORD)a3 == -1 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdWarning)(this, a2, a3);
    Adapter = DXGDODPRESENT::GetAdapter(*((DXGDODPRESENT **)this + 12));
    *(_QWORD *)(v7 + 24) = Adapter;
    WdLogEvent5_WdWarning(v7);
    return 3221225473LL;
  }
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal((__int64)this, *(_QWORD *)&a2) + 304664) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8) + 24) = 76LL;
    return 3221225473LL;
  }
  v10 = DXGDODPRESENT::GetAdapter(*((DXGDODPRESENT **)this + 12));
  v36 = v4;
  v11 = *(_QWORD *)((char *)v10 + 316);
  v33 = 0LL;
  v34 = 0;
  v35 = v11;
  Global = DXGGLOBAL::GetGlobal(v11, v12);
  MappingFromGuestId = REMOTEMONITORMAPPING::FindMappingFromGuestId(
                         (struct _KTHREAD **)Global + 38077,
                         (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER *)&v35,
                         (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER *)&v33);
  if ( MappingFromGuestId >= 0 )
  {
    v21 = (struct _KTHREAD **)*((_QWORD *)DXGGLOBAL::GetGlobal(v15, v14) + 197);
    if ( !v21 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v20) + 24) = 97LL;
      BLTQUEUE_REMOTE_VSYNC_SOURCE::LogUnexpectedStartFailure(v22, -1073741823, 1);
      return 3221225473LL;
    }
    v23 = v33;
    v24 = v34;
    v25 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendVsyncControl(v21, v33, v34, (char *)this + 72, 1);
    v29 = v25;
    if ( v25 >= 0 )
    {
      KeSetTimerEx((PKTIMER)((char *)this + 8), (LARGE_INTEGER)-300000000LL, 0, 0LL);
      *((_BYTE *)this + 104) = 1;
      *(struct _LUID *)((char *)this + 108) = v23;
      *((_DWORD *)this + 29) = v24;
    }
    else
    {
      WdLogNewEntry5_WdWarning(v27, v26, v28);
      v30 = DXGDODPRESENT::GetAdapter(*((DXGDODPRESENT **)this + 12));
      v31[3] = v30;
      v31[4] = v4;
      v31[5] = v29;
      WdLogEvent5_WdWarning(v31);
      BLTQUEUE_REMOTE_VSYNC_SOURCE::LogUnexpectedStartFailure(v32, v29, 2);
    }
    return (unsigned int)v29;
  }
  else
  {
    WdLogNewEntry5_WdError(v15, v14);
    v17 = DXGDODPRESENT::GetAdapter(*((DXGDODPRESENT **)this + 12));
    *(_QWORD *)(v18 + 24) = v17;
    *(_QWORD *)(v18 + 32) = v4;
    WdLogEvent5_WdError(v18);
    BLTQUEUE_REMOTE_VSYNC_SOURCE::LogUnexpectedStartFailure(v19, MappingFromGuestId, 0);
    return (unsigned int)MappingFromGuestId;
  }
}
