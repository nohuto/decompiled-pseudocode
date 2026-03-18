/*
 * XREFs of xxxTranslateMessage @ 0x1C010081C
 * Callers:
 *     NtUserTranslateMessage @ 0x1C0100770 (NtUserTranslateMessage.c)
 *     xxxOldNextWindow @ 0x1C01EF0A8 (xxxOldNextWindow.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C020EBC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxHandleMenuMessages @ 0x1C022D700 (xxxHandleMenuMessages.c)
 *     xxxMNLoop @ 0x1C022E038 (xxxMNLoop.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0240F90 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxHelpLoop @ 0x1C024A384 (xxxHelpLoop.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     _PostMessageExtended @ 0x1C00A5EEC (_PostMessageExtended.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall xxxTranslateMessage(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  int v5; // r12d
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // esi
  __int64 v9; // rdi
  int v10; // ebp
  BOOL v11; // esi
  __int64 v12; // rcx
  int v14; // r12d
  int v15; // eax
  unsigned int v16; // r12d
  __int64 v17; // rax
  __int64 v18; // r14
  struct tagWND *v19; // rsi
  _WORD *v20; // rdi
  __int64 *v21; // rax
  __int64 v22; // rax
  int v23; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v24[32]; // [rsp+48h] [rbp-60h] BYREF

  v2 = *(_DWORD *)(a1 + 8);
  v23 = 0;
  v5 = 0;
  if ( v2 < 0x100 )
    return 0LL;
  if ( v2 > 0x101 && v2 != 261 )
  {
    if ( v2 == 260 )
    {
      v5 = 1;
      goto LABEL_3;
    }
    return 0LL;
  }
LABEL_3:
  LOBYTE(v6) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1280);
  EtwTraceBeginTranslateMessage(v6, v2);
  v7 = *(_QWORD *)(gptiCurrent + 608LL);
  if ( v7 && ((v21 = *(__int64 **)(*(_QWORD *)v7 + 16LL)) != 0LL ? (v22 = *v21) : (v22 = 0LL), v22 == *(_QWORD *)a1) )
    v8 = a2 | 1;
  else
    v8 = a2 & 0xFFFFFFFE;
  v9 = *(_QWORD *)(a1 + 24);
  v10 = xxxInternalToUnicode(
          *(unsigned __int16 *)(a1 + 16),
          WORD1(v9),
          *(_QWORD *)(gptiCurrent + 432LL) + 228LL,
          v24,
          16,
          v8,
          &v23,
          0LL);
  if ( v10 )
  {
    v14 = 4 * v5;
    if ( v10 <= 0 )
    {
      v10 = -v10;
      v15 = 259;
    }
    else
    {
      v15 = 258;
    }
    v16 = v15 + v14;
    HIDWORD(v17) = HIDWORD(v9);
    v18 = v9 | v23 & 0x4000000 | 0x80000000LL;
    if ( (v23 & 0x8000) == 0 )
    {
      LODWORD(v17) = v9 & 0x7FFFFFFF | v23 & 0x4000000;
      v18 = v17;
    }
    v19 = (struct tagWND *)ValidateHwnd(*(_QWORD *)a1);
    if ( v19 )
    {
      v20 = v24;
      while ( v10 > 0 )
      {
        PostMessageExtended(v19, v16, (unsigned __int16)*v20, v18 | ((unsigned int)v10 > 1 ? 0x2000000 : 0), 0LL);
        *v20 = 0;
        --v10;
        ++v20;
      }
      v11 = 1;
    }
    else
    {
      v11 = 0;
    }
  }
  else
  {
    v11 = (v8 & 2) == 0;
  }
  LOBYTE(v12) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1280);
  EtwTraceEndTranslateMessage(v12, v2);
  return v11;
}
