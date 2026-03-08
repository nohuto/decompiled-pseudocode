/*
 * XREFs of ?REMOTEVSYNCMAPPING_TriggerRemoteVsync@@YAXU_LUID@@IJ_K@Z @ 0x1C000F860
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     _lambda_65e49200310e163fd0a118e331418de0_::operator() @ 0x1C0056C60 (_lambda_65e49200310e163fd0a118e331418de0_--operator().c)
 */

void __fastcall REMOTEVSYNCMAPPING_TriggerRemoteVsync(struct _LUID a1, int a2, int a3, __int64 a4)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  _QWORD *v10; // rbx
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
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
    WdLogSingleEntry1(1LL, 2406LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v12,
          v11,
          v13,
          0,
          2,
          -1,
          (__int64)L"m_pGlobal != NULL",
          2406LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v19 = a1;
  v8 = *(_QWORD *)&DXGGLOBAL::m_pGlobal + 304888LL;
  v22 = a4;
  v21 = a3;
  v20 = a2;
  v9 = *(_QWORD *)&DXGGLOBAL::m_pGlobal + 304904LL;
  v18 = 0;
  v16 = *(_QWORD *)&DXGGLOBAL::m_pGlobal + 304904LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304904LL), &LockHandle);
  *(_QWORD *)(v9 + 8) = KeGetCurrentThread();
  v18 = 1;
  if ( *(_BYTE *)(v8 + 32) )
    goto LABEL_4;
  v10 = *(_QWORD **)v8;
  v15[0] = &v19;
  v15[1] = &v20;
  v15[2] = &v21;
  v15[3] = &v22;
  if ( v10 == (_QWORD *)v8 )
    goto LABEL_4;
  do
  {
    v14 = v10;
    v10 = (_QWORD *)*v10;
  }
  while ( (unsigned __int8)lambda_65e49200310e163fd0a118e331418de0_::operator()(v15, v14) && v10 != (_QWORD *)v8 );
  if ( v18 )
  {
LABEL_4:
    v18 = 0;
    *(_QWORD *)(v16 + 8) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
