/*
 * XREFs of zzzAttachThreadInput @ 0x1C009D530
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0002004 (xxxSetModernAppWindow.c)
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     NtUserAttachThreadInput @ 0x1C009B9B0 (NtUserAttachThreadInput.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C009C270 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C00A3568 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01DC5A0 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01DD074 (TryDetachShellFrame.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     zzzReattachThreads @ 0x1C00A8E58 (zzzReattachThreads.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01D9928 (ExemptedFromImmersiveRestrictions.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzAttachThreadInput(__int64 a1, __int64 a2, __int16 a3)
{
  int v3; // ebp
  BOOL v6; // r14d
  __int64 v7; // rax
  __int64 *i; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v13; // rax
  __int64 *v14; // rdx
  __int64 *v15; // rcx
  __int64 v16; // rax
  __int64 *v17; // rcx
  int v18; // eax

  v3 = a3 & 1;
  v6 = (a3 & 0x4000) != 0 && (a3 & 1) == 0;
  if ( a1 != a2 )
  {
    if ( (a3 & 0x8000) == 0 )
    {
      v7 = *(_QWORD *)(a2 + 424);
      if ( v7 != *(_QWORD *)(a1 + 424) || *(_QWORD *)(gptiCurrent + 424LL) != v7 )
      {
        if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 880LL, *(_QWORD *)(a2 + 432) + 424LL)
          && *(int *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) >= 0 )
        {
          v10 = *(_QWORD *)(a2 + 432);
          v11 = a2;
LABEL_22:
          EtwTraceUIPIInputError(gptiCurrent, v11, v10, *(_QWORD *)(v10 + 424), 2);
          return 3221225506LL;
        }
        if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 880LL, *(_QWORD *)(a1 + 432) + 424LL)
          && *(int *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) >= 0
          || (unsigned int)IsDesktopApp(*(_QWORD *)(gptiCurrent + 424LL))
          && ((unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a2 + 424))
           || (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a1 + 424)))
          && !(unsigned int)ExemptedFromImmersiveRestrictions(gptiCurrent)
          && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 820LL) & 0x100) == 0 )
        {
          v10 = *(_QWORD *)(a1 + 432);
          v11 = a1;
          goto LABEL_22;
        }
      }
    }
    if ( (*(_DWORD *)(a2 + 488) & 0x40) != 0
      || (*(_DWORD *)(a1 + 488) & 0x40) != 0
      || *(_QWORD *)(a2 + 456) != *(_QWORD *)(a1 + 456) )
    {
      return 3221225506LL;
    }
    if ( v3 )
    {
      for ( i = (__int64 *)gpai; ; i = (__int64 *)*i )
      {
        if ( !i )
        {
          v13 = Win32AllocPoolZInit(32LL, 1767994197LL);
          if ( v13 )
          {
            *(_QWORD *)(v13 + 8) = a1;
            *(_QWORD *)(v13 + 16) = a2;
            *(_DWORD *)(v13 + 24) = 1;
            *(_QWORD *)v13 = gpai;
            gpai = v13;
            goto LABEL_26;
          }
          return 3221225495LL;
        }
        v9 = i[2];
        if ( v9 == a2 && i[1] == a1 )
          break;
        if ( v9 == a1 && i[1] == a2 )
          break;
      }
      v18 = *((_DWORD *)i + 6);
      if ( v18 == -1 )
        return 3221225485LL;
      *((_DWORD *)i + 6) = v18 + 1;
      return 0LL;
    }
    v14 = (__int64 *)gpai;
    v15 = (__int64 *)gpai;
    if ( gpai )
    {
      while ( 1 )
      {
        v16 = v15[2];
        if ( v16 == a2 && v15[1] == a1 )
          break;
        if ( v16 == a1 && v15[1] == a2 )
          break;
        v14 = v15;
        v15 = (__int64 *)*v15;
        if ( !v15 )
          return 3221225485LL;
      }
      --*((_DWORD *)v15 + 6);
      v17 = (__int64 *)*v14;
      if ( !*(_DWORD *)(*v14 + 24) || v6 )
      {
        *v14 = *v17;
        Win32FreePool(v17);
LABEL_26:
        *(_DWORD *)(a2 + 1256) |= 0x200u;
        *(_DWORD *)(a1 + 1256) |= 0x200u;
        if ( _bittest((const signed __int32 *)(a1 + 1256), 0xAu) )
          KeSetEvent(*(PRKEVENT *)(a1 + 736), 1, 0);
        if ( _bittest((const signed __int32 *)(a2 + 1256), 0xAu) )
          KeSetEvent(*(PRKEVENT *)(a2 + 736), 1, 0);
        if ( !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464) + 48LL)
          && !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464) + 56LL) )
        {
          zzzReattachThreads(0LL, a1, a2);
        }
      }
      return 0LL;
    }
  }
  return 3221225485LL;
}
