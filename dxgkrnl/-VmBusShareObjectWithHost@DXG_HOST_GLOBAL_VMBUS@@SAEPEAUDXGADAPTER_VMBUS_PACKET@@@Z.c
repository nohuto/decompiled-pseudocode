unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusShareObjectWithHost(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // r14
  struct DXGPROCESS *v4; // rbx
  struct _KTHREAD **v5; // r13
  int v6; // ebx
  char *Src; // rsi
  __int64 v8; // rbx
  unsigned int v9; // edx
  int v10; // r9d
  int EntryType; // eax
  unsigned int v12; // eax
  int v13; // ecx
  __int64 v14; // rcx
  unsigned int v15; // eax
  int v16; // ecx
  struct DXGVAILOBJECT *v17; // rax
  DxgkCompositionObject *v18; // r14
  struct _KPROCESS *v19; // r8
  __int64 v20; // rbx
  struct VMBPACKETCOMPLETION__ *v21; // rcx
  _BYTE v23[8]; // [rsp+58h] [rbp-39h] BYREF
  DXGPUSHLOCK *v24; // [rsp+60h] [rbp-31h]
  int v25; // [rsp+68h] [rbp-29h]
  __int64 v26; // [rsp+70h] [rbp-21h] BYREF
  __int64 v27[4]; // [rsp+78h] [rbp-19h] BYREF
  __int128 v28; // [rsp+98h] [rbp+7h]
  __int128 v29; // [rsp+A8h] [rbp+17h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v3 = v2;
  if ( v2 )
  {
    v4 = (struct DXGPROCESS *)*((_QWORD *)a1 + 11);
    v5 = (struct _KTHREAD **)*((_QWORD *)a1 + 13);
    v29 = 0LL;
    if ( !v4 )
    {
      v6 = -1073741811;
LABEL_41:
      v21 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
      LODWORD(v29) = v6;
      VmBusCompletePacket(v21, &v29, 0x10u);
      LOBYTE(v2) = 1;
      return v2;
    }
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v23, v4);
    Src = (char *)(v3 + 28);
    v8 = (__int64)v4 + 280;
    v9 = (*(_DWORD *)(v3 + 28) >> 6) & 0xFFFFFF;
    if ( v9 >= *(_DWORD *)(v8 + 16)
      || (v10 = *(_DWORD *)(*(_QWORD *)v8 + 16LL * v9 + 8),
          ((*(_DWORD *)(v3 + 28) >> 25) & 0x60) != (*(_BYTE *)(*(_QWORD *)v8 + 16LL * v9 + 8) & 0x60))
      || (v10 & 0x2000) != 0
      || (v10 & 0x1F) == 0 )
    {
      EntryType = 0;
LABEL_38:
      v20 = EntryType;
      WdLogSingleEntry2(2LL, EntryType, *(unsigned int *)Src);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid object type: 0x%I64x 0x%I64x",
        v20,
        *(unsigned int *)Src,
        0LL,
        0LL,
        0LL);
      goto LABEL_39;
    }
    EntryType = HMGRTABLE::GetEntryType(v8, v9);
    if ( EntryType != 11 )
    {
      if ( EntryType != 4 )
        goto LABEL_38;
      goto LABEL_21;
    }
    v12 = (*(_DWORD *)Src >> 6) & 0xFFFFFF;
    if ( v12 < *(_DWORD *)(v8 + 16)
      && ((*(_DWORD *)Src >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v8 + 16LL * v12 + 8) & 0x60)
      && (*(_DWORD *)(*(_QWORD *)v8 + 16LL * v12 + 8) & 0x2000) == 0 )
    {
      v13 = *(_DWORD *)(*(_QWORD *)v8 + 16LL * v12 + 8) & 0x1F;
      if ( v13 )
      {
        if ( v13 == 11 )
        {
          v14 = *(_QWORD *)(*(_QWORD *)v8 + 16LL * v12);
          if ( v14 && (*(_DWORD *)(v14 + 72) & 2) != 0 )
          {
            *(_DWORD *)(*(_QWORD *)(v14 + 32) + 284LL) |= 0x20u;
LABEL_21:
            v15 = (*(_DWORD *)(v3 + 24) >> 6) & 0xFFFFFF;
            if ( v15 < *(_DWORD *)(v8 + 16)
              && ((*(_DWORD *)(v3 + 24) >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v8 + 16LL * v15 + 8) & 0x60)
              && (*(_DWORD *)(*(_QWORD *)v8 + 16LL * v15 + 8) & 0x2000) == 0 )
            {
              v16 = *(_DWORD *)(*(_QWORD *)v8 + 16LL * v15 + 8) & 0x1F;
              if ( v16 )
              {
                if ( v16 == 3 )
                {
                  if ( *(_QWORD *)(*(_QWORD *)v8 + 16LL * v15) )
                  {
                    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
                    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23, v5 + 8, 0);
                    DXGPUSHLOCK::AcquireExclusive(v24);
                    v25 = 2;
                    v17 = DXGVIRTUALMACHINE::ReferenceVailObject(v5);
                    v18 = v17;
                    if ( v17 )
                    {
                      v19 = (struct _KPROCESS *)*((_QWORD *)v17 + 12);
                      if ( v19 )
                      {
                        v26 = 0LL;
                        v27[0] = 48LL;
                        memset(&v27[1], 0, 24);
                        v28 = 0LL;
                        v6 = DxgkShareObjectsInternal(0LL, 0, v19, 1u, Src, (__int64)v27, 0x10000000u, &v26, 0LL);
                        if ( v6 >= 0 )
                        {
                          *((_QWORD *)&v29 + 1) = v26;
                        }
                        else
                        {
                          WdLogSingleEntry1(2LL, *(unsigned int *)Src);
                          DxgkLogInternalTriageEvent(
                            0LL,
                            0x40000,
                            -1,
                            (__int64)L"Fail to create NT shared sync object, handle: 0x%I64x",
                            *(unsigned int *)Src,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                        }
                      }
                      else
                      {
                        WdLogSingleEntry1(2LL, 8157LL);
                        DxgkLogInternalTriageEvent(
                          0LL,
                          0x40000,
                          -1,
                          (__int64)L"Vail process is not registered",
                          8157LL,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                        v6 = -1073741823;
                      }
                      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
                      DxgkCompositionObject::Release(v18);
                      goto LABEL_41;
                    }
                    WdLogSingleEntry1(2LL, 8150LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"Failed to reference vail object",
                      8150LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    v6 = -1073741823;
                    goto LABEL_40;
                  }
                }
                else
                {
                  WdLogSingleEntry1(2LL, 267LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Handle type mismatch",
                    267LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
              }
            }
            WdLogSingleEntry2(2LL, *(unsigned int *)(v3 + 24), 8139LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Invalid device handle: 0x%I64x",
              *(unsigned int *)(v3 + 24),
              8139LL,
              0LL,
              0LL,
              0LL);
LABEL_39:
            v6 = -1073741811;
LABEL_40:
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
            goto LABEL_41;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    WdLogSingleEntry1(2LL, *(unsigned int *)Src);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid sync object handle: 0x%I64x",
      *(unsigned int *)Src,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_39;
  }
  return v2;
}
