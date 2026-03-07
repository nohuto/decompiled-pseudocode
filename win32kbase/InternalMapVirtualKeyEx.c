unsigned int __fastcall InternalMapVirtualKeyEx(unsigned int a1, int a2, __int64 a3)
{
  int v3; // r9d
  __int64 v4; // r10
  unsigned int v6; // ecx
  unsigned int result; // eax
  unsigned __int16 v8; // dx
  unsigned __int8 *v9; // rcx
  unsigned __int8 **v10; // rdx
  unsigned __int8 *v11; // rcx
  _BYTE *v12; // rax
  unsigned __int8 *v13; // rcx
  unsigned __int8 v14; // al
  _BYTE *v15; // rcx

  v3 = 0;
  v4 = a1;
  v6 = 0;
  if ( !a2 )
    goto LABEL_10;
  if ( a2 == 1 )
  {
LABEL_37:
    if ( (unsigned int)v4 < *(unsigned __int8 *)(a3 + 56) )
    {
      v6 = *(unsigned __int8 *)(*(_QWORD *)(a3 + 48) + 2 * v4);
      goto LABEL_50;
    }
    if ( (v4 & 0xFFFFFF00) == 0xE000 )
    {
      v12 = *(_BYTE **)(a3 + 64);
    }
    else
    {
      if ( (v4 & 0xFFFFFF00) != 0xE100 )
      {
LABEL_50:
        if ( a2 == 1 && v6 - 160 <= 5 )
          v6 = ((v6 - 160) >> 1) + 16;
        if ( v6 != 255 )
          return v6;
        return v3;
      }
      v12 = *(_BYTE **)(a3 + 72);
    }
    if ( v12 )
    {
      while ( *((_WORD *)v12 + 1) )
      {
        if ( *v12 == (_BYTE)v4 )
        {
          v6 = (unsigned __int8)v12[2];
          goto LABEL_50;
        }
        v12 += 4;
      }
    }
    goto LABEL_50;
  }
  if ( a2 != 2 )
  {
    if ( a2 != 3 )
    {
      if ( a2 != 4 )
        goto LABEL_26;
LABEL_10:
      if ( (unsigned int)v4 <= 0x12 && (unsigned int)v4 >= 0x10 )
        LODWORD(v4) = 2 * v4 + 128;
      v8 = 0;
      if ( *(_BYTE *)(a3 + 56) )
      {
        while ( *(unsigned __int8 *)(*(_QWORD *)(a3 + 48) + 2LL * v8) != (_DWORD)v4 )
        {
          if ( ++v8 >= *(unsigned __int8 *)(a3 + 56) )
            goto LABEL_14;
        }
        return (unsigned __int8)v8;
      }
      else
      {
LABEL_14:
        v9 = *(unsigned __int8 **)(a3 + 64);
        if ( v9 )
        {
          while ( *((_WORD *)v9 + 1) )
          {
            if ( v9[2] == (_DWORD)v4 )
            {
              result = *v9;
              if ( a2 == 4 )
                result |= 0xE000u;
              return result;
            }
            v9 += 4;
          }
        }
        if ( a2 == 4 )
        {
          v13 = *(unsigned __int8 **)(a3 + 72);
          if ( v13 )
          {
            while ( *((_WORD *)v13 + 1) )
            {
              if ( v13[2] == (_DWORD)v4 )
                return *v13 | 0xE100;
              v13 += 4;
              if ( !v13 )
                break;
            }
          }
        }
        v14 = 103;
        v15 = &aVkNumpad;
        while ( v14 != (_DWORD)v4 )
        {
          v14 = *++v15;
          if ( !*v15 )
            return 0;
        }
        return (_DWORD)v15 - (unsigned int)&aVkNumpad + 71;
      }
    }
    goto LABEL_37;
  }
  if ( (unsigned int)v4 <= 0x5A && (unsigned int)v4 >= 0x41 )
    return v4;
  v10 = *(unsigned __int8 ***)(a3 + 8);
  if ( !v10 )
    goto LABEL_26;
LABEL_29:
  v11 = *v10;
  if ( !*v10 )
  {
LABEL_26:
    UserSetLastError(87);
    return 0;
  }
  while ( 1 )
  {
    if ( !*v11 )
    {
      v10 += 2;
      goto LABEL_29;
    }
    if ( *v11 == (_DWORD)v4 )
      break;
    v11 += *((unsigned __int8 *)v10 + 9);
  }
  result = *((unsigned __int16 *)v11 + 1);
  if ( (_WORD)result == 0xF001 )
    return *(unsigned __int16 *)&v11[*((unsigned __int8 *)v10 + 9) + 2] | 0x80000000;
  if ( (_WORD)result == 0xF000 )
    return 0;
  return result;
}
