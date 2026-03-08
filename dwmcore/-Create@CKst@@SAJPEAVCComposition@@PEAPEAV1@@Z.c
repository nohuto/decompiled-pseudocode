/*
 * XREFs of ?Create@CKst@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800CB0DC
 * Callers:
 *     ?Initialize@CGlobalInputManager@@UEAAJXZ @ 0x1800CB060 (-Initialize@CGlobalInputManager@@UEAAJXZ.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@VCKst@@U?$default_delete@VCKst@@@std@@@std@@QEAA@XZ @ 0x1802823CC (--1-$unique_ptr@VCKst@@U-$default_delete@VCKst@@@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall CKst::Create(struct CComposition *a1, struct CKst **a2)
{
  struct CKst *v4; // rax
  struct CKst *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CKst *v13; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = (struct CKst *)DefaultHeap::Alloc(0x38uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_QWORD *)v4 + 1) = 0LL;
    *((_QWORD *)v4 + 2) = 0LL;
    *((_QWORD *)v4 + 4) = 0LL;
    *(_QWORD *)v4 = &CKst::`vftable';
    *((_QWORD *)v4 + 5) = a1;
    v13 = v4;
    v6 = ((__int64 (__fastcall *)(struct CKst *))CKst::`vftable')(v4);
    v7 = v6;
    if ( v6 >= 0 )
    {
      *a2 = v5;
      return 0LL;
    }
    v9 = (unsigned int)v6;
    v10 = 22LL;
  }
  else
  {
    v13 = 0LL;
    v7 = -2147024882;
    v9 = 2147942414LL;
    v10 = 20LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kst.cpp",
    (const char *)v9,
    v11);
  std::unique_ptr<CKst>::~unique_ptr<CKst>(&v13);
  return v7;
}
