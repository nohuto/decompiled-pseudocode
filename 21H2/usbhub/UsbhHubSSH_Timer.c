/*
 * XREFs of UsbhHubSSH_Timer @ 0x1C001AC00
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C001DE80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001E180 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002EAB8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C002EFC8 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhHubSSH_Timer(__int64 a1, __int64 a2)
{
  struct _KEVENT *v3; // rax
  struct _KEVENT *v4; // r14
  __int64 v5; // rbx
  unsigned __int8 v6; // r15
  __int64 v7; // r12
  int v8; // ebp
  PVOID PoolWithTag; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64, _QWORD); // rax
  __int64 v13; // rax
  __int64 v14; // rax
  void (__fastcall *v15)(__int64, _QWORD, __int64 (__fastcall *(__fastcall *)(__int64, __int64))(__int64), __int64, __int64, int); // rax
  int v17; // [rsp+28h] [rbp-40h]

  if ( !a2 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v3 = *(struct _KEVENT **)(a2 + 64);
  if ( !v3 )
    goto LABEL_41;
  if ( v3->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v4 = v3 + 143;
  if ( KeReadStateEvent(v3 + 143) )
  {
    KeResetEvent(v4);
    v5 = *(_QWORD *)(a2 + 64);
    if ( !v5 )
      goto LABEL_41;
    if ( *(_DWORD *)v5 != 541218120 )
      UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
    v6 = *(_BYTE *)(v5 + 5268);
    v7 = v5 + 2088;
    v8 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        46,
        (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
        0);
      v5 = *(_QWORD *)(a2 + 64);
    }
    if ( !v5 )
      goto LABEL_41;
    if ( *(_DWORD *)v5 != 541218120 )
      UsbhTrapFatal_Dbg(a2, v5);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        45,
        (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
        0);
    PoolWithTag = ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory), 0x48uLL, 0x42554855u);
    v10 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x48uLL);
      v11 = *(_QWORD *)(a2 + 64);
      if ( !v11 )
        goto LABEL_41;
      if ( *(_DWORD *)v11 != 541218120 )
        UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
      v12 = *(__int64 (__fastcall **)(__int64, _QWORD))(v11 + 4768);
      if ( v12 )
      {
        v13 = v12(a2, v6);
        if ( v13 )
        {
          *(_QWORD *)(v10 + 40) = v13;
          *(_DWORD *)v10 = 1230463592;
          *(_QWORD *)(v10 + 24) = UsbhHubSSH_Worker;
          *(_DWORD *)(v10 + 4) = 2001228627;
          *(_DWORD *)(v10 + 12) = 0;
          *(_QWORD *)(v10 + 32) = v7;
          *(_QWORD *)(v10 + 16) = a2;
          ExInterlockedInsertTailList((PLIST_ENTRY)(v5 + 2784), (PLIST_ENTRY)(v10 + 48), (PKSPIN_LOCK)(v5 + 2800));
          if ( *(_DWORD *)(v10 + 4) != 2001228627 )
            Log(a2, 8, 1464552747, 0LL, v10);
          _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              47,
              (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
              0);
          }
          v14 = *(_QWORD *)(a2 + 64);
          if ( v14 )
          {
            if ( *(_DWORD *)v14 != 541218120 )
              UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
            v15 = *(void (__fastcall **)(__int64, _QWORD, __int64 (__fastcall *(__fastcall *)(__int64, __int64))(__int64), __int64, __int64, int))(v14 + 4784);
            if ( v15 )
            {
              LOBYTE(v17) = v6;
              v15(a2, *(_QWORD *)(v10 + 40), UsbhHubWorker, 1LL, v10, v17);
            }
            else
            {
              v8 = -1073741822;
            }
            goto LABEL_29;
          }
LABEL_41:
          UsbhTrapFatal_Dbg(a2, 0LL);
        }
      }
      ExFreePoolWithTag((PVOID)v10, 0);
    }
    v8 = -1073741670;
LABEL_29:
    if ( (v8 & 0xC0000000) == 0xC0000000 )
      KeSetEvent(v4, 0, 0);
  }
  return 0LL;
}
