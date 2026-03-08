/*
 * XREFs of ?CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C02729F0
 * Callers:
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C02728BC (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 * Callees:
 *     ?CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x1C027330C (-CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z.c)
 */

void __fastcall CitpContextReinitialize(struct _CIT_IMPACT_CONTEXT *a1, int a2)
{
  char *v2; // rdi
  char *v3; // rsi
  __int64 v5; // rdx
  unsigned __int64 v7; // rax
  char i; // cl
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned int j; // ebp
  __int64 v12; // rcx
  char *v13; // rdi
  char **v14; // rax

  v2 = (char *)*((_QWORD *)a1 + 11);
  v3 = (char *)a1 + 8;
  *((_QWORD *)a1 + 4) = (char *)a1 + 24;
  *((_QWORD *)a1 + 3) = (char *)a1 + 24;
  v5 = *((_DWORD *)a1 + 19) >> 5;
  *((_QWORD *)a1 + 6) = (char *)a1 + 40;
  *((_QWORD *)a1 + 5) = (char *)a1 + 40;
  v7 = (unsigned __int64)a1 + 72;
  *(_QWORD *)((char *)a1 + 60) = 0LL;
  *((_QWORD *)a1 + 2) = (char *)a1 + 8;
  *((_QWORD *)a1 + 1) = (char *)a1 + 8;
  if ( (((_DWORD)v5 - 1) & (unsigned int)v5) != 0 )
  {
    for ( i = -1; (_DWORD)v5; LODWORD(v5) = (unsigned int)v5 >> 1 )
      ++i;
    v5 = (unsigned int)(1 << i);
  }
  *(_DWORD *)v7 = 0;
  *(_QWORD *)(v7 + 8) = v2;
  if ( (unsigned int)v5 > 0x4000000 )
    v5 = 0x4000000LL;
  *(_DWORD *)(v7 + 4) = 32 * v5;
  v9 = v7 | 1;
  v10 = (unsigned int)v5;
  if ( v2 > &v2[8 * v5] )
    v10 = 0LL;
  if ( v10 )
    memset64(v2, v9, v10);
  for ( j = 0; j < *((_DWORD *)a1 + 14); *((_QWORD *)v3 + 1) = v13 )
  {
    v12 = *(_QWORD *)a1 + 96LL * j;
    v13 = (char *)(v12 + 16);
    *(_QWORD *)v12 = 0LL;
    *(_QWORD *)(v12 + 24) = v12 + 16;
    *(_QWORD *)(v12 + 16) = v12 + 16;
    CitpProgDataReinitialize((struct _CIT_PROG_DATA *)v12);
    v14 = (char **)*((_QWORD *)v3 + 1);
    if ( *v14 != v3 )
      __fastfail(3u);
    *(_QWORD *)v13 = v3;
    ++j;
    *((_QWORD *)v13 + 1) = v14;
    *v14 = v13;
  }
  *((_DWORD *)a1 + 34) = a2;
  *((_DWORD *)a1 + 72) = a2;
  *((_QWORD *)a1 + 35) = MEMORY[0xFFFFF78000000014];
}
