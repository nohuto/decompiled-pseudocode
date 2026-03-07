__int64 __fastcall StringToGuidNoBrackets(unsigned __int16 *a1, __int64 a2)
{
  unsigned int v2; // r8d
  _WORD *v4; // r10
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  unsigned __int64 v9; // rcx
  char v10; // al
  __int64 v11; // rax

  v2 = 0;
  if ( !a1 )
    return 3221225485LL;
  v4 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( !v4 || *a1 >> 1 != 36 )
    return 3221225485LL;
  *(_OWORD *)a2 = 0LL;
  do
  {
    if ( v2 <= 0x17 && (v6 = 8659200, _bittest(&v6, v2)) )
    {
      if ( *v4 != 45 )
        return 3221225485LL;
    }
    else
    {
      v7 = (unsigned __int16)*v4;
      if ( (unsigned __int16)(v7 - 48) > 9u )
      {
        if ( (unsigned __int16)(v7 - 97) > 5u )
        {
          if ( (unsigned __int16)(v7 - 65) > 5u )
            return 3221225485LL;
          v8 = v7 - 55;
        }
        else
        {
          v8 = v7 - 87;
        }
      }
      else
      {
        v8 = v7 - 48;
      }
      if ( v2 >= 8 )
      {
        if ( v2 >= 0xD )
        {
          if ( v2 >= 0x12 )
          {
            if ( v2 >= 0x17 )
            {
              v11 = ((v2 - 24) >> 1) + 2;
              v9 = (unsigned int)v11;
              v10 = *(_BYTE *)(v11 + a2 + 8);
            }
            else
            {
              v9 = (unsigned __int64)(v2 - 19) >> 1;
              v10 = *(_BYTE *)(v9 + a2 + 8);
            }
            *(_BYTE *)(v9 + a2 + 8) = v8 + 16 * v10;
          }
          else
          {
            *(_WORD *)(a2 + 6) = v8 + 16 * *(_WORD *)(a2 + 6);
          }
        }
        else
        {
          *(_WORD *)(a2 + 4) = v8 + 16 * *(_WORD *)(a2 + 4);
        }
      }
      else
      {
        *(_DWORD *)a2 = v8 + 16 * *(_DWORD *)a2;
      }
    }
    ++v2;
    ++v4;
  }
  while ( v2 < 0x24 );
  return 0LL;
}
