/*
 * XREFs of xxxValidateClassAndSize @ 0x1C016824C
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C004639C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxTooltipWndProc @ 0x1C00DB220 (xxxTooltipWndProc.c)
 *     xxxSwitchWndProc @ 0x1C01F5240 (xxxSwitchWndProc.c)
 *     xxxMenuWindowProc @ 0x1C023BBA0 (xxxMenuWindowProc.c)
 *     xxxSBWndProc @ 0x1C0246160 (xxxSBWndProc.c)
 * Callees:
 *     xxxDefWindowProc @ 0x1C0048580 (xxxDefWindowProc.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C0051A24 (xxxClientFreeWindowClassExtraBytes.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x1C0051E4C (xxxClientAllocWindowClassExtraBytes.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BFD00 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFD80 (PushW32ThreadLock.c)
 *     PopW32ThreadLock @ 0x1C0128430 (PopW32ThreadLock.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall xxxValidateClassAndSize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int16 a5,
        int a6,
        __int64 *a7)
{
  __int64 v8; // r10
  __int16 v9; // ax
  __int16 v11; // si
  __int64 v12; // r8
  unsigned int v13; // r9d
  unsigned int v14; // r10d
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // r8
  unsigned int v19; // ecx
  unsigned int v20; // edx
  __int64 v21; // rcx
  size_t v22; // rsi
  void *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  unsigned int v27; // ecx
  __int128 v28; // [rsp+20h] [rbp-48h] BYREF
  __int64 v29; // [rsp+30h] [rbp-38h]

  *a7 = 0LL;
  v8 = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(v8 + 232) & 0x800) != 0 )
    return 0LL;
  v9 = *(_WORD *)(v8 + 42);
  if ( (v9 & 0xD000) != 0 )
  {
    if ( (v9 & 0x1000) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 2585LL);
    return 0LL;
  }
  v11 = a5;
  if ( v9 != a5 )
  {
    if ( v9 )
      return 0LL;
    if ( (_DWORD)a2 != a6 )
    {
      *a7 = xxxDefWindowProc((struct tagWND *)a1, a2, a3, a4);
      return 0LL;
    }
    *(_WORD *)(v8 + 42) = 4096;
    v12 = *(_QWORD *)(a1 + 40);
    v13 = *(_DWORD *)(v12 + 252);
    v14 = *(unsigned __int16 *)(gpsi + 2LL * ((a5 & 0x2FFFu) - 666) + 328);
    if ( v13 + 320 >= v14 )
    {
      v26 = *(_QWORD *)(a1 + 280);
      if ( v26 )
      {
        v27 = 0;
        if ( v13 )
        {
          while ( !*(_BYTE *)(v27 + v26) )
          {
            if ( ++v27 >= v13 )
              goto LABEL_42;
          }
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2769LL);
          v12 = *(_QWORD *)(a1 + 40);
        }
LABEL_42:
        memset(*(void **)(a1 + 280), 0, *(unsigned int *)(v12 + 252));
      }
    }
    else
    {
      if ( v13 + *(_DWORD *)(v12 + 200) + 320 < v14 )
      {
        *(_WORD *)(v12 + 42) &= ~0x1000u;
        return 0LL;
      }
      v28 = 0LL;
      v29 = 0LL;
      v15 = v14 - 320;
      v16 = Win32AllocPoolZInit(v15, 1937208149LL);
      v17 = v16;
      if ( !v16 )
      {
LABEL_15:
        *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) &= ~0x1000u;
        return 0LL;
      }
      PushW32ThreadLock(v16, &v28, (__int64)Win32FreePool);
      v18 = *(_QWORD *)(a1 + 280);
      if ( v18 )
      {
        v19 = 0;
        v20 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 252LL);
        if ( v20 )
        {
          while ( !*(_BYTE *)(v19 + v18) )
          {
            if ( ++v19 >= v20 )
              goto LABEL_22;
          }
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2680LL);
        }
LABEL_22:
        Win32FreePool(*(void **)(a1 + 280));
        *(_QWORD *)(a1 + 280) = 0LL;
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 252LL) = 0;
      v21 = *(_QWORD *)(a1 + 40);
      v22 = *(unsigned int *)(v21 + 200);
      if ( (_DWORD)v22 )
      {
        v23 = (void *)xxxClientAllocWindowClassExtraBytes((unsigned int)v22, a1);
        if ( !v23 || (v21 = *(_QWORD *)(a1 + 40), (*(_WORD *)(v21 + 42) & 0xC000) != 0) )
        {
LABEL_25:
          PopAndFreeAlwaysW32ThreadLock((__int64)&v28);
          goto LABEL_15;
        }
      }
      else
      {
        v23 = 0LL;
      }
      v24 = *(_QWORD *)(v21 + 296);
      if ( v24 )
      {
        if ( v23 )
        {
          memmove(v23, (const void *)(v24 + v15), v22);
          v21 = *(_QWORD *)(a1 + 40);
        }
        v25 = *(_QWORD *)(v21 + 296);
        *(_QWORD *)(v21 + 296) = v23;
        *(_DWORD *)(*(_QWORD *)(a1 + 40) + 200LL) = v22;
        xxxClientFreeWindowClassExtraBytes(a1, v25);
        if ( (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0xC000) != 0 )
          goto LABEL_25;
      }
      else
      {
        *(_QWORD *)(v21 + 296) = v23;
        *(_DWORD *)(*(_QWORD *)(a1 + 40) + 200LL) = v22;
      }
      PopW32ThreadLock(&v28);
      *(_QWORD *)(a1 + 280) = v17;
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 252LL) = v15;
      v11 = a5;
    }
    *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) = v11;
    *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) &= ~0x1000u;
  }
  return 1LL;
}
