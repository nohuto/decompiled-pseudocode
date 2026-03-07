__int64 __fastcall MiComputeAgingPercent(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 AvailablePagesBelowPriority; // rax
  __int16 v3; // r8
  unsigned __int64 v4; // r11
  unsigned __int64 v5; // rcx
  unsigned __int64 *v6; // rax
  __int64 v7; // r9
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r9
  __int64 result; // rax
  unsigned __int64 v16; // rcx

  v1 = a1[2115];
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(a1, 6u);
  v3 = 0;
  v4 = AvailablePagesBelowPriority;
  v5 = 0LL;
  v6 = (unsigned __int64 *)(v1 + 2272);
  v7 = 8LL;
  do
  {
    v8 = *v6;
    if ( *v6 < v4 )
    {
      v8 = v4;
      *v6 = v4;
    }
    v5 += v8;
    ++v6;
    --v7;
  }
  while ( v7 );
  v9 = v5 >> 3;
  *(_QWORD *)(v1 + 2336) = (v4 + 7 * v9) >> 3;
  *(_QWORD *)(v1 + 8LL * ((*(_DWORD *)(v1 + 120))++ & 7) + 2272) = v4;
  if ( v4 >= v9 )
  {
    result = 3600LL;
    goto LABEL_14;
  }
  v10 = *(_QWORD *)(v1 + 2400);
  v11 = v9 - v4;
  if ( v4 <= v10 )
  {
    result = 0LL;
  }
  else
  {
    v12 = v4 - v10;
    if ( v11 < 8 )
      v11 = 8LL;
    v13 = v12 / (v11 >> 3);
    v14 = v13 - 2;
    if ( v13 < 2 )
      v14 = v12 / (v11 >> 3);
    result = v14;
    if ( v14 )
    {
      v16 = 0x1B58 / v14;
      result = v14;
      if ( (unsigned int)(0x1B58 / v14) <= 0x3E8 )
        goto LABEL_13;
    }
  }
  LOWORD(v16) = 1000;
LABEL_13:
  v3 = v16;
LABEL_14:
  *(_QWORD *)(v1 + 2352) = result;
  *(_WORD *)(v1 + 2346) = v3;
  return result;
}
