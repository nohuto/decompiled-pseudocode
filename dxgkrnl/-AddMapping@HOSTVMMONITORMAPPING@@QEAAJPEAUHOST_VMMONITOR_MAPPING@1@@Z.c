/*
 * XREFs of ?AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z @ 0x1C0056E0C
 * Callers:
 *     _lambda_42ee479a8e982a1e9231e91789050ae8_::operator() @ 0x1C036D608 (_lambda_42ee479a8e982a1e9231e91789050ae8_--operator().c)
 *     _lambda_c820ae13d6b077cc6710fe5fbb8b13a3_::operator() @ 0x1C036D794 (_lambda_c820ae13d6b077cc6710fe5fbb8b13a3_--operator().c)
 * Callees:
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C0001838 (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x1C0009308 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00097B8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     HOSTVMMONITORMAPPING::IterateList__lambda_35d6e908399b17a6c4ed52239f7ddbb9___ @ 0x1C005646C (HOSTVMMONITORMAPPING--IterateList__lambda_35d6e908399b17a6c4ed52239f7ddbb9___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_58d59253a106932dd6afe50e996ad1eb___ @ 0x1C00568A4 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_58d59253a106932dd6afe50e996ad1eb___.c)
 *     McTemplateK0xqppq_EtwWriteTransfer @ 0x1C00574DC (McTemplateK0xqppq_EtwWriteTransfer.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C017E65C (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C01AFE1C (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C02B69E8 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ??_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z @ 0x1C0347A94 (--_GHOST_VMMONITOR_MAPPING_ENTRY@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall HOSTVMMONITORMAPPING::AddMapping(KSPIN_LOCK *this, const struct _LUID *a2)
{
  struct DXGADAPTER *v4; // rbx
  int SourceConnectedToTargetInClientVidPn; // edi
  unsigned int v6; // edx
  int v7; // ecx
  int v8; // r8d
  ADAPTER_DISPLAY **v9; // r14
  struct DXGADAPTER *v10; // rdx
  __int64 LowPart; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v14; // rax
  unsigned int v15; // r12d
  struct DXGADAPTER *v16; // rbx
  HOST_VMMONITOR_MAPPING_ENTRY *v17; // rax
  KSPIN_LOCK v18; // rcx
  HOST_VMMONITOR_MAPPING_ENTRY *v19; // rax
  __int64 v20; // rbx
  __int64 v21; // r8
  int v22; // eax
  char v24; // [rsp+60h] [rbp-A0h] BYREF
  HOST_VMMONITOR_MAPPING_ENTRY *v25; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v26; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v27; // [rsp+74h] [rbp-8Ch] BYREF
  _BYTE v28[8]; // [rsp+78h] [rbp-88h] BYREF
  struct DXGADAPTER *v29; // [rsp+80h] [rbp-80h]
  char v30; // [rsp+88h] [rbp-78h]
  struct DXGADAPTER *v31[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v32[5]; // [rsp+A0h] [rbp-60h] BYREF
  char *v33; // [rsp+C8h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D0h] [rbp-30h] BYREF
  char v35; // [rsp+E8h] [rbp-18h]
  _BYTE v36[144]; // [rsp+F0h] [rbp-10h] BYREF

  v31[0] = 0LL;
  v25 = 0LL;
  v26 = 0;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v31, a2);
  v4 = v31[0];
  if ( !v31[0] )
  {
    SourceConnectedToTargetInClientVidPn = -1073741585;
    WdLogSingleEntry3(3LL, a2->LowPart, a2->HighPart, -1073741585LL);
    goto LABEL_48;
  }
  v29 = v31[0];
  v30 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
  if ( *((_BYTE *)v4 + 2833) )
    goto LABEL_44;
  if ( *((_DWORD *)v4 + 50) != 1 )
  {
    v4 = v31[0];
LABEL_44:
    v10 = v4;
    goto LABEL_45;
  }
  v9 = (ADAPTER_DISPLAY **)v31[0];
  if ( !*((_QWORD *)v31[0] + 365) )
  {
    v10 = v31[0];
LABEL_45:
    SourceConnectedToTargetInClientVidPn = -1073741585;
    WdLogSingleEntry2(3LL, v10, -1073741585LL);
LABEL_46:
    if ( v30 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
    goto LABEL_48;
  }
  SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(v31[0], a2[1].LowPart, &v26);
  if ( SourceConnectedToTargetInClientVidPn < 0 )
  {
    SourceConnectedToTargetInClientVidPn = -1073741584;
    LowPart = a2[1].LowPart;
    v12 = -1073741584LL;
    v13 = 3LL;
LABEL_9:
    WdLogSingleEntry3(v13, v9, LowPart, v12);
    goto LABEL_46;
  }
  if ( *(_QWORD *)&a2[4] && !DXGADAPTER::IsVSyncAvailable((DXGADAPTER *)v9, v26) )
  {
    v12 = -1071775738LL;
    SourceConnectedToTargetInClientVidPn = -1071775738;
    LowPart = v26;
    v13 = 4LL;
    goto LABEL_9;
  }
  v14 = (HOST_VMMONITOR_MAPPING_ENTRY *)operator new[](0x60uLL, 0x4B677844u, 64LL);
  if ( !v14 )
  {
    v25 = 0LL;
    SourceConnectedToTargetInClientVidPn = -1073741801;
    WdLogSingleEntry1(6LL, 357LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v7,
        v6,
        v8,
        0LL,
        1,
        -1,
        L"Failed to allocate new entry",
        357LL,
        0LL,
        0LL,
        0LL,
        0LL);
    goto LABEL_46;
  }
  *((_QWORD *)v14 + 9) = 0LL;
  v25 = v14;
  v33 = (char *)(this + 2);
  v35 = 0;
  KeAcquireInStackQueuedSpinLock(this + 2, &LockHandle);
  this[3] = (KSPIN_LOCK)KeGetCurrentThread();
  v35 = 1;
  v32[0] = &v27;
  v32[1] = &v24;
  v27 = 0;
  v24 = 0;
  v32[2] = a2;
  HOSTVMMONITORMAPPING::IterateList__lambda_35d6e908399b17a6c4ed52239f7ddbb9___((_QWORD **)this, (__int64)v32);
  v15 = v26;
  v16 = v31[0];
  if ( v27 >= 0x11 )
  {
    SourceConnectedToTargetInClientVidPn = -1073741756;
    WdLogSingleEntry2(3LL, *(_QWORD *)&a2[2], -1073741756LL);
  }
  else if ( v24 )
  {
    SourceConnectedToTargetInClientVidPn = -1073741723;
    WdLogSingleEntry4(3LL, v31[0], a2[1].LowPart, *(_QWORD *)&a2[2], -1073741723LL);
  }
  else
  {
    *((_DWORD *)v25 + 16) = v26;
    v17 = v25;
    *((_OWORD *)v25 + 1) = *(_OWORD *)&a2->LowPart;
    *((_OWORD *)v17 + 2) = *(_OWORD *)&a2[2].LowPart;
    *((_OWORD *)v17 + 3) = *(_OWORD *)&a2[4].LowPart;
    v18 = *this;
    v19 = v25;
    if ( *(KSPIN_LOCK **)(*this + 8) != this )
      __fastfail(3u);
    *(_QWORD *)v25 = v18;
    *((_QWORD *)v19 + 1) = this;
    *(_QWORD *)(v18 + 8) = v19;
    *this = (KSPIN_LOCK)v19;
  }
  if ( v35 )
  {
    v35 = 0;
    *((_QWORD *)v33 + 1) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  v7 = (int)v25;
  if ( SourceConnectedToTargetInClientVidPn < 0 )
  {
    if ( v25 )
      HOST_VMMONITOR_MAPPING_ENTRY::`scalar deleting destructor'(v25, v6);
    v25 = 0LL;
  }
  else
  {
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)v25 + 9, v16);
  }
  if ( v30 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
  if ( SourceConnectedToTargetInClientVidPn >= 0 && *((_QWORD *)v25 + 6) )
  {
    DXGADAPTER::IncrementVSyncWaiter(v16, v15);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v36, v16, 0LL);
    SourceConnectedToTargetInClientVidPn = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v36, 0LL);
    if ( SourceConnectedToTargetInClientVidPn < 0 )
    {
LABEL_38:
      HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_58d59253a106932dd6afe50e996ad1eb___(this, (__int64 *)&v25);
      goto LABEL_39;
    }
    v20 = *((_QWORD *)v16 + 366);
    if ( v20 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v20 + 736) + 8LL) + 544LL))(
             *(_QWORD *)(v20 + 744),
             v15) )
      {
        goto LABEL_39;
      }
      LOBYTE(v21) = 1;
      v22 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v20 + 736) + 8LL)
                                                                        + 552LL))(
              *(_QWORD *)(v20 + 744),
              4LL,
              v21,
              v15);
    }
    else
    {
      v22 = ADAPTER_DISPLAY::ControlVSyncAdapter(v9[365], v15);
    }
    SourceConnectedToTargetInClientVidPn = v22;
    if ( v22 < 0 )
      goto LABEL_38;
LABEL_39:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v36);
  }
LABEL_48:
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
  DXGADAPTER_REFERENCE::Assign(v31, 0LL);
  return (unsigned int)SourceConnectedToTargetInClientVidPn;
}
