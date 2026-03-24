/*
 * XREFs of zzzResetSharedDesktops @ 0x1C00F2A00
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00146EC (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00726C4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     CalcVisRgn @ 0x1C00738B0 (CalcVisRgn.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00F1018 (zzzUpdateWindowsAfterModeChange.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzResetSharedDesktops(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v3; // edi
  int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r9
  int v8; // r10d
  int v9; // r11d
  __int64 v10; // rcx
  __int64 *v11; // rcx
  _DWORD *v12; // r9
  __int64 v14; // [rsp+20h] [rbp-28h]
  HRGN v15[2]; // [rsp+28h] [rbp-20h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = *(_QWORD *)(a1 + 40);
  *(_OWORD *)v15 = *(_OWORD *)(*gpDispInfo + 24LL);
  v7 = *(_QWORD *)(v6 + 16);
  if ( v7 )
  {
    v8 = (int)v15[0];
    v9 = (int)v15[1];
    a2 = (unsigned __int64)v15[0] >> 32;
    a3 = (unsigned __int64)v15[1] >> 32;
    do
    {
      v10 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 24LL);
      *(_DWORD *)(*(_QWORD *)(v10 + 40) + 88LL) = v8;
      *(_DWORD *)(*(_QWORD *)(v10 + 40) + 92LL) = a2;
      *(_DWORD *)(*(_QWORD *)(v10 + 40) + 96LL) = v9;
      *(_DWORD *)(*(_QWORD *)(v10 + 40) + 100LL) = a3;
      a1 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 24LL);
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 104LL) = v8;
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 108LL) = a2;
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 112LL) = v9;
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 116LL) = a3;
      v7 = *(_QWORD *)(v7 + 32);
    }
    while ( v7 );
  }
  v15[0] = (HRGN)CreateEmptyRgn(a1, a2, a3);
  CalcVisRgn(v15, *(_QWORD *)(*(_QWORD *)(v5 + 8) + 24LL), *(struct tagWND **)(*(_QWORD *)(v5 + 8) + 24LL), 1u);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  GreSelectVisRgn(*(_QWORD *)(gpDispInfo + 56LL), v15[0], 1LL);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzUpdateWindowsAfterModeChange(v4, v3);
  v11 = *(__int64 **)(v5 + 8);
  if ( (*(_DWORD *)(*v11 + 64) & 1) == 0 )
    zzzLockDisplayAreaAndInvalidateDCCache(v11[3], 0, 0LL);
  CCursorClip::ClearClip(gpCursorClip);
  v12 = *(_DWORD **)(*(_QWORD *)(gpDispInfo + 96LL) + 40LL);
  LODWORD(v14) = (v12[9] - v12[7]) / 2;
  HIDWORD(v14) = (v12[10] - v12[8]) / 2;
  *(_QWORD *)gptSSCursor = v14;
  return zzzInternalSetCursorPos(v14, HIDWORD(v14), 2, 0);
}
