__int64 __fastcall CiThreadUpdatePriorities(_BYTE *a1, _BYTE *a2, unsigned __int8 a3)
{
  char v4; // dl
  unsigned __int8 v5; // r9
  char v6; // r9
  char v7; // r8
  int v8; // r10d
  __int64 result; // rax
  int v10; // r10d

  if ( CiSystemResponsiveness == 100 )
  {
    v7 = a3 + 9;
    v6 = v7;
    v4 = v7;
    goto LABEL_14;
  }
  v4 = a2[1] + a3;
  if ( v4 )
  {
    if ( (unsigned __int8)v4 >= 8u )
      v4 = 7;
  }
  else
  {
    v4 = 1;
  }
  v5 = a2[2];
  if ( v5 >= 8u )
    v5 = a3;
  v6 = v5 + 8;
  v7 = *a2 + a3;
  v8 = ((unsigned __int8)a2[3] >> 4) & 7;
  if ( v8 != 2 )
  {
    v10 = v8 - 1;
    if ( !v10 )
    {
      v7 = v6;
      goto LABEL_10;
    }
    if ( v10 != 2 )
      goto LABEL_10;
    if ( (unsigned __int8)v7 >= 0x17u )
    {
      if ( (unsigned __int8)v7 > 0x1Au )
        v7 = 26;
      goto LABEL_10;
    }
LABEL_17:
    v7 = 23;
    goto LABEL_10;
  }
  if ( (unsigned __int8)v7 < 0x10u )
  {
    v7 = 16;
    goto LABEL_10;
  }
  if ( (unsigned __int8)v7 >= 0x18u )
    goto LABEL_17;
LABEL_10:
  if ( (unsigned __int8)v6 >= 0x1Bu )
    v6 = 26;
  if ( (unsigned __int8)v7 >= 0x1Bu )
    v7 = 27;
LABEL_14:
  result = 106LL;
  a1[106] = v4;
  a1[105] = v6;
  a1[104] = v7;
  return result;
}
