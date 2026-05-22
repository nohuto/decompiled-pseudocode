/*
 * XREFs of ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180187F90
 * Callers:
 *     <none>
 * Callees:
 *     ??B?$unique_ptr@VMPCSpatialGestureRecognizerHandler@@U?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@@std@@QEBA_NXZ @ 0x1800182F0 (--B-$unique_ptr@VMPCSpatialGestureRecognizerHandler@@U-$default_delete@VMPCSpatialGestureRecogni.c)
 *     ?Create@InputContext@@SAJPEAPEAV1@@Z @ 0x180023B74 (-Create@InputContext@@SAJPEAPEAV1@@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180027E10 (-IsEdition@@YA_N_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18004661C (-find@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     ??1TargetingInfo@KeyboardProcessor@@QEAA@XZ @ 0x1800488F4 (--1TargetingInfo@KeyboardProcessor@@QEAA@XZ.c)
 *     ??8?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAULegacyDeviceInfo@@@std@@@std@@@std@@@std@@QEBA_NAEBV01@@Z @ 0x180048930 (--8-$_List_const_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKPEAULegacyDeviceInfo@@.c)
 *     ??$emplace@AEAKUTargetingInfo@ButtonProcessor@@@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAUTargetingInfo@ButtonProcessor@@@Z @ 0x18004A97C (--$emplace@AEAKUTargetingInfo@ButtonProcessor@@@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonPr.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@1@V21@@Z @ 0x18004A9D4 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKUTargetingInfo@Button.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??B?$ComPtrRef@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUIInputTarget@@XZ @ 0x1800AEF9C (--B-$ComPtrRef@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUIInpu.c)
 *     ??B?$ComPtrRef@V?$ComPtr@VInputContext@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAVInputContext@@XZ @ 0x1800AEFC0 (--B-$ComPtrRef@V-$ComPtr@VInputContext@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAVInput.c)
 *     ?ButtonEvent@ButtonProcessor@InputETW@@SAXK_N@Z @ 0x180187C5C (-ButtonEvent@ButtonProcessor@InputETW@@SAXK_N@Z.c)
 *     ?ButtonToVKeyMapping@ButtonProcessor@@AEAAJKPEAG@Z @ 0x180187CD8 (-ButtonToVKeyMapping@ButtonProcessor@@AEAAJKPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ButtonProcessor::OnInputReport(ButtonProcessor *this, struct InputInfo *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned __int8 *v7; // rbx
  int v8; // eax
  _QWORD *v9; // r15
  __int64 v10; // rbx
  __int64 *v11; // rax
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 (__fastcall *v15)(__int64, _QWORD, _QWORD, _QWORD, __int64 *); // rdi
  __int64 *v16; // rax
  int v17; // eax
  char v18; // si
  _QWORD *v19; // rcx
  int v20; // eax
  unsigned int v21; // edi
  unsigned __int16 v22; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v23; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v24[3]; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v25[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+70h] [rbp-90h]
  int v27; // [rsp+78h] [rbp-88h]
  unsigned __int16 v28; // [rsp+84h] [rbp-7Ch]
  __int16 v29; // [rsp+A6h] [rbp-5Ah]
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  if ( *(char *)a2 >= 0 )
  {
    v4 = -2147024809;
    v5 = 168LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
      (const char *)v4);
    return v4;
  }
  v7 = (unsigned __int8 *)a2 + 64;
  InputETW::ButtonProcessor::ButtonEvent(*((unsigned int *)a2 + 16), *((_BYTE *)a2 + 68));
  if ( IsEdition(253345LL)
    && (*(_DWORD *)v7 > 0xDu || *((_BYTE *)this + 121))
    && *((_BYTE *)this + 120)
    && (int)ButtonProcessor::ButtonToVKeyMapping(this, *(_DWORD *)v7, &v22) >= 0 )
  {
    memset_0(v25, 0, 0x160uLL);
    v27 = 352;
    v25[1] = **((_DWORD **)this + 4);
    v25[0] = 4;
    v25[2] = *((_DWORD *)a2 + 2);
    v26 = *((_QWORD *)a2 + 2);
    v29 = 64;
    v28 = v22;
    if ( !*((_BYTE *)a2 + 68) )
      v29 = 65;
    v8 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 16) + 48LL))(*((_QWORD *)this + 16), v25);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        205LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
  }
  else
  {
    v9 = (_QWORD *)((char *)this + 40);
    std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::find(
      (__int64)this + 40,
      v24,
      v7);
    *(_QWORD *)&v23 = *((_QWORD *)this + 6);
    if ( std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,LegacyDeviceInfo *>>>>::operator==(
           v24,
           &v23) )
    {
      v23 = 0LL;
      v10 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::emplace<unsigned long &,ButtonProcessor::TargetingInfo>(
                         (__int64)this + 40,
                         (__int64)v24,
                         v7,
                         &v23);
      KeyboardProcessor::TargetingInfo::~TargetingInfo((KeyboardProcessor::TargetingInfo *)&v23);
      *(_QWORD *)&v23 = v10 + 24;
      v11 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<InputContext>>::operator InputContext * *((__int64 **)&v23);
      v12 = InputContext::Create((struct InputContext **)v11);
      if ( v12 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          217LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
          (const char *)(unsigned int)v12);
        __debugbreak();
      }
      v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 64LL))(*((_QWORD *)this + 3));
      v14 = v13;
      if ( !v13 )
      {
        v4 = -2147418113;
        v5 = 220LL;
        goto LABEL_3;
      }
      v15 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v13 + 64LL);
      *(_QWORD *)&v23 = v10 + 32;
      v16 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IInputTarget>>::operator IInputTarget * *((__int64 **)&v23);
      v17 = v15(v14, *((_QWORD *)this + 4), *(_QWORD *)(v10 + 24), 0LL, v16);
      if ( v17 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          225LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
          (const char *)(unsigned int)v17);
        __debugbreak();
      }
    }
    else
    {
      v10 = v24[0];
    }
    v18 = *((_BYTE *)a2 + 68);
    if ( std::unique_ptr<MPCSpatialGestureRecognizerHandler>::operator bool((_QWORD *)(v10 + 32)) )
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(*(_QWORD *)*v19 + 24LL))(*v19, a2);
      v21 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF1,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
          (const char *)(unsigned int)v20);
        return v21;
      }
    }
    if ( !v18 )
      std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>>>,void>(
        v9,
        &v23,
        v10);
  }
  return 0LL;
}
