/*
 * XREFs of ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00BCDD4
 * Callers:
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00BCD40 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 * Callees:
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C0080580 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C0085B30 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 *     ?bCloseFigure@EPATHOBJ@@QEAAHXZ @ 0x1C00871D0 (-bCloseFigure@EPATHOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall RGNOBJ::bOutline(RGNOBJ *this, struct EPATHOBJ *a2, struct EXFORMOBJ *a3)
{
  struct EXFORMOBJ *v3; // r9
  EPATHOBJ *v4; // rsi
  _DWORD *v5; // r12
  int v6; // eax
  int v7; // r14d
  bool v8; // zf
  _DWORD *v10; // rbx
  int v11; // r15d
  __int64 v12; // r13
  _DWORD *v13; // rsi
  int v14; // edi
  int v15; // ecx
  LONG v16; // eax
  signed int v17; // r14d
  int v18; // eax
  struct EXFORMOBJ *v19; // r15
  int v20; // eax
  int v21; // ecx
  _DWORD *v22; // rdi
  int v23; // esi
  LONG v24; // eax
  int v25; // r8d
  LONG v26; // edx
  int v27; // eax
  int v28; // edi
  int v29; // r10d
  int v30; // eax
  __int64 v31; // r9
  int v32; // eax
  int v33; // ecx
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  int v37; // r8d
  LONG v38; // edx
  signed int v39; // esi
  signed int v40; // r10d
  int v41; // eax
  int v42; // eax
  __int64 v43; // r9
  int v44; // ecx
  int v45; // eax
  int *v46; // rdi
  int v47; // eax
  int v48; // eax
  signed int v49; // ecx
  int v50; // ecx
  int v51; // eax
  int v52; // ecx
  int v53; // eax
  int v54; // ecx
  int v55; // eax
  int v56; // ecx
  int v57; // eax
  LONG v58; // eax
  int v59; // eax
  int i; // [rsp+20h] [rbp-28h]
  int v61; // [rsp+24h] [rbp-24h]
  struct _POINTL v62; // [rsp+28h] [rbp-20h] BYREF
  int v63; // [rsp+30h] [rbp-18h]
  int v64; // [rsp+34h] [rbp-14h]
  int v67; // [rsp+A8h] [rbp+60h]

  v3 = a3;
  v4 = a2;
  v5 = *(_DWORD **)(*(_QWORD *)this + 88LL);
  v6 = *(_DWORD *)(*(_QWORD *)this + 84LL);
  if ( v6 )
  {
LABEL_2:
    v7 = 0;
    v61 = v6 - 1;
    v8 = *v5 == 0;
    for ( i = *v5; ; v8 = v7 == i )
    {
      v67 = v7;
      if ( v8 )
      {
        v6 = v61;
        v5 = (_DWORD *)((char *)v5 + (unsigned int)(4 * *v5 + 16));
        if ( v61 )
          goto LABEL_2;
        return 1LL;
      }
      if ( (int)v5[v7 + 3] > 0x7FFFFFF )
        goto LABEL_7;
      v62.x = v5[v7 + 3];
      v62.y = v5[1];
      v10 = v5;
      v11 = v7;
      if ( !(unsigned int)EPATHOBJ::bMoveTo(v4, v3, &v62) )
        return 0LL;
      v12 = v7 & 1;
      v13 = (_DWORD *)((char *)v5 + (unsigned int)(4 * *v5 + 16));
      v5[v7 + 3] += 0x10000000;
      while ( 2 )
      {
        v14 = *v13;
        v15 = 1;
        if ( !*v13 )
          goto LABEL_11;
        while ( 1 )
        {
          v25 = v10[v11 + 3];
          v26 = v25;
          if ( v25 > 0x7FFFFFF )
            v26 = v25 - 0x10000000;
          v27 = v13[(unsigned int)v12 + 3];
          v28 = v14 - v12 - 1;
          v29 = v12;
          if ( v27 > 0x7FFFFFF )
            v27 -= 0x10000000;
          if ( v27 > v26 )
          {
            v28 = v12;
          }
          else
          {
            v30 = v13[v28 + 3];
            if ( v30 > 0x7FFFFFF )
              v30 -= 0x10000000;
            if ( v30 <= v26 )
            {
LABEL_86:
              v15 = 1;
              goto LABEL_11;
            }
            v31 = (unsigned int)(v28 + v12) >> 1;
            if ( (_DWORD)v31 != (_DWORD)v12 )
            {
              do
              {
                v32 = v13[v31 + 3];
                if ( v32 > 0x7FFFFFF )
                  v32 -= 0x10000000;
                v33 = v31;
                if ( v32 <= v26 )
                {
                  v33 = v28;
                  v29 = v31;
                }
                v28 = v33;
                v31 = (unsigned int)(v29 + v33) >> 1;
              }
              while ( (_DWORD)v31 != v29 );
            }
          }
          if ( (v28 & 1) != (_DWORD)v12 )
            break;
          v50 = v13[v28 + 3];
          if ( v50 > 0x7FFFFFF )
            v50 -= 0x10000000;
          v51 = v10[v11 + 4];
          if ( v51 > 0x7FFFFFF )
            v51 -= 0x10000000;
          if ( v50 >= v51 )
            goto LABEL_86;
LABEL_40:
          v34 = v13[v28 + 3];
          v35 = v34;
          if ( v34 > 0x7FFFFFF )
            v35 = v34 - 0x10000000;
          if ( v26 != v35 )
            goto LABEL_120;
          if ( v25 > 0x7FFFFFF )
            v25 -= 0x10000000;
          if ( v25 != v35 )
            goto LABEL_120;
          if ( v34 > 0x7FFFFFF )
            v34 -= 0x10000000;
          if ( v34 != v35 )
          {
LABEL_120:
            v62.x = v26;
            v62.y = v10[2];
            v64 = v10[2];
            v63 = v35;
            if ( !(unsigned int)EPATHOBJ::bPolyLineTo(a2, a3, &v62, 2) )
              return 0LL;
          }
          v36 = *v13;
          v10 = v13;
          v11 = v28;
          v13[v28 + 3] += 0x10000000;
          v13 = (_DWORD *)((char *)v13 + (unsigned int)(4 * v36 + 16));
          v14 = *v13;
          if ( !*v13 )
          {
            v15 = 1;
            goto LABEL_11;
          }
        }
        --v28;
        if ( !v11 )
          goto LABEL_40;
        v54 = v13[v28 + 3];
        if ( v54 > 0x7FFFFFF )
          v54 -= 0x10000000;
        v55 = v10[v11 + 2];
        if ( v55 > 0x7FFFFFF )
          v55 -= 0x10000000;
        if ( v54 >= v55 )
          goto LABEL_40;
        v15 = -1;
LABEL_11:
        v16 = v10[v11 + 3];
        if ( v16 > 0x7FFFFFF )
          v16 -= 0x10000000;
        v62.x = v16;
        v17 = v15 + v11;
        v62.y = v10[2];
        v64 = v10[2];
        v18 = v10[v15 + 3 + v11];
        if ( v18 > 0x7FFFFFF )
          v18 -= 0x10000000;
        v19 = a3;
        v63 = v18;
        if ( !(unsigned int)EPATHOBJ::bPolyLineTo(a2, a3, &v62, 2) )
          return 0LL;
        v20 = *(v10 - 1);
        v10[v17 + 3] += 0x10000000;
        v21 = -1;
        v22 = (_DWORD *)((char *)v10 - (unsigned int)(4 * v20 + 16));
        v23 = *v22;
        if ( !*v22 )
          goto LABEL_17;
        while ( 2 )
        {
          v37 = v10[v17 + 3];
          v38 = v37;
          if ( v37 > 0x7FFFFFF )
            v38 = v37 - 0x10000000;
          v39 = v23 - v12 - 1;
          v40 = v12;
          v41 = v22[v39 + 3];
          if ( v41 > 0x7FFFFFF )
            v41 -= 0x10000000;
          if ( v41 >= v38 )
          {
            v42 = v22[v12 + 3];
            if ( v42 > 0x7FFFFFF )
              v42 -= 0x10000000;
            if ( v42 >= v38 )
              goto LABEL_73;
            v43 = (unsigned int)(v39 + v12) >> 1;
            if ( (_DWORD)v43 != (_DWORD)v12 )
            {
              do
              {
                v48 = v22[v43 + 3];
                if ( v48 > 0x7FFFFFF )
                  v48 -= 0x10000000;
                v49 = v43;
                if ( v48 < v38 )
                {
                  v49 = v39;
                  v40 = v43;
                }
                v39 = v49;
                v43 = (unsigned int)(v49 + v40) >> 1;
              }
              while ( (_DWORD)v43 != v40 );
            }
            v39 = v40;
          }
          if ( (v39 & 1) != (_DWORD)v12 )
          {
            v52 = v22[v39 + 3];
            if ( v52 > 0x7FFFFFF )
              v52 -= 0x10000000;
            v53 = v10[v17 + 2];
            if ( v53 > 0x7FFFFFF )
              v53 -= 0x10000000;
            if ( v52 <= v53 )
              goto LABEL_73;
LABEL_63:
            v44 = v22[v39 + 3];
            v45 = v44;
            if ( v44 > 0x7FFFFFF )
              v45 = v44 - 0x10000000;
            if ( v38 != v45 )
              goto LABEL_121;
            if ( v37 > 0x7FFFFFF )
              v37 -= 0x10000000;
            if ( v37 != v45 )
              goto LABEL_121;
            if ( v44 > 0x7FFFFFF )
              v44 -= 0x10000000;
            if ( v44 != v45 )
            {
LABEL_121:
              v62.x = v38;
              v62.y = v10[1];
              v64 = v10[1];
              v63 = v45;
              if ( !(unsigned int)EPATHOBJ::bPolyLineTo(a2, a3, &v62, 2) )
                return 0LL;
            }
            v10 = v22;
            v17 = v39;
            v46 = v22 - 1;
            v47 = *v46;
            v10[v39 + 3] += 0x10000000;
            v22 = (int *)((char *)v46 - (unsigned int)(4 * v47 + 16) + 4);
            v23 = *v22;
            if ( !*v22 )
            {
LABEL_73:
              v21 = -1;
              goto LABEL_74;
            }
            continue;
          }
          break;
        }
        ++v39;
        if ( v17 >= (unsigned int)(*v10 - 1) )
          goto LABEL_63;
        v56 = v22[v39 + 3];
        if ( v56 > 0x7FFFFFF )
          v56 -= 0x10000000;
        v57 = v10[v17 + 4];
        if ( v57 > 0x7FFFFFF )
          v57 -= 0x10000000;
        if ( v56 <= v57 )
          goto LABEL_63;
        v21 = 1;
LABEL_74:
        v19 = a3;
LABEL_17:
        if ( v5 != v10 || v67 != v17 - 1 )
        {
          v58 = v10[v17 + 3];
          if ( v58 > 0x7FFFFFF )
            v58 -= 0x10000000;
          v62.x = v58;
          v11 = v21 + v17;
          v62.y = v10[1];
          v64 = v10[1];
          v59 = v10[v21 + 3 + v17];
          if ( v59 > 0x7FFFFFF )
            v59 -= 0x10000000;
          v63 = v59;
          if ( (unsigned int)EPATHOBJ::bPolyLineTo(a2, a3, &v62, 2) )
          {
            v13 = (_DWORD *)((char *)v10 + (unsigned int)(4 * *v10 + 16));
            v10[v11 + 3] += 0x10000000;
            continue;
          }
          return 0LL;
        }
        break;
      }
      v24 = v10[v17 + 3];
      if ( v24 > 0x7FFFFFF )
        v24 -= 0x10000000;
      v4 = a2;
      v62.x = v24;
      v62.y = v10[1];
      if ( !(unsigned int)EPATHOBJ::bPolyLineTo(a2, v19, &v62, 1) || !(unsigned int)EPATHOBJ::bCloseFigure(a2) )
        return 0LL;
      v7 = v67;
      v3 = a3;
LABEL_7:
      ++v7;
    }
  }
  return 1LL;
}
