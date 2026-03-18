/*
 * XREFs of ?pvFillOpaqTable@@YAPEAXKKKPEAVSURFACE@@@Z @ 0x1C00E9190
 * Callers:
 *     ?vSrcOpaqCopyS4D32Unsave@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C00E8FCC (-vSrcOpaqCopyS4D32Unsave@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcOpaqCopyS4D16Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C0276604 (-vSrcOpaqCopyS4D16Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?vSrcOpaqCopyS4D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C02767C8 (-vSrcOpaqCopyS4D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 * Callees:
 *     <none>
 */

int *__fastcall pvFillOpaqTable(int a1, int a2, int a3, struct SURFACE *a4)
{
  __int64 v8; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r9d
  int v12; // ebp
  int v13; // r10d
  int v14; // ebx
  int v15; // r11d
  int v16; // r8d
  char v17; // al
  int v18; // r12d
  int v19; // r14d
  char v20; // al
  int v21; // r13d
  int v22; // ebx
  char v23; // al
  int v24; // r8d
  char v25; // dl
  int v26; // ebp
  unsigned int v27; // r14d
  int v28; // eax
  int v29; // ecx
  unsigned int v30; // ebx
  unsigned int v31; // ebp
  unsigned int *v32; // r8
  int *v33; // rdx
  _WORD *v34; // r8
  int v35; // [rsp+0h] [rbp-58h]
  char v36; // [rsp+4h] [rbp-54h]
  char v37; // [rsp+8h] [rbp-50h]
  char v38; // [rsp+Ch] [rbp-4Ch]
  char v39; // [rsp+10h] [rbp-48h]
  int v40; // [rsp+14h] [rbp-44h]
  int v42; // [rsp+78h] [rbp+20h]

  if ( *(_QWORD *)a4 != qword_1C03363A8 || a3 != dword_1C03363B0 || a2 != dword_1C03363B4 )
  {
    qword_1C03363A8 = *(_QWORD *)a4;
    v8 = *((_QWORD *)a4 + 16);
    dword_1C03363B4 = a2;
    dword_1C03363B0 = a3;
    if ( !v8 )
      v8 = *(_QWORD *)(*((_QWORD *)a4 + 6) + 1776LL);
    v9 = *(_DWORD *)(v8 + 24);
    if ( (v9 & 2) != 0 )
    {
      v33 = *(int **)(v8 + 112);
      v16 = v33[9] + v33[6] - 8;
      v14 = v33[10] + v33[7] - 8;
      v12 = v33[11] + v33[8] - 8;
      v11 = *v33;
      v13 = v33[1];
      v15 = v33[2];
    }
    else
    {
      v10 = 5;
      v11 = 31;
      if ( a1 != 2 )
      {
        v11 = 255;
        v10 = 8;
      }
      if ( (v9 & 4) != 0 )
      {
        v16 = v10 - 8;
        v13 = v11 << v10;
        v14 = v10 + v10 - 8;
        v12 = v10 + v14;
        v15 = v11 << v10 << v10;
      }
      else if ( (v9 & 8) != 0 )
      {
        v12 = v10 - 8;
        v13 = v11 << v10;
        v14 = v10 + v10 - 8;
        v15 = v11;
        v16 = v10 + v14;
        v11 = v11 << v10 << v10;
      }
      else
      {
        v11 = 0;
        v13 = 0;
        v15 = 0;
        v16 = 0;
        v14 = 0;
        v12 = 0;
      }
    }
    v17 = 0;
    if ( v16 >= 0 )
      v17 = v16;
    v18 = -v16;
    v37 = v17;
    if ( v16 >= 0 )
      LOBYTE(v18) = 0;
    v19 = byte_1C02E8BC0[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v11) << v18) >> v17)];
    v42 = byte_1C02E8BC0[(unsigned __int8)((unsigned __int64)((a2 & (unsigned int)v11) << v18) >> v17)] - v19;
    v20 = 0;
    if ( v14 >= 0 )
      v20 = v14;
    v21 = -v14;
    v38 = v20;
    if ( v14 >= 0 )
      LOBYTE(v21) = 0;
    v22 = byte_1C02E8BC0[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v13) << v21) >> v20)];
    v35 = byte_1C02E8BC0[(unsigned __int8)((unsigned __int64)((a2 & (unsigned int)v13) << v21) >> v20)] - v22;
    v23 = 0;
    if ( v12 >= 0 )
      v23 = v12;
    v24 = -v12;
    v25 = v23;
    v39 = v23;
    if ( v12 >= 0 )
      LOBYTE(v24) = 0;
    v36 = v24;
    v26 = byte_1C02E8BC0[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v15) << v24) >> v23)];
    v27 = v42 + 16 * v19;
    v28 = v35;
    v29 = byte_1C02E8BC0[(unsigned __int8)((unsigned __int64)((a2 & (unsigned int)v15) << v24) >> v25)] - v26;
    v30 = v35 + 16 * v22;
    v31 = v29 + 16 * v26;
    v40 = v29;
    if ( a1 == 2 )
    {
      LOWORD(dword_1C0337AC0) = a3;
      v34 = (_WORD *)&dword_1C0337AC0 + 1;
      do
      {
        v30 += v28;
        v31 += v29;
        v27 += v42;
        v29 = v40;
        *v34++ = v15 & ((unsigned int)(byte_1C02E8BC0[(unsigned __int8)((unsigned __int64)v31 >> 4) + 256] << v39) >> v36) | v11 & ((unsigned int)(byte_1C02E8BC0[(unsigned __int8)((unsigned __int64)v27 >> 4) + 256] << v37) >> v18) | v13 & ((unsigned int)(byte_1C02E8BC0[(unsigned __int8)((unsigned __int64)v30 >> 4) + 256] << v38) >> v21);
        v28 = v35;
      }
      while ( v34 < word_1C0337ADE );
      *v34 = a2;
    }
    else
    {
      dword_1C0337AC0 = a3;
      v32 = (unsigned int *)&unk_1C0337AC4;
      do
      {
        v30 += v28;
        v31 += v29;
        v27 += v42;
        v29 = v40;
        *v32++ = v15 & ((unsigned int)(byte_1C02E8BC0[(unsigned __int8)((unsigned __int64)v31 >> 4) + 256] << v39) >> v36) | v11 & ((unsigned int)(byte_1C02E8BC0[(unsigned __int8)((unsigned __int64)v27 >> 4) + 256] << v37) >> v18) | v13 & ((unsigned int)(byte_1C02E8BC0[(unsigned __int8)((unsigned __int64)v30 >> 4) + 256] << v38) >> v21);
        v28 = v35;
      }
      while ( v32 < &dword_1C0337AFC );
      *v32 = a2;
    }
  }
  return &dword_1C0337AC0;
}
