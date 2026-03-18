/*
 * XREFs of NtUserGetWindowRgnEx @ 0x1C01F7560
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     CalcVisRgn @ 0x1C004B8D0 (CalcVisRgn.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x1C0084B7C (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     MirrorRegion @ 0x1C00F9228 (MirrorRegion.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C029D948 (GreScaleRgnToDestLogPixel.c)
 */

__int64 __fastcall NtUserGetWindowRgnEx(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  int v3; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  const struct tagWND *v7; // rdi
  __int64 v8; // r8
  unsigned int v9; // ebx
  int v10; // ebx
  __int64 v11; // rdx
  int v12; // edx
  int v13; // ecx
  unsigned int v14; // r9d
  unsigned int RgnBox; // eax
  HRGN ExplicitClipRgn; // rax
  __int64 v17; // r10
  unsigned int v18; // eax
  unsigned __int64 v20; // [rsp+20h] [rbp-28h] BYREF
  __int128 v21; // [rsp+28h] [rbp-20h] BYREF

  v3 = a3;
  v20 = a2;
  EnterSharedCrit(a1, a2, a3);
  v7 = (const struct tagWND *)ValidateHwnd(a1);
  if ( !v7 )
    goto LABEL_2;
  v10 = 63;
  if ( (unsigned int)UserUnsafeIsCurrentProcessDwm(v6, v5, v8) )
    v10 = 127;
  if ( (~v10 & v3) != 0 )
  {
    UserSetLastError(1004LL, v11);
LABEL_2:
    v9 = 0;
    goto LABEL_30;
  }
  if ( !v20 )
  {
    v9 = 0;
    UserSetLastError(87LL, v11);
    goto LABEL_30;
  }
  if ( (v3 & 2) != 0 )
  {
    v12 = (2 * (v3 & 4 | 0x4000200)) | 0x10;
    if ( (v3 & 8) == 0 )
      v12 = 2 * (v3 & 4 | 0x4000200);
    v13 = v12 | 1;
    if ( (v3 & 0x10) != 0 )
      v13 = v12;
    v14 = v13 | 0x1000000;
    v21 = 0LL;
    if ( (v3 & 0x40) == 0 )
      v14 = v13;
    CalcVisRgn((HRGN *)&v20, v7, v7, v14);
    RgnBox = GreGetRgnBox(v20, &v21);
  }
  else
  {
    ExplicitClipRgn = tagWND::GetExplicitClipRgn(v7);
    if ( !ExplicitClipRgn )
      goto LABEL_2;
    RgnBox = GreCombineRgn(v17, ExplicitClipRgn, 0LL, 5LL);
  }
  v9 = RgnBox;
  if ( !RgnBox )
    goto LABEL_2;
  v6 = *((_QWORD *)v7 + 5);
  if ( (*(_WORD *)(v6 + 42) & 0x2FFF) != 0x29D )
  {
    v18 = GreOffsetRgn(v20, (unsigned int)-*(_DWORD *)(v6 + 88), (unsigned int)-*(_DWORD *)(v6 + 92));
    v6 = *((_QWORD *)v7 + 5);
    v9 = v18;
  }
  LOBYTE(v6) = ((v3 & 1) == 0) & (*(_BYTE *)(v6 + 26) >> 6);
  if ( (v6 & 1) != 0 )
    MirrorRegion((__int64)v7, v20, 0);
  if ( (v3 & 0x20) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) )
      {
        v6 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL);
        if ( (*(_DWORD *)(v6 + 64) & 1) != 0 )
        {
          v6 = *((_QWORD *)v7 + 5);
          if ( (*(_DWORD *)(v6 + 288) & 0x4000000F) == 0x40000000 )
            GreScaleRgnToDestLogPixel(*(unsigned __int16 *)(v6 + 284), v20);
        }
      }
    }
  }
LABEL_30:
  UserSessionSwitchLeaveCrit(v6);
  return v9;
}
