__int64 __fastcall EPATHOBJ::addpoints(EPATHOBJ *this, struct EXFORMOBJ *a2, struct _PATHDATAL *a3)
{
  struct _POINTFIX *v6; // r9
  unsigned int v8; // edx

  if ( *((_DWORD *)a3 + 9) )
  {
    v6 = (struct _POINTFIX *)*(unsigned int *)(*((_QWORD *)this + 1) + 80LL);
    if ( ((unsigned __int8)v6 & 1) == 0 )
    {
      EPATHOBJ::growlastrec(this, a2, a3, v6);
      if ( *((_WORD *)a3 + 12) )
        return 0LL;
    }
    while ( *((_DWORD *)a3 + 9) )
    {
      if ( !(unsigned int)EPATHOBJ::createrec(this, a2, a3, 0LL) )
        return 0LL;
    }
    v8 = *(_DWORD *)this & 0xFFFFFFFD;
    *(_DWORD *)this = v8;
    if ( (*((_DWORD *)a3 + 8) & 0x10) != 0 )
      *(_DWORD *)this = v8 | 1;
  }
  return 1LL;
}
