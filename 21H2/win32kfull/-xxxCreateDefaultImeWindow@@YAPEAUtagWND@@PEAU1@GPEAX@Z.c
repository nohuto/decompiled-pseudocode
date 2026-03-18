/*
 * XREFs of ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x1C0080464
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C0082CB8 (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     DesktopAlloc @ 0x1C00C2D40 (DesktopAlloc.c)
 *     RtlInitLargeUnicodeString @ 0x1C00E89FC (RtlInitLargeUnicodeString.c)
 *     CreateInputContext @ 0x1C00F30B0 (CreateInputContext.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0159CDC (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1C0159FF4 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 */

struct tagWND *__fastcall xxxCreateDefaultImeWindow(struct tagWND *a1, __int16 a2, void *a3)
{
  __int64 ThreadWin32Thread; // rax
  _QWORD *v7; // rdi
  int v8; // r15d
  __int64 v9; // rdx
  PVOID *v10; // rbx
  __int64 v11; // rax
  void *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *Window; // r15
  __int64 v17; // rdx
  ULONG64 v18; // rcx
  ULONG64 v19; // r8
  ULONG64 *v20; // rax
  ULONG64 v21; // rdx
  _QWORD *v23; // [rsp+90h] [rbp-98h]
  __int128 v24; // [rsp+A8h] [rbp-80h] BYREF
  __int128 v25; // [rsp+B8h] [rbp-70h] BYREF
  __int64 v26; // [rsp+C8h] [rbp-60h]
  __int128 v27; // [rsp+D8h] [rbp-50h] BYREF
  __int64 v28; // [rsp+E8h] [rbp-40h]
  __int64 v29[4]; // [rsp+F0h] [rbp-38h] BYREF
  ULONG64 v30; // [rsp+148h] [rbp+20h]

  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
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
  if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 10LL) & 1) != 0 )
    return 0LL;
  v9 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v9 + 31) & 0xC0) == 0x40
    && *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 16LL) + 424LL) != v7[53]
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
  *(_OWORD *)v11 = xmmword_1C02E8970;
  *(_QWORD *)(v11 + 16) = 0x45004D0049LL;
  RtlInitLargeUnicodeString(&v24, v11);
  PushW32ThreadLock((__int64)v10, &v25, UserDereferenceObject);
  if ( v10 )
    ObfReferenceObject(v10);
  ThreadLock((__int64)a1, (__int64 *)&v27);
  if ( !PsGetCurrentProcessWin32Process(v13)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14),
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v8 = 0;
  }
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v29, 0LL);
  Window = (_QWORD *)xxxCreateWindowEx(
                       0,
                       (wchar_t *)*(unsigned __int16 *)(gpsi + 898LL),
                       *(unsigned __int16 *)(gpsi + 898LL),
                       (__int64)&v24,
                       0x88000000,
                       0,
                       0,
                       0,
                       0,
                       a1,
                       (__int64)v29,
                       a3,
                       0LL,
                       0,
                       0x400u,
                       v8,
                       0LL);
  v23 = Window;
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v29);
  if ( Window )
  {
    v20 = (ULONG64 *)unsafe_cast_fnid_or_class_to_PIMEWND(Window);
    if ( v20 )
      v21 = *v20;
    else
      v21 = 0LL;
    v30 = v21;
    if ( v21 )
    {
      if ( (v21 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = MmUserProbeAddress;
      if ( v21 >= MmUserProbeAddress )
        v21 = MmUserProbeAddress;
      *(_BYTE *)v21 = *(_BYTE *)v21;
      *(_BYTE *)(v21 + 55) = *(_BYTE *)(v21 + 55);
      v19 = v30;
      v17 = *(_DWORD *)(v30 + 44) | 8u;
      *(_DWORD *)(v30 + 44) = v17;
      LOBYTE(v18) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0;
      if ( (_BYTE)v18 == 64 && *(_QWORD **)(*((_QWORD *)a1 + 13) + 16LL) != v7 )
      {
        v17 = (unsigned int)v17 | 0x10;
        *(_DWORD *)(v30 + 44) = v17;
      }
    }
    else
    {
      xxxDestroyWindow(Window);
      v23 = 0LL;
    }
  }
  ThreadUnlock1(v18, v17, v19);
  RtlFreeHeap(v10[16], 0, v12);
  PopAndFreeW32ThreadLock((__int64)&v25);
  return (struct tagWND *)v23;
}
