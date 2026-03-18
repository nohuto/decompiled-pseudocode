/*
 * XREFs of UsbhWaitEventWithTimeoutEx @ 0x1C0011440
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0003078 (UsbhSyncResetDeviceInternal.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C0008CC0 (Usbh_PCE_Suspend_Action.c)
 *     UsbhSshResumeDownstream @ 0x1C0009090 (UsbhSshResumeDownstream.c)
 *     Usbh_PCE_Disable_Action @ 0x1C0011DA0 (Usbh_PCE_Disable_Action.c)
 *     UsbhWaitForResetTimeout @ 0x1C001EEA4 (UsbhWaitForResetTimeout.c)
 *     Usbh_PCE_Close_Action @ 0x1C0034E08 (Usbh_PCE_Close_Action.c)
 *     UsbhNotifyPnpOfFailure_Action @ 0x1C00383C8 (UsbhNotifyPnpOfFailure_Action.c)
 *     UsbhWaitForPortResume @ 0x1C0039CEC (UsbhWaitForPortResume.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C003C2B4 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhAsyncStop @ 0x1C0041C0C (UsbhAsyncStop.c)
 * Callees:
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhIncHubBusy @ 0x1C0011BC0 (UsbhIncHubBusy.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00157C0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhPCE_wRun @ 0x1C001E6FC (UsbhPCE_wRun.c)
 *     UsbhTrapFatalTimeout_x9f @ 0x1C002D664 (UsbhTrapFatalTimeout_x9f.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002D6A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhWaitEventWithTimeoutEx(__int64 a1, void *a2, int a3, int a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r13
  NTSTATUS v18; // r13d
  NTSTATUS v19; // eax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  _DWORD *v23; // rdx
  struct _KEVENT *v24; // r15
  __int64 Signalling; // r9
  _QWORD *v26; // r8
  unsigned __int8 v27; // cl
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  _QWORD *v31; // rax
  _QWORD *v32; // rcx
  void *v33; // r15
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // rdx
  PVOID v41; // rax
  union _LARGE_INTEGER *v42; // rax
  NTSTATUS v43; // eax
  NTSTATUS v44; // eax
  __int64 v45; // r9
  volatile int Lock; // eax
  BOOLEAN v47; // r9
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp-40h] BYREF
  PVOID P; // [rsp+48h] [rbp-38h]
  union _LARGE_INTEGER v50; // [rsp+50h] [rbp-30h] BYREF
  __int64 v51; // [rsp+58h] [rbp-28h]
  PVOID Object; // [rsp+60h] [rbp-20h] BYREF
  __int64 v53; // [rsp+68h] [rbp-18h]
  PVOID v54; // [rsp+70h] [rbp-10h] BYREF
  PVOID v55; // [rsp+78h] [rbp-8h]
  int v57; // [rsp+D0h] [rbp+50h]

  v6 = a3;
  v50.QuadPart = 0LL;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        HIBYTE(v57) = a4;
        LOBYTE(v57) = HIBYTE(a4);
        BYTE1(v57) = BYTE2(a4);
        BYTE2(v57) = BYTE1(a4);
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v10 = v57;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = a3;
        *(_QWORD *)(v10 + 24) = a2;
      }
    }
  }
  v11 = 10000LL * a3 + (int)(KeQueryTimeIncrement() - 1);
  v51 = v11;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_DWORD *)v13 = 826627159;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = 0LL;
        *(_QWORD *)(v13 + 24) = v6;
      }
    }
  }
  Timeout.QuadPart = -v11;
  v14 = MEMORY[0xFFFFF78000000008];
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
        *(_DWORD *)v16 = 827618423;
        *(_QWORD *)(v16 + 16) = (unsigned int)v14;
        *(_QWORD *)(v16 + 24) = SHIDWORD(v14);
        *(_QWORD *)(v16 + 8) = 0LL;
      }
    }
  }
  if ( (_DWORD)v6 )
  {
    if ( !a5 )
    {
      v18 = KeWaitForSingleObject(a2, Executive, 0, 0, &Timeout);
      goto LABEL_47;
    }
    v17 = a6;
    if ( a6 )
    {
      P = (PVOID)UsbhIncHubBusy(a1, (int)a6 + 24, a6, 1465152371, 0);
      Object = a2;
      v53 = a6 + 496;
      v18 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
      if ( v18 )
      {
        while ( 1 )
        {
          if ( v18 == 1 )
          {
            v18 = KeWaitForSingleObject(a2, Executive, 0, 0, &v50);
            if ( !v18 )
              goto LABEL_34;
            Timeout.QuadPart = MEMORY[0xFFFFF78000000008] - v11 - v14;
            v53 = a6 + 2464;
            v19 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
            v18 = v19;
            switch ( v19 )
            {
              case 0:
                goto LABEL_34;
              case 1:
                v20 = *(unsigned __int16 *)(a6 + 4);
                if ( (UsbhLogMask & 0x200) != 0 && a1 && (v21 = *(_QWORD *)(a1 + 64)) != 0 )
                {
                  v22 = *(_QWORD *)(v21 + 888)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
                  *(_DWORD *)v22 = 1850889303;
                  *(_QWORD *)(v22 + 8) = 0LL;
                  *(_QWORD *)(v22 + 16) = a6;
                  *(_QWORD *)(v22 + 24) = v20;
                  *(_DWORD *)(a6 + 2844) = a5;
                }
                else
                {
                  *(_DWORD *)(a6 + 2844) = a5;
                  if ( !a1 )
                    goto LABEL_80;
                }
                v23 = *(_DWORD **)(a1 + 64);
                if ( !v23 )
                  goto LABEL_81;
                if ( *v23 != 541218120 )
                  UsbhTrapFatal_Dbg(a1, v23);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  WPP_RECORDER_SF_d(
                    WPP_GLOBAL_Control->DeviceExtension,
                    0,
                    1,
                    57,
                    (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
                    *(_WORD *)(a6 + 4));
                }
                UsbhDispatch_PortChangeQueueEventEx(a1, a6, 5, a6 + 24, 0LL, 0, 0LL, 0LL);
                KeSetEvent((PRKEVENT)(a6 + 2464), 0, 0);
                break;
              case 258:
                goto LABEL_34;
            }
            v53 = a6 + 496;
          }
          else if ( v18 == 258 )
          {
            goto LABEL_34;
          }
          if ( MEMORY[0xFFFFF78000000008] - v14 >= v11 )
            break;
          Timeout.QuadPart = MEMORY[0xFFFFF78000000008] - v14 - v11;
          v18 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
          if ( !v18 )
            goto LABEL_34;
        }
        v18 = 258;
      }
LABEL_34:
      if ( !a1 )
LABEL_80:
        UsbhTrapFatal_Dbg(0LL, 0LL);
      v24 = *(struct _KEVENT **)(a1 + 64);
      if ( !v24 )
LABEL_81:
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( v24->Header.LockNV != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      v24[142].Header.Type = 1;
      KeWaitForSingleObject(&v24[139], Executive, 0, 0, 0LL);
      Signalling = v24[142].Header.Signalling;
      v26 = P;
      v27 = v24[142].Header.Signalling;
      if ( (UsbhLogMask & 0x10000) != 0 )
      {
        v28 = *(_QWORD *)(a1 + 64);
        if ( v28 )
        {
          v29 = *(_QWORD *)(v28 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v28 + 880)) & *(_DWORD *)(v28 + 884));
          *(_DWORD *)v29 = 1667581000;
          *(_QWORD *)(v29 + 8) = 0LL;
          *(_QWORD *)(v29 + 16) = v26;
          *(_QWORD *)(v29 + 24) = Signalling;
          v27 = v24[142].Header.Signalling;
        }
      }
      if ( v27 )
      {
        if ( v26 == (_QWORD *)1936941672 )
        {
          Lock = v24[130].Header.Lock;
          if ( Lock )
            v24[130].Header.LockNV = Lock - 1;
        }
        else if ( v26 )
        {
          v30 = v26[1];
          v31 = v26 + 1;
          if ( *(_QWORD **)(v30 + 8) != v26 + 1 || (v32 = (_QWORD *)v26[2], (_QWORD *)*v32 != v31) )
            __fastfail(3u);
          *v32 = v30;
          *(_QWORD *)(v30 + 8) = v32;
          v26[2] = v26 + 1;
          *v31 = v31;
          ExFreePoolWithTag(v26, 0);
        }
      }
      KeSetEvent(v24 + 139, 0, 0);
      goto LABEL_47;
    }
  }
  else
  {
    v17 = a6;
  }
  if ( a5 != 11 )
  {
    Log(a1, 8, 2004112472, 0LL, 0LL);
    v33 = a2;
    v18 = KeWaitForSingleObject(a2, Executive, 0, v47, 0LL);
    goto LABEL_48;
  }
  v54 = a2;
  v41 = (PVOID)(v17 + 496);
  P = (PVOID)(v17 + 496);
LABEL_62:
  v55 = v41;
  do
  {
    v42 = (_DWORD)v6 ? &Timeout : 0LL;
    v43 = KeWaitForMultipleObjects(2u, &v54, WaitAny, Executive, 0, 0, v42, 0LL);
    v18 = v43;
    if ( !v43 )
      break;
    if ( v43 == 1 )
    {
      v18 = KeWaitForSingleObject(a2, Executive, 0, 0, &v50);
      if ( !v18 )
        break;
      v55 = (PVOID)(a6 + 2464);
      v44 = KeWaitForMultipleObjects(2u, &v54, WaitAny, Executive, 0, 0, 0LL, 0LL);
      v18 = v44;
      if ( !v44 )
        break;
      if ( v44 == 1 )
      {
        Log(a1, 512, 1465143918, a6, *(unsigned __int16 *)(a6 + 4));
        UsbhPCE_wRun(a1, v45 + 24, v45);
      }
      v41 = P;
      goto LABEL_62;
    }
  }
  while ( v43 != 258 );
LABEL_47:
  v33 = a2;
LABEL_48:
  v34 = MEMORY[0xFFFFF78000000008];
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v35 = *(_QWORD *)(a1 + 64);
      if ( v35 )
      {
        v36 = *(_QWORD *)(v35 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 880)) & *(_DWORD *)(v35 + 884));
        *(_DWORD *)v36 = 844395639;
        *(_QWORD *)(v36 + 16) = (unsigned int)v34;
        *(_QWORD *)(v36 + 24) = SHIDWORD(v34);
        *(_QWORD *)(v36 + 8) = 0LL;
      }
    }
  }
  v37 = v34 - v14;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v38 = *(_QWORD *)(a1 + 64);
      if ( v38 )
      {
        v39 = *(_QWORD *)(v38 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v38 + 880)) & *(_DWORD *)(v38 + 884));
        *(_DWORD *)v39 = 2017809495;
        *(_QWORD *)(v39 + 16) = v18;
        *(_QWORD *)(v39 + 24) = (unsigned int)v37;
        *(_QWORD *)(v39 + 8) = 0LL;
      }
    }
  }
  if ( v18 == 258 )
  {
    if ( v37 < v11 )
    {
      Log(a1, 8, 1465135393, SHIDWORD(v37), (unsigned int)v37);
      Log(a1, 8, 1465135649, SHIDWORD(v51), (unsigned int)v11);
    }
    if ( a5 )
    {
      if ( a5 != 11 )
      {
        v18 = KeWaitForSingleObject(v33, Executive, 0, 0, &v50);
        if ( v18 )
          UsbhTrapFatalTimeout_x9f(a1, a5, a6);
      }
    }
  }
  return (unsigned int)v18;
}
