/*
 * XREFs of CmpSetValueDataNew @ 0x1406E1C64
 * Callers:
 *     CmpAddValueKeyNew @ 0x140657630 (CmpAddValueKeyNew.c)
 *     CmpSetValueKeyExisting @ 0x1406DFA78 (CmpSetValueKeyExisting.c)
 *     CmpCopyValue @ 0x140878D70 (CmpCopyValue.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     HvAllocateCell @ 0x140656A94 (HvAllocateCell.c)
 *     HvFreeCell @ 0x140656BC4 (HvFreeCell.c)
 */

__int64 __fastcall CmpSetValueDataNew(ULONG_PTR BugCheckParameter2, char *Src, size_t Size, int a4, _DWORD *a5)
{
  size_t v5; // rsi
  int v9; // eax
  __int64 *v10; // rdx
  int v12; // eax
  _DWORD *v13; // rdi
  unsigned int v14; // r15d
  int v15; // eax
  __int64 v16; // r12
  size_t v17; // r8
  unsigned __int16 i; // ax
  ULONG_PTR v19; // rdx
  ULONG_PTR v20; // rdx
  _DWORD *v21; // rdi
  __int64 v22; // [rsp+30h] [rbp-30h] BYREF
  __int64 v23; // [rsp+38h] [rbp-28h] BYREF
  __int64 v24; // [rsp+40h] [rbp-20h] BYREF
  _DWORD *v25; // [rsp+48h] [rbp-18h] BYREF
  __int64 v26; // [rsp+50h] [rbp-10h] BYREF
  void *v27; // [rsp+90h] [rbp+30h] BYREF

  v5 = (unsigned int)Size;
  v27 = 0LL;
  v22 = 0xFFFFFFFFLL;
  if ( *(_DWORD *)(BugCheckParameter2 + 212) >= 4u && (unsigned int)(Size - 16345) <= 0x7FFFC026 )
  {
    v25 = 0LL;
    v24 = 0xFFFFFFFFLL;
    v26 = 0LL;
    v23 = 0xFFFFFFFFLL;
    v12 = HvAllocateCell(BugCheckParameter2, 8, a4, &v25, &v24);
    *a5 = v12;
    if ( v12 != -1 )
    {
      v13 = v25;
      *v25 = 25188;
      v13[1] = -1;
      v14 = ((int)v5 + 16343) / 0x3FD8u;
      v15 = HvAllocateCell(BugCheckParameter2, 4 * (unsigned int)(unsigned __int16)v14, a4, &v26, &v23);
      v16 = v26;
      v13[1] = v15;
      if ( v15 != -1 )
      {
        if ( *((_WORD *)v13 + 1) >= (unsigned __int16)v14 )
        {
LABEL_13:
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v23);
          v10 = &v24;
          goto LABEL_5;
        }
        while ( 1 )
        {
          *(_DWORD *)(v16 + 4LL * *((unsigned __int16 *)v13 + 1)) = HvAllocateCell(
                                                                      BugCheckParameter2,
                                                                      16344,
                                                                      a4,
                                                                      &v27,
                                                                      &v22);
          if ( *(_DWORD *)(v16 + 4LL * *((unsigned __int16 *)v13 + 1)) == -1 )
            break;
          v17 = (unsigned int)v5;
          if ( (unsigned int)v5 > 0x3FD8 )
            v17 = 16344LL;
          memmove(v27, Src, v17);
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v22);
          v27 = 0LL;
          ++*((_WORD *)v13 + 1);
          Src += 16344;
          LODWORD(v5) = v5 - 16344;
          if ( *((_WORD *)v13 + 1) >= (unsigned __int16)v14 )
            goto LABEL_13;
        }
      }
      if ( v16 )
      {
        for ( i = *((_WORD *)v13 + 1); i; *((_WORD *)v13 + 1) = i )
        {
          v19 = *(unsigned int *)(v16 + 4LL * i);
          if ( (_DWORD)v19 != -1 )
          {
            HvFreeCell(BugCheckParameter2, v19);
            i = *((_WORD *)v13 + 1);
          }
          --i;
        }
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v23);
      }
      v20 = (unsigned int)v13[1];
      if ( (_DWORD)v20 != -1 )
        HvFreeCell(BugCheckParameter2, v20);
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v24);
      v21 = a5;
      HvFreeCell(BugCheckParameter2, (unsigned int)*a5);
      *v21 = -1;
    }
  }
  else
  {
    v9 = HvAllocateCell(BugCheckParameter2, Size, a4, &v27, &v22);
    *a5 = v9;
    if ( v9 != -1 )
    {
      memmove(v27, Src, v5);
      v10 = &v22;
LABEL_5:
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, v10);
      return 0LL;
    }
  }
  return 3221225626LL;
}
