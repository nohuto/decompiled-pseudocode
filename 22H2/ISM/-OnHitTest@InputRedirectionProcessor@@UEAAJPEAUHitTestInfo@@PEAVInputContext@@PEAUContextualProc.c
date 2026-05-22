/*
 * XREFs of ?OnHitTest@InputRedirectionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18017F580
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AE40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$vector@U?$pair@KPEAVInputRedirectionTarget@@@std@@V?$allocator@U?$pair@KPEAVInputRedirectionTarget@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KPEAVInputRedirectionTarget@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KPEAVInputRedirectionTarget@@@std@@@std@@@std@@@2@@Z @ 0x18017F7D4 (-erase@-$vector@U-$pair@KPEAVInputRedirectionTarget@@@std@@V-$allocator@U-$pair@KPEAVInputRedire.c)
 *     ?IsValid@InputRedirectionTarget@@QEAA_NXZ @ 0x18017FD74 (-IsValid@InputRedirectionTarget@@QEAA_NXZ.c)
 */

__int64 __fastcall InputRedirectionProcessor::OnHitTest(
        InputRedirectionProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  int v6; // esi
  _DWORD *v7; // rcx
  __int64 i; // rbx
  InputRedirectionTarget *v9; // rsi
  int v10; // eax
  __int64 (__fastcall *v11)(InputRedirectionTarget *, GUID *, char *); // rdi
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF
  char v16; // [rsp+48h] [rbp+10h] BYREF

  *(_DWORD *)a4 = 0;
  v15 = 0LL;
  v6 = *(_DWORD *)a2;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 9) + 24LL))(
         *((_QWORD *)this + 9),
         *((unsigned int *)a2 + 1),
         &v15) >= 0 )
  {
    v7 = (_DWORD *)*((_QWORD *)this + 10);
    if ( v7 != *((_DWORD **)this + 11) )
    {
      while ( (*(_DWORD *)(v15 + 4) & *v7) == 0 )
      {
        v7 += 4;
        if ( v7 == *((_DWORD **)this + 11) )
          goto LABEL_7;
      }
      v6 = *(_DWORD *)(v15 + 4);
    }
  }
LABEL_7:
  for ( i = *((_QWORD *)this + 10); i != *((_QWORD *)this + 11); i += 16LL )
  {
    if ( (v6 & *(_DWORD *)i) != 0 )
    {
      v9 = *(InputRedirectionTarget **)(i + 8);
      if ( InputRedirectionTarget::IsValid(v9) )
      {
        v10 = 0;
        if ( v15 )
          v10 = *(_DWORD *)(v15 + 16);
        if ( *((_DWORD *)v9 + 16) != v10 )
        {
          v11 = **(__int64 (__fastcall ***)(InputRedirectionTarget *, GUID *, char *))v9;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)a4 + 1);
          v12 = v11(v9, &GUID_00000000_0000_0000_c000_000000000046, (char *)a4 + 8);
          if ( v12 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              377LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\sys"
                       "tem\\lib\\inputredirectionprocessor.cpp",
              (const char *)(unsigned int)v12);
            __debugbreak();
          }
          *(_DWORD *)a4 = ((*(unsigned __int8 (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)v9 + 32LL))(v9) != 0)
                        + 2;
        }
      }
      else
      {
        std::vector<std::pair<unsigned long,InputRedirectionTarget *>>::erase((char *)this + 80, &v16, i);
        (*(void (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)v9 + 16LL))(v9);
      }
      return 0LL;
    }
  }
  return 0LL;
}
