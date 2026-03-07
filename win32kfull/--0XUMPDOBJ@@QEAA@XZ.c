XUMPDOBJ *__fastcall XUMPDOBJ::XUMPDOBJ(XUMPDOBJ *this)
{
  UMPDOBJ *v2; // rax
  UMPDOBJ *v3; // rbx
  Gre::Base *v4; // rcx

  *(_QWORD *)this = 0LL;
  v2 = (UMPDOBJ *)Win32AllocPoolZInit(432LL, 1685092423LL);
  v3 = v2;
  if ( v2 )
  {
    if ( (unsigned int)UMPDOBJ::bInit(v2) )
    {
      *(_QWORD *)this = v3;
      if ( UmpdSecurityGateNoUmpdObj(v4) )
        *((_DWORD *)v3 + 103) |= 0x100u;
    }
    else
    {
      Win32FreePool(v3);
    }
  }
  return this;
}
