__int64 __fastcall RtlpUnwindEpilogue(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        _BYTE *a4,
        __int64 a5,
        __int64 a6)
{
  int v7; // r14d
  _BYTE *v8; // rsi
  unsigned int v9; // r12d
  unsigned int i; // edi
  __int64 v11; // rcx
  int v12; // ecx
  __int64 v13; // r9
  unsigned int j; // r8d
  unsigned int v16; // r11d
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rdx
  __int16 v22; // [rsp+90h] [rbp+8h]
  unsigned __int64 v23; // [rsp+98h] [rbp+10h]

  v23 = a2;
  v7 = 0;
  while ( 1 )
  {
    v8 = (_BYTE *)(a1 + *((unsigned int *)a4 + 2));
    if ( a2 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v8 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (unsigned __int8)v8[2];
    for ( i = 0; ; i += RtlpUnwindOpSlots(v11, a2) )
    {
      if ( i >= v9 )
        goto LABEL_10;
      v11 = *(unsigned __int16 *)&v8[2 * i + 4];
      if ( (v11 & 0xF00) == 0 || (BYTE1(v11) & 0xF) == 0xA )
        break;
    }
    if ( i < v9 )
      break;
LABEL_10:
    if ( (*v8 & 0x20) == 0 )
      break;
    if ( (unsigned int)++v7 > 0x20 )
      return 3221225727LL;
    v12 = (unsigned __int8)v8[2];
    v13 = (unsigned int)(v12 + 1);
    if ( (v12 & 1) == 0 )
      v13 = (unsigned __int8)v8[2];
    a4 = &v8[2 * v13 + 4];
    a2 = v23;
  }
  for ( j = 0; ; j += 2 - (v16 < 8) )
  {
    if ( i >= v9 )
      goto LABEL_52;
    v22 = *(_WORD *)&v8[2 * i + 4];
    v16 = HIBYTE(v22) >> 4;
    if ( (v22 & 0xF00) != 0 )
      break;
    if ( j >= a3 )
    {
      v17 = *(_QWORD *)(a5 + 152);
      if ( v23 <= 0x7FFFFFFEFFFFLL && (v17 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( *(_QWORD *)a6 && (v17 < **(_QWORD **)a6 || v17 > **(_QWORD **)(a6 + 8) - 8LL) )
        return 3221225512LL;
      *(_QWORD *)(a5 + 152) += 8LL;
      *(_QWORD *)(a5 + 120 + 8LL * v16) = *(_QWORD *)v17;
      v18 = *(_QWORD *)(a6 + 16);
      if ( v18 )
        *(_QWORD *)(v18 + 8LL * v16 + 128) = v17;
    }
    ++i;
  }
  if ( i >= v9 )
    goto LABEL_52;
  if ( (HIBYTE(v22) & 0xF) == 2 && !v16 )
  {
    if ( j >= a3 )
      *(_QWORD *)(a5 + 152) += 8LL;
    ++i;
  }
  if ( i >= v9 || (v8[2 * i + 5] & 0xF) != 0xA )
  {
LABEL_52:
    v21 = *(_QWORD *)(a5 + 152);
    if ( v23 <= 0x7FFFFFFEFFFFLL && (v21 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( !*(_QWORD *)a6 || v21 >= **(_QWORD **)a6 && v21 <= **(_QWORD **)(a6 + 8) - 8LL )
    {
      *(_QWORD *)(a5 + 248) = *(_QWORD *)v21;
      *(_QWORD *)(a5 + 152) += 8LL;
      RtlpVirtualPopShadowStack(a5, 1, 1);
      return 0LL;
    }
    return 3221225512LL;
  }
  v19 = *(_QWORD *)(a5 + 152);
  v20 = v19 + 24;
  if ( v23 <= 0x7FFFFFFEFFFFLL && (v19 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( *(_QWORD *)a6 && (v19 < **(_QWORD **)a6 || v19 > **(_QWORD **)(a6 + 8) - 8LL) )
    return 3221225512LL;
  if ( v23 <= 0x7FFFFFFEFFFFLL && (v20 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( *(_QWORD *)a6 && (v20 < **(_QWORD **)a6 || v20 > **(_QWORD **)(a6 + 8) - 8LL) )
    return 3221225512LL;
  *(_QWORD *)(a5 + 248) = *(_QWORD *)v19;
  *(_QWORD *)(a5 + 152) = *(_QWORD *)v20;
  return 0LL;
}
