/*
 * XREFs of ?AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z @ 0x1C005790C
 * Callers:
 *     _lambda_7b458e3d0f2dd7ba0be5d339fdccf20b_::operator() @ 0x1C0167720 (_lambda_7b458e3d0f2dd7ba0be5d339fdccf20b_--operator().c)
 *     _lambda_e7624565a55af25c5c5aa1d22c9a7051_::operator() @ 0x1C016798C (_lambda_e7624565a55af25c5c5aa1d22c9a7051_--operator().c)
 * Callees:
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0001838 (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0002A4C (-IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00074A8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000763C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00076E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0008770 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x1C00088CC (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_1d3ed8bc1bcab5b72b8469e05c2c1031___ @ 0x1C0026478 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_1d3ed8bc1bcab5b72b8469e05c2c1031___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_410e6522bb99cf0c876cbe7a3c34b555___ @ 0x1C0026628 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_410e6522bb99cf0c876cbe7a3c34b555___.c)
 *     Feature_112499000__private_IsEnabledDeviceUsage @ 0x1C0026988 (Feature_112499000__private_IsEnabledDeviceUsage.c)
 *     ?VidSchIsVSyncEnabled@VIDSCH_EXPORT@@QEAAEPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C00420D8 (-VidSchIsVSyncEnabled@VIDSCH_EXPORT@@QEAAEPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0043074 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTER@@EI@Z @ 0x1C00473D8 (-VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTE.c)
 *     HOSTVMMONITORMAPPING::IterateList__lambda_35d6e908399b17a6c4ed52239f7ddbb9___ @ 0x1C005730C (HOSTVMMONITORMAPPING--IterateList__lambda_35d6e908399b17a6c4ed52239f7ddbb9___.c)
 *     McTemplateK0xqppq_EtwWriteTransfer @ 0x1C0058108 (McTemplateK0xqppq_EtwWriteTransfer.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C017687C (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C019D5FC (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C02BB8E8 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ??_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z @ 0x1C034C4FC (--_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall HOSTVMMONITORMAPPING::AddMapping(KSPIN_LOCK *this, const struct _LUID *a2)
{
  DXGADAPTER *v4; // rbx
  int SourceConnectedToTargetInClientVidPn; // edi
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  ADAPTER_DISPLAY **v9; // r14
  DXGADAPTER *v10; // rdx
  __int64 LowPart; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v14; // rax
  unsigned int v15; // r15d
  DXGADAPTER *v16; // rbx
  HOST_VMMONITOR_MAPPING_ENTRY *v17; // rax
  KSPIN_LOCK v18; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v19; // rax
  unsigned int v20; // edx
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rbx
  int v24; // eax
  char v26; // [rsp+60h] [rbp-A0h] BYREF
  HOST_VMMONITOR_MAPPING_ENTRY *v27; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v28; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v29; // [rsp+74h] [rbp-8Ch] BYREF
  _BYTE v30[8]; // [rsp+78h] [rbp-88h] BYREF
  DXGADAPTER *v31; // [rsp+80h] [rbp-80h]
  char v32; // [rsp+88h] [rbp-78h]
  DXGADAPTER *v33[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v34[5]; // [rsp+A0h] [rbp-60h] BYREF
  char *v35; // [rsp+C8h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D0h] [rbp-30h] BYREF
  char v37; // [rsp+E8h] [rbp-18h]
  __int128 v38; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v39; // [rsp+100h] [rbp+0h]
  __int128 v40; // [rsp+110h] [rbp+10h]
  _BYTE v41[144]; // [rsp+120h] [rbp+20h] BYREF

  v33[0] = 0LL;
  v27 = 0LL;
  v28 = 0;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v33, a2);
  v4 = v33[0];
  if ( !v33[0] )
  {
    SourceConnectedToTargetInClientVidPn = -1073741585;
    WdLogSingleEntry3(3LL, a2->LowPart, a2->HighPart, -1073741585LL);
    goto LABEL_64;
  }
  v31 = v33[0];
  v32 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
  if ( *((_BYTE *)v4 + 2833) )
    goto LABEL_60;
  if ( *((_DWORD *)v4 + 50) != 1 )
  {
    v4 = v33[0];
LABEL_60:
    v10 = v4;
    goto LABEL_61;
  }
  v9 = (ADAPTER_DISPLAY **)v33[0];
  if ( *((_QWORD *)v33[0] + 365) )
  {
    SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(v33[0], a2[1].LowPart, &v28);
    if ( SourceConnectedToTargetInClientVidPn < 0 )
    {
      SourceConnectedToTargetInClientVidPn = -1073741584;
      LowPart = a2[1].LowPart;
      v12 = -1073741584LL;
      v13 = 3LL;
LABEL_9:
      WdLogSingleEntry3(v13, v9, LowPart, v12);
      goto LABEL_62;
    }
    if ( *(_QWORD *)&a2[4] && !DXGADAPTER::IsVSyncAvailable((DXGADAPTER *)v9, v28) )
    {
      v12 = -1071775738LL;
      SourceConnectedToTargetInClientVidPn = -1071775738;
      LowPart = v28;
      v13 = 4LL;
      goto LABEL_9;
    }
    v14 = (HOST_VMMONITOR_MAPPING_ENTRY *)operator new[](0x60uLL, 0x4B677844u, 64LL);
    if ( !v14 )
    {
      v27 = 0LL;
      SourceConnectedToTargetInClientVidPn = -1073741801;
      WdLogSingleEntry1(6LL, 366LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v7,
          v6,
          v8,
          0LL,
          1,
          -1,
          L"Failed to allocate new entry",
          366LL,
          0LL,
          0LL,
          0LL,
          0LL);
      goto LABEL_62;
    }
    *((_QWORD *)v14 + 9) = 0LL;
    v27 = v14;
    v35 = (char *)(this + 2);
    v37 = 0;
    KeAcquireInStackQueuedSpinLock(this + 2, &LockHandle);
    this[3] = (KSPIN_LOCK)KeGetCurrentThread();
    v37 = 1;
    v34[0] = &v29;
    v34[1] = &v26;
    v29 = 0;
    v26 = 0;
    v34[2] = a2;
    HOSTVMMONITORMAPPING::IterateList__lambda_35d6e908399b17a6c4ed52239f7ddbb9___((_QWORD **)this, (__int64)v34);
    v15 = v28;
    v16 = v33[0];
    if ( v29 >= 0x11 )
    {
      SourceConnectedToTargetInClientVidPn = -1073741756;
      WdLogSingleEntry2(3LL, *(_QWORD *)&a2[2], -1073741756LL);
    }
    else if ( v26 )
    {
      SourceConnectedToTargetInClientVidPn = -1073741723;
      WdLogSingleEntry4(3LL, v33[0], a2[1].LowPart, *(_QWORD *)&a2[2], -1073741723LL);
    }
    else
    {
      *((_DWORD *)v27 + 16) = v28;
      v17 = v27;
      *((_OWORD *)v27 + 1) = *(_OWORD *)&a2->LowPart;
      *((_OWORD *)v17 + 2) = *(_OWORD *)&a2[2].LowPart;
      *((_OWORD *)v17 + 3) = *(_OWORD *)&a2[4].LowPart;
      v18 = *this;
      v19 = v27;
      if ( *(KSPIN_LOCK **)(*this + 8) != this )
        __fastfail(3u);
      *(_QWORD *)v27 = v18;
      *((_QWORD *)v19 + 1) = this;
      *(_QWORD *)(v18 + 8) = v19;
      *this = (KSPIN_LOCK)v19;
    }
    if ( (unsigned int)Feature_112499000__private_IsEnabledDeviceUsage() )
    {
      if ( SourceConnectedToTargetInClientVidPn >= 0 )
      {
        v38 = *((_OWORD *)v27 + 1);
        v39 = *((_OWORD *)v27 + 2);
        v40 = *((_OWORD *)v27 + 3);
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)v27 + 9, v16);
        if ( *((_QWORD *)v27 + 6) )
          DXGADAPTER::IncrementVSyncWaiter(v16, v15);
      }
    }
    if ( v37 )
    {
      v37 = 0;
      *((_QWORD *)v35 + 1) = 0LL;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    if ( (unsigned int)Feature_112499000__private_IsEnabledDeviceUsage() )
    {
      if ( SourceConnectedToTargetInClientVidPn >= 0 )
        goto LABEL_32;
    }
    else if ( SourceConnectedToTargetInClientVidPn >= 0 )
    {
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)v27 + 9, v16);
      goto LABEL_32;
    }
    if ( v27 )
      HOST_VMMONITOR_MAPPING_ENTRY::`scalar deleting destructor'(v27, v20);
    v27 = 0LL;
LABEL_32:
    if ( v32 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
    if ( !(unsigned int)Feature_112499000__private_IsEnabledDeviceUsage() )
    {
      if ( SourceConnectedToTargetInClientVidPn < 0 || !*((_QWORD *)v27 + 6) )
        goto LABEL_64;
      DXGADAPTER::IncrementVSyncWaiter(v16, v15);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v41, v16, 0LL);
      SourceConnectedToTargetInClientVidPn = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v41, 0LL);
      if ( SourceConnectedToTargetInClientVidPn >= 0 )
      {
        if ( DXGADAPTER::IsDisplayOnlyAdapter(v16) )
        {
          v24 = ADAPTER_DISPLAY::ControlVSyncAdapter(v9[365], v15);
        }
        else
        {
          v23 = *((_QWORD *)v16 + 366);
          if ( (unsigned __int8)VIDSCH_EXPORT::VidSchIsVSyncEnabled(
                                  *(VIDSCH_EXPORT **)(v23 + 736),
                                  *(struct _VIDSCH_GLOBAL **)(v23 + 744),
                                  v15) )
            goto LABEL_46;
          v24 = VIDSCH_EXPORT::VidSchControlVSyncAdapter(*(_QWORD *)(v23 + 736), *(_QWORD *)(v23 + 744), 4LL, 1, v15);
        }
        SourceConnectedToTargetInClientVidPn = v24;
        if ( v24 >= 0 )
          goto LABEL_46;
      }
      HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_410e6522bb99cf0c876cbe7a3c34b555___(
        (__int64)this,
        (__int64 *)&v27);
      goto LABEL_46;
    }
    if ( SourceConnectedToTargetInClientVidPn < 0 || !(_QWORD)v40 )
      goto LABEL_64;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v41, v16, 0LL);
    SourceConnectedToTargetInClientVidPn = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v41, 0LL);
    if ( SourceConnectedToTargetInClientVidPn < 0 )
      goto LABEL_45;
    if ( DXGADAPTER::IsDisplayOnlyAdapter(v16) )
    {
      v22 = ADAPTER_DISPLAY::ControlVSyncAdapter(v9[365], v15);
    }
    else
    {
      v21 = *((_QWORD *)v16 + 366);
      if ( (unsigned __int8)VIDSCH_EXPORT::VidSchIsVSyncEnabled(
                              *(VIDSCH_EXPORT **)(v21 + 736),
                              *(struct _VIDSCH_GLOBAL **)(v21 + 744),
                              v15) )
        goto LABEL_46;
      v22 = VIDSCH_EXPORT::VidSchControlVSyncAdapter(*(_QWORD *)(v21 + 736), *(_QWORD *)(v21 + 744), 4LL, 1, v15);
    }
    SourceConnectedToTargetInClientVidPn = v22;
    if ( v22 < 0 )
LABEL_45:
      HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_1d3ed8bc1bcab5b72b8469e05c2c1031___(
        (__int64)this,
        (__int64)&v38);
LABEL_46:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v41);
    goto LABEL_64;
  }
  v10 = v33[0];
LABEL_61:
  SourceConnectedToTargetInClientVidPn = -1073741585;
  WdLogSingleEntry2(3LL, v10, -1073741585LL);
LABEL_62:
  if ( v32 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
LABEL_64:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
    McTemplateK0xqppq_EtwWriteTransfer(
      v7,
      v6,
      v8,
      *a2,
      a2[1].LowPart,
      *(_QWORD *)&a2[4],
      *(_QWORD *)&a2[2],
      SourceConnectedToTargetInClientVidPn);
  DXGADAPTER_REFERENCE::Assign(v33, 0LL);
  return (unsigned int)SourceConnectedToTargetInClientVidPn;
}
