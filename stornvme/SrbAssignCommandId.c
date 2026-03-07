char __fastcall SrbAssignCommandId(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned __int16 v5; // r8
  unsigned __int16 *v6; // r10
  unsigned __int16 *v7; // r11
  unsigned __int16 *v8; // r9
  __int64 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // esi
  int v14; // edx
  unsigned __int16 v15; // cx
  unsigned __int16 v16; // dx
  unsigned __int16 v17; // dx
  __int64 v18; // rbx
  unsigned __int16 v19; // cx
  char result; // al
  unsigned __int16 v21; // ax
  bool v22; // zf

  if ( a3 )
  {
    v10 = a3;
    v5 = *(_WORD *)(a1 + 334);
    v11 = 136 * v10;
    v12 = *(_QWORD *)(a1 + 872);
    v6 = (unsigned __int16 *)(v11 + v12 - 92);
    v7 = (unsigned __int16 *)(v11 + v12 - 88);
    v9 = (__int64 *)(v11 + v12 - 104);
    v8 = (unsigned __int16 *)(v11 + v12 - 90);
  }
  else
  {
    v5 = *(_WORD *)(a1 + 332);
    v6 = (unsigned __int16 *)(a1 + 388);
    v7 = (unsigned __int16 *)(a1 + 392);
    v8 = (unsigned __int16 *)(a1 + 390);
    v9 = (__int64 *)(a1 + 376);
  }
  v13 = *v6;
  v14 = *v8;
  if ( v14 == v13 + 1 || !(_WORD)v14 && v13 == v5 - 1 )
    return 0;
  *v6 = v13 + 1;
  if ( (_WORD)v13 + 1 == v5 )
    *v6 = 0;
  v15 = *v7;
  if ( *v7 < v5 )
  {
    while ( 1 )
    {
      v16 = v15 + 1;
      if ( !*(_QWORD *)(*v9 + 16LL * v15) )
        break;
      ++v15;
      if ( v16 >= v5 )
        goto LABEL_12;
    }
    v21 = v15;
    v22 = v16 == v5;
    *v7 = v16;
    goto LABEL_22;
  }
LABEL_12:
  v17 = 0;
  if ( !*v7 )
  {
LABEL_16:
    if ( *v6 )
      v5 = *v6;
    *v6 = v5 - 1;
    return 0;
  }
  v18 = *v9;
  while ( 1 )
  {
    v19 = v17 + 1;
    if ( !*(_QWORD *)(v18 + 16LL * v17) )
      break;
    ++v17;
    if ( v19 >= *v7 )
      goto LABEL_16;
  }
  v21 = v17;
  v22 = v19 == v5;
  *v7 = v19;
LABEL_22:
  if ( v22 )
    *v7 = 0;
  *(_WORD *)(a2 + 4246) = v21;
  result = 1;
  *(_WORD *)(a2 + 4248) = v13;
  return result;
}
