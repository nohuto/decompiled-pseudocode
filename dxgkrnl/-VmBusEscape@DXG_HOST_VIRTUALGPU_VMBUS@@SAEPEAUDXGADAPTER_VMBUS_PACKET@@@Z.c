char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusEscape(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // r14
  char v4; // di
  _DWORD *v5; // rax
  int *v6; // rsi
  __int64 v8; // r8
  __int64 v9; // rax
  const wchar_t *v10; // r9
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // [rsp+30h] [rbp-11h]
  char v15[8]; // [rsp+58h] [rbp+17h] BYREF
  DXGPUSHLOCK *v16; // [rsp+60h] [rbp+1Fh]
  int v17; // [rsp+68h] [rbp+27h]
  _DWORD v18[4]; // [rsp+70h] [rbp+2Fh] BYREF
  void *v19; // [rsp+80h] [rbp+3Fh]
  unsigned int v20; // [rsp+88h] [rbp+47h]
  int v21; // [rsp+8Ch] [rbp+4Bh]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v16);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 1;
  v4 = 0;
  v17 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    WdLogSingleEntry1(2LL, 5018LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      5018LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_8:
    v3 = 0;
    goto LABEL_9;
  }
  v5 = (_DWORD *)CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
  if ( !v5 )
    goto LABEL_8;
  v6 = v5 + 8;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 153LL) && (*v6 || (v5[9] & 0x40) == 0) )
  {
    WdLogSingleEntry1(3LL, *v6);
    goto LABEL_8;
  }
  v8 = *((unsigned int *)a1 + 36);
  if ( v8 - 55 < (unsigned __int64)(unsigned int)v5[10] )
  {
    WdLogSingleEntry1(2LL, (unsigned int)v8);
    v9 = *((unsigned int *)a1 + 36);
    v10 = L"Invalid packet size 0x%I64x";
    v14 = 0LL;
LABEL_13:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, v9, v14, 0LL, 0LL, 0LL);
    goto LABEL_8;
  }
  v11 = *v6;
  if ( (unsigned int)v11 >= 2 && (_DWORD)v11 != 3 && (_DWORD)v11 != 8 && (unsigned int)(v11 - 28) >= 2 )
  {
    WdLogSingleEntry2(2LL, *v6, 5050LL);
    v9 = *v6;
    v10 = L"Unsupported escape type 0x%I64x";
    v14 = 5050LL;
    goto LABEL_13;
  }
  v18[0] = v5[6];
  v18[3] = v5[9];
  v18[1] = v5[7];
  v21 = v5[11];
  v18[2] = *v6;
  v20 = v5[10];
  v19 = v5 + 12;
  v12 = DxgkEscape((__int64)v18, (__int64)v5, v11);
  if ( v12 < 0 )
  {
    v13 = v12;
    WdLogSingleEntry1(2LL, v12);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkEscapeInternal failed: 0x%I64x",
      v13,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_10;
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v19, v20);
LABEL_9:
  v4 = v3;
LABEL_10:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  return v4;
}
