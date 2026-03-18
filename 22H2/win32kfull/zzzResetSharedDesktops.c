/*
 * XREFs of zzzResetSharedDesktops @ 0x1C008DF60
 * Callers:
 *     <none>
 * Callees:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00317F0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     CalcVisRgn @ 0x1C0033320 (CalcVisRgn.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C005B484 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C008E138 (zzzUpdateWindowsAfterModeChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzResetSharedDesktops(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // edi
  unsigned int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r9
  __int128 v8; // kr00_16
  __int64 v9; // rcx
  __int64 *v10; // rcx
  _DWORD *v11; // r9
  __int64 v13; // [rsp+20h] [rbp-28h]
  HRGN v14[4]; // [rsp+28h] [rbp-20h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = *(_QWORD *)(a1 + 40);
  *(_OWORD *)v14 = *(_OWORD *)(*gpDispInfo + 24LL);
  v7 = *(_QWORD *)(v6 + 16);
  if ( v7 )
  {
    v8 = *(_OWORD *)v14;
    a2 = (unsigned __int64)v14[0] >> 32;
    a3 = (unsigned __int64)v14[1] >> 32;
    do
    {
      v9 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 24LL);
      *(_DWORD *)(*(_QWORD *)(v9 + 40) + 88LL) = v8;
      *(_DWORD *)(*(_QWORD *)(v9 + 40) + 92LL) = a2;
      *(_DWORD *)(*(_QWORD *)(v9 + 40) + 96LL) = DWORD2(v8);
      *(_DWORD *)(*(_QWORD *)(v9 + 40) + 100LL) = a3;
      a1 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 24LL);
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 104LL) = v8;
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 108LL) = a2;
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 112LL) = DWORD2(v8);
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 116LL) = a3;
      v7 = *(_QWORD *)(v7 + 32);
    }
    while ( v7 );
  }
  v14[0] = (HRGN)CreateEmptyRgn(a1, a2, a3, v7);
  CalcVisRgn(v14, *(_QWORD **)(*(_QWORD *)(v5 + 8) + 24LL), *(const struct tagWND **)(*(_QWORD *)(v5 + 8) + 24LL), 1LL);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  GreSelectVisRgn(*(_QWORD *)(gpDispInfo + 56LL), v14[0], 1LL);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzUpdateWindowsAfterModeChange(v4, v3);
  v10 = *(__int64 **)(v5 + 8);
  if ( (*(_DWORD *)(*v10 + 64) & 1) == 0 )
    zzzLockDisplayAreaAndInvalidateDCCache(v10[3], 0, 0LL);
  CCursorClip::ClearClip(gpCursorClip);
  v11 = *(_DWORD **)(*(_QWORD *)(gpDispInfo + 96LL) + 40LL);
  LODWORD(v13) = (v11[9] - v11[7]) / 2;
  HIDWORD(v13) = (v11[10] - v11[8]) / 2;
  gptSSCursor = v13;
  return zzzInternalSetCursorPos(v13, HIDWORD(v13), 2, 0);
}
