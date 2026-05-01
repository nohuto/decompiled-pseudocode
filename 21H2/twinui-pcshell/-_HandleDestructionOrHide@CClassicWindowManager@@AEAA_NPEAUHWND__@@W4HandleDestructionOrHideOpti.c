/*
 * XREFs of ?_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOptions@1@@Z @ 0x180059BC0
 * Callers:
 *     ?HandleHide@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x180059930 (-HandleHide@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z.c)
 *     ?HandleDestruction@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x180059950 (-HandleDestruction@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     CClassicWindowManager::ForEachWindow__lambda_1e9daa8d67d28b835187142b6b9a88ad___ @ 0x1801D1E10 (CClassicWindowManager--ForEachWindow__lambda_1e9daa8d67d28b835187142b6b9a88ad___.c)
 *     ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x1801D3740 (-RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CClassicWindowManager::_HandleDestructionOrHide(_QWORD *a1, __int64 a2, int a3)
{
  int v3; // ebx
  _QWORD *v6; // r14
  int (__fastcall ***v7)(_QWORD, GUID *, _QWORD *); // rsi
  __int64 v8; // rdi
  int v9; // r12d
  __int64 v10; // rbx
  int v11; // esi
  int (__fastcall ***v12)(_QWORD, GUID *, _QWORD *); // rcx
  int v13; // eax
  unsigned __int8 v14; // di
  __int64 v15; // rsi
  __int64 v16; // rdi
  int (__fastcall ***v17)(_QWORD, GUID *, _QWORD *); // rcx
  int (__fastcall ***v19)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int (__fastcall ***v22)(_QWORD, GUID *, _QWORD *); // rbx
  int v23; // ebx
  int (__fastcall ***v24)(_QWORD, GUID *, _QWORD *); // rcx
  _QWORD v25[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v26[3]; // [rsp+30h] [rbp-18h] BYREF
  int (__fastcall ***v27)(_QWORD, GUID *, _QWORD *); // [rsp+90h] [rbp+48h] BYREF
  int (__fastcall ***v28)(_QWORD, GUID *, _QWORD *); // [rsp+98h] [rbp+50h] BYREF
  int v29; // [rsp+A0h] [rbp+58h]
  int (__fastcall ***v30)(_QWORD, GUID *, _QWORD *); // [rsp+A8h] [rbp+60h] BYREF

  v29 = a3;
  v3 = a3;
  v27 = 0LL;
  v6 = a1 + 23;
  v25[0] = 0LL;
  v7 = 0LL;
  v30 = 0LL;
  v8 = 0LL;
  v9 = -2147319765;
  if ( a1[25] )
  {
    v25[1] = 0LL;
    while ( 1 )
    {
      v10 = *(_QWORD *)(v6[1] + 8 * v8);
      v26[0] = v10;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v28 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, _QWORD *))v10)(
             v10,
             &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
             &v28) >= 0
        && ((unsigned __int8 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *), __int64))(*v28)[24])(
             v28,
             a2) )
      {
        v11 = 0;
      }
      else
      {
        v11 = -1;
      }
      v12 = v28;
      if ( v28 )
      {
        v28 = 0LL;
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v12)[2])(v12);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      if ( !v11 )
        break;
      if ( (unsigned __int64)++v8 >= v6[2] )
      {
        v3 = v29;
        v7 = v30;
        goto LABEL_13;
      }
    }
    v7 = (int (__fastcall ***)(_QWORD, GUID *, _QWORD *))v8;
    v13 = 0;
    v3 = v29;
  }
  else
  {
LABEL_13:
    v13 = -2147319765;
  }
  if ( v13 < 0
    || (v19 = *(int (__fastcall ****)(_QWORD, GUID *, _QWORD *))(a1[24] + 8LL * (_QWORD)v7),
        (**v19)(v19, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v27) < 0) )
  {
    v14 = 0;
    if ( v3 == 1 )
    {
      v26[0] = 0LL;
      v15 = 0LL;
      v16 = 0LL;
      if ( a1[30] )
      {
        while ( 1 )
        {
          v25[0] = 0LL;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v25);
          v30 = *(int (__fastcall ****)(_QWORD, GUID *, _QWORD *))(a1[29] + 8 * v16);
          v22 = v30;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v30);
          v28 = 0LL;
          if ( (**v22)(v22, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v28) < 0
            || (v23 = 0,
                !((unsigned __int8 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *), __int64))(*v28)[24])(
                   v28,
                   a2)) )
          {
            v23 = -1;
          }
          v24 = v28;
          if ( v28 )
          {
            v28 = 0LL;
            ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v24)[2])(v24);
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v25);
          if ( !v23 )
            break;
          if ( (unsigned __int64)++v16 >= a1[30] )
            goto LABEL_17;
        }
        v15 = v16;
        v9 = 0;
      }
LABEL_17:
      if ( v9 >= 0 )
      {
        v14 = 1;
        CClassicWindowManager::RemoveApplicationView(a1, *(_QWORD *)(a1[29] + 8 * v15), 0LL);
        (*(void (__fastcall **)(_QWORD *, __int64))(a1[28] + 16LL))(a1 + 28, v15);
      }
      else
      {
        v14 = 0;
      }
    }
  }
  else
  {
    v14 = 1;
    if ( ((unsigned __int8 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v27)[17])(v27) )
    {
      v28 = v27;
      v30 = v27;
      v25[0] = &v28;
      v26[0] = &v30;
      v26[1] = v25;
      CClassicWindowManager::ForEachWindow__lambda_1e9daa8d67d28b835187142b6b9a88ad___(a1, v26);
    }
    if ( v3
      || (*(int (__fastcall **)(_QWORD *, int (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(a1[28] + 8LL))(
           a1 + 28,
           &v27) < 0 )
    {
      (*(void (__fastcall **)(_QWORD *, int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v6 + 16LL))(v6, v7);
      CClassicWindowManager::RemoveApplicationView(v21, v27, 0LL);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *, int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v6 + 16LL))(v6, v7);
      CClassicWindowManager::RemoveApplicationView(v20, v27, 1LL);
    }
  }
  v17 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v17)[2])(v17);
  }
  return v14;
}
