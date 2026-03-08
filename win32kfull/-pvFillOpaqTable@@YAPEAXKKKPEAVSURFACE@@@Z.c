/*
 * XREFs of ?pvFillOpaqTable@@YAPEAXKKKPEAVSURFACE@@@Z @ 0x1C0273934
 * Callers:
 *     ?vSrcOpaqCopyS4D16Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C0274520 (-vSrcOpaqCopyS4D16Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcOpaqCopyS4D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C02747C0 (-vSrcOpaqCopyS4D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcOpaqCopyS4D32Unsave@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C0274CD0 (-vSrcOpaqCopyS4D32Unsave@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall pvFillOpaqTable(__int64 a1, unsigned int a2, int a3, struct SURFACE *a4)
{
  unsigned int v6; // esi
  int v7; // r13d
  __int64 v8; // r11
  __int64 v9; // rax
  int v10; // edx
  int *v11; // rdx
  int v12; // r8d
  int v13; // edi
  int v14; // ebp
  int v15; // r9d
  int v16; // r10d
  int v17; // ebx
  int v18; // ecx
  char v19; // al
  int v20; // r12d
  int v21; // r15d
  char v22; // al
  int v23; // r8d
  char v24; // dl
  int v25; // r12d
  char v26; // al
  int v27; // edi
  int v28; // r8d
  int v29; // ebp
  unsigned int v30; // r12d
  int v31; // ecx
  int v32; // edx
  _WORD *v33; // rax
  unsigned int v34; // r15d
  unsigned int v35; // ebp
  _WORD *v36; // r8
  unsigned int *v37; // rdi
  char v39; // [rsp+20h] [rbp-68h]
  char v40; // [rsp+24h] [rbp-64h]
  char v41; // [rsp+28h] [rbp-60h]
  int v42; // [rsp+2Ch] [rbp-5Ch]
  char v43; // [rsp+30h] [rbp-58h]
  char v44; // [rsp+34h] [rbp-54h]
  char v45; // [rsp+38h] [rbp-50h]
  int v46; // [rsp+3Ch] [rbp-4Ch]
  int v48; // [rsp+A8h] [rbp+20h]

  v6 = a2;
  v7 = a1;
  v8 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  if ( *(_QWORD *)a4 != *(_QWORD *)(v8 + 8552) || a3 != *(_DWORD *)(v8 + 8564) || v6 != *(_DWORD *)(v8 + 8560) )
  {
    *(_DWORD *)(v8 + 8568) = v7;
    *(_DWORD *)(v8 + 8560) = v6;
    *(_DWORD *)(v8 + 8564) = a3;
    *(_QWORD *)(v8 + 8552) = *(_QWORD *)a4;
    v9 = *((_QWORD *)a4 + 16);
    if ( !v9 )
      v9 = *(_QWORD *)(*((_QWORD *)a4 + 6) + 1776LL);
    v10 = *(_DWORD *)(v9 + 24);
    if ( (v10 & 2) != 0 )
    {
      v11 = *(int **)(v9 + 112);
      v12 = v11[9] + v11[6] - 8;
      v13 = v11[10] + v11[7] - 8;
      v14 = v11[11] + v11[8] - 8;
      v15 = *v11;
      v16 = v11[1];
      v17 = v11[2];
    }
    else
    {
      v18 = 5;
      v15 = 31;
      if ( v7 != 2 )
      {
        v15 = 255;
        v18 = 8;
      }
      if ( (v10 & 4) != 0 )
      {
        v12 = v18 - 8;
        v16 = v15 << v18;
        v13 = v18 + v18 - 8;
        v14 = v18 + v13;
        v17 = v15 << v18 << v18;
      }
      else if ( (v10 & 8) != 0 )
      {
        v14 = v18 - 8;
        v16 = v15 << v18;
        v13 = v18 + v18 - 8;
        v17 = v15;
        v12 = v18 + v13;
        v15 = v15 << v18 << v18;
      }
      else
      {
        v15 = 0;
        v16 = 0;
        v17 = 0;
        v12 = 0;
        v13 = 0;
        v14 = 0;
      }
    }
    v19 = 0;
    if ( v12 >= 0 )
      v19 = v12;
    v20 = -v12;
    v45 = v19;
    if ( v12 >= 0 )
      LOBYTE(v20) = 0;
    v39 = v20;
    v21 = byte_1C0329BB0[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v15) << v20) >> v19)];
    v48 = byte_1C0329BB0[(unsigned __int8)((unsigned __int64)((v6 & v15) << v20) >> v19)] - v21;
    v22 = 0;
    if ( v13 >= 0 )
      v22 = v13;
    v23 = -v13;
    v24 = v22;
    v44 = v22;
    if ( v13 >= 0 )
      LOBYTE(v23) = 0;
    v40 = v23;
    v25 = byte_1C0329BB0[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v16) << v23) >> v22)];
    v26 = 0;
    v27 = byte_1C0329BB0[(unsigned __int8)((unsigned __int64)((v6 & v16) << v23) >> v24)] - v25;
    v42 = v27;
    if ( v14 >= 0 )
      v26 = v14;
    v28 = -v14;
    v43 = v26;
    if ( v14 >= 0 )
      LOBYTE(v28) = 0;
    v41 = v28;
    v29 = byte_1C0329BB0[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v17) << v28) >> v26)];
    v30 = v27 + 16 * v25;
    v31 = v48;
    v32 = byte_1C0329BB0[(unsigned __int8)((unsigned __int64)((v6 & v17) << v28) >> v26)] - v29;
    v33 = *(_WORD **)(v8 + 8576);
    v34 = v48 + 16 * v21;
    v35 = v32 + 16 * v29;
    v46 = v32;
    if ( v7 == 2 )
    {
      *v33 = a3;
      v36 = v33 + 1;
      if ( v33 + 1 < v33 + 15 )
      {
        do
        {
          v30 += v27;
          v34 += v31;
          v35 += v32;
          v31 = v48;
          *v36++ = v15 & ((unsigned int)(byte_1C0329BB0[(unsigned __int8)((unsigned __int64)v34 >> 4) + 256] << v45) >> v39) | v16 & ((unsigned int)(byte_1C0329BB0[(unsigned __int8)((unsigned __int64)v30 >> 4) + 256] << v44) >> v40) | v17 & ((unsigned int)(byte_1C0329BB0[(unsigned __int8)((unsigned __int64)v35 >> 4) + 256] << v43) >> v41);
          v32 = v46;
        }
        while ( v36 < v33 + 15 );
        LOWORD(v6) = a2;
      }
      *v36 = v6;
    }
    else
    {
      *(_DWORD *)v33 = a3;
      v37 = (unsigned int *)(v33 + 2);
      if ( v33 + 2 < v33 + 30 )
      {
        do
        {
          v30 += v42;
          v34 += v31;
          v35 += v32;
          v31 = v48;
          v32 = v46;
          *v37++ = v15 & ((unsigned int)(byte_1C0329BB0[(unsigned __int8)((unsigned __int64)v34 >> 4) + 256] << v45) >> v39) | v16 & ((unsigned int)(byte_1C0329BB0[(unsigned __int8)((unsigned __int64)v30 >> 4) + 256] << v44) >> v40) | v17 & ((unsigned int)(byte_1C0329BB0[(unsigned __int8)((unsigned __int64)v35 >> 4) + 256] << v43) >> v28);
        }
        while ( v37 < (unsigned int *)v33 + 15 );
        v6 = a2;
      }
      *v37 = v6;
    }
  }
  return *(void **)(v8 + 8576);
}
