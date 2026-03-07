__int64 __fastcall MiCheckWsLimits(__int64 a1, __int64 *a2, unsigned __int64 *a3, char a4, char a5)
{
  unsigned __int64 v5; // rbx
  unsigned int v6; // r11d
  unsigned __int64 v7; // r10
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  char v13; // al
  __int64 result; // rax

  v5 = *a2;
  v6 = 0;
  v7 = *a3;
  if ( *a2 > *a3 )
  {
    if ( (a5 & 1) == 0 )
      return 3221225548LL;
    v7 = *a2;
    v6 = 1073741826;
  }
  v10 = 0x7FFFFFFF0LL;
  if ( v7 > 0x7FFFFFFF0LL )
  {
    v7 = 0x7FFFFFFF0LL;
    v6 = 1073741826;
  }
  v11 = 20LL;
  if ( v5 > 0x7FFFFFFF0LL )
    goto LABEL_26;
  v10 = v5;
  if ( v5 < 0x14 )
  {
    v10 = 20LL;
    if ( v7 < 0x14 )
      v7 = 20LL;
LABEL_26:
    v6 = 1073741826;
  }
  v12 = *(_QWORD *)(a1 + 16);
  if ( v12 )
    v11 = *(_QWORD *)(v12 + 32);
  if ( v11 + 6 >= v7 )
  {
    if ( (a5 & 1) == 0 )
      return 3221225548LL;
    v7 = v11 + 7;
    v6 = 1073741826;
  }
  if ( (a4 & 4) == 0 )
  {
    v13 = *(_BYTE *)(a1 + 184);
    if ( (v13 >= 0 || (a4 & 8) != 0) && (a4 & 1) == 0 && ((v13 & 0x40) == 0 || (a4 & 2) != 0) )
      goto LABEL_13;
  }
  if ( v10 + 6 >= v7 )
  {
    if ( (a5 & 1) == 0 )
      return 3221225548LL;
    v7 = v10 + 7;
    v6 = 1073741826;
  }
  if ( (*(_BYTE *)(a1 + 184) & 7u) < 2 || v7 >= 0x1000 )
    goto LABEL_13;
  if ( (a5 & 1) != 0 )
  {
    v7 = 4096LL;
    v6 = 1073741826;
LABEL_13:
    *a2 = v10;
    result = v6;
    *a3 = v7;
    return result;
  }
  return 3221225548LL;
}
