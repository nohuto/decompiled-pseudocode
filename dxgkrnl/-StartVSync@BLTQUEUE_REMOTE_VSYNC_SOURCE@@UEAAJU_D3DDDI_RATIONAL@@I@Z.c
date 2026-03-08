/*
 * XREFs of ?StartVSync@BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x1C03D0AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C000B374 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55___ @ 0x1C006DC28 (DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55___.c)
 *     _DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1C006DC48 (_DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_GUEST@1@PEAUPATH_IDENTIFIER_HOST@1@@Z @ 0x1C0347D0C (-FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_GUEST@1@PEAUPATH_IDENTIFI.c)
 *     ?VmBusSendVsyncControl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IPEAX_N@Z @ 0x1C038C228 (-VmBusSendVsyncControl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IPEAX_N@Z.c)
 */

__int64 __fastcall BLTQUEUE_REMOTE_VSYNC_SOURCE::StartVSync(
        BLTQUEUE_REMOTE_VSYNC_SOURCE *this,
        struct _D3DDDI_RATIONAL a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // edi
  __int64 v5; // r14
  DXGDODPRESENT *v8; // rcx
  struct DXGADAPTER *Adapter; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGADAPTER *v14; // rax
  BLTQUEUE_REMOTE_VSYNC_SOURCE *v15; // rcx
  struct DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v17; // rax
  struct DXGADAPTER *v18; // rax
  __int64 v19; // rdx
  DXG_GUEST_GLOBAL_VMBUS *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // ebx
  struct _LUID v24; // rbx
  unsigned int v25; // r15d
  struct DXGADAPTER *v26; // rax
  __int64 v27; // rdx
  struct _LUID v28; // [rsp+50h] [rbp-19h] BYREF
  unsigned int v29; // [rsp+58h] [rbp-11h]
  BLTQUEUE_REMOTE_VSYNC_SOURCE *v30; // [rsp+60h] [rbp-9h] BYREF
  int *v31; // [rsp+68h] [rbp-1h]
  int *v32; // [rsp+70h] [rbp+7h]
  _BYTE v33[64]; // [rsp+80h] [rbp+17h] BYREF
  int MappingFromGuestId; // [rsp+D0h] [rbp+67h] BYREF
  int v35; // [rsp+E8h] [rbp+7Fh] BYREF

  v4 = 0;
  v5 = (unsigned int)a3;
  if ( *((_BYTE *)this + 104) )
    return 3221225473LL;
  v8 = (DXGDODPRESENT *)*((_QWORD *)this + 12);
  if ( !v8 )
  {
    *(_QWORD *)(((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdTrace)(0LL, a2, a3, a4) + 24) = 62LL;
    return 3221225473LL;
  }
  if ( (_DWORD)a3 == -1 )
  {
    Adapter = DXGDODPRESENT::GetAdapter(v8);
    WdLogSingleEntry1(3LL, Adapter);
    return 3221225473LL;
  }
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304880) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v10, v12, v13) + 24) = 76LL;
    return 3221225473LL;
  }
  MappingFromGuestId = 0;
  v31 = &MappingFromGuestId;
  v35 = 3;
  v32 = &v35;
  v30 = this;
  DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55_((__int64)v33, (__int64)&v30);
  v14 = DXGDODPRESENT::GetAdapter(*((DXGDODPRESENT **)this + 12));
  v31 = (int *)(unsigned int)v5;
  v15 = *(BLTQUEUE_REMOTE_VSYNC_SOURCE **)((char *)v14 + 404);
  v28 = 0LL;
  v29 = 0;
  v30 = v15;
  Global = DXGGLOBAL::GetGlobal();
  MappingFromGuestId = REMOTEMONITORMAPPING::FindMappingFromGuestId(
                         (struct _KTHREAD **)Global + 38104,
                         (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *)&v30,
                         (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)&v28);
  if ( MappingFromGuestId < 0 )
  {
    v17 = DXGDODPRESENT::GetAdapter(*((DXGDODPRESENT **)this + 12));
    WdLogSingleEntry2(2LL, v17, v5);
    v18 = DXGDODPRESENT::GetAdapter(*((DXGDODPRESENT **)this + 12));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to find host mapping for adapter 0x%I64x, target id 0x%I64x",
      (__int64)v18,
      v5,
      0LL,
      0LL,
      0LL);
LABEL_15:
    v23 = MappingFromGuestId;
    goto LABEL_16;
  }
  v20 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 214);
  if ( !v20 )
  {
    v23 = -1073741823;
    v4 = 1;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v19, v21, v22) + 24) = 107LL;
    MappingFromGuestId = -1073741823;
LABEL_16:
    v35 = v4;
    DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v33);
    return v23;
  }
  v24 = v28;
  v25 = v29;
  MappingFromGuestId = DXG_GUEST_GLOBAL_VMBUS::VmBusSendVsyncControl(v20, v28, v29, (char *)this + 72, 1);
  if ( MappingFromGuestId < 0 )
  {
    v26 = DXGDODPRESENT::GetAdapter(*((DXGDODPRESENT **)this + 12));
    WdLogSingleEntry3(3LL, v26, v5, v27);
    v4 = 2;
    goto LABEL_15;
  }
  KeSetTimerEx((PKTIMER)((char *)this + 8), (LARGE_INTEGER)-300000000LL, 0, 0LL);
  *((_BYTE *)this + 104) = 1;
  *(struct _LUID *)((char *)this + 108) = v24;
  *((_DWORD *)this + 29) = v25;
  DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v33);
  return (unsigned int)MappingFromGuestId;
}
