__int64 __fastcall Register_GetExtendedCapabilityTotalSize(__int64 a1)
{
  unsigned int *v1; // rdi
  unsigned int v2; // ebx
  __int16 Ulong; // ax
  int v5; // ebp
  int v6; // ebx

  v1 = *(unsigned int **)(a1 + 56);
  v2 = 0;
  if ( v1 )
  {
    while ( 1 )
    {
      Ulong = XilRegister_ReadUlong(a1, v1);
      if ( (Ulong & 0xFF00) == 0 )
        break;
      v1 += HIBYTE(Ulong);
      if ( (unsigned __int64)v1 >= *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 20) )
        return v2;
    }
    v6 = (_DWORD)v1 - *(_DWORD *)(a1 + 56);
    if ( (unsigned __int8)Ulong == 1 )
    {
      return (unsigned int)(v6 + 8);
    }
    else if ( (unsigned __int8)Ulong == 2 )
    {
      v5 = (_DWORD)v1 - *(_DWORD *)(a1 + 56);
      return v5 + 4 * ((unsigned int)XilRegister_ReadUlong(a1, v1 + 2) >> 28) + 16;
    }
    else
    {
      return (unsigned int)(v6 + 4);
    }
  }
  return v2;
}
