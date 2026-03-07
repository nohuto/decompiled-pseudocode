unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusLogEvent(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v16; // [rsp+20h] [rbp-69h]
  __int64 v17; // [rsp+28h] [rbp-61h]
  __int64 v18; // [rsp+30h] [rbp-59h]
  __int64 v19; // [rsp+38h] [rbp-51h]
  int v20; // [rsp+80h] [rbp-9h] BYREF
  int v21; // [rsp+84h] [rbp-5h] BYREF
  int v22; // [rsp+88h] [rbp-1h] BYREF
  __int64 v23; // [rsp+90h] [rbp+7h] BYREF
  unsigned __int16 *v24; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v25; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+1Fh] BYREF
  __int64 v27; // [rsp+B0h] [rbp+27h] BYREF
  _BYTE v28[8]; // [rsp+B8h] [rbp+2Fh] BYREF
  DXGPUSHLOCK *v29; // [rsp+C0h] [rbp+37h]
  int v30; // [rsp+C8h] [rbp+3Fh]
  int v31; // [rsp+F0h] [rbp+67h] BYREF
  int v32; // [rsp+F8h] [rbp+6Fh] BYREF
  int v33; // [rsp+100h] [rbp+77h] BYREF
  int v34; // [rsp+108h] [rbp+7Fh] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v29);
  v2 = *((_QWORD *)a1 + 10);
  v30 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v3 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
    v4 = v3;
    if ( v3 )
    {
      v5 = *(int *)(v3 + 32);
      v6 = *(unsigned int *)(v4 + 28);
      if ( (int)v5 >= 0 )
      {
        WdLogSingleEntry2(4LL, *(int *)(v4 + 24), v6);
      }
      else
      {
        WdLogSingleEntry3(2LL, v5, *(int *)(v4 + 24), (unsigned int)v6);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Status: 0x%I64x, Scenario: 0x%I64x, EventId: 0x%I64x",
          *(int *)(v4 + 32),
          *(int *)(v4 + 24),
          *(unsigned int *)(v4 + 28),
          0LL,
          0LL);
      }
      if ( bTracingEnabled )
      {
        v8 = *(unsigned int *)(v4 + 32);
        if ( (int)v8 >= 0 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000) != 0 )
          {
            v14 = *((_QWORD *)a1 + 10);
            LODWORD(v19) = *(_DWORD *)(v4 + 28);
            LODWORD(v18) = *(_DWORD *)(v4 + 24);
            LODWORD(v17) = *(_DWORD *)(v4 + 32);
            LODWORD(v16) = *(_DWORD *)(v14 + 24);
            McTemplateK0pqqqqxx_EtwWriteTransfer(
              v8,
              &VirtualGpuGuestEvent,
              v7,
              *(_QWORD *)(v14 + 16),
              v16,
              v17,
              v18,
              v19,
              *(_QWORD *)(v4 + 40),
              *(_QWORD *)(v4 + 48));
          }
        }
        else
        {
          v9 = *((_QWORD *)a1 + 10);
          v10 = *(_QWORD *)(v9 + 16);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
          {
            LODWORD(v19) = *(_DWORD *)(v4 + 28);
            LODWORD(v18) = *(_DWORD *)(v4 + 24);
            LODWORD(v17) = *(_DWORD *)(v4 + 32);
            LODWORD(v16) = *(_DWORD *)(v9 + 24);
            McTemplateK0pqqqqxx_EtwWriteTransfer(
              v8,
              &VirtualGpuGuestEventFailure,
              v7,
              *(_QWORD *)(v9 + 16),
              v16,
              v17,
              v18,
              v19,
              *(_QWORD *)(v4 + 40),
              *(_QWORD *)(v4 + 48));
          }
          if ( (unsigned int)dword_1C013A918 > 5 && tlgKeywordOn((__int64)&dword_1C013A918, 0x400000008000LL) )
          {
            v31 = *(_DWORD *)(v10 + 424);
            v32 = *(_DWORD *)(v10 + 420);
            v33 = *(_DWORD *)(v10 + 416);
            v34 = *(_DWORD *)(v10 + 412);
            v23 = *(_QWORD *)(v10 + 404);
            v24 = *(unsigned __int16 **)(v10 + 1744);
            v25 = *(_QWORD *)(v4 + 48);
            v26 = *(_QWORD *)(v4 + 40);
            v20 = *(_DWORD *)(v4 + 32);
            v21 = *(_DWORD *)(v4 + 28);
            v22 = *(_DWORD *)(v4 + 24);
            v27 = 0x2000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v11,
              byte_1C00A012D,
              v12,
              v13,
              (__int64)&v27,
              (__int64)&v22,
              (__int64)&v21,
              (__int64)&v20,
              (__int64)&v26,
              (__int64)&v25,
              &v24,
              (__int64)&v23,
              (__int64)&v34,
              (__int64)&v33,
              (__int64)&v32,
              (__int64)&v31);
          }
        }
      }
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 6181LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      6181LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
  return 0;
}
