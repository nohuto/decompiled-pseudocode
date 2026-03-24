/*
 * XREFs of ?AddMapping@REMOTEVSYNCMAPPING@@QEAAJPEAUREMOTE_VYSNC_MAPPING@1@@Z @ 0x1C004F390
 * Callers:
 *     _lambda_933b32e0a92a62a544db01ace2b25516_::operator() @ 0x1C00D7CE4 (_lambda_933b32e0a92a62a544db01ace2b25516_--operator().c)
 * Callees:
 *     ?IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x1C00019A8 (-IncrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0005488 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C000A33C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019574 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     Feature_380934456__private_IsEnabledDeviceUsage @ 0x1C0028334 (Feature_380934456__private_IsEnabledDeviceUsage.c)
 *     REMOTEVSYNCMAPPING::IterateList__lambda_daaf3f6a0c98c285f3d4af1bfc621455___ @ 0x1C004EFC8 (REMOTEVSYNCMAPPING--IterateList__lambda_daaf3f6a0c98c285f3d4af1bfc621455___.c)
 *     McTemplateK0xqppq_EtwWriteTransfer @ 0x1C004F8A8 (McTemplateK0xqppq_EtwWriteTransfer.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C013EA9C (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ??_GREMOTE_VYSNC_MAPPING_ENTRY@@QEAAPEAXI@Z @ 0x1C02C423C (--_GREMOTE_VYSNC_MAPPING_ENTRY@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall REMOTEVSYNCMAPPING::AddMapping(KSPIN_LOCK *this, struct _LUID *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  DXGADAPTER *v7; // rsi
  int SourceConnectedToTargetInClientVidPn; // edi
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  unsigned int LowPart; // edx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  KSPIN_LOCK v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int v29; // r12d
  struct DXGADAPTER *v30; // rbx
  KSPIN_LOCK v31; // rax
  _QWORD *v32; // rax
  unsigned int v33; // edx
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  DXGADAPTER *v38[2]; // [rsp+40h] [rbp-59h] BYREF
  char v39[8]; // [rsp+50h] [rbp-49h] BYREF
  DXGADAPTER *v40; // [rsp+58h] [rbp-41h]
  char v41; // [rsp+60h] [rbp-39h]
  _QWORD v42[5]; // [rsp+70h] [rbp-29h] BYREF
  char *v43; // [rsp+98h] [rbp-1h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp+7h] BYREF
  char v45; // [rsp+B8h] [rbp+1Fh]
  char v46; // [rsp+108h] [rbp+6Fh] BYREF
  unsigned int v47; // [rsp+110h] [rbp+77h] BYREF
  unsigned int v48; // [rsp+118h] [rbp+7Fh] BYREF

  v38[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v38, a2);
  v7 = v38[0];
  if ( !v38[0] )
  {
    SourceConnectedToTargetInClientVidPn = -1073741585;
    v9 = (_QWORD *)WdLogNewEntry5_WdWarning(v5, v4, v6);
    v9[3] = a2->LowPart;
    v9[4] = a2->HighPart;
    v9[5] = -1073741585LL;
    WdLogEvent5_WdWarning(v9);
    goto LABEL_35;
  }
  v40 = v38[0];
  v41 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v39);
  if ( *((_BYTE *)v7 + 2609) || (v13 = *((_DWORD *)v7 + 50), v7 = v38[0], v13 != 1) || !*((_QWORD *)v38[0] + 337) )
  {
    SourceConnectedToTargetInClientVidPn = -1073741585;
    v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
    v18[3] = v7;
    v18[4] = -1073741585LL;
    goto LABEL_32;
  }
  LowPart = a2[1].LowPart;
  v47 = 0;
  SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(v38[0], LowPart, &v47);
  if ( SourceConnectedToTargetInClientVidPn >= 0 )
  {
    v19 = operator new(0x48uLL, 0x4B677844u, 1, (POOL_TYPE)512);
    v24 = (KSPIN_LOCK)v19;
    if ( v19 )
      v19[7] = 0LL;
    else
      v24 = 0LL;
    if ( !v24 )
    {
      SourceConnectedToTargetInClientVidPn = -1073741801;
      v25 = WdLogNewEntry5_WdLowResource(v21, v20, v22, v23);
      *(_QWORD *)(v25 + 24) = 178LL;
      WdLogEvent5_WdLowResource(v25);
      goto LABEL_33;
    }
    v45 = 0;
    v43 = (char *)(this + 2);
    KeAcquireInStackQueuedSpinLock(this + 2, &LockHandle);
    this[3] = (KSPIN_LOCK)KeGetCurrentThread();
    v45 = 1;
    v42[0] = &v48;
    v42[1] = &v46;
    v48 = 0;
    v46 = 0;
    v42[2] = a2;
    REMOTEVSYNCMAPPING::IterateList__lambda_daaf3f6a0c98c285f3d4af1bfc621455___((_QWORD **)this, (__int64)v42);
    v29 = v47;
    v30 = v38[0];
    if ( v48 >= 0x10 )
    {
      SourceConnectedToTargetInClientVidPn = -1073741756;
      v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
      v32[3] = a2[2];
      v32[4] = -1073741756LL;
    }
    else
    {
      if ( !v46 )
      {
        *(_DWORD *)(v24 + 48) = v47;
        *(_OWORD *)(v24 + 16) = *(_OWORD *)&a2->LowPart;
        *(_OWORD *)(v24 + 32) = *(_OWORD *)&a2[2].LowPart;
        v31 = *this;
        if ( *(KSPIN_LOCK **)(*this + 8) != this )
          __fastfail(3u);
        *(_QWORD *)v24 = v31;
        *(_QWORD *)(v24 + 8) = this;
        *(_QWORD *)(v31 + 8) = v24;
        *this = v24;
LABEL_21:
        if ( (unsigned int)Feature_380934456__private_IsEnabledDeviceUsage()
          && SourceConnectedToTargetInClientVidPn >= 0 )
        {
          DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)(v24 + 56), v30);
          DXGADAPTER::IncrementVSyncWaiter(v30, v29);
        }
        if ( v45 )
        {
          v45 = 0;
          *((_QWORD *)v43 + 1) = 0LL;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
        if ( (unsigned int)Feature_380934456__private_IsEnabledDeviceUsage() )
        {
          if ( SourceConnectedToTargetInClientVidPn >= 0 )
            goto LABEL_33;
        }
        else if ( SourceConnectedToTargetInClientVidPn >= 0 )
        {
          DXGADAPTER::IncrementVSyncWaiter(v30, v29);
          DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)(v24 + 56), v30);
          goto LABEL_33;
        }
        REMOTE_VYSNC_MAPPING_ENTRY::`scalar deleting destructor'((REMOTE_VYSNC_MAPPING_ENTRY *)v24, v33);
        goto LABEL_33;
      }
      SourceConnectedToTargetInClientVidPn = -1073741723;
      v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
      v32[3] = v30;
      v32[4] = a2[1].LowPart;
      v32[5] = a2[2];
      v32[6] = -1073741723LL;
    }
    WdLogEvent5_WdWarning(v32);
    goto LABEL_21;
  }
  SourceConnectedToTargetInClientVidPn = -1073741584;
  v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
  v18[3] = v7;
  v18[4] = a2[1].LowPart;
  v18[5] = -1073741584LL;
LABEL_32:
  WdLogEvent5_WdWarning(v18);
LABEL_33:
  if ( v41 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v39);
LABEL_35:
  DXGADAPTER_REFERENCE::Assign(v38, 0LL);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    McTemplateK0xqppq_EtwWriteTransfer(
      v35,
      v34,
      v36,
      *a2,
      a2[1].LowPart,
      *(_QWORD *)&a2[3],
      *(_QWORD *)&a2[2],
      SourceConnectedToTargetInClientVidPn);
  return (unsigned int)SourceConnectedToTargetInClientVidPn;
}
