unsigned int *__fastcall Register_FindNextExtendedCapability(__int64 a1, unsigned int *a2)
{
  unsigned int *v2; // rbx
  __int16 Ulong; // ax

  v2 = a2;
  if ( a2 )
  {
    Ulong = XilRegister_ReadUlong(a1, a2);
    while ( (Ulong & 0xFF00) != 0 )
    {
      v2 += HIBYTE(Ulong);
      if ( (unsigned __int64)v2 >= *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 20) )
        break;
      Ulong = XilRegister_ReadUlong(a1, v2);
      if ( (_BYTE)Ulong == 2 )
        return v2;
    }
    return 0LL;
  }
  return v2;
}
