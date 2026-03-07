char __fastcall FsRtlpRemoveAndCompleteRHIrp(
        __int64 P,
        __int64 a2,
        int a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned __int16 a7)
{
  __int64 v7; // r12
  int v10; // r14d
  __int64 v12; // rsi
  __int64 v13; // rcx
  char v14; // r15
  __int64 v16; // r8
  int v17; // [rsp+34h] [rbp-BDh] BYREF
  int v18; // [rsp+38h] [rbp-B9h] BYREF
  int v19; // [rsp+3Ch] [rbp-B5h] BYREF
  unsigned int v20; // [rsp+40h] [rbp-B1h] BYREF
  int v21; // [rsp+44h] [rbp-ADh] BYREF
  int v22; // [rsp+48h] [rbp-A9h] BYREF
  _QWORD v23[2]; // [rsp+50h] [rbp-A1h] BYREF
  _BYTE v24[32]; // [rsp+60h] [rbp-91h] BYREF
  int *v25; // [rsp+80h] [rbp-71h]
  __int64 v26; // [rsp+88h] [rbp-69h]
  int *v27; // [rsp+90h] [rbp-61h]
  __int64 v28; // [rsp+98h] [rbp-59h]
  int *v29; // [rsp+A0h] [rbp-51h]
  __int64 v30; // [rsp+A8h] [rbp-49h]
  int *v31; // [rsp+B0h] [rbp-41h]
  __int64 v32; // [rsp+B8h] [rbp-39h]
  int *v33; // [rsp+C0h] [rbp-31h]
  __int64 v34; // [rsp+C8h] [rbp-29h]
  _QWORD *v35; // [rsp+D0h] [rbp-21h]
  __int64 v36; // [rsp+D8h] [rbp-19h]
  int *v37; // [rsp+E0h] [rbp-11h]
  __int64 v38; // [rsp+E8h] [rbp-9h]

  v7 = 0LL;
  v10 = a3;
  if ( (unsigned int)dword_140C03770 > 5 )
  {
    v17 = a7;
    v25 = &v19;
    v33 = &v17;
    v27 = (int *)&v20;
    v35 = v23;
    v18 = *(_DWORD *)(a2 + 144);
    v22 = a6;
    v37 = &v18;
    v19 = a3;
    v29 = &v21;
    v31 = &v22;
    v26 = 4LL;
    v20 = a4;
    v28 = 4LL;
    v21 = a5;
    v30 = 4LL;
    v32 = 4LL;
    v34 = 4LL;
    v23[0] = a2;
    v36 = 8LL;
    v38 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(&dword_140C03770, word_140029DAA, 0LL, 0LL, 9, v24);
  }
  v12 = *(_QWORD *)(P + 16);
  *(_QWORD *)(P + 16) = 0LL;
  *(_BYTE *)(v12 + 69) = KeAcquireQueuedSpinLock(7uLL);
  _InterlockedExchange64((volatile __int64 *)(v12 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v12 + 69));
  FsRtlpOplockDequeueRH(P);
  if ( *(_BYTE *)(v12 + 68) )
  {
    v10 = -1073741536;
    v14 = 0;
    ObfDereferenceObjectWithTag(*(PVOID *)(P + 24), 0x746C6644u);
    if ( *(_QWORD *)(P + 40) )
      FsRtlpClearOwner(a2, P);
    ExFreePoolWithTag((PVOID)P, 0);
  }
  else
  {
    v13 = *(_QWORD *)(v12 + 24);
    *(_QWORD *)(v13 + 16) = 0LL;
    *(_DWORD *)v13 = 1572865;
    v7 = 24LL;
    *(_DWORD *)(v13 + 4) = 3;
    *(_DWORD *)(v13 + 8) = (a4 >> 12) & 7;
    *(_DWORD *)(v13 + 12) = a5;
    if ( (a5 & 2) != 0 )
    {
      *(_DWORD *)(v13 + 16) = a6;
      *(_WORD *)(v13 + 20) = a7;
    }
    if ( (a5 & 1) != 0 )
    {
      *(_DWORD *)(P + 48) = *(_DWORD *)(P + 48) & 0xFF0FFFFF | (a4 != 0 ? 0x100000 : 0x800000);
      FsRtlpOplockEnqueueRH(a2 + 72, P);
      LOBYTE(v16) = 1;
      FsRtlpModifyThreadPriorities(a2, P, v16);
      FsRtlpOplockSendModernAppTermination(a2, P);
    }
    else
    {
      ObfDereferenceObjectWithTag(*(PVOID *)(P + 24), 0x746C6644u);
      if ( *(_QWORD *)(P + 40) )
        FsRtlpClearOwner(a2, P);
      ExFreePoolWithTag((PVOID)P, 0);
    }
    v14 = 1;
  }
  *(_QWORD *)(v12 + 56) = v7;
  *(_DWORD *)(v12 + 48) = v10;
  IofCompleteRequest((PIRP)v12, 1);
  if ( (unsigned int)dword_140C03770 > 5 )
  {
    v25 = &v18;
    v26 = 4LL;
    v27 = (int *)v23;
    v17 = *(_DWORD *)(a2 + 144);
    v29 = &v17;
    v30 = 4LL;
    v18 = v10;
    v23[0] = a2;
    v28 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(&dword_140C03770, word_140029EEA, 0LL, 0LL, 5, v24);
  }
  return v14;
}
