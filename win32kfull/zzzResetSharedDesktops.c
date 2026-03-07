// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzResetSharedDesktops(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r9
  int v8; // r10d
  int v9; // r11d
  unsigned __int64 v10; // r8
  __int64 v11; // rcx
  __int64 *v12; // rcx
  _DWORD *v13; // r9
  __int64 v15; // [rsp+20h] [rbp-28h]
  HRGN v16[4]; // [rsp+28h] [rbp-20h] BYREF

  v4 = a2;
  v5 = a1;
  v6 = *(_QWORD *)(a1 + 40);
  *(_OWORD *)v16 = *(_OWORD *)(*gpDispInfo + 24LL);
  v7 = *(_QWORD *)(v6 + 16);
  if ( v7 )
  {
    v8 = (int)v16[0];
    v9 = (int)v16[1];
    a2 = (unsigned __int64)v16[0] >> 32;
    v10 = (unsigned __int64)v16[1] >> 32;
    do
    {
      v11 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 24LL);
      *(_DWORD *)(*(_QWORD *)(v11 + 40) + 88LL) = v8;
      *(_DWORD *)(*(_QWORD *)(v11 + 40) + 92LL) = a2;
      *(_DWORD *)(*(_QWORD *)(v11 + 40) + 96LL) = v9;
      *(_DWORD *)(*(_QWORD *)(v11 + 40) + 100LL) = v10;
      a1 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 24LL);
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 104LL) = v8;
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 108LL) = a2;
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 112LL) = v9;
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 116LL) = v10;
      v7 = *(_QWORD *)(v7 + 32);
    }
    while ( v7 );
  }
  v16[0] = (HRGN)CreateEmptyRgn(a1, a2);
  CalcVisRgn(v16, *(_QWORD **)(*(_QWORD *)(v5 + 8) + 24LL), *(const struct tagWND **)(*(_QWORD *)(v5 + 8) + 24LL), 1u);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  GreSelectVisRgn(*(_QWORD *)(gpDispInfo + 56LL), v16[0], 1LL);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzUpdateWindowsAfterModeChange(v4, a3);
  v12 = *(__int64 **)(v5 + 8);
  if ( (*(_DWORD *)(*v12 + 64) & 1) == 0 )
    zzzLockDisplayAreaAndInvalidateDCCache(v12[3], 0, 0LL);
  CCursorClip::ClearClip(gpCursorClip);
  v13 = *(_DWORD **)(*(_QWORD *)(gpDispInfo + 96LL) + 40LL);
  LODWORD(v15) = (v13[9] - v13[7]) / 2;
  HIDWORD(v15) = (v13[10] - v13[8]) / 2;
  *(_QWORD *)gptSSCursor = v15;
  return zzzInternalSetCursorPos(v15, HIDWORD(v15), 2, 0);
}
