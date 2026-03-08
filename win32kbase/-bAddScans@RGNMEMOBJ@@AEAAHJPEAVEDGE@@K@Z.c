/*
 * XREFs of ?bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z @ 0x1C01831E4
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0184190 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C00AAC50 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     memcmp @ 0x1C00E17D0 (memcmp.c)
 */

__int64 __fastcall RGNMEMOBJ::bAddScans(RGNMEMOBJ *this, int a2, struct EDGE *a3, char a4)
{
  unsigned int v8; // r8d
  unsigned int v9; // r11d
  unsigned int v10; // eax
  int v12; // ebp
  _DWORD *v13; // rsi
  struct EDGE *v14; // rax
  char *v15; // r15
  _DWORD *v16; // rbx
  int v17; // ecx
  _DWORD *v18; // rbx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  unsigned __int64 v22; // rbx
  __int64 v23; // rcx
  char *v24; // rdi

  v8 = 4 * *((_DWORD *)a3 + 4) + 16;
  v9 = *(_DWORD *)(*(_QWORD *)this + 24LL);
  if ( v8 > v9 - *(_DWORD *)(*(_QWORD *)this + 48LL) )
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v9 || v10 + 1120 < v10 || !(unsigned int)RGNOBJ::bExpand(this, v10 + 1120) )
      return 0LL;
  }
  v12 = a4 & 2;
  v13 = *(_DWORD **)(*(_QWORD *)this + 40LL);
  v14 = *(struct EDGE **)a3;
  v15 = (char *)(v13 + 2);
  v13[2] = 0x80000000;
  v16 = v13 + 2;
  if ( v14 != a3 )
  {
    if ( v12 )
    {
      do
      {
        v17 = *((_DWORD *)v14 + 3);
        if ( *v16 >= v17 )
        {
          v18 = v16 - 1;
        }
        else
        {
          v18 = v16 + 1;
          *v18 = v17;
        }
        v19 = *((_DWORD *)v14 + 10);
        do
        {
          v14 = *(struct EDGE **)v14;
          v19 += *((_DWORD *)v14 + 10);
        }
        while ( v19 );
        v20 = *((_DWORD *)v14 + 3);
        if ( *v18 >= v20 )
        {
          v16 = v18 - 1;
        }
        else
        {
          v16 = v18 + 1;
          *v16 = v20;
        }
        v14 = *(struct EDGE **)v14;
      }
      while ( v14 != a3 );
    }
    else
    {
      do
      {
        v21 = *((_DWORD *)v14 + 3);
        if ( *v16 >= v21 )
          --v16;
        else
          *++v16 = v21;
        v14 = *(struct EDGE **)v14;
      }
      while ( v14 != a3 );
    }
  }
  v22 = (unsigned __int64)((char *)v16 - v15) >> 2;
  v23 = (unsigned int)(4 * *(v13 - 1) + 16);
  v24 = (char *)v13 - v23 - 4;
  if ( *(_DWORD *)((char *)v13 - v23) == (_DWORD)v22 && !memcmp(v24 + 16, v13 + 3, 4LL * (unsigned int)v22) )
  {
    *((_DWORD *)v24 + 3) = a2 + 1;
  }
  else
  {
    ++*(_DWORD *)(*(_QWORD *)this + 52LL);
    *(_DWORD *)(*(_QWORD *)this + 48LL) += 4 * v22 + 16;
    *(_DWORD *)v15 = a2 + 1;
    *v13 = v22;
    v13[1] = a2;
    v13[(unsigned int)v22 + 3] = v22;
    *(_QWORD *)(*(_QWORD *)this + 40LL) = (char *)v13 + (unsigned int)(4 * *v13 + 16);
  }
  return 1LL;
}
