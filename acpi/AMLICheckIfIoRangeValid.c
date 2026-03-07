char __fastcall AMLICheckIfIoRangeValid(__int64 a1, unsigned int a2)
{
  char v2; // r9
  __int64 v3; // r11
  __int64 v4; // rax
  unsigned int *v5; // rdx
  __int64 v6; // r8

  v2 = 1;
  if ( gpBadIOAddressList )
  {
    LODWORD(v3) = 0;
    v4 = a1 + a2;
    if ( *((_DWORD *)gpBadIOAddressList + 1) )
    {
      v5 = (unsigned int *)gpBadIOAddressList;
      while ( 1 )
      {
        v6 = *v5;
        if ( v4 < v6 || a1 > (unsigned int)v6 + v5[1] )
          break;
        v3 = (unsigned int)(v3 + 1);
        v5 = (unsigned int *)((char *)gpBadIOAddressList + 24 * v3);
        if ( !v5[1] )
          return v2;
      }
      return 0;
    }
  }
  return v2;
}
