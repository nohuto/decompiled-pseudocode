__int64 __fastcall CmpCompareInIndex(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        int a4,
        __int16 *a5,
        _DWORD *a6)
{
  __int16 v9; // r11
  __int16 v10; // ax
  __int16 *v11; // rbp
  unsigned int v12; // ebx
  _BYTE *v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // r9d
  __int64 v17; // rdi
  unsigned __int8 *v18; // rsi
  unsigned __int16 v19; // dx
  unsigned int v20; // r11d
  int v21; // r10d
  unsigned int v22; // eax
  int v23; // r10d
  unsigned int v24; // eax
  unsigned int v25; // edx
  __int64 result; // rax
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 v28; // dx
  struct _LIST_ENTRY *v29; // rax
  unsigned __int16 v30; // r11
  __int16 *v31; // rbx
  unsigned int v32; // eax

  v9 = *a5;
  v10 = *a5;
  *a6 = -1;
  if ( ((v10 - 26220) & 0xFDFF) != 0 )
  {
    v31 = &a5[2 * a4];
    v32 = CmpDoCompareKeyName(a1, a2, a3, *((unsigned int *)v31 + 1));
    v25 = v32;
    if ( v32 != 2 )
    {
      if ( !v32 )
        *a6 = *((_DWORD *)v31 + 1);
      return v25;
    }
    return 2LL;
  }
  v11 = &a5[4 * a4];
  if ( v9 != 26220 )
    goto LABEL_20;
  v12 = 0;
  v13 = v11 + 4;
  v14 = 0;
  v15 = 4;
  while ( *v13 )
  {
    ++v14;
    ++v13;
    if ( v14 >= 4 )
      goto LABEL_6;
  }
  v15 = v14;
LABEL_6:
  if ( a3 )
    v16 = *a3;
  else
    v16 = *a2 >> 1;
  if ( v16 >= v15 )
    v16 = v15;
  if ( !v16 )
  {
LABEL_20:
    v24 = CmpDoCompareKeyName(a1, a2, a3, *((unsigned int *)v11 + 1));
    v25 = v24;
    if ( v24 != 2 )
    {
      if ( !v24 )
        *a6 = *((_DWORD *)v11 + 1);
      return v25;
    }
    return 2LL;
  }
  v17 = 0LL;
  v18 = (unsigned __int8 *)(v11 + 4);
  while ( 1 )
  {
    v19 = a3 ? *(unsigned __int8 *)(*((_QWORD *)a3 + 1) + v12) : *(_WORD *)(v17 + *((_QWORD *)a2 + 1));
    v20 = *v18;
    if ( v19 >= 0x61u )
    {
      if ( v19 <= 0x7Au )
      {
        v21 = v19 - 32;
      }
      else
      {
        CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
        v21 = NLS_UPCASE((__int64)CurrentServerSiloGlobals[77].Flink, v28);
      }
    }
    else
    {
      v21 = v19;
    }
    if ( v20 >= 0x61 )
    {
      if ( v20 <= 0x7A )
      {
        v22 = v20 - 32;
      }
      else
      {
        v29 = PsGetCurrentServerSiloGlobals();
        v22 = NLS_UPCASE((__int64)v29[77].Flink, v30);
      }
    }
    else
    {
      v22 = v20;
    }
    v23 = v21 - v22;
    if ( v23 )
      break;
    ++v12;
    v17 += 2LL;
    ++v18;
    if ( v12 >= v16 )
      goto LABEL_20;
  }
  result = 1LL;
  if ( v23 <= 0 )
    return 0xFFFFFFFFLL;
  return result;
}
