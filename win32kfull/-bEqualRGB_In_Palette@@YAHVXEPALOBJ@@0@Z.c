__int64 __fastcall bEqualRGB_In_Palette(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r11
  __int64 v4; // r10

  LODWORD(v2) = *(_DWORD *)(a2 + 28);
  if ( *(_DWORD *)(a1 + 28) == (_DWORD)v2 && (_DWORD)v2 == 256 )
  {
    if ( (*(_DWORD *)(a2 + 24) & 0x100) == 0 )
      goto LABEL_8;
    v3 = *(_QWORD *)(a2 + 72);
    if ( v3 )
    {
      LODWORD(v4) = 256;
      while ( 1 )
      {
        v4 = (unsigned int)(v4 - 1);
        if ( *(unsigned __int8 *)(v4 + v3 + 4) != (_DWORD)v4 )
          break;
        if ( !(_DWORD)v4 )
        {
LABEL_8:
          while ( 1 )
          {
            v2 = (unsigned int)(v2 - 1);
            if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 112) + 4 * v2) ^ *(_DWORD *)(*(_QWORD *)(a2 + 112) + 4 * v2)) & 0xFFFFFF) != 0 )
              break;
            if ( !(_DWORD)v2 )
              return 1LL;
          }
          return 0LL;
        }
      }
    }
  }
  return 0LL;
}
