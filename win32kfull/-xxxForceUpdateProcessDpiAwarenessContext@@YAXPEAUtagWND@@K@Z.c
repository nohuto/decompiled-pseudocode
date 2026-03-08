/*
 * XREFs of ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x1C0222698
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 * Callees:
 *     ?TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z @ 0x1C0017BF4 (-TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z.c)
 *     IsWindowBeingDestroyed @ 0x1C0039B60 (IsWindowBeingDestroyed.c)
 *     BuildHwndList @ 0x1C0041A10 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00680B0 (FreeHwndList.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00A1CA0 (PopAndFreeW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     Feature_1804411194__private_IsEnabledDeviceUsage @ 0x1C012F18C (Feature_1804411194__private_IsEnabledDeviceUsage.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C02228BC (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 */

void __fastcall xxxForceUpdateProcessDpiAwarenessContext(struct tagWND *a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  int v6; // edx
  unsigned int *v7; // rcx
  _QWORD *v8; // rbx
  _QWORD *v9; // rdi
  struct tagBWL *v10; // r13
  _QWORD *i; // r15
  struct tagWND *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int128 v16; // [rsp+20h] [rbp-50h] BYREF
  __int64 v17; // [rsp+30h] [rbp-40h]
  __int128 v18; // [rsp+38h] [rbp-38h] BYREF
  __int64 v19; // [rsp+48h] [rbp-28h]
  __int128 v20; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+60h] [rbp-10h]

  if ( !(unsigned int)IsWindowBeingDestroyed((__int64)a1) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 424LL);
    v21 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v18 = 0LL;
    ThreadLock(v4, &v20);
    TraceChildWindowDpiTelemetry((__int64)a1, *((_QWORD *)a1 + 13), 2);
    v6 = *(_DWORD *)(v5 + 1056);
    v7 = (unsigned int *)(v5 + 280);
    if ( !v6 )
      *(_DWORD *)(v5 + 1060) = *v7;
    *(_DWORD *)(v5 + 1064) = *v7;
    *(_DWORD *)(v5 + 1056) = v6 + 1;
    *v7 = a2;
    if ( (a2 & 0xF) == 1 )
      *(_WORD *)(v5 + 284) = (a2 >> 8) & 0x1FF;
    GreIncrementDisplaySettingsUniqueness();
    v8 = *(_QWORD **)(v5 + 656);
    if ( (unsigned int)Feature_1804411194__private_IsEnabledDeviceUsage() && v8 )
    {
      PushW32ThreadLock((__int64)v8, &v18, UserDereferenceObject);
      ObfReferenceObject(v8);
    }
    xxxForceUpdateWindowTreeDpiAwarenessContext(a1, a2, 1);
    if ( v8 )
    {
      v9 = (_QWORD *)v8[2];
      while ( v9 )
      {
        v10 = BuildHwndList(*(ShellWindowManagement **)(v9[1] + 24LL), 1, 0LL, 1);
        if ( v10 )
        {
          v17 = 0LL;
          v16 = 0LL;
          PushW32ThreadLock((__int64)v9, &v16, UserDereferenceObject);
          ObfReferenceObject(v9);
          for ( i = (_QWORD *)((char *)v10 + 32); *i != 1LL; ++i )
          {
            v12 = (struct tagWND *)HMValidateHandleNoSecure(*i, 1);
            if ( v12 && *(_QWORD *)(*((_QWORD *)v12 + 2) + 424LL) == v5 )
              xxxForceUpdateWindowTreeDpiAwarenessContext(v12, a2, 1);
          }
          FreeHwndList(v10);
          v9 = (_QWORD *)v9[4];
          PopAndFreeW32ThreadLock((__int64)&v16);
        }
      }
    }
    if ( (unsigned int)Feature_1804411194__private_IsEnabledDeviceUsage() )
    {
      if ( v8 )
        PopAndFreeW32ThreadLock((__int64)&v18);
    }
    ThreadUnlock1(v14, v13, v15);
  }
}
