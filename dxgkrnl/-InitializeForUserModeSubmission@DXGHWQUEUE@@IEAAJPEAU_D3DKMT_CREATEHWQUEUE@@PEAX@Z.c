/*
 * XREFs of ?InitializeForUserModeSubmission@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C0315730
 * Callers:
 *     ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C0314F30 (-Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0018CC0 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0051A38 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?DdiCreateHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATEHWQUEUE@@@Z @ 0x1C02C05A4 (-DdiCreateHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATEHWQUEUE@@@Z.c)
 *     ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x1C031E10C (-CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z.c)
 */

__int64 __fastcall DXGHWQUEUE::InitializeForUserModeSubmission(
        DXGHWQUEUE *this,
        struct _D3DKMT_CREATEHWQUEUE *a2,
        void *a3)
{
  __int64 v4; // rdx
  unsigned int *v7; // r8
  __int64 v8; // r10
  __int64 result; // rax
  UINT Value; // ecx
  UINT PrivateDriverDataSize; // r9d
  int v12; // eax
  __int64 v13; // rdi
  int v14; // eax
  int v15; // eax
  __int64 v16; // r8
  struct _DXGKARG_CREATEHWQUEUE v17; // [rsp+50h] [rbp-38h] BYREF

  v4 = *((_QWORD *)this + 2);
  v7 = (unsigned int *)(v4 + 392);
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 16LL) + 16LL) + 2808LL)
                 + 344LL * *(unsigned int *)(v4 + 400)
                 + 32);
  if ( !v8 || (*(_BYTE *)(74LL * *v7 + v8 + 68) & 8) == 0 )
  {
    WdLogSingleEntry2(2LL, v4, *v7);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot create UserModeSubmission capable HWQueue on DXGCONTEXT 0x%I64x, because Node Ordinal %u does not "
                "support UserModeSubmission",
      *((_QWORD *)this + 2),
      *(unsigned int *)(*((_QWORD *)this + 2) + 392LL),
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  *((_BYTE *)this + 140) = 1;
  Value = a2->Flags.Value;
  PrivateDriverDataSize = a2->PrivateDriverDataSize;
  v17.Flags.Value = Value;
  v17.PrivateDriverDataSize = PrivateDriverDataSize;
  v17.hHwQueue = this;
  v17.pPrivateDriverData = a3;
  memset(&v17.hHwQueueProgressFence, 0, 24);
  if ( (*(_DWORD *)(v4 + 404) & 4) != 0 || *(_BYTE *)(*(_QWORD *)(v4 + 16) + 1898LL) )
    v17.Flags.Value = Value | 1;
  if ( (Value & 8) == 0 )
  {
    v12 = ADAPTER_RENDER::DdiCreateHwQueue(
            *(ADAPTER_RENDER **)(*(_QWORD *)(v4 + 16) + 16LL),
            *(void **)(v4 + 184),
            &v17);
    v13 = v12;
    if ( v12 < 0 )
    {
      if ( v12 != -1073741822 )
      {
        WdLogSingleEntry1(2LL, v12);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DdiCreateHwQueue() failed with status 0x%I64d",
          v13,
          0LL,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v13;
      }
      *((_QWORD *)this + 4) = 153LL;
    }
    else
    {
      *((_QWORD *)this + 4) = v17.hHwQueue;
    }
LABEL_17:
    v14 = DXGPROCESS::AllocHandleSafe(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 40LL),
            (__int64)this,
            0xFu);
    *((_DWORD *)this + 6) = v14;
    if ( v14 )
    {
      v15 = (*(__int64 (__fastcall **)(DXGHWQUEUE *, _QWORD, struct _D3DKMT_CREATEHWQUEUE *, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 736LL) + 8LL) + 232LL))(
              this,
              *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
              a2,
              (char *)this + 40);
      LODWORD(v13) = v15;
      if ( v15 >= 0 )
      {
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            McTemplateK0ppp_EtwWriteTransfer(
              (REGHANDLE *)&DxgkControlGuid_Context,
              &EventCreateHwQueue,
              v16,
              *((_QWORD *)this + 2),
              *((unsigned int *)this + 6),
              this);
        }
      }
      else
      {
        WdLogSingleEntry2(3LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), v15);
      }
    }
    else
    {
      LODWORD(v13) = -1073741801;
      WdLogSingleEntry2(3LL, this, -1073741801LL);
    }
    return (unsigned int)v13;
  }
  if ( (*(_DWORD *)(v4 + 404) & 0x20) == 0 )
  {
    WdLogSingleEntry1(2LL, 300LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The HW queue must specify NoKmdAccess flag",
      300LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  result = CheckNoKmdAccessPrivateData(PrivateDriverDataSize, a3, 0xFF000005);
  if ( (int)result >= 0 )
    goto LABEL_17;
  return result;
}
