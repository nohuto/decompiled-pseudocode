/*
 * XREFs of ?MBC_RightJustifyMenu@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C023A5CC
 * Callers:
 *     xxxMenuBarCompute @ 0x1C023BEA8 (xxxMenuBarCompute.c)
 * Callees:
 *     MNIsOwnerDrawItem @ 0x1C0237734 (MNIsOwnerDrawItem.c)
 *     IsMDIItem @ 0x1C023B184 (IsMDIItem.c)
 */

__int64 __fastcall MBC_RightJustifyMenu(__int64 **a1)
{
  unsigned int v1; // r9d
  __int64 **v2; // r8
  __int64 result; // rax
  int v4; // r11d
  _DWORD **v5; // r10
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // edi
  int v10; // r11d
  _DWORD **i; // r10
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rsi
  int v16; // ebp
  unsigned int v17; // r10d
  unsigned int v18; // r12d
  unsigned int v19; // r15d
  int v20; // ecx
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r11
  __int64 v26; // rdx
  _DWORD *v27; // rax
  int v28; // ecx
  __int64 j; // rdx
  __int64 v30; // rcx
  unsigned int v31; // r10d
  int v32; // ecx
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx

  v1 = 0;
  v2 = a1;
  result = *(_QWORD *)(**a1 + 40);
  if ( !*(_DWORD *)(result + 44) )
    return result;
  v4 = 0;
  v5 = *(_DWORD ***)(**a1 + 88);
  if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 0x20) != 0 && *(_QWORD *)(**a1 + 80) )
  {
    v6 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 80) + 40LL) + 21LL) & 2;
    if ( *(int *)(*(_QWORD *)(**a1 + 40) + 44LL) > 0 )
    {
      while ( !v6 )
      {
        v8 = (__int64)v2[2];
        if ( !v8 )
          v8 = **v2;
        if ( (**v5 & 4) == 0 )
        {
          v7 = MNIsOwnerDrawItem(v8, v5);
          goto LABEL_14;
        }
        if ( *((_QWORD *)*v5 + 12) > 0xCuLL )
          goto LABEL_16;
LABEL_15:
        v5 = (_DWORD **)(*(_QWORD *)(**v2 + 88) + 96LL * ++v4);
        if ( v4 >= *(_DWORD *)(*(_QWORD *)(**v2 + 40) + 44LL) )
          goto LABEL_16;
      }
      if ( v4 )
        goto LABEL_16;
      v7 = IsMDIItem(v5);
LABEL_14:
      if ( !v7 )
        goto LABEL_16;
      goto LABEL_15;
    }
LABEL_16:
    v9 = v4 - 1;
    if ( v4 != *(_DWORD *)(*(_QWORD *)(**v2 + 40) + 44LL) )
      v9 = v4;
    v10 = *(_DWORD *)(*(_QWORD *)(**v2 + 40) + 44LL) - 1;
    for ( i = (_DWORD **)(*(_QWORD *)(**v2 + 88) + 96LL * v10); ; i = (_DWORD **)(*(_QWORD *)(**v2 + 88) + 96LL * v10) )
    {
      if ( v10 <= v9 )
      {
LABEL_28:
        v14 = v9;
        v15 = 96LL * v9;
        v16 = *(_DWORD *)(**(_QWORD **)(**v2 + 88) + 68LL);
        v17 = *(_DWORD *)(**v2 + 64);
        v18 = v17;
        v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**v2 + 88) + v15) + 64LL);
        result = *(_QWORD *)(**v2 + 40);
        v20 = *(_DWORD *)(result + 44) - 1;
        if ( v20 > (__int64)v10 )
        {
          v21 = 96LL * v20;
          v22 = v20 - (__int64)v10;
          do
          {
            v23 = *(_QWORD *)(**v2 + 88);
            v24 = *(_QWORD *)(v21 + v23);
            v17 -= *(_DWORD *)(v24 + 72);
            *(_DWORD *)(v24 + 64) = v17;
            result = *(_QWORD *)(v21 + v23);
            v21 -= 96LL;
            *(_DWORD *)(result + 68) = v16;
            --v22;
          }
          while ( v22 );
        }
        if ( v14 <= v10 )
        {
          v25 = v10 - v14 + 1;
          do
          {
            v26 = *(_QWORD *)(**v2 + 88);
            v27 = *(_DWORD **)(v15 + v26);
            v28 = v27[18];
            v17 -= v28;
            if ( v17 <= v19 )
            {
              v19 = v1;
              v17 = v18 - v28;
              v16 += v27[19];
            }
            v27[16] = v17;
            result = *(_QWORD *)(v15 + v26);
            v15 += 96LL;
            *(_DWORD *)(result + 68) = v16;
            --v25;
          }
          while ( v25 );
        }
        return result;
      }
      if ( v6 )
      {
        v12 = IsMDIItem(i);
      }
      else
      {
        v13 = (__int64)v2[2];
        if ( !v13 )
          v13 = **v2;
        if ( (**i & 4) != 0 )
          goto LABEL_26;
        v12 = MNIsOwnerDrawItem(v13, i);
      }
      if ( !v12 )
        goto LABEL_28;
LABEL_26:
      --v10;
    }
  }
  result = *(_QWORD *)(**a1 + 40);
  if ( *(int *)(result + 44) <= 0 )
    return result;
  for ( j = 0LL; ; j += 96LL )
  {
    v30 = **v2;
    if ( (**(_DWORD **)(j + *(_QWORD *)(v30 + 88)) & 0x4000) != 0 )
      break;
    result = *(_QWORD *)(v30 + 40);
    if ( (signed int)++v1 >= *(_DWORD *)(result + 44) )
      return result;
  }
  v31 = *(_DWORD *)(**v2 + 64) + *(_DWORD *)(**(_QWORD **)(v30 + 88) + 64LL);
  v32 = *(_DWORD *)(*(_QWORD *)(**v2 + 40) + 44LL) - 1;
  result = (int)v1;
  if ( v32 >= (__int64)(int)v1 )
  {
    v33 = 96LL * v32;
    v34 = v32 - result + 1;
    do
    {
      result = *(_QWORD *)(**v2 + 88);
      v35 = *(_QWORD *)(v33 + result);
      v31 -= *(_DWORD *)(v35 + 72);
      if ( *(_DWORD *)(v35 + 64) < v31 )
        *(_DWORD *)(v35 + 64) = v31;
      v33 -= 96LL;
      --v34;
    }
    while ( v34 );
  }
  return result;
}
