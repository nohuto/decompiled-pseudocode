__int64 __fastcall CMFGetLargePageSectionSize(__int64 *a1, __int64 a2)
{
  unsigned int v2; // r8d
  unsigned __int64 v5; // r9
  __int64 v6; // r11
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx

  v2 = 0;
  v5 = (unsigned __int64)MEMORY[0xFFFFF78000000244] >> 12;
  if ( v5 )
  {
    v6 = *a1;
    v7 = ((unsigned __int64)*a1 >> 12) + ((*a1 & 0xFFF) != 0);
    v8 = (unsigned int)v7 % v5;
    if ( v8 )
    {
      v9 = (v5 << 12) - 4095 + (v7 << 12) - (v8 << 12);
      *(_QWORD *)a2 = v9;
      if ( ((v9 >> 12) + ((v9 & 0xFFF) != 0)) % v5 || *(_DWORD *)(a2 + 4) || *(_DWORD *)a2 < *(_DWORD *)a1 )
        return (unsigned int)-1073741823;
    }
    else
    {
      *(_QWORD *)a2 = v6;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v2;
}
