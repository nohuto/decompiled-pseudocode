/*
 * XREFs of CWindowGroupManager::_ExecuteGroupAction__lambda_0b15c9f6ca8e948c976540f347ffa214___ @ 0x1C023F958
 * Callers:
 *     ?GetGroupActiveWindow@CWindowGroupManager@@QEAAPEAUtagWND@@PEAU2@W4GetWindowForActivationOption@WindowGroupingWindowManagement@@@Z @ 0x1C0240510 (-GetGroupActiveWindow@CWindowGroupManager@@QEAAPEAUtagWND@@PEAU2@W4GetWindowForActivationOption@.c)
 * Callees:
 *     _anonymous_namespace_::FindObject_CWindow_HWND_____const_&__lambda_feddac2f3865f252345e81b2e8967f61___ @ 0x1C023F6C8 (_anonymous_namespace_--FindObject_CWindow_HWND_____const_-__lambda_feddac2f3865f252345e81b2e8967.c)
 *     _anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_&__lambda_f391ddf1cf56839542dcbc253db2f01b___ @ 0x1C023F7D0 (_anonymous_namespace_--FindObject_CWindowGroup_WINDOW_GROUP_ID_const_-__lambda_f391ddf1cf5683954.c)
 *     _lambda_a3dfffe89e22da34bf9580289d018c81_::operator() @ 0x1C023FC00 (_lambda_a3dfffe89e22da34bf9580289d018c81_--operator().c)
 *     ?GetWindowToForegroundActivate@CWindow@@QEBAPEAUtagWND@@XZ @ 0x1C0240560 (-GetWindowToForegroundActivate@CWindow@@QEBAPEAUtagWND@@XZ.c)
 */

__int64 __fastcall CWindowGroupManager::_ExecuteGroupAction__lambda_0b15c9f6ca8e948c976540f347ffa214___(
        __int64 a1,
        _DWORD *a2,
        __int64 **a3)
{
  __int64 Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b; // rax
  unsigned int v5; // ebx
  __int64 v6; // r8
  __int64 *v7; // rcx
  char v8; // di
  CWindow *v9; // rsi
  __int64 v10; // rax
  __int64 Object_CWindow_HWND_____const____lambda_feddac2f3865f252345e81b2e8967f61; // rax
  struct tagWND *WindowToForegroundActivate; // rax
  _QWORD v14[4]; // [rsp+20h] [rbp-20h] BYREF
  char v15; // [rsp+70h] [rbp+30h] BYREF
  CWindow *v16; // [rsp+78h] [rbp+38h] BYREF
  __int64 v17; // [rsp+88h] [rbp+48h] BYREF

  Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b = anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b___(
                                                                                           a1 + 16,
                                                                                           (unsigned int)*a2,
                                                                                           a2);
  v5 = 0;
  v6 = Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b;
  if ( Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b )
  {
    v7 = *a3;
    v8 = 0;
    v14[0] = Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f391ddf1cf56839542dcbc253db2f01b;
    v9 = 0LL;
    v15 = 0;
    v14[1] = &v15;
    v14[2] = &v16;
    v10 = *v7;
    v16 = 0LL;
    v17 = v10;
    Object_CWindow_HWND_____const____lambda_feddac2f3865f252345e81b2e8967f61 = anonymous_namespace_::FindObject_CWindow_HWND_____const____lambda_feddac2f3865f252345e81b2e8967f61___(
                                                                                 v6 + 24,
                                                                                 (unsigned __int16)v10,
                                                                                 &v17);
    if ( Object_CWindow_HWND_____const____lambda_feddac2f3865f252345e81b2e8967f61 )
    {
      lambda_a3dfffe89e22da34bf9580289d018c81_::operator()(
        v14,
        Object_CWindow_HWND_____const____lambda_feddac2f3865f252345e81b2e8967f61);
      v8 = v15;
      v9 = v16;
    }
    WindowToForegroundActivate = 0LL;
    if ( v8 )
      WindowToForegroundActivate = CWindow::GetWindowToForegroundActivate(v9);
    *a3[1] = (__int64)WindowToForegroundActivate;
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v5;
}
