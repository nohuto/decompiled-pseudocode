__int64 __fastcall CmpConstructNameFromKeyNodes(__int64 a1, __int64 *a2)
{
  __int64 KcbAtLayerHeight; // rdi
  int started; // ebx
  unsigned int v5; // eax
  unsigned __int16 v6; // bp
  __int64 Pool; // rax
  struct _PRIVILEGE_SET *v8; // r15
  __int64 v9; // r14
  unsigned __int16 v10; // bp
  __int64 v11; // rax
  unsigned __int16 v12; // si
  __int16 v13; // dx
  unsigned __int16 v14; // bp
  unsigned __int16 v15; // cx
  PPRIVILEGE_SET i; // rbx
  const void *v17; // rdx
  ULONG_PTR v18; // rcx
  __int64 CellFlat; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  _WORD *v22; // r9
  unsigned __int8 *v23; // rax
  __int64 v24; // rdx
  __int16 v25; // cx
  __int64 v26; // rcx
  __int64 v28; // r10
  __int64 v29; // r10
  __int16 v30; // dx
  _WORD *v31; // rcx
  __int64 v32; // rdx
  __int128 v33; // [rsp+20h] [rbp-58h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+30h] [rbp-48h]
  __int64 v35; // [rsp+80h] [rbp+8h] BYREF
  __int64 *v36; // [rsp+88h] [rbp+10h]

  v36 = a2;
  v33 = 0LL;
  v35 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  WORD1(v33) = -1;
  HvpGetCellContextReinitialize(&v35);
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, *(_WORD *)(a1 + 2));
  started = CmpStartKcbStack((__int64)&v33, *(_WORD *)(KcbAtLayerHeight + 66));
  if ( started < 0 )
    goto LABEL_32;
  v5 = CmpKeyFullNameLength(KcbAtLayerHeight);
  v6 = v5;
  if ( v5 > 0xFFFF )
  {
    started = -1073741811;
LABEL_32:
    v8 = Privileges[1];
    goto LABEL_26;
  }
  Pool = CmpAllocatePool(256LL, v5 + 16LL, 1649298755LL);
  v8 = Privileges[1];
  v9 = Pool;
  if ( Pool )
  {
    *(_WORD *)Pool = v6;
    *(_WORD *)(Pool + 2) = v6;
    *(_QWORD *)(Pool + 8) = Pool + 16;
    v10 = v6 >> 1;
    do
    {
      while ( (*(_DWORD *)(KcbAtLayerHeight + 184) & 0x40000) != 0 && *(_QWORD *)(KcbAtLayerHeight + 72) )
        KcbAtLayerHeight = *(_QWORD *)(KcbAtLayerHeight + 72);
      v11 = *(_QWORD *)(KcbAtLayerHeight + 80);
      v12 = *(_WORD *)(v11 + 24);
      if ( (*(_DWORD *)v11 & 1) == 0 )
        v12 >>= 1;
      v13 = *(_WORD *)(KcbAtLayerHeight + 66);
      v14 = v10 - v12;
      WORD1(v33) = v13;
      if ( v13 )
      {
        v28 = *(_QWORD *)(KcbAtLayerHeight + 192);
        if ( v28 )
        {
          do
          {
            CmpSetKcbAtLayerHeight((__int64)&v33, v13, *(_QWORD *)(v28 + 16));
            v28 = *(_QWORD *)(v29 + 24);
            v13 = v30 - 1;
          }
          while ( v28 );
          v8 = Privileges[1];
        }
      }
      else
      {
        *((_QWORD *)&v33 + 1) = KcbAtLayerHeight;
      }
      v15 = *(_WORD *)(KcbAtLayerHeight + 66);
      for ( i = 0LL; (v15 & 0x8000u) == 0; --v15 )
      {
        if ( v15 >= 2u )
          i = (PPRIVILEGE_SET)*((_QWORD *)v8 + v15 - 2);
        else
          i = Privileges[v15 - 1];
        if ( *(_QWORD *)&i[10].PrivilegeCount )
          break;
        if ( i[2].PrivilegeCount != -1 )
          break;
      }
      v17 = *(const void **)&i[10].PrivilegeCount;
      if ( v17 )
      {
        v31 = (_WORD *)(*(_QWORD *)(v9 + 8) + 2LL * v14);
        if ( v17 == (const void *)1 )
        {
          v32 = *(_QWORD *)&i[4].PrivilegeCount;
          if ( (*(_DWORD *)v32 & 1) != 0 )
            CmpCopyCompressedName(v31, 2 * v12, (unsigned __int8 *)(v32 + 26), v12);
          else
            memmove(v31, (const void *)(v32 + 26), 2LL * v12);
        }
        else
        {
          memmove(v31, v17, 2LL * v12);
        }
      }
      else
      {
        v18 = *(_QWORD *)&i[1].Privilege[0].Luid.HighPart;
        if ( (*(_BYTE *)(v18 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v18, i[2].PrivilegeCount);
        else
          CellFlat = HvpGetCellPaged(v18);
        v20 = CellFlat;
        v21 = *(_QWORD *)(v9 + 8);
        v22 = (_WORD *)(v21 + 2LL * v14);
        if ( (*(_BYTE *)(v20 + 2) & 0x20) != 0 )
        {
          if ( v12 )
          {
            v23 = (unsigned __int8 *)(v20 + 76);
            v24 = v12;
            do
            {
              v25 = *v23++;
              *v22++ = v25;
              --v24;
            }
            while ( v24 );
          }
        }
        else
        {
          memmove((void *)(v21 + 2LL * v14), (const void *)(v20 + 76), 2LL * v12);
        }
        v26 = *(_QWORD *)&i[1].Privilege[0].Luid.HighPart;
        if ( (*(_BYTE *)(v26 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v26, &v35);
        else
          HvpReleaseCellPaged(v26, &v35);
      }
      v10 = v14 - 1;
      *(_WORD *)(*(_QWORD *)(v9 + 8) + 2LL * v10) = 92;
      KcbAtLayerHeight = *(_QWORD *)(KcbAtLayerHeight + 72);
    }
    while ( KcbAtLayerHeight );
    started = 0;
    *v36 = v9;
  }
  else
  {
    started = -1073741670;
  }
LABEL_26:
  if ( v8 )
    CmSiFreeMemory(v8);
  return (unsigned int)started;
}
