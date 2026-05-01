/*
 * XREFs of ?UpdateDropFeedback@AppResizeView@@AEAAJW4ResizeDropLocation@@0AEBUCPoint@Geometry@@W4UpdateDropFeedbackFlags@@@Z @ 0x18048390C
 * Callers:
 *     ?InitAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x180482250 (-InitAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?UpdateAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@W4UpdateAppResizeDataFlags@@@Z @ 0x180483730 (-UpdateAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@W4UpdateAppResizeDataFlags@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIObjectArray@@@?$ComPtr@UIAppLayoutOperation@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@@Details@12@@Z @ 0x18047B918 (--$As@UIObjectArray@@@-$ComPtr@UIAppLayoutOperation@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 *     ?MakeDragGutterRect@AppResizeView@@AEAAXHPEAUtagRECT@@@Z @ 0x180482620 (-MakeDragGutterRect@AppResizeView@@AEAAXHPEAUtagRECT@@@Z.c)
 *     ?MapResizeDropLocationToResizeAction@AppResizeView@@AEAAJW4ResizeDropLocation@@PEAW4ResizeAction@@@Z @ 0x180482684 (-MapResizeDropLocationToResizeAction@AppResizeView@@AEAAJW4ResizeDropLocation@@PEAW4ResizeAction.c)
 *     ?QueryResizeApps@AppResizeView@@AEAAJW4ResizeDropLocation@@AEBUCPoint@Geometry@@PEAPEAUIAppLayoutOperation@@@Z @ 0x180482A14 (-QueryResizeApps@AppResizeView@@AEAAJW4ResizeDropLocation@@AEBUCPoint@Geometry@@PEAPEAUIAppLayou.c)
 *     ?UpdateUIADropEffect@AppResizeView@@AEAAJPEAUIAppLayoutOperation@@W4ResizeAction@@@Z @ 0x180483CB0 (-UpdateUIADropEffect@AppResizeView@@AEAAJPEAUIAppLayoutOperation@@W4ResizeAction@@@Z.c)
 *     ?CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1804910A4 (-CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall AppResizeView::UpdateDropFeedback(__int64 a1, int a2, int a3, int *a4, char a5)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  const struct _GUID *v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  char v14; // r14
  unsigned int v15; // edi
  int v16; // r14d
  __int64 v17; // rbx
  __int64 v18; // rbx
  unsigned int v19; // r12d
  int v20; // ebx
  bool v21; // zf
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 *v27; // [rsp+30h] [rbp-50h] BYREF
  void *v28; // [rsp+38h] [rbp-48h] BYREF
  __int64 v29; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v30; // [rsp+48h] [rbp-38h] BYREF
  __int64 v31; // [rsp+50h] [rbp-30h] BYREF
  __int64 v32; // [rsp+58h] [rbp-28h] BYREF
  struct tagRECT v33; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  LODWORD(v27) = a2;
  v29 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
  v8 = AppResizeView::QueryResizeApps(a1, a3, (__int64)a4, &v29);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v32 = 0LL;
    v10 = Microsoft::WRL::ComPtr<IAppLayoutOperation>::As<IObjectArray>(&v29, &v32);
    v9 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x192,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
        (const char *)(unsigned int)v10);
LABEL_38:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
      goto LABEL_39;
    }
    v28 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
    v12 = CDropFeedbackList_CreateInstance(v11, &v28);
    v9 = v12;
    if ( v12 >= 0 )
    {
      v14 = a5;
      if ( (a5 & 1) != 0 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v32 + 24LL))(v32, &v30);
        v9 = v12;
        if ( v12 < 0 )
        {
          v13 = 411LL;
          goto LABEL_32;
        }
        v15 = 0;
        if ( v30 )
        {
          v16 = (int)v27;
          do
          {
            v27 = 0LL;
            v17 = v32;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
            if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 **))(*(_QWORD *)v17 + 32LL))(
                   v17,
                   v15,
                   &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e,
                   &v27) >= 0 )
            {
              v31 = 0LL;
              v18 = (__int64)v27;
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
              if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v18 + 32LL))(
                     v18,
                     &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
                     &v31) >= 0 )
              {
                v19 = v31;
                v33 = 0LL;
                v20 = 16;
                if ( a3 == v16 )
                  v20 = 256;
                v21 = (*(unsigned int (__fastcall **)(__int64 *))(*v27 + 88))(v27) == 0;
                v22 = *v27;
                if ( v21 )
                {
                  (*(void (__fastcall **)(__int64 *, _QWORD, struct tagRECT *))(v22 + 56))(v27, 0LL, &v33);
                  v23 = v33.left - v33.right;
                  if ( a3 )
                    v23 = v33.right - v33.left;
                  v33.left += v23;
                  v33.right += v23;
                  v20 |= 0x200u;
                }
                else
                {
                  (*(void (__fastcall **)(__int64 *, _QWORD, struct tagRECT *))(v22 + 72))(v27, 0LL, &v33);
                }
                (*(void (__fastcall **)(void *, _QWORD, _QWORD, struct tagRECT *, int))(*(_QWORD *)v28 + 88LL))(
                  v28,
                  v19,
                  0LL,
                  &v33,
                  v20);
              }
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
            ++v15;
          }
          while ( v15 < v30 );
          v14 = a5;
        }
      }
      if ( (v14 & 2) != 0
        && (v33 = 0LL,
            AppResizeView::MakeDragGutterRect((AppResizeView *)a1, *a4, &v33),
            v12 = (*(__int64 (__fastcall **)(void *, __int64, __int64, struct tagRECT *, _DWORD))(*(_QWORD *)v28 + 88LL))(
                    v28,
                    100LL,
                    2LL,
                    &v33,
                    0),
            v9 = v12,
            v12 < 0) )
      {
        v13 = 466LL;
      }
      else
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, void *, _QWORD))(**(_QWORD **)(a1 + 56) + 32LL))(
                *(_QWORD *)(a1 + 56),
                v28,
                0LL);
        v9 = v12;
        if ( v12 >= 0 )
        {
          v24 = v29;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 72));
          v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 48LL))(v24, a1 + 72);
          v9 = v12;
          if ( v12 >= 0 )
          {
            if ( (v14 & 4) != 0 && (int)AppResizeView::MapResizeDropLocationToResizeAction(v25, a3, &v27) >= 0 )
              AppResizeView::UpdateUIADropEffect(a1, v29, (unsigned int)v27);
            v9 = 0;
            goto LABEL_37;
          }
          v13 = 470LL;
        }
        else
        {
          v13 = 469LL;
        }
      }
    }
    else
    {
      v13 = 405LL;
    }
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)v12);
LABEL_37:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
    goto LABEL_38;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x18F,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
    (const char *)(unsigned int)v8);
LABEL_39:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
  return v9;
}
