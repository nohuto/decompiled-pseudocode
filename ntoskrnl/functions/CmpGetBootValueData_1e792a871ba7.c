char __fastcall CmpGetBootValueData(__int64 a1, __int64 a2, char *a3, unsigned int a4)
{
  size_t v4; // r12
  unsigned int v6; // eax
  const void *v8; // rax
  ULONG_PTR v9; // rdx
  ULONG_PTR v10; // rdx
  char v11; // si
  __int64 CellFlat; // rax
  __int64 v13; // r15
  ULONG_PTR v14; // rdx
  __int64 CellPaged; // rax
  __int64 v16; // r13
  unsigned int v17; // r14d
  unsigned __int16 v18; // r12
  ULONG_PTR v19; // rdx
  const void *v20; // rax
  size_t v21; // r8
  __int64 v23; // [rsp+20h] [rbp-10h] BYREF
  __int64 v24; // [rsp+28h] [rbp-8h] BYREF
  __int64 v25; // [rsp+70h] [rbp+40h] BYREF
  __int64 v26; // [rsp+78h] [rbp+48h] BYREF
  char *v27; // [rsp+80h] [rbp+50h]

  v27 = a3;
  v25 = a1;
  v4 = a4;
  v6 = *(_DWORD *)(a2 + 4);
  v24 = 0xFFFFFFFFLL;
  if ( v6 >= 0x80000000 )
  {
    memmove(a3, (const void *)(a2 + 8), a4);
LABEL_3:
    LOBYTE(v8) = 1;
    return (char)v8;
  }
  if ( (unsigned int)dword_140D85DBC >= 4 && v6 - 16345 <= 0x7FFFC026 )
  {
    v10 = *(unsigned int *)(a2 + 8);
    v23 = 0xFFFFFFFFLL;
    v11 = 1;
    v25 = 0xFFFFFFFFLL;
    v26 = 0xFFFFFFFFLL;
    if ( (byte_140D85D6C & 1) != 0 )
      CellFlat = HvpGetCellFlat((ULONG_PTR)&CmControlHive, v10, &v23);
    else
      CellFlat = HvpGetCellPaged((ULONG_PTR)&CmControlHive, v10, (unsigned int *)&v23);
    v13 = CellFlat;
    if ( CellFlat )
    {
      v14 = *(unsigned int *)(CellFlat + 4);
      if ( (byte_140D85D6C & 1) != 0 )
        CellPaged = HvpGetCellFlat((ULONG_PTR)&CmControlHive, v14, &v26);
      else
        CellPaged = HvpGetCellPaged((ULONG_PTR)&CmControlHive, v14, (unsigned int *)&v26);
      v16 = CellPaged;
      if ( CellPaged )
      {
        v17 = *(_DWORD *)(a2 + 4);
        if ( v17 > (unsigned int)v4 )
          v17 = v4;
        v18 = 0;
        if ( *(_WORD *)(v13 + 2) )
        {
          while ( 1 )
          {
            v19 = *(unsigned int *)(v16 + 4LL * v18);
            v20 = (const void *)((byte_140D85D6C & 1) != 0
                               ? HvpGetCellFlat((ULONG_PTR)&CmControlHive, v19, &v25)
                               : HvpGetCellPaged((ULONG_PTR)&CmControlHive, v19, (unsigned int *)&v25));
            if ( !v20 )
              break;
            v21 = v17;
            if ( v17 > 0x3FD8 )
              v21 = 16344LL;
            memmove(&v27[16344 * v18], v20, v21);
            if ( (byte_140D85D6C & 1) != 0 )
              HvpReleaseCellFlat((__int64)&CmControlHive, &v25);
            else
              HvpReleaseCellPaged((__int64)&CmControlHive, (unsigned int *)&v25);
            if ( v17 > 0x3FD8 )
            {
              v17 -= 16344;
              if ( ++v18 < *(_WORD *)(v13 + 2) )
                continue;
            }
            goto LABEL_29;
          }
          v11 = 0;
        }
LABEL_29:
        if ( (byte_140D85D6C & 1) != 0 )
          HvpReleaseCellFlat((__int64)&CmControlHive, &v26);
        else
          HvpReleaseCellPaged((__int64)&CmControlHive, (unsigned int *)&v26);
      }
      else
      {
        v11 = 0;
      }
      if ( (byte_140D85D6C & 1) != 0 )
        HvpReleaseCellFlat((__int64)&CmControlHive, &v23);
      else
        HvpReleaseCellPaged((__int64)&CmControlHive, (unsigned int *)&v23);
    }
    else
    {
      v11 = 0;
    }
    LOBYTE(v8) = v11;
  }
  else
  {
    v9 = *(unsigned int *)(a2 + 8);
    if ( (byte_140D85D6C & 1) != 0 )
      v8 = (const void *)HvpGetCellFlat((ULONG_PTR)&CmControlHive, v9, &v24);
    else
      v8 = (const void *)HvpGetCellPaged((ULONG_PTR)&CmControlHive, v9, (unsigned int *)&v24);
    if ( v8 )
    {
      memmove(a3, v8, v4);
      if ( (byte_140D85D6C & 1) != 0 )
        HvpReleaseCellFlat((__int64)&CmControlHive, &v24);
      else
        HvpReleaseCellPaged((__int64)&CmControlHive, (unsigned int *)&v24);
      goto LABEL_3;
    }
  }
  return (char)v8;
}
