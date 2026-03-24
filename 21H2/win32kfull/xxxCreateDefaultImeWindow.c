/*
 * XREFs of xxxCreateDefaultImeWindow @ 0x1C0033658
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 * Callees:
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C0033BFC (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     RtlInitLargeUnicodeString @ 0x1C0033FBC (RtlInitLargeUnicodeString.c)
 *     DesktopAlloc @ 0x1C004B2A0 (DesktopAlloc.c)
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 *     xxxDestroyWindow @ 0x1C007DCA0 (xxxDestroyWindow.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C008A9C4 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00BFD80 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1890 (PopAndFreeW32ThreadLock.c)
 *     CreateInputContext @ 0x1C01041B0 (CreateInputContext.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1C0167A30 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 */

__int64 __fastcall xxxCreateDefaultImeWindow(_QWORD *a1, __int16 a2, __int64 a3)
{
  __int64 ThreadWin32Thread; // rax
  _QWORD *v7; // rdi
  int v8; // r15d
  __int64 v9; // rdx
  PVOID *v10; // rbx
  __int64 v11; // rax
  void *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 Window; // r15
  ULONG64 v18; // rcx
  ULONG64 *v19; // rax
  ULONG64 v20; // rdx
  int v21; // edx
  __int64 v23; // [rsp+90h] [rbp-A8h]
  __int128 v24; // [rsp+A8h] [rbp-90h] BYREF
  _QWORD v25[3]; // [rsp+B8h] [rbp-80h] BYREF
  __int128 v26; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v27; // [rsp+E0h] [rbp-58h]
  _BYTE v28[32]; // [rsp+F0h] [rbp-48h] BYREF
  ULONG64 v29; // [rsp+158h] [rbp+20h]

  v24 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v25[2] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v7 = (_QWORD *)ThreadWin32Thread;
  if ( !*(_QWORD *)(ThreadWin32Thread + 792)
    && PsGetThreadProcessId(*(PETHREAD *)ThreadWin32Thread) == (HANDLE)gpidLogon )
  {
    CreateInputContext(0LL);
  }
  if ( !v7[99] )
    return 0LL;
  if ( a2 == *(_WORD *)(gpsi + 898LL) )
    return 0LL;
  v8 = 1;
  if ( (*(_BYTE *)(*(_QWORD *)(a1[17] + 8LL) + 10LL) & 1) != 0 )
    return 0LL;
  v9 = a1[5];
  if ( (*(_BYTE *)(v9 + 31) & 0xC0) == 0x40
    && *(_QWORD *)(*(_QWORD *)(a1[13] + 16LL) + 424LL) != v7[53]
    && (*(_DWORD *)(v9 + 28) & 0x10000000) == 0 )
  {
    return 0LL;
  }
  v10 = (PVOID *)v7[57];
  if ( !v10[16] )
    return 0LL;
  v11 = DesktopAlloc(v10, 24LL, 9LL);
  v12 = (void *)v11;
  if ( !v11 )
    return 0LL;
  *(_OWORD *)v11 = xmmword_1C02EBA40;
  *(_QWORD *)(v11 + 16) = 0x45004D0049LL;
  RtlInitLargeUnicodeString(&v24, v11);
  PushW32ThreadLock(v10, &v26, UserDereferenceObject);
  if ( v10 )
    ObfReferenceObject(v10);
  v13 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v25[0] = *(_QWORD *)(v13 + 416);
  *(_QWORD *)(v13 + 416) = v25;
  v25[1] = a1;
  HMLockObject(a1);
  if ( !PsGetCurrentProcessWin32Process(v14)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15),
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v8 = 0;
  }
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v28, 0LL);
  Window = xxxCreateWindowEx(
             0,
             *(unsigned __int16 *)(gpsi + 898LL),
             *(unsigned __int16 *)(gpsi + 898LL),
             (unsigned int)&v24,
             -2013265920,
             0,
             0,
             0,
             0,
             (__int64)a1,
             (__int64)v28,
             a3,
             0LL,
             0,
             1024,
             v8,
             0LL);
  v23 = Window;
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v28);
  if ( Window )
  {
    v19 = (ULONG64 *)unsafe_cast_fnid_or_class_to_PIMEWND(Window);
    if ( v19 )
      v20 = *v19;
    else
      v20 = 0LL;
    v29 = v20;
    if ( v20 )
    {
      if ( (v20 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = MmUserProbeAddress;
      if ( v20 >= MmUserProbeAddress )
        v20 = MmUserProbeAddress;
      *(_BYTE *)v20 = *(_BYTE *)v20;
      *(_BYTE *)(v20 + 55) = *(_BYTE *)(v20 + 55);
      v21 = *(_DWORD *)(v29 + 44) | 8;
      *(_DWORD *)(v29 + 44) = v21;
      LOBYTE(v18) = *(_BYTE *)(a1[5] + 31LL) & 0xC0;
      if ( (_BYTE)v18 == 64 && *(_QWORD **)(a1[13] + 16LL) != v7 )
        *(_DWORD *)(v29 + 44) = v21 | 0x10;
    }
    else
    {
      xxxDestroyWindow(Window);
      v23 = 0LL;
    }
  }
  ThreadUnlock1(v18);
  RtlFreeHeap(v10[16], 0, v12);
  PopAndFreeW32ThreadLock(&v26);
  return v23;
}
