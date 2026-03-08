/*
 * XREFs of ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C0183B20
 * Callers:
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C0183370 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 * Callees:
 *     ?bCloseFigure@EPATHOBJ@@QEAAHXZ @ 0x1C0180EF0 (-bCloseFigure@EPATHOBJ@@QEAAHXZ.c)
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C0180FA8 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C01810CC (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 */

__int64 __fastcall RGNOBJ::bOutline(RGNOBJ *this, struct EPATHOBJ *a2, struct EXFORMOBJ *a3)
{
  struct EXFORMOBJ *v3; // r9
  EPATHOBJ *v4; // r15
  _DWORD *v5; // r13
  int v6; // eax
  int v7; // edi
  bool v8; // zf
  __int64 v9; // r12
  int v10; // r14d
  _DWORD *v11; // rsi
  _DWORD *j; // rbx
  int v13; // ecx
  int v14; // r8d
  LONG v15; // edx
  int v16; // r10d
  int v17; // eax
  int v18; // edi
  int v19; // eax
  __int64 v20; // r9
  int v21; // eax
  int v22; // ecx
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  _DWORD *v27; // r15
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  LONG v31; // eax
  signed int v32; // r14d
  int v33; // eax
  int v34; // eax
  int v35; // ecx
  _DWORD *v36; // rdi
  int v37; // r8d
  LONG v38; // edx
  signed int v39; // r10d
  signed int v40; // esi
  int v41; // eax
  int v42; // eax
  __int64 v43; // r9
  int v44; // eax
  signed int v45; // ecx
  int v46; // ecx
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  _DWORD *v50; // r15
  int v51; // ecx
  int v52; // eax
  int *v53; // rdi
  int v54; // eax
  LONG v55; // eax
  int v56; // eax
  LONG v57; // eax
  int i; // [rsp+20h] [rbp-28h]
  int v60; // [rsp+24h] [rbp-24h]
  struct _POINTL v61; // [rsp+28h] [rbp-20h] BYREF
  int v62; // [rsp+30h] [rbp-18h]
  int v63; // [rsp+34h] [rbp-14h]
  int v66; // [rsp+A8h] [rbp+60h]

  v3 = a3;
  v4 = a2;
  v5 = *(_DWORD **)(*(_QWORD *)this + 32LL);
  v6 = *(_DWORD *)(*(_QWORD *)this + 52LL);
LABEL_111:
  if ( !v6 )
    return 1LL;
  v7 = 0;
  v60 = v6 - 1;
  v8 = *v5 == 0;
  for ( i = *v5; ; v8 = v7 == i )
  {
    v66 = v7;
    if ( v8 )
    {
      v6 = v60;
      v5 = (_DWORD *)((char *)v5 + (unsigned int)(4 * *v5 + 16));
      goto LABEL_111;
    }
    if ( (int)v5[v7 + 3] <= 0x7FFFFFF )
      break;
LABEL_108:
    ++v7;
  }
  v61.x = v5[v7 + 3];
  v61.y = v5[1];
  if ( (unsigned int)EPATHOBJ::bMoveTo(v4, v3, &v61) )
  {
    v9 = v7 & 1;
    v10 = v7;
    v11 = (_DWORD *)((char *)v5 + (unsigned int)(4 * *v5 + 16));
    v5[v7 + 3] += 0x10000000;
    for ( j = v5; ; j[v10 + 3] += 0x10000000 )
    {
      v13 = 1;
      if ( *v11 )
      {
        do
        {
          v14 = j[v10 + 3];
          v15 = v14;
          if ( v14 > 0x7FFFFFF )
            v15 = v14 - 0x10000000;
          v16 = v9;
          v17 = v11[(unsigned int)v9 + 3];
          v18 = *v11 - v9 - 1;
          if ( v17 > 0x7FFFFFF )
            v17 -= 0x10000000;
          if ( v17 <= v15 )
          {
            v19 = v11[v18 + 3];
            if ( v19 > 0x7FFFFFF )
              v19 -= 0x10000000;
            if ( v19 <= v15 )
              break;
            v20 = (unsigned int)(*v11 - 1) >> 1;
            if ( (_DWORD)v20 != (_DWORD)v9 )
            {
              do
              {
                v21 = v11[v20 + 3];
                if ( v21 > 0x7FFFFFF )
                  v21 -= 0x10000000;
                v22 = v20;
                if ( v21 <= v15 )
                {
                  v22 = v18;
                  v16 = v20;
                }
                v18 = v22;
                v20 = (unsigned int)(v16 + v22) >> 1;
              }
              while ( (_DWORD)v20 != v16 );
            }
          }
          else
          {
            v18 = v9;
          }
          if ( (v18 & 1) == (_DWORD)v9 )
          {
            v25 = v11[v18 + 3];
            if ( v25 > 0x7FFFFFF )
              v25 -= 0x10000000;
            v26 = j[v10 + 4];
            if ( v26 > 0x7FFFFFF )
              v26 -= 0x10000000;
            if ( v25 >= v26 )
              break;
          }
          else
          {
            --v18;
            if ( v10 )
            {
              v23 = v11[v18 + 3];
              if ( v23 > 0x7FFFFFF )
                v23 -= 0x10000000;
              v24 = j[v10 + 2];
              if ( v24 > 0x7FFFFFF )
                v24 -= 0x10000000;
              if ( v23 < v24 )
              {
                v13 = -1;
                goto LABEL_47;
              }
            }
          }
          v27 = &v11[v18];
          v28 = v27[3];
          v29 = v28;
          if ( v28 > 0x7FFFFFF )
            v29 = v28 - 0x10000000;
          if ( v15 != v29 )
            goto LABEL_116;
          if ( v14 > 0x7FFFFFF )
            v14 -= 0x10000000;
          if ( v14 != v29 )
            goto LABEL_116;
          if ( v28 > 0x7FFFFFF )
            v28 -= 0x10000000;
          if ( v28 != v29 )
          {
LABEL_116:
            v61.x = v15;
            v61.y = j[2];
            v63 = j[2];
            v62 = v29;
            if ( !(unsigned int)EPATHOBJ::bPolyLineTo(a2, a3, &v61, 2u) )
              return 0LL;
          }
          v30 = *v11;
          j = v11;
          v27[3] += 0x10000000;
          v10 = v18;
          v11 = (_DWORD *)((char *)v11 + (unsigned int)(4 * v30 + 16));
        }
        while ( *v11 );
        v13 = 1;
LABEL_47:
        v4 = a2;
      }
      v31 = j[v10 + 3];
      if ( v31 > 0x7FFFFFF )
        v31 -= 0x10000000;
      v61.x = v31;
      v32 = v13 + v10;
      v61.y = j[2];
      v63 = j[2];
      v33 = j[v32 + 3];
      if ( v33 > 0x7FFFFFF )
        v33 -= 0x10000000;
      v62 = v33;
      if ( !(unsigned int)EPATHOBJ::bPolyLineTo(v4, a3, &v61, 2u) )
        break;
      v34 = *(j - 1);
      j[v32 + 3] += 0x10000000;
      v35 = -1;
      v36 = (_DWORD *)((char *)j - (unsigned int)(4 * v34 + 16));
      if ( *v36 )
      {
        do
        {
          v37 = j[v32 + 3];
          v38 = v37;
          if ( v37 > 0x7FFFFFF )
            v38 = v37 - 0x10000000;
          v39 = v9;
          v40 = *v36 - v9 - 1;
          v41 = v36[v40 + 3];
          if ( v41 > 0x7FFFFFF )
            v41 -= 0x10000000;
          if ( v41 >= v38 )
          {
            v42 = v36[v9 + 3];
            if ( v42 > 0x7FFFFFF )
              v42 -= 0x10000000;
            if ( v42 >= v38 )
              break;
            v43 = (unsigned int)(*v36 - 1) >> 1;
            if ( (_DWORD)v43 != (_DWORD)v9 )
            {
              do
              {
                v44 = v36[v43 + 3];
                if ( v44 > 0x7FFFFFF )
                  v44 -= 0x10000000;
                v45 = v43;
                if ( v44 < v38 )
                {
                  v45 = v40;
                  v39 = v43;
                }
                v40 = v45;
                v43 = (unsigned int)(v39 + v45) >> 1;
              }
              while ( (_DWORD)v43 != v39 );
            }
            v40 = v39;
          }
          if ( (v40 & 1) == (_DWORD)v9 )
          {
            ++v40;
            if ( v32 < (unsigned int)(*j - 1) )
            {
              v46 = v36[v40 + 3];
              if ( v46 > 0x7FFFFFF )
                v46 -= 0x10000000;
              v47 = j[v32 + 4];
              if ( v47 > 0x7FFFFFF )
                v47 -= 0x10000000;
              if ( v46 > v47 )
              {
                v35 = 1;
                goto LABEL_94;
              }
            }
          }
          else
          {
            v48 = v36[v40 + 3];
            if ( v48 > 0x7FFFFFF )
              v48 -= 0x10000000;
            v49 = j[v32 + 2];
            if ( v49 > 0x7FFFFFF )
              v49 -= 0x10000000;
            if ( v48 <= v49 )
              break;
          }
          v50 = &v36[v40];
          v51 = v50[3];
          v52 = v51;
          if ( v51 > 0x7FFFFFF )
            v52 = v51 - 0x10000000;
          if ( v38 != v52 )
            goto LABEL_117;
          if ( v37 > 0x7FFFFFF )
            v37 -= 0x10000000;
          if ( v37 != v52 )
            goto LABEL_117;
          if ( v51 > 0x7FFFFFF )
            v51 -= 0x10000000;
          if ( v51 != v52 )
          {
LABEL_117:
            v61.x = v38;
            v61.y = j[1];
            v63 = j[1];
            v62 = v52;
            if ( !(unsigned int)EPATHOBJ::bPolyLineTo(a2, a3, &v61, 2u) )
              return 0LL;
          }
          j = v36;
          v32 = v40;
          v53 = v36 - 1;
          v54 = *v53;
          v50[3] += 0x10000000;
          v36 = (int *)((char *)v53 - (unsigned int)(4 * v54 + 16) + 4);
        }
        while ( *v36 );
        v35 = -1;
LABEL_94:
        v4 = a2;
      }
      if ( v5 == j )
      {
        v7 = v66;
        if ( v66 == v32 - 1 )
        {
          v57 = j[v32 + 3];
          if ( v57 > 0x7FFFFFF )
            v57 -= 0x10000000;
          v61.x = v57;
          v61.y = j[1];
          if ( (unsigned int)EPATHOBJ::bPolyLineTo(v4, a3, &v61, 1u) && (unsigned int)EPATHOBJ::bCloseFigure(v4) )
          {
            v3 = a3;
            goto LABEL_108;
          }
          return 0LL;
        }
      }
      v55 = j[v32 + 3];
      if ( v55 > 0x7FFFFFF )
        v55 -= 0x10000000;
      v61.x = v55;
      v10 = v35 + v32;
      v61.y = j[1];
      v63 = j[1];
      v56 = j[v10 + 3];
      if ( v56 > 0x7FFFFFF )
        v56 -= 0x10000000;
      v62 = v56;
      if ( !(unsigned int)EPATHOBJ::bPolyLineTo(v4, a3, &v61, 2u) )
        return 0LL;
      v11 = (_DWORD *)((char *)j + (unsigned int)(4 * *j + 16));
    }
  }
  return 0LL;
}
