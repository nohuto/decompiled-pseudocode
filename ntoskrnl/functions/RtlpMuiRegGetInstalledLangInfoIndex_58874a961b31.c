__int64 __fastcall RtlpMuiRegGetInstalledLangInfoIndex(__int64 a1, int a2, __int16 a3, __int16 *a4)
{
  int v5; // edx
  __int16 v6; // cx
  __int64 v7; // r11
  int v8; // ebx
  __int64 v9; // r8
  int v11; // edx
  __int64 v12; // rbx
  __int64 v13; // r11

  if ( a1 && a2 )
  {
    switch ( a2 )
    {
      case 1:
        if ( a3 )
        {
          v5 = *(unsigned __int16 *)(a1 + 6);
          v6 = 0;
          if ( *(_WORD *)(a1 + 6) )
          {
            v7 = *(_QWORD *)(a1 + 16);
            v8 = a3;
            while ( 1 )
            {
              v9 = 28LL * v6;
              if ( *(unsigned __int16 *)(v9 + v7 + 4) == v8 && (*(_WORD *)(v9 + v7) & 0x1020) == 0x20 )
                break;
              if ( ++v6 >= v5 )
                return 3221225473LL;
            }
LABEL_19:
            if ( a4 )
              *a4 = v6;
            return 0LL;
          }
          return 3221225473LL;
        }
        break;
      case 3:
        if ( a3 >= 0 )
        {
          v11 = *(unsigned __int16 *)(a1 + 6);
          v6 = 0;
          if ( *(_WORD *)(a1 + 6) )
          {
            v12 = *(_QWORD *)(a1 + 16);
            while ( 1 )
            {
              v13 = 28LL * v6;
              if ( *(_WORD *)(v13 + v12 + 6) == a3 && (*(_WORD *)(v13 + v12) & 0x1020) == 0x20 )
                break;
              if ( ++v6 >= v11 )
                return 3221225473LL;
            }
            goto LABEL_19;
          }
          return 3221225473LL;
        }
        break;
      case 2:
        if ( a3 >= 0 && a3 < (unsigned int)*(unsigned __int16 *)(a1 + 6) )
        {
          if ( (*(_WORD *)(28LL * a3 + *(_QWORD *)(a1 + 16)) & 0x1020) == 0x20 )
          {
            if ( a4 )
              *a4 = a3;
            return 0LL;
          }
          return 3221225473LL;
        }
        break;
      default:
        return 3221225473LL;
    }
  }
  return 3221225485LL;
}
