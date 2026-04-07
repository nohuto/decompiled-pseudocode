/*
 * XREFs of ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x18003F390
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000ED30 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x180016360 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001B0F0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?WillEndAnimationCloaked@CWindowData@@QEBA_NXZ @ 0x1800087CC (-WillEndAnimationCloaked@CWindowData@@QEBA_NXZ.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x180009074 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 */

char __fastcall CWindowData::ShouldBeIncludedInOwnerSWR(CWindowData *this)
{
  char v2; // si
  CWindowData *v4; // rcx
  bool v5; // bl
  HWND v6; // rcx
  WCHAR *v7; // rax
  int v8; // r10d
  int v9; // r8d
  WCHAR ClassName[264]; // [rsp+20h] [rbp-228h] BYREF

  v2 = 0;
  if ( (*((_BYTE *)this + 608) & 1) != 0
    && (*((_DWORD *)this + 25) & 0xC00000) != 0xC00000
    && (*((char *)this + 104) >= 0 || (*((_DWORD *)this + 154) & 0xFFF) == 0x11) )
  {
    if ( *((_QWORD *)this + 4) )
    {
      v4 = (CWindowData *)*((_QWORD *)this + 67);
      if ( v4 )
      {
        v5 = CWindowData::WillEndAnimationCloaked(v4);
        if ( CWindowData::WillEndAnimationCloaked(this) == v5
          && ContainsRect((const struct tagRECT *)(*((_QWORD *)this + 67) + 48LL), (const struct tagRECT *)this + 3) )
        {
          v6 = (HWND)*((_QWORD *)this + 5);
          ClassName[0] = 0;
          v2 = 1;
          if ( GetClassNameW(v6, ClassName, 260) )
          {
            v7 = ClassName;
            do
            {
              v8 = *(WCHAR *)((char *)v7 + (char *)L"ImmersiveAppTitleBar" - (char *)ClassName);
              v9 = *v7 - v8;
              if ( v9 )
                break;
              ++v7;
            }
            while ( v8 );
            if ( !v9 )
              return 0;
          }
        }
      }
    }
  }
  return v2;
}
