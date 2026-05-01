/*
 * XREFs of ?EnumTombstones@CPinnedList@@UEAAJPEAPEAUIEnumFullIDList@@@Z @ 0x180155170
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1800904EC (--2@YAPEAX_K@Z.c)
 *     ??0CPinnedListEnum@@QEAA@PEAVCPinnedList@@W4PinnedListEnumFlags@@@Z @ 0x180152A50 (--0CPinnedListEnum@@QEAA@PEAVCPinnedList@@W4PinnedListEnumFlags@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z @ 0x1801B03D8 (-Attach@-$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPinnedList::EnumTombstones(CPinnedList *this, struct IEnumFullIDList **a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  _OWORD *v10; // [rsp+20h] [rbp-28h]
  __int64 (__fastcall ***v11)(_QWORD, GUID *, struct IEnumFullIDList **); // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  v11 = 0LL;
  v10 = operator new(0x38uLL);
  *v10 = 0LL;
  v10[1] = 0LL;
  v10[2] = 0LL;
  *((_QWORD *)v10 + 6) = 0LL;
  v4 = CPinnedListEnum::CPinnedListEnum((__int64)v10, (__int64)this - 32, 1);
  Microsoft::WRL::ComPtr<SizeConversionViewInfo>::Attach(&v11, v4);
  if ( v11 )
  {
    v8 = (**v11)(v11, &GUID_d0191542_7954_4908_bc06_b2360bbe45ba, a2);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v5 = 0;
      goto LABEL_7;
    }
    v6 = (unsigned int)v8;
    v7 = 2281LL;
  }
  else
  {
    v5 = -2147024882;
    v6 = 2147942414LL;
    v7 = 2280LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
    (const char *)v6);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return v5;
}
