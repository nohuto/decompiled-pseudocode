/*
 * XREFs of ?bSearchAllSpans@FLOODBM@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z @ 0x1C02D5DB4
 * Callers:
 *     ?bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x1C02D569C (-bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z.c)
 * Callees:
 *     ?bExpandScanline@STACKOBJ@@QEAAHKK@Z @ 0x1C02D55E8 (-bExpandScanline@STACKOBJ@@QEAAHKK@Z.c)
 *     ?iColorGet@FLOODBM@@QEAAKJ@Z @ 0x1C02D5FE4 (-iColorGet@FLOODBM@@QEAAKJ@Z.c)
 *     ?vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z @ 0x1C02D60B0 (-vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z.c)
 */

__int64 __fastcall FLOODBM::bSearchAllSpans(
        FLOODBM *this,
        int a2,
        int a3,
        int *a4,
        int *a5,
        unsigned __int8 *a6,
        struct STACKOBJ *a7,
        struct SCANLINE *a8)
{
  unsigned int v8; // ebx
  int v10; // edi
  unsigned int *v12; // rsi
  __int64 v13; // r13
  unsigned int v14; // r12d
  unsigned int v15; // eax
  __int64 v16; // r9
  int v17; // r10d
  STACKOBJ *v18; // r11
  bool v19; // zf
  unsigned int v20; // edx
  unsigned int v21; // ecx
  int *v22; // rax
  unsigned int v23; // edx
  unsigned int v24; // ecx
  int *v25; // rax
  __int64 v26; // rax
  unsigned int v27; // r8d
  unsigned int v29; // edx
  unsigned int v30; // r11d
  unsigned int *v31; // r9
  signed int v32; // r10d
  int *v33; // rdi
  int v34; // ecx
  __int64 v35; // rax
  __int64 v36; // rcx
  int *v37; // [rsp+68h] [rbp+20h]

  v37 = a4;
  v8 = 0;
  v10 = a2;
  v12 = (unsigned int *)*((_QWORD *)a7 + 2);
  v13 = v12[1];
  *((_QWORD *)this + 3) = a6;
  v14 = 8 * v13 + 24;
  if ( a2 < a3 )
  {
    while ( 1 )
    {
      v15 = FLOODBM::iColorGet(this, v10);
      if ( *((_DWORD *)this + 8) )
      {
        while ( v15 != v17 )
        {
          v19 = ++v10 == a3;
          if ( v10 >= a3 )
            goto LABEL_12;
          v15 = FLOODBM::iColorGet(this, v10);
        }
      }
      else
      {
        while ( v15 == v17 )
        {
          v19 = ++v10 == a3;
          if ( v10 >= a3 )
            goto LABEL_12;
          v15 = FLOODBM::iColorGet(this, v10);
        }
      }
      v19 = v10 == a3;
LABEL_12:
      if ( v19 )
      {
LABEL_29:
        a4 = v37;
        break;
      }
      if ( a8 )
      {
        v20 = *((_DWORD *)a8 + 1);
        v21 = 0;
        if ( v20 )
        {
          v22 = (int *)((char *)a8 + 28);
          while ( v10 >= *(v22 - 1) )
          {
            if ( v10 < *v22 )
            {
              v10 = *((_DWORD *)a8 + 2 * v21 + 7);
              goto LABEL_28;
            }
            ++v21;
            v22 += 2;
            if ( v21 >= v20 )
              break;
          }
        }
      }
      v23 = v12[1];
      v24 = 0;
      if ( v23 )
      {
        v25 = (int *)(v12 + 7);
        while ( v10 < *(v25 - 1) || v10 >= *v25 )
        {
          ++v24;
          v25 += 2;
          if ( v24 >= v23 )
            goto LABEL_24;
        }
        v10 = v12[2 * v24 + 7];
      }
      else
      {
LABEL_24:
        v14 += 8;
        if ( v14 > v12[2] )
        {
          if ( !(unsigned int)STACKOBJ::bExpandScanline(v18, v14, 0LL, v16) )
            return 0LL;
          v12 = (unsigned int *)*((_QWORD *)a7 + 2);
        }
        FLOODBM::vFindExtent(this, v10, (int *)&v12[2 * v12[1] + 6], (int *)&v12[2 * v12[1] + 7]);
        v26 = v12[1];
        v10 = v12[2 * v26 + 7] + 1;
        v12[1] = v26 + 1;
      }
LABEL_28:
      if ( v10 >= a3 )
        goto LABEL_29;
    }
  }
  v27 = v12[1];
  if ( (_DWORD)v13 == v27 )
  {
    *a5 = 0;
    *a4 = 0;
  }
  else
  {
    *a4 = v12[2 * v13 + 6];
    *a5 = v12[2 * v27 + 5];
    if ( v27 != 1 )
    {
      do
      {
        v29 = v8;
        v30 = v8;
        v31 = &v12[2 * v8];
        v32 = v31[6];
        if ( v8 < v27 )
        {
          v33 = (int *)(v31 + 6);
          do
          {
            v34 = *v33;
            v35 = v30;
            v33 += 2;
            if ( v34 >= v32 )
              v35 = v29;
            ++v30;
            v29 = v35;
            if ( v34 >= v32 )
              v34 = v32;
            v32 = v34;
          }
          while ( v30 < v27 );
          if ( v8 != (_DWORD)v35 )
          {
            v36 = *((_QWORD *)v31 + 3);
            *((_QWORD *)v31 + 3) = *(_QWORD *)&v12[2 * v35 + 6];
            *(_QWORD *)&v12[2 * (unsigned int)v35 + 6] = v36;
          }
        }
        v27 = v12[1];
        ++v8;
      }
      while ( v8 < v27 - 1 );
    }
  }
  return 1LL;
}
