unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusOpenAdapter(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r15
  int v6; // r12d
  __int64 v7; // rax
  char v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rbx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  __int64 v13; // rsi
  int v14; // eax
  unsigned int v15; // eax
  DXGPROCESS *v16; // rcx
  void *KmdProcessHandle; // rax
  int v18; // ecx
  __int64 v19; // r8
  struct VMBPACKETCOMPLETION__ *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v27; // [rsp+28h] [rbp-E0h]
  __int64 v28; // [rsp+30h] [rbp-D8h]
  __int64 v29; // [rsp+38h] [rbp-D0h]
  unsigned int v30; // [rsp+88h] [rbp-80h] BYREF
  int v31; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v32; // [rsp+90h] [rbp-78h] BYREF
  int v33; // [rsp+94h] [rbp-74h] BYREF
  int v34; // [rsp+98h] [rbp-70h] BYREF
  int v35; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v36; // [rsp+A0h] [rbp-68h] BYREF
  int v37; // [rsp+A4h] [rbp-64h] BYREF
  int v38; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int16 *v39; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v40; // [rsp+B8h] [rbp-50h] BYREF
  _DXGKARG_SETVIRTUALMACHINEDATA v41; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v42[8]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v43; // [rsp+E0h] [rbp-28h]
  char v44; // [rsp+E8h] [rbp-20h]
  _BYTE v45[8]; // [rsp+F0h] [rbp-18h] BYREF
  DXGPUSHLOCK *v46; // [rsp+F8h] [rbp-10h]
  int v47; // [rsp+100h] [rbp-8h]
  unsigned __int16 *v48; // [rsp+108h] [rbp+0h] BYREF
  int v49; // [rsp+110h] [rbp+8h]
  int v50; // [rsp+114h] [rbp+Ch]

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  v5 = v2;
  if ( v2 )
  {
    v6 = 0;
    v7 = *((_QWORD *)a1 + 12);
    v8 = 0;
    v9 = *((_QWORD *)a1 + 10);
    v30 = 0;
    v10 = *(_QWORD *)(v7 + 608);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000) != 0 )
      McTemplateK0pqqq_EtwWriteTransfer(v3, &OpenVirtualGpuStart, v4, *(_QWORD *)(v9 + 16), *(_DWORD *)(v9 + 24), 0, 0);
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v45, (struct _KTHREAD **)(v9 + 248), 0);
    DXGPUSHLOCK::AcquireExclusive(v46);
    v47 = 2;
    v43 = *(_QWORD *)(v9 + 16);
    v44 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v42);
    v11 = *(_DWORD *)(v5 + 24);
    if ( v11 > 0x2A || (v12 = *(_DWORD *)(v5 + 28), v12 < 0x10) || v11 < v12 )
    {
      WdLogSingleEntry4(2LL, 42LL, 16LL, *(unsigned int *)(v5 + 24), *(unsigned int *)(v5 + 28));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VM bus interface mismatch: 0x%I64x, 0x%I64x, 0x%I64x, 0x%I64x",
        42LL,
        16LL,
        *(unsigned int *)(v5 + 24),
        *(unsigned int *)(v5 + 28),
        0LL);
      LODWORD(v13) = -1073741637;
      v6 = 9;
    }
    else if ( *(_BYTE *)(v9 + 173) )
    {
      WdLogSingleEntry1(2LL, 5499LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Adapter is already opened by the guest",
        5499LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v13) = -1073741811;
      v6 = 10;
    }
    else
    {
      *(_DWORD *)(v10 + 392) = v11;
      if ( *(_DWORD *)(*(_QWORD *)(v9 + 16) + 200LL) == 1 )
      {
        v14 = DXGADAPTER::CreateHandle(*(DXGADAPTER **)(v9 + 16), *(struct DXGPROCESS **)(v9 + 96), &v30);
        v13 = v14;
        if ( v14 < 0 )
        {
          WdLogSingleEntry1(2LL, v14);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"CreateHandle failed: 0x%I64x",
            v13,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v13) = -1073741823;
          v6 = 13;
        }
        else
        {
          *(_BYTE *)(v9 + 173) = 1;
          if ( *(_DWORD *)(v5 + 24) > 0x10u )
          {
            v15 = *((_DWORD *)a1 + 36);
            if ( v15 < 0x28 )
            {
              WdLogSingleEntry1(2LL, v15);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Invalid command length: 0x%I64x",
                *((unsigned int *)a1 + 36),
                0LL,
                0LL,
                0LL,
                0LL);
              LODWORD(v13) = -1073741811;
              v6 = 12;
            }
            *(_QWORD *)(v9 + 344) = *(_QWORD *)(v5 + 32);
          }
          *(_QWORD *)&v41.Flags.0 = 0LL;
          v16 = (DXGPROCESS *)*((_QWORD *)a1 + 12);
          v41.pVmGuid = (GUID *)(v10 + 288);
          KmdProcessHandle = DXGPROCESS::GetKmdProcessHandle(v16, *(_DWORD *)(*(_QWORD *)(v9 + 16) + 240LL));
          v18 = *(_DWORD *)(v10 + 396);
          v41.hKmdVmWorkerProcess = KmdProcessHandle;
          v41.Flags.Value = v41.Flags.Value & 0xFFFFFFFC | *(_BYTE *)(v10 + 336) & 1 | (2 * (v18 & 1));
          ADAPTER_RENDER::DdiSetVirtualMachineData(*(ADAPTER_RENDER **)(*(_QWORD *)(v9 + 16) + 2928LL), &v41, v19);
        }
      }
      else
      {
        LODWORD(v13) = -1073741130;
        v6 = 11;
      }
    }
    if ( *(_DWORD *)(v5 + 24) <= 0x10u )
    {
      if ( (int)v13 < 0 )
      {
        WdLogSingleEntry1(2LL, (int)v13);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"CreateHandle failed: 0x%I64x",
          (int)v13,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v30, 4u);
        v8 = 1;
      }
    }
    else
    {
      v20 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
      v48 = (unsigned __int16 *)__PAIR64__(v13, v30);
      v49 = 42;
      v50 = 16;
      VmBusCompletePacket(v20, &v48, 0x10u);
      v8 = 1;
    }
    v48 = *(unsigned __int16 **)(*(_QWORD *)(v9 + 16) + 404LL);
    if ( (unsigned int)dword_1C013A918 > 5 && tlgKeywordOn((__int64)&dword_1C013A918, 0x400000008000LL) )
    {
      v31 = *(_DWORD *)(v23 + 424);
      v32 = *(_DWORD *)(v23 + 420);
      v33 = *(_DWORD *)(v23 + 416);
      v34 = *(_DWORD *)(v23 + 412);
      v24 = *(_QWORD *)(v9 + 104);
      v35 = 42;
      v25 = *(unsigned int *)(v24 + 392);
      v39 = v48;
      v48 = *(unsigned __int16 **)(v23 + 1744);
      v36 = v25;
      v37 = v13;
      v38 = v6;
      v40 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v25,
        byte_1C00A01D8,
        v22,
        v23,
        (__int64)&v40,
        (__int64)&v38,
        (__int64)&v37,
        &v48,
        (__int64)&v39,
        (__int64)&v36,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v31);
    }
    if ( bTracingEnabled )
    {
      if ( (int)v13 < 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
      {
        LODWORD(v29) = v6;
        LODWORD(v28) = v13;
        LODWORD(v27) = *(_DWORD *)(v9 + 24);
        McTemplateK0pqqq_EtwWriteTransfer(v21, &OpenVirtualGpuFailed, v22, *(_QWORD *)(v9 + 16), v27, v28, v29);
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000) != 0 )
      {
        LODWORD(v29) = v6;
        LODWORD(v28) = v13;
        LODWORD(v27) = *(_DWORD *)(v9 + 24);
        McTemplateK0pqqq_EtwWriteTransfer(v21, &OpenVirtualGpuEnd, v22, *(_QWORD *)(v9 + 16), v27, v28, v29);
      }
    }
    if ( v44 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v42);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v45);
    LOBYTE(v2) = v8;
  }
  return v2;
}
