__int64 __fastcall SleepstudyHelperGetBlockerVerboseDescription(
        __int64 a1,
        _WORD *a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5)
{
  unsigned int v5; // r10d
  unsigned int *v8; // r8
  unsigned int v10; // eax
  unsigned int v11; // r11d
  unsigned __int16 v12; // ax
  unsigned int v13; // r11d
  unsigned int i; // edi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  unsigned __int16 v18; // ax

  v5 = 0;
  if ( a1 && a2 && a3 && a4 && (!*a4 || a5) )
  {
    v8 = *(unsigned int **)(*(_QWORD *)(a1 + 296) + 96LL);
    if ( v8 )
    {
      v10 = *v8;
      if ( *a4 >= *v8 )
      {
        v11 = 4 * v10 + 12;
        if ( v11 <= 0x10 )
          v11 = 16;
        *(_QWORD *)(a3 + 8) = (char *)v8 + v11;
        v12 = 2 * *((_WORD *)v8 + 4);
        *(_WORD *)a3 = v12;
        v13 = v12 + v11;
        for ( i = 0; i < *v8; *(_WORD *)(v17 + 2) = v18 )
        {
          v15 = i;
          v16 = i++;
          v17 = a5 + 16 * v16;
          *(_QWORD *)(v17 + 8) = (char *)v8 + v13;
          v18 = 2 * LOWORD(v8[v15 + 3]);
          v13 += v18;
          *(_WORD *)v17 = v18;
        }
        *a2 = *((_WORD *)v8 + 2);
        *a4 = *v8;
      }
      else
      {
        *a4 = v10;
        return (unsigned int)-1073741789;
      }
    }
    else
    {
      return (unsigned int)-1073741275;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
