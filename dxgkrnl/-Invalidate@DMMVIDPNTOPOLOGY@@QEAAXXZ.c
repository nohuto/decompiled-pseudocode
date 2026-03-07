void __fastcall DMMVIDPNTOPOLOGY::Invalidate(DMMVIDPNTOPOLOGY *this)
{
  char *v1; // rdi
  DMMVIDPNTOPOLOGY *v2; // rbx
  char *v3; // rbx
  char *v4; // rax
  struct DMMVIDPNTARGETMODESET *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)this + 24;
  *((_BYTE *)this + 192) = 0;
  v2 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)this + 3);
  if ( v2 != (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
  {
    v3 = (char *)v2 - 8;
    while ( v3 )
    {
      v5 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)v3 + 11));
      *((_BYTE *)v5 + 136) = 0;
      auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v5, 0LL);
      v5 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)v3 + 12));
      *((_BYTE *)v5 + 136) = 0;
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v5, 0LL);
      v4 = (char *)*((_QWORD *)v3 + 1);
      v3 = v4 - 8;
      if ( v4 == v1 )
        v3 = 0LL;
    }
  }
}
