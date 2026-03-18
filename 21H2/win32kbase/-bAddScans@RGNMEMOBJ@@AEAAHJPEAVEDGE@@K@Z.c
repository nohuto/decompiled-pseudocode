/*
 * XREFs of ?bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z @ 0x1C00CBE64
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0032680 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C00A8FE0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     memcmp @ 0x1C00DD6E0 (memcmp.c)
 */

__int64 __fastcall RGNMEMOBJ::bAddScans(RGNMEMOBJ *this, int a2, struct EDGE *a3, char a4)
{
  unsigned int v8; // r8d
  unsigned int v9; // r11d
  int v10; // edi
  _DWORD *v11; // r14
  struct EDGE *v12; // rax
  char *v13; // rbp
  _DWORD *v14; // rbx
  int v15; // ecx
  unsigned __int64 v16; // rbx
  __int64 v17; // rcx
  char *v18; // rdi
  int v20; // ecx
  _DWORD *v21; // rbx
  int v22; // ecx
  int v23; // ecx
  unsigned int v24; // eax

  v8 = 4 * *((_DWORD *)a3 + 4) + 16;
  v9 = *(_DWORD *)(*(_QWORD *)this + 24LL);
  if ( v8 > v9 - *(_DWORD *)(*(_QWORD *)this + 80LL) )
  {
    v24 = v9 + v8;
    if ( v9 + v8 < v9 || v24 + 1120 < v24 || !(unsigned int)RGNOBJ::bExpand(this, v24 + 1120) )
      return 0LL;
  }
  v10 = a4 & 2;
  v11 = *(_DWORD **)(*(_QWORD *)this + 40LL);
  v12 = *(struct EDGE **)a3;
  v13 = (char *)(v11 + 2);
  v11[2] = 0x80000000;
  v14 = v11 + 2;
  if ( v12 != a3 )
  {
    if ( v10 )
    {
      do
      {
        v20 = *((_DWORD *)v12 + 3);
        if ( *v14 >= v20 )
        {
          v21 = v14 - 1;
        }
        else
        {
          v21 = v14 + 1;
          *v21 = v20;
        }
        v22 = *((_DWORD *)v12 + 10);
        do
        {
          v12 = *(struct EDGE **)v12;
          v22 += *((_DWORD *)v12 + 10);
        }
        while ( v22 );
        v23 = *((_DWORD *)v12 + 3);
        if ( *v21 >= v23 )
        {
          v14 = v21 - 1;
        }
        else
        {
          v14 = v21 + 1;
          *v14 = v23;
        }
        v12 = *(struct EDGE **)v12;
      }
      while ( v12 != a3 );
    }
    else
    {
      do
      {
        v15 = *((_DWORD *)v12 + 3);
        if ( *v14 >= v15 )
          --v14;
        else
          *++v14 = v15;
        v12 = *(struct EDGE **)v12;
      }
      while ( v12 != a3 );
    }
  }
  v16 = (unsigned __int64)((char *)v14 - v13) >> 2;
  v17 = (unsigned int)(4 * *(v11 - 1) + 16);
  v18 = (char *)v11 - v17 - 4;
  if ( *(_DWORD *)((char *)v11 - v17) == (_DWORD)v16 && !memcmp(v18 + 16, v11 + 3, 4LL * (unsigned int)v16) )
  {
    *((_DWORD *)v18 + 3) = a2 + 1;
  }
  else
  {
    ++*(_DWORD *)(*(_QWORD *)this + 84LL);
    *(_DWORD *)(*(_QWORD *)this + 80LL) += 4 * v16 + 16;
    *(_DWORD *)v13 = a2 + 1;
    *v11 = v16;
    v11[1] = a2;
    v11[(unsigned int)v16 + 3] = v16;
    *(_QWORD *)(*(_QWORD *)this + 40LL) = (char *)v11 + (unsigned int)(4 * *v11 + 16);
  }
  return 1LL;
}
