void __fastcall CInputSpace::Reset(CInputSpace *this, struct CInputSpace ***a2)
{
  struct CInputSpace *v4; // rbx
  struct CInputSpace *v5; // rax
  struct CInputSpace *v6; // rcx
  struct CInputSpace **v7; // rdx
  struct CInputSpace **v8; // rdx

  memmove(this, a2, 0x5C0uLL);
  v4 = (CInputSpace *)((char *)this + 1456);
  v5 = (struct CInputSpace *)(a2 + 182);
  *((_QWORD *)v4 + 1) = v4;
  *(_QWORD *)v4 = v4;
  v6 = (struct CInputSpace *)a2[182];
  if ( v6 != (struct CInputSpace *)(a2 + 182) )
  {
    if ( *((struct CInputSpace **)v6 + 1) != v5
      || (v7 = a2[183], *v7 != v5)
      || (*v7 = v6,
          *((_QWORD *)v6 + 1) = v7,
          a2[183] = (struct CInputSpace **)(a2 + 182),
          *(_QWORD *)v5 = v5,
          v8 = (struct CInputSpace **)*((_QWORD *)v4 + 1),
          *(struct CInputSpace **)(*(_QWORD *)v4 + 8LL) != v4)
      || *v8 != v4
      || *(struct CInputSpace **)(*(_QWORD *)v6 + 8LL) != v6
      || **((struct CInputSpace ***)v6 + 1) != v6 )
    {
      __fastfail(3u);
    }
    *v8 = v6;
    *((_QWORD *)v4 + 1) = *((_QWORD *)v6 + 1);
    **((_QWORD **)v6 + 1) = v4;
    *((_QWORD *)v6 + 1) = v8;
    *((_DWORD *)a2 + 363) = 0;
  }
}
