char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusOpenResource(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // r15
  unsigned int v4; // edi
  void *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // eax
  _DWORD *v10; // r14
  unsigned __int64 v11; // rax
  void *v12; // r12
  __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // r9
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // eax
  const wchar_t *v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // rcx
  _QWORD v28[14]; // [rsp+50h] [rbp-79h] BYREF
  _BYTE v29[8]; // [rsp+C0h] [rbp-9h] BYREF
  DXGPUSHLOCK *v30; // [rsp+C8h] [rbp-1h]
  int v31; // [rsp+D0h] [rbp+7h]
  _BYTE v32[72]; // [rsp+D8h] [rbp+Fh] BYREF
  unsigned int v33; // [rsp+130h] [rbp+67h]
  void *v34; // [rsp+138h] [rbp+6Fh]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v30);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 1;
  v4 = 0;
  v31 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v34 = 0LL;
    v6 = 0LL;
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>((__int64)a1);
    v8 = v7;
    if ( !v7 )
      goto LABEL_3;
    v9 = *(_DWORD *)(v7 + 36);
    if ( v9 > 0x8000 )
      goto LABEL_3;
    v33 = 4 * v9 + 8;
    v10 = (_DWORD *)operator new[](v33, 0x4B677844u, 64LL);
    if ( !v10 )
      goto LABEL_3;
    v11 = 80LL * *(unsigned int *)(v8 + 36);
    if ( !is_mul_ok(*(unsigned int *)(v8 + 36), 0x50uLL) )
      v11 = -1LL;
    v12 = (void *)operator new[](v11, 0x4B677844u, 256LL);
    if ( !v12 )
      goto LABEL_11;
    v14 = *(_DWORD *)(v8 + 40);
    if ( v14 )
    {
      if ( v14 > 0x20000 )
      {
        LODWORD(v13) = -1073741811;
        goto LABEL_37;
      }
      v34 = (void *)operator new[](*(unsigned int *)(v8 + 40), 0x4B677844u, 256LL);
      v6 = v34;
      if ( !v34 )
      {
LABEL_11:
        LODWORD(v13) = -1073741801;
LABEL_37:
        v10[1] = v13;
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v10, v33);
        operator delete(v10);
        operator delete(v12);
        operator delete(v34);
        goto LABEL_4;
      }
    }
    if ( *(_BYTE *)(v8 + 28) )
    {
      memset(v28, 0, 0x68uLL);
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
        (DXGHANDLETABLELOCKSHARED *)v32,
        *((struct DXGPROCESS **)a1 + 12));
      v15 = *((_QWORD *)a1 + 12);
      v16 = (*(_DWORD *)(v8 + 32) >> 6) & 0xFFFFFF;
      if ( v16 >= *(_DWORD *)(v15 + 296) )
        goto LABEL_23;
      v17 = *(_QWORD *)(v15 + 280);
      if ( ((*(_DWORD *)(v8 + 32) >> 25) & 0x60) != (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0x60) )
        goto LABEL_23;
      if ( (*(_DWORD *)(v17 + 16LL * v16 + 8) & 0x2000) != 0 )
        goto LABEL_23;
      v18 = *(_DWORD *)(v17 + 16LL * v16 + 8) & 0x1F;
      if ( !v18 )
        goto LABEL_23;
      if ( v18 != 13 )
      {
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_23:
        WdLogSingleEntry1(2LL, *(unsigned int *)(v8 + 32));
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid shared object handle: 0x%I64x",
          *(unsigned int *)(v8 + 32),
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v13) = -1073741811;
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
        goto LABEL_37;
      }
      v19 = *(_QWORD *)(v17 + 16LL * v16);
      if ( !v19 || *(_DWORD *)v19 != 4 || !*(_QWORD *)(v19 + 16) )
        goto LABEL_23;
      v28[1] = *(_QWORD *)(v19 + 16);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
      LODWORD(v28[0]) = *(_DWORD *)(v8 + 24);
      LODWORD(v28[2]) = *(_DWORD *)(v8 + 36);
      LODWORD(v28[8]) = *(_DWORD *)(v8 + 40);
      v28[3] = v12;
      v28[9] = v6;
      v21 = DxgkOpenResourceFromNtHandleInternal((ULONG64)v28, 0LL, v20);
      v13 = v21;
      if ( v21 >= 0 )
      {
        *v10 = v28[10];
        if ( *(_DWORD *)(v8 + 36) )
        {
          do
          {
            v23 = v4++;
            v10[v23 + 2] = *((_DWORD *)v12 + 20 * v23);
          }
          while ( v4 < *(_DWORD *)(v8 + 36) );
        }
        goto LABEL_37;
      }
      WdLogSingleEntry1(2LL, v21);
      v22 = L"DxgkOpenResourceFromNtHandle failed: 0x%I64x";
    }
    else
    {
      memset(v28, 0, 0x48uLL);
      LODWORD(v28[0]) = *(_DWORD *)(v8 + 24);
      HIDWORD(v28[0]) = *(_DWORD *)(v8 + 32);
      LODWORD(v28[1]) = *(_DWORD *)(v8 + 36);
      LODWORD(v28[8]) = *(_DWORD *)(v8 + 40);
      v28[2] = v12;
      v28[7] = v6;
      v26 = DxgkOpenResource((ULONG64)v28, v24, v25);
      v13 = v26;
      if ( v26 >= 0 )
      {
        *v10 = HIDWORD(v28[8]);
        if ( *(_DWORD *)(v8 + 36) )
        {
          do
          {
            v27 = v4++;
            v10[v27 + 2] = *((_DWORD *)v12 + 20 * v27);
          }
          while ( v4 < *(_DWORD *)(v8 + 36) );
        }
        goto LABEL_37;
      }
      WdLogSingleEntry1(2LL, v26);
      v22 = L"DxgkOpenResource failed: 0x%I64x";
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v22, v13, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_37;
  }
  WdLogSingleEntry1(2LL, 1794LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    1794LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_3:
  v3 = 0;
LABEL_4:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
  return v3;
}
