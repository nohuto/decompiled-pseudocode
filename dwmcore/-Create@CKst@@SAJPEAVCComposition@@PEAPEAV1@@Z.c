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
