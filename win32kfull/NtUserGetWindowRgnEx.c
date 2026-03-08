/*
 * XREFs of NtUserGetWindowRgnEx @ 0x1C01D57F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x1C002772C (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     MirrorRegion @ 0x1C002779C (MirrorRegion.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     CalcVisRgn @ 0x1C00535C0 (CalcVisRgn.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C02AA790 (GreScaleRgnToDestLogPixel.c)
 */

__int64 __fastcall NtUserGetWindowRgnEx(__int64 a1, HRGN a2, __int64 a3)
{
  int v3; // esi
  __int64 v5; // rcx
  const struct tagWND *v6; // rdi
  unsigned int v7; // ebx
  int v8; // ebx
  int v9; // edx
  int v10; // ecx
  unsigned int v11; // r9d
  unsigned int RgnBox; // eax
  HRGN ExplicitClipRgn; // rax
  __int64 v14; // r10
  HRGN v16; // [rsp+20h] [rbp-28h] BYREF
  __int128 v17; // [rsp+28h] [rbp-20h] BYREF

  v3 = a3;
  v16 = a2;
  EnterSharedCrit(a1, a2, a3);
  v6 = (const struct tagWND *)ValidateHwnd(a1);
  if ( !v6 )
    goto LABEL_2;
  v8 = 63;
  if ( (unsigned int)UserUnsafeIsCurrentProcessDwm() )
    v8 = 127;
  if ( (~v8 & v3) != 0 )
  {
    UserSetLastError(1004);
LABEL_2:
    v7 = 0;
    goto LABEL_30;
  }
  if ( !v16 )
  {
    v7 = 0;
    UserSetLastError(87);
    goto LABEL_30;
  }
  if ( (v3 & 2) != 0 )
  {
    v9 = (2 * (v3 & 4 | 0x4000200)) | 0x10;
    v17 = 0LL;
    if ( (v3 & 8) == 0 )
      v9 = 2 * (v3 & 4 | 0x4000200);
    v10 = v9 | 1;
    if ( (v3 & 0x10) != 0 )
      v10 = v9;
    v11 = v10 | 0x1000000;
    if ( (v3 & 0x40) == 0 )
      v11 = v10;
    CalcVisRgn(&v16, v6, v6, v11);
    RgnBox = GreGetRgnBox(v16, &v17);
  }
  else
  {
    ExplicitClipRgn = tagWND::GetExplicitClipRgn(v6);
    if ( !ExplicitClipRgn )
      goto LABEL_2;
    RgnBox = GreCombineRgn(v14, ExplicitClipRgn, 0LL, 5LL);
  }
  v7 = RgnBox;
  if ( !RgnBox )
    goto LABEL_2;
  v5 = *((_QWORD *)v6 + 5);
  if ( (*(_WORD *)(v5 + 42) & 0x2FFF) != 0x29D )
    v7 = GreOffsetRgn(v16, (unsigned int)-*(_DWORD *)(v5 + 88), (unsigned int)-*(_DWORD *)(v5 + 92));
  LOBYTE(v5) = ((v3 & 1) == 0) & (*(_BYTE *)(*((_QWORD *)v6 + 5) + 26LL) >> 6);
  if ( (_BYTE)v5 )
    MirrorRegion((__int64)v6, (unsigned __int64)v16, 0);
  if ( (v3 & 0x20) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    {
      if ( *((_QWORD *)PtiCurrentShared(v5) + 57) )
      {
        v5 = **(_QWORD **)(*((_QWORD *)PtiCurrentShared(v5) + 57) + 8LL);
        if ( (*(_DWORD *)(v5 + 64) & 1) != 0 )
        {
          v5 = *((_QWORD *)v6 + 5);
          if ( (*(_DWORD *)(v5 + 288) & 0x4000000F) == 0x40000000 )
            GreScaleRgnToDestLogPixel(*(unsigned __int16 *)(v5 + 284), v16);
        }
      }
    }
  }
LABEL_30:
  UserSessionSwitchLeaveCrit(v5);
  return v7;
}
