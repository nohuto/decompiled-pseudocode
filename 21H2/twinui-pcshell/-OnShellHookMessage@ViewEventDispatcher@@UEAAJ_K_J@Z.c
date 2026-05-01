/*
 * XREFs of ?OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z @ 0x180314440
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_HandleForegroundWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x18031BBA8 (-_HandleForegroundWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z @ 0x18031BC80 (-_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z.c)
 *     ?_HandleWindowDestroyed@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x18031C70C (-_HandleWindowDestroyed@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_ViewFromWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@PEAPEAUIViewWrapperInternal@@@Z @ 0x18031D884 (-_ViewFromWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@PEAPEAUIViewWrapperInternal@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewEventDispatcher::OnShellHookMessage(RTL_SRWLOCK *this, unsigned __int64 a2, HWND a3)
{
  struct IViewWrapperInternal *v6; // rdi
  RTL_SRWLOCK *v8; // rcx
  __int64 v9; // r8
  RTL_SRWLOCK *v10; // rdi
  int v11; // ebx
  struct IViewWrapperInternal *v12; // [rsp+48h] [rbp+10h] BYREF
  RTL_SRWLOCK *v13; // [rsp+50h] [rbp+18h]

  if ( a2 > 0x26 )
    return 0LL;
  if ( (unsigned int)a2 <= 0x19 )
  {
    if ( (_DWORD)a2 == 25 )
      goto LABEL_9;
    if ( (_DWORD)a2 == 17 )
    {
      v8 = this - 9;
      v9 = 0LL;
    }
    else
    {
      if ( (_DWORD)a2 == 18 )
      {
        ViewEventDispatcher::_HandleWindowDestroyed((ViewEventDispatcher *)&this[-9], a3);
        return 0LL;
      }
      if ( (_DWORD)a2 == 19 )
        goto LABEL_9;
      if ( (_DWORD)a2 != 21 )
      {
        if ( (_DWORD)a2 == 23 )
        {
LABEL_9:
          v6 = (struct IViewWrapperInternal *)&this[26];
          AcquireSRWLockExclusive(this + 26);
          v12 = v6;
          ViewEventDispatcher::_HandleForegroundWindow((ViewEventDispatcher *)&this[-9], a3);
          if ( v6 )
            ReleaseSRWLockExclusive((PSRWLOCK)v6);
        }
        return 0LL;
      }
      v8 = this - 9;
      v9 = 1LL;
    }
    ViewEventDispatcher::_HandleWindowCreated(v8, a3, v9);
    return 0LL;
  }
  if ( (_DWORD)a2 == 26 || (_DWORD)a2 == 27 )
    goto LABEL_9;
  if ( (_DWORD)a2 != 31 && (_DWORD)a2 != 36 && (_DWORD)a2 != 38 )
    return 0LL;
  v12 = 0LL;
  v10 = this + 26;
  AcquireSRWLockShared(this + 26);
  v13 = v10;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  v11 = ViewEventDispatcher::_ViewFromWindow((ViewEventDispatcher *)&this[-9], a3, &v12);
  if ( v11 >= 0 )
  {
    if ( v10 )
      ReleaseSRWLockShared(v10);
    (*(void (__fastcall **)(struct IViewWrapperInternal *, unsigned __int64))(*(_QWORD *)v12 + 808LL))(v12, a2);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    return 0LL;
  }
  if ( v10 )
    ReleaseSRWLockShared(v10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return (unsigned int)v11;
}
