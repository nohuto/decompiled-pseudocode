/*
 * XREFs of ?EnumAllObjects@CPinnedList@@QEAAJPEAPEAUIEnumFullIDList@@@Z @ 0x180154DDC
 * Callers:
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x180159A1C (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1800904CC (--2@YAPEAX_K@Z.c)
 *     ??0CPinnedListEnum@@QEAA@PEAVCPinnedList@@W4PinnedListEnumFlags@@@Z @ 0x1801528E0 (--0CPinnedListEnum@@QEAA@PEAVCPinnedList@@W4PinnedListEnumFlags@@@Z.c)
 *     ?Attach@?$ComPtr@VCPinnedListEnum@@@WRL@Microsoft@@QEAAXPEAVCPinnedListEnum@@@Z @ 0x180153D5C (-Attach@-$ComPtr@VCPinnedListEnum@@@WRL@Microsoft@@QEAAXPEAVCPinnedListEnum@@@Z.c)
 *     ?Release@CPinnedListEnum@@UEAAKXZ @ 0x18015AEB0 (-Release@CPinnedListEnum@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPinnedList::EnumAllObjects(CPinnedList *this, struct IEnumFullIDList **a2)
{
  CPinnedListEnum *v4; // rax
  CPinnedListEnum *v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // r9
  __int64 v8; // rdx
  HRESULT v9; // eax
  _OWORD *v11; // [rsp+20h] [rbp-28h]
  void *that; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  that = 0LL;
  v11 = operator new(0x38uLL);
  *v11 = 0LL;
  v11[1] = 0LL;
  v11[2] = 0LL;
  *((_QWORD *)v11 + 6) = 0LL;
  v4 = (CPinnedListEnum *)CPinnedListEnum::CPinnedListEnum((__int64)v11, (__int64)this, 7);
  Microsoft::WRL::ComPtr<CPinnedListEnum>::Attach((CPinnedListEnum **)&that, v4);
  v5 = (CPinnedListEnum *)that;
  if ( !that )
  {
    v6 = -2147024882;
    v7 = 2147942414LL;
    v8 = 1654LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)v7);
    goto LABEL_7;
  }
  v9 = QISearch(that, &pqit, &GUID_d0191542_7954_4908_bc06_b2360bbe45ba, (void **)a2);
  v6 = v9;
  if ( v9 < 0 )
  {
    v7 = (unsigned int)v9;
    v8 = 1655LL;
    goto LABEL_5;
  }
  v6 = 0;
LABEL_7:
  if ( v5 )
    CPinnedListEnum::Release(v5);
  return v6;
}
