/*
 * XREFs of ?InitializeChromeOptionsAndGetTitleBar@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAPEAUIApplicationFrameTitleBar@@@Z @ 0x1803BAC90
 * Callers:
 *     ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1803BAFB4 (-InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::InitializeChromeOptionsAndGetTitleBar(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrameWrapper *a2,
        struct IApplicationFrameTitleBar **a3)
{
  __int64 (__fastcall *v5)(struct IApplicationFrameWrapper *, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, TouchKeyboardExperienceManager **); // rdi
  struct IApplicationFrameTitleBar *v12; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  TouchKeyboardExperienceManager *v15; // [rsp+40h] [rbp+20h] BYREF
  __int64 v16; // [rsp+48h] [rbp+28h] BYREF

  v15 = this;
  v16 = 0LL;
  v5 = *(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64 *))(*(_QWORD *)a2 + 32LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  v6 = v5(a2, &v16);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v15 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v16 + 112LL))(v16, 255LL, 24LL);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v10 = v16;
      v11 = *(__int64 (__fastcall **)(__int64, TouchKeyboardExperienceManager **))(*(_QWORD *)v16 + 144LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
      v8 = v11(v10, &v15);
      v7 = v8;
      if ( v8 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(TouchKeyboardExperienceManager *, __int64, __int64))(*(_QWORD *)v15 + 48LL))(
               v15,
               1LL,
               1LL);
        v7 = v8;
        if ( v8 >= 0 )
        {
          v8 = (*(__int64 (__fastcall **)(TouchKeyboardExperienceManager *, __int64, _QWORD))(*(_QWORD *)v15 + 88LL))(
                 v15,
                 1023LL,
                 0LL);
          v7 = v8;
          if ( v8 >= 0 )
          {
            v8 = (*(__int64 (__fastcall **)(TouchKeyboardExperienceManager *, _QWORD))(*(_QWORD *)v15 + 56LL))(v15, 0LL);
            v7 = v8;
            if ( v8 >= 0 )
            {
              v8 = (*(__int64 (__fastcall **)(TouchKeyboardExperienceManager *, __int64))(*(_QWORD *)v15 + 104LL))(
                     v15,
                     1LL);
              v7 = v8;
              if ( v8 >= 0 )
              {
                v8 = (*(__int64 (__fastcall **)(TouchKeyboardExperienceManager *, _QWORD))(*(_QWORD *)v15 + 32LL))(
                       v15,
                       0LL);
                v7 = v8;
                if ( v8 >= 0 )
                {
                  v8 = (*(__int64 (__fastcall **)(TouchKeyboardExperienceManager *, const WCHAR *))(*(_QWORD *)v15 + 24LL))(
                         v15,
                         &szAgent);
                  v7 = v8;
                  if ( v8 >= 0 )
                  {
                    v12 = v15;
                    v15 = 0LL;
                    *a3 = v12;
                    v7 = 0;
                    goto LABEL_21;
                  }
                  v9 = 2761LL;
                }
                else
                {
                  v9 = 2760LL;
                }
              }
              else
              {
                v9 = 2759LL;
              }
            }
            else
            {
              v9 = 2756LL;
            }
          }
          else
          {
            v9 = 2753LL;
          }
        }
        else
        {
          v9 = 2752LL;
        }
      }
      else
      {
        v9 = 2751LL;
      }
    }
    else
    {
      v9 = 2750LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
LABEL_21:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xABB,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_22:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  return v7;
}
