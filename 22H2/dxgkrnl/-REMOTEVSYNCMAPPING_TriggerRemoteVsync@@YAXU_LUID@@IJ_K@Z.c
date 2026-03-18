/*
 * XREFs of ?REMOTEVSYNCMAPPING_TriggerRemoteVsync@@YAXU_LUID@@IJ_K@Z @ 0x1C000C8F0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_6c593f0663b4833716b1eb40f385246b_::operator() @ 0x1C00267DC (_lambda_6c593f0663b4833716b1eb40f385246b_--operator().c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0043074 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall REMOTEVSYNCMAPPING_TriggerRemoteVsync(struct _LUID a1, int a2, int a3, __int64 a4)
{
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // rdi
  __int64 v12; // rbx
  _QWORD *v13; // rbx
  _QWORD *v14; // rdx
  _QWORD v15[5]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v16; // [rsp+88h] [rbp-1h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp+7h] BYREF
  char v18; // [rsp+A8h] [rbp+1Fh]
  struct _LUID v19; // [rsp+F0h] [rbp+67h] BYREF
  int v20; // [rsp+F8h] [rbp+6Fh] BYREF
  int v21; // [rsp+100h] [rbp+77h] BYREF
  __int64 v22; // [rsp+108h] [rbp+7Fh] BYREF

  if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
  {
    WdLogSingleEntry1(1LL, 2407LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v9,
          v8,
          v10,
          0,
          2,
          -1,
          (__int64)L"m_pGlobal != NULL",
          2407LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v19 = a1;
  v11 = *(_QWORD *)&DXGGLOBAL::m_pGlobal + 304888LL;
  v22 = a4;
  v21 = a3;
  v20 = a2;
  v12 = *(_QWORD *)&DXGGLOBAL::m_pGlobal + 304904LL;
  v18 = 0;
  v16 = *(_QWORD *)&DXGGLOBAL::m_pGlobal + 304904LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304904LL), &LockHandle);
  *(_QWORD *)(v12 + 8) = KeGetCurrentThread();
  v18 = 1;
  if ( *(_BYTE *)(v11 + 32) )
    goto LABEL_10;
  v13 = *(_QWORD **)v11;
  v15[0] = &v19;
  v15[1] = &v20;
  v15[2] = &v21;
  v15[3] = &v22;
  if ( v13 == (_QWORD *)v11 )
    goto LABEL_10;
  do
  {
    v14 = v13;
    v13 = (_QWORD *)*v13;
  }
  while ( (unsigned __int8)lambda_6c593f0663b4833716b1eb40f385246b_::operator()(v15, v14) && v13 != (_QWORD *)v11 );
  if ( v18 )
  {
LABEL_10:
    v18 = 0;
    *(_QWORD *)(v16 + 8) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
