__int64 __fastcall DpiGetAgpStatus(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // eax
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int16 v5; // ax
  unsigned __int16 v6; // ax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1112LL);
  if ( (*(_BYTE *)(v1 + 6) & 0x10) != 0 )
  {
    v2 = *(unsigned __int8 *)(v1 + 52);
    if ( v2 < 0x40 )
    {
LABEL_11:
      v4 = -1073741675;
      WdLogSingleEntry1(2LL, -1073741675LL);
    }
    else
    {
      v3 = v2 - 64;
      v4 = 0;
      while ( 1 )
      {
        v6 = *(_WORD *)(v3 + v1 + 64);
        if ( (_BYTE)v6 == 2 )
          break;
        v5 = HIBYTE(v6);
        if ( !(_BYTE)v5 )
          return (unsigned int)-1073741823;
        if ( (unsigned __int8)v5 < 0x40u )
          goto LABEL_11;
        v3 = (unsigned int)(unsigned __int8)v5 - 64;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v4;
}
