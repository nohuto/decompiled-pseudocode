void __fastcall DXGGLOBAL::SendWnfNotificationToVmProcessWorkItem(char *a1)
{
  struct DXGGLOBAL *Global; // rax
  volatile signed __int32 *v3; // rbp
  _QWORD **v4; // r12
  _QWORD *v5; // rdi
  struct _KTHREAD **v6; // r15
  struct _KTHREAD **i; // r14
  struct _KTHREAD **v8; // r13
  struct _KTHREAD *v9; // rcx
  int v10; // eax
  __int64 v11; // rbx
  char v12[8]; // [rsp+50h] [rbp-48h] BYREF
  DXGPUSHLOCK *v13; // [rsp+58h] [rbp-40h]
  int v14; // [rsp+60h] [rbp-38h]
  char *v15; // [rsp+A0h] [rbp+8h]

  if ( RtlCompareMemory(a1 + 80, &WNF_DX_VIDMM_TRIM_NOTIFICATION, 8uLL) == 8 )
  {
    Global = DXGGLOBAL::GetGlobal();
    v3 = (volatile signed __int32 *)((char *)Global + 488);
    v15 = (char *)Global + 488;
    v4 = (_QWORD **)((char *)Global + 1720);
    DXGPUSHLOCK::AcquireShared((struct DXGGLOBAL *)((char *)Global + 488));
    v5 = *v4;
    if ( *v4 != v4 )
    {
      do
      {
        v6 = (struct _KTHREAD **)(v5 - 1);
        if ( v5 - 1 == *((_QWORD **)a1 + 5) )
        {
          DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12, v6 + 12, 0);
          DXGPUSHLOCK::AcquireShared(v13);
          v14 = 1;
          for ( i = (struct _KTHREAD **)v6[5]; i != v6 + 5; i = (struct _KTHREAD **)*i )
          {
            v8 = i - 17;
            if ( *((_DWORD *)*(i - 4) + 98) > 0x10u )
            {
              v9 = v8[2];
              if ( *((_DWORD *)v9 + 101) == *((_DWORD *)a1 + 25) && *((_DWORD *)v9 + 102) == *((_DWORD *)a1 + 26) )
              {
                *(_QWORD *)(a1 + 100) = v8[43];
                v10 = DXG_HOST_GLOBAL_VMBUS::VmBusSendWnfNotification(
                        (DXG_HOST_GLOBAL_VMBUS *)(v6 + 20),
                        (struct DXGKVMB_COMMAND_SENDWNFNOTIFICATION *)(a1 + 56),
                        *((_DWORD *)a1 + 12));
                if ( v10 < 0 )
                {
                  v11 = v10;
                  WdLogSingleEntry2(2LL, i - 17, v10);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Failed to send WNF notification to vGPU:0x%I64x 0x%I64x",
                    (__int64)(i - 17),
                    v11,
                    0LL,
                    0LL,
                    0LL);
                }
              }
            }
          }
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
        }
        v5 = (_QWORD *)*v5;
      }
      while ( v5 != v4 );
      v3 = (volatile signed __int32 *)v15;
    }
    _InterlockedDecrement(v3 + 4);
    ExReleasePushLockSharedEx(v3, 0LL);
    KeLeaveCriticalRegion();
  }
}
