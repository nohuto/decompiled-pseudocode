__int64 *__fastcall EtwpNotifyDisallowedGuidChange(_DWORD *a1, __int64 a2, int a3)
{
  int *v3; // r15
  __int64 *result; // rax
  __int64 *v7; // rsi
  struct _KTHREAD *CurrentThread; // rdx
  __int64 *v9; // r12
  int v10; // eax
  volatile signed __int32 *v11; // rdi
  __int64 v12; // r14
  __int64 *v13; // rcx
  char v14; // r11
  __int64 *v15; // r13
  _QWORD *v16; // rsi
  _QWORD *v17; // rax
  __int64 v18; // r12
  __int64 v19; // rcx
  __int64 v20; // r10
  __int64 v22; // r10
  unsigned __int8 v23; // r15
  unsigned __int8 v24; // bl
  bool updated; // al
  bool v26; // bl
  struct _KTHREAD *v27; // rax
  int v28; // [rsp+40h] [rbp-30h] BYREF
  volatile signed __int32 *v29; // [rsp+48h] [rbp-28h] BYREF
  __int64 v30; // [rsp+50h] [rbp-20h]
  __int64 v31; // [rsp+58h] [rbp-18h]
  volatile signed __int32 *v32; // [rsp+60h] [rbp-10h]
  __int64 *v33; // [rsp+68h] [rbp-8h]
  char v36; // [rsp+C8h] [rbp+58h]

  v28 = 0;
  v3 = (int *)a2;
  v29 = 0LL;
  result = EtwpFindGuidEntryByGuid(*(_QWORD *)(a2 + 1096), a1, 0);
  v33 = result;
  v7 = result;
  if ( result )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = result + 51;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(result + 51), 0LL);
    v7[52] = (__int64)KeGetCurrentThread();
    v10 = EtwpBuildNotificationPacket((__int64)v7, 0LL, 0, &v29);
    v11 = v29;
    if ( !v10 )
    {
      *v29 = 3;
      *(_OWORD *)(v11 + 10) = *(_OWORD *)a1;
      *((_DWORD *)v11 + 9) = PsGetCurrentThreadProcessId();
      if ( EtwpIsGuidAllowed((__int64)v3, a1) != (a3 == 0) )
      {
        v12 = 0LL;
        v30 = 0LL;
        if ( !v7[50] )
        {
          v13 = (__int64 *)v7[2];
          if ( v13 != v7 + 2 )
          {
            v12 = (__int64)(v13 - 2);
            v30 = (__int64)(v13 - 2);
          }
        }
        v14 = 0;
        v15 = v7;
        v36 = 0;
        while ( 1 )
        {
          if ( (__int64 *)v15[7] != v15 + 7 )
          {
            v16 = (_QWORD *)v15[7];
            v17 = v15 + 7;
            do
            {
              v18 = (__int64)v16;
              v16 = (_QWORD *)*v16;
              v19 = *(_QWORD *)(v18 + 40);
              if ( v19 )
              {
                if ( v14 )
                {
                  v19 = *(_QWORD *)(v19 + 400);
                  v20 = 103LL;
                }
                else
                {
                  v20 = 101LL;
                }
                v31 = v20;
                if ( !(a3 ? *(_DWORD *)(v19 + 96) == 0 : *(_BYTE *)(v18 + v20) == 0) )
                {
                  if ( EtwpGetEnableInfoIndex(v19, *v3, &v28) )
                  {
                    v23 = 1 << v28;
                    if ( 1 << v28 && (a3 || (v23 & *(_BYTE *)(v18 + v22)) != 0) )
                    {
                      v24 = *(_BYTE *)(v18 + v22);
                      EtwpUpdateRegEntryEnableMask(v18, a2, 1 << v28, 2, v14, a3);
                      v32 = v11;
                      updated = EtwpCalculateUpdateNotification(v18, v23, v24, *(_BYTE *)(v18 + v31), 2, v36, a3, &v29);
                      v11 = v29;
                      v26 = updated;
                      if ( v32 != v29 )
                      {
                        if ( v29 )
                        {
                          EtwpUnreferenceDataBlock(v32);
                        }
                        else
                        {
                          v11 = v32;
                          v29 = v32;
                        }
                      }
                      if ( v26 )
                        EtwpSendDataBlock(v18, (__int64)v11);
                      v14 = v36;
                    }
                    v3 = (int *)a2;
                  }
                  v17 = v15 + 7;
                }
              }
            }
            while ( v16 != v17 );
            v7 = v33;
            v12 = v30;
          }
          if ( v15 != v7 )
          {
            v15[52] = 0LL;
            ExReleasePushLockEx(v15 + 51, 0LL);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            v11 = v29;
          }
          if ( !v12 )
            break;
          v27 = KeGetCurrentThread();
          v36 = 1;
          v15 = (__int64 *)v12;
          --v27->KernelApcDisable;
          ExAcquirePushLockExclusiveEx(v12 + 408, 0LL);
          *(_QWORD *)(v12 + 416) = KeGetCurrentThread();
          v12 = *(_QWORD *)(v12 + 16) - 16LL;
          v30 = v12;
          if ( (__int64 *)v12 == v7 )
          {
            v12 = 0LL;
            v30 = 0LL;
          }
          v11 = v29;
          v14 = 1;
        }
        v9 = v7 + 51;
      }
    }
    if ( v11 )
      EtwpUnreferenceDataBlock(v11);
    v7[52] = 0LL;
    ExReleasePushLockEx(v9, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (__int64 *)EtwpUnreferenceGuidEntry(v7);
  }
  return result;
}
