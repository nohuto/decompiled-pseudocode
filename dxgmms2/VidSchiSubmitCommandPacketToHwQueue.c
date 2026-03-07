void __fastcall VidSchiSubmitCommandPacketToHwQueue(struct _VIDSCH_QUEUE_PACKET *a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // r14
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  VIDMM_DEVICE *v14; // rcx
  _QWORD v15[4]; // [rsp+40h] [rbp-38h] BYREF
  __int16 v16; // [rsp+60h] [rbp-18h]

  v1 = (_QWORD *)*((_QWORD *)a1 + 12);
  v3 = v1[5];
  v4 = *(_QWORD *)(v3 + 16);
  v5 = *(_QWORD *)(v3 + 8);
  v6 = *(_QWORD *)(v4 + 24);
  VidSchiEnsureVSyncEnabled(a1, v5);
  v16 = 0;
  v15[0] = v6 + 1728;
  AcquireSpinLock::Acquire((Acquire *)v15);
  v7 = *((_DWORD *)a1 + 12);
  if ( v7 )
  {
    if ( v7 == 8 )
    {
      v8 = *((_QWORD *)a1 + 36);
      v9 = v1[7];
      v1[9] = v8;
      *(_QWORD *)(v9 + 88) = v8;
    }
  }
  else
  {
    v10 = *((_QWORD *)a1 + 96);
    v11 = 3LL * *((unsigned int *)a1 + 194);
    v1[v11 + 9] = v10;
    *(_QWORD *)(v1[v11 + 7] + 88LL) = v10;
    v12 = v1[13];
    if ( v12 && *((_DWORD *)a1 + 194) == 1 )
      *(_QWORD *)(v12 + 88) = *((_QWORD *)a1 + 102);
    ++*(_QWORD *)(v5 + 1592);
  }
  *((_QWORD *)a1 + 14) = ++v1[17];
  VidSchiProfilePerformanceTick(4LL, v6, v4, 0LL, 0LL, (__int64)a1, 0LL, 0LL);
  VidSchiInsertCommandToHwQueue(a1);
  AcquireSpinLock::Release((AcquireSpinLock *)v15);
  v13 = *(_QWORD *)(v5 + 8);
  if ( v13 )
  {
    v14 = *(VIDMM_DEVICE **)(v13 + 792);
    if ( v14 )
      VIDMM_DEVICE::EnsureSchedulable(v14, 1);
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v15);
}
