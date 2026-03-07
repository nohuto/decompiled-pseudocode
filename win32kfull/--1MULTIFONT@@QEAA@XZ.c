void __fastcall MULTIFONT::~MULTIFONT(MULTIFONT *this)
{
  __int64 v2; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)this )
  {
    v2 = *((_QWORD *)this + 1);
    if ( v2 )
    {
      v3 = *(_QWORD *)(*(_QWORD *)v2 + 32LL);
      if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v3) )
        MULTIFONT::DestroyTable(this);
    }
    *(_QWORD *)(*(_QWORD *)this + 48LL) = *((_QWORD *)this + 1);
  }
}
