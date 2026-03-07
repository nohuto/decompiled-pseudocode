void __fastcall DXGDEVICE::FlushScheduler(_QWORD *a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v8; // rcx
  __int64 v9; // r9
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  __int64 v16; // rbx
  const wchar_t *v17; // r9
  __int128 v18; // [rsp+50h] [rbp-18h] BYREF

  v8 = *(_QWORD *)(a1[2] + 16LL);
  if ( !*(_BYTE *)(v8 + 209) )
  {
    v18 = 0LL;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(a1 + 34));
    v10 = a2 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              v15 = v14 - 1;
              if ( v15 )
              {
                if ( v15 != 1 )
                {
                  v16 = 5717LL;
                  WdLogSingleEntry1(1LL, 5717LL);
                  v17 = L"Invalid flush reason!";
                  goto LABEL_21;
                }
                LODWORD(v18) = 7;
              }
              else
              {
                LODWORD(v18) = 5;
              }
            }
            else
            {
              LODWORD(v18) = 3;
            }
          }
          else
          {
            LODWORD(v18) = 13;
          }
        }
        else
        {
          LODWORD(v18) = 9;
        }
      }
      else
      {
        LODWORD(v18) = 8;
      }
    }
    else
    {
      LODWORD(v18) = 1;
    }
    LOBYTE(v9) = a4;
    if ( (*(int (__fastcall **)(_QWORD, __int128 *, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1[2] + 736LL) + 8LL)
                                                                    + 136LL))(
           a1[100],
           &v18,
           a3,
           v9) >= 0 )
    {
LABEL_5:
      a1[35] = 0LL;
      ExReleasePushLockExclusiveEx(a1 + 34, 0LL);
      KeLeaveCriticalRegion();
      return;
    }
    v16 = 5722LL;
    WdLogSingleEntry1(1LL, 5722LL);
    v17 = L"NT_SUCCESS(FlushStatus)";
LABEL_21:
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)v17, v16, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_5;
  }
  DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFlushDevice(v8 + 4472, a1, a2);
}
