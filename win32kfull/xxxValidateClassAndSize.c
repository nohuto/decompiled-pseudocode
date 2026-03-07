__int64 __fastcall xxxValidateClassAndSize(
        __int64 a1,
        unsigned int a2,
        HWND a3,
        __int64 a4,
        __int16 a5,
        int a6,
        _QWORD *a7)
{
  __int64 v8; // r10
  __int16 v9; // ax
  __int16 v10; // si
  __int64 v12; // r8
  unsigned int v13; // r9d
  unsigned int v14; // r10d
  __int64 v15; // rdx
  unsigned int v16; // ecx
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // r8
  unsigned int v21; // ecx
  unsigned int v22; // edx
  __int64 v23; // rcx
  size_t v24; // rsi
  void *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 ThreadWin32Thread; // rax
  __int128 v30; // [rsp+20h] [rbp-48h] BYREF
  __int64 v31; // [rsp+30h] [rbp-38h]

  *a7 = 0LL;
  v8 = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(v8 + 232) & 0x10) == 0 )
  {
    v9 = *(_WORD *)(v8 + 42);
    if ( (v9 & 0xD000) != 0 )
    {
      if ( (v9 & 0x1000) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 2541LL);
      return 0LL;
    }
    v10 = a5;
    if ( v9 == a5 )
      return 1LL;
    if ( !v9 )
    {
      if ( a2 != a6 )
      {
        *a7 = xxxDefWindowProc((struct tagWND *)a1, a2, a3, a4);
        return 0LL;
      }
      *(_WORD *)(v8 + 42) = 4096;
      v12 = *(_QWORD *)(a1 + 40);
      v13 = *(_DWORD *)(v12 + 248);
      v14 = *(unsigned __int16 *)(gpsi + 2LL * ((a5 & 0x2FFFu) - 666) + 328);
      if ( v13 + 328 >= v14 )
      {
        v15 = *(_QWORD *)(a1 + 280);
        if ( v15 )
        {
          v16 = 0;
          if ( v13 )
          {
            while ( !*(_BYTE *)(v16 + v15) )
            {
              if ( ++v16 >= v13 )
                goto LABEL_15;
            }
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2726LL);
          }
LABEL_15:
          memset_0(*(void **)(a1 + 280), 0, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 248LL));
        }
        goto LABEL_11;
      }
      if ( *(_DWORD *)(v12 + 200) + v13 + 328 < v14 )
      {
        *(_WORD *)(v12 + 42) &= ~0x1000u;
        return 0LL;
      }
      v30 = 0LL;
      v31 = 0LL;
      v17 = v14 - 328;
      v18 = Win32AllocPoolZInit(v17, 1937208149LL);
      v19 = v18;
      if ( !v18 )
      {
LABEL_27:
        *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) &= ~0x1000u;
        return 0LL;
      }
      PushW32ThreadLock(v18, &v30, (__int64)Win32FreePool);
      v20 = *(_QWORD *)(a1 + 280);
      if ( v20 )
      {
        v21 = 0;
        v22 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 248LL);
        if ( v22 )
        {
          while ( !*(_BYTE *)(v21 + v20) )
          {
            if ( ++v21 >= v22 )
              goto LABEL_29;
          }
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2636LL);
        }
LABEL_29:
        Win32FreePool(*(void **)(a1 + 280));
        *(_QWORD *)(a1 + 280) = 0LL;
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 248LL) = 0;
      v23 = *(_QWORD *)(a1 + 40);
      v24 = *(unsigned int *)(v23 + 200);
      if ( (_DWORD)v24 )
      {
        v25 = (void *)xxxClientAllocWindowClassExtraBytes((unsigned int)v24, a1);
        if ( !v25 || (v23 = *(_QWORD *)(a1 + 40), (*(_WORD *)(v23 + 42) & 0xC000) != 0) )
        {
LABEL_26:
          PopAndFreeAlwaysW32ThreadLock((__int64)&v30);
          goto LABEL_27;
        }
      }
      else
      {
        v25 = 0LL;
      }
      v26 = *(_QWORD *)(v23 + 296);
      if ( v26 )
      {
        if ( v25 )
          memmove(v25, (const void *)(v26 + v17), v24);
        v27 = *(_QWORD *)(a1 + 40);
        v28 = *(_QWORD *)(v27 + 296);
        *(_QWORD *)(v27 + 296) = v25;
        *(_DWORD *)(*(_QWORD *)(a1 + 40) + 200LL) = v24;
        xxxClientFreeWindowClassExtraBytes(a1, v28);
        if ( (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0xC000) != 0 )
          goto LABEL_26;
      }
      else
      {
        *(_QWORD *)(v23 + 296) = v25;
        *(_DWORD *)(*(_QWORD *)(a1 + 40) + 200LL) = v24;
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v30;
      *(_QWORD *)(a1 + 280) = v19;
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 248LL) = v17;
      v10 = a5;
LABEL_11:
      *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) = v10;
      *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) &= ~0x1000u;
      return 1LL;
    }
  }
  return 0LL;
}
