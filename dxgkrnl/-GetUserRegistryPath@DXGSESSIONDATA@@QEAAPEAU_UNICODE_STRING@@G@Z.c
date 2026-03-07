struct _UNICODE_STRING *__fastcall DXGSESSIONDATA::GetUserRegistryPath(DXGSESSIONDATA *this, unsigned __int16 a2)
{
  unsigned __int64 v5; // rax

  if ( !*((_QWORD *)this + 2342) && a2 )
  {
    *((_WORD *)this + 9364) = 0;
    v5 = 2 * ((unsigned __int64)a2 >> 1);
    if ( !is_mul_ok((unsigned __int64)a2 >> 1, 2uLL) )
      v5 = -1LL;
    *((_QWORD *)this + 2342) = operator new[](v5, 0x4B677844u, 256LL);
    *((_WORD *)this + 9365) = a2;
  }
  return (struct _UNICODE_STRING *)((char *)this + 18728);
}
