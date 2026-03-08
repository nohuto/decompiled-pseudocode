/*
 * XREFs of zzzAttachThreadInput @ 0x1C00CCFE8
 * Callers:
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C000A7BC (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     xxxSetModernAppWindow @ 0x1C000E204 (xxxSetModernAppWindow.c)
 *     NtUserAttachThreadInput @ 0x1C0011210 (NtUserAttachThreadInput.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01B6E20 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01B7EFC (TryDetachShellFrame.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     zzzReattachThreads @ 0x1C00CD3A8 (zzzReattachThreads.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01B4350 (ExemptedFromImmersiveRestrictions.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzAttachThreadInput(__int64 a1, __int64 a2, __int16 a3)
{
  int v3; // ebp
  BOOL v6; // r14d
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v11; // rdx
  __int64 *i; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  __int64 *v18; // rdx
  __int64 *v19; // rcx
  __int64 v20; // r8
  __int64 *v21; // rcx

  v3 = a3 & 1;
  v6 = (a3 & 0x4000) != 0 && (a3 & 1) == 0;
  if ( a1 != a2 )
  {
    if ( (a3 & 0x8000) == 0 )
    {
      v7 = *(_QWORD *)(a2 + 424);
      if ( v7 != *(_QWORD *)(a1 + 424) || *(_QWORD *)(gptiCurrent + 424LL) != v7 )
      {
        if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 864LL, *(_QWORD *)(a2 + 432) + 432LL)
          && *(int *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) >= 0 )
        {
          v8 = *(_QWORD *)(a2 + 432);
          v9 = a2;
LABEL_9:
          EtwTraceUIPIInputError(gptiCurrent, v9, v8, *(_QWORD *)(v8 + 432), 2);
          return 3221225506LL;
        }
        if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 864LL, *(_QWORD *)(a1 + 432) + 432LL)
          && *(int *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) >= 0
          || (unsigned int)IsDesktopApp(*(_QWORD *)(gptiCurrent + 424LL), v11)
          && ((unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a2 + 424))
           || (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a1 + 424)))
          && !(unsigned int)ExemptedFromImmersiveRestrictions(gptiCurrent)
          && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 812LL) & 0x100) == 0 )
        {
          v8 = *(_QWORD *)(a1 + 432);
          v9 = a1;
          goto LABEL_9;
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
          v14 = Win32AllocPoolZInit(32LL, 1767994197LL);
          if ( v14 )
          {
            *(_QWORD *)(v14 + 8) = a1;
            *(_QWORD *)(v14 + 16) = a2;
            *(_DWORD *)(v14 + 24) = 1;
            *(_QWORD *)v14 = gpai;
            gpai = v14;
            goto LABEL_26;
          }
          return 3221225495LL;
        }
        v13 = i[2];
        if ( v13 == a2 && i[1] == a1 )
          break;
        if ( v13 == a1 && i[1] == a2 )
          break;
      }
      v17 = *((_DWORD *)i + 6);
      if ( v17 == -1 )
        return 3221225485LL;
      *((_DWORD *)i + 6) = v17 + 1;
      return 0LL;
    }
    v18 = (__int64 *)gpai;
    v19 = (__int64 *)gpai;
    if ( gpai )
    {
      while ( 1 )
      {
        v20 = v19[2];
        if ( v20 == a2 && v19[1] == a1 )
          break;
        if ( v20 == a1 && v19[1] == a2 )
          break;
        v18 = v19;
        v19 = (__int64 *)*v19;
        if ( !v19 )
          return 3221225485LL;
      }
      --*((_DWORD *)v19 + 6);
      v21 = (__int64 *)*v18;
      if ( !*(_DWORD *)(*v18 + 24) || v6 )
      {
        *v18 = *v21;
        Win32FreePool(v21);
LABEL_26:
        v15 = 512LL;
        *(_DWORD *)(a2 + 1272) |= 0x200u;
        *(_DWORD *)(a1 + 1272) |= 0x200u;
        if ( _bittest((const signed __int32 *)(a1 + 1272), 0xAu) )
          KeSetEvent(*(PRKEVENT *)(a1 + 736), 1, 0);
        if ( _bittest((const signed __int32 *)(a2 + 1272), 0xAu) )
          KeSetEvent(*(PRKEVENT *)(a2 + 736), 1, 0);
        v16 = *((_QWORD *)PtiCurrentShared(v15) + 58);
        if ( !*(_QWORD *)(v16 + 48) && !*(_QWORD *)(*((_QWORD *)PtiCurrentShared(v16) + 58) + 56LL) )
          zzzReattachThreads(0LL, a1, a2);
      }
      return 0LL;
    }
  }
  return 3221225485LL;
}
