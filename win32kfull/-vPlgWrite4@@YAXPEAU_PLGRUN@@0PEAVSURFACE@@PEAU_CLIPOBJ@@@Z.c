/*
 * XREFs of ?vPlgWrite4@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0303690
 * Callers:
 *     <none>
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00B5E70 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C00B5F94 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x1C0268008 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 */

void __fastcall vPlgWrite4(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  struct SURFACE *v8; // r14
  struct _PLGRUN *v9; // r15
  int v10; // edi
  int v11; // r11d
  int v12; // eax
  __int64 k; // r10
  struct _PLGRUN *v14; // rsi
  __int64 v15; // rax
  int v16; // ebx
  __int64 v17; // r8
  int v18; // eax
  _BYTE *v19; // r8
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // r15
  char v22; // r9
  char v23; // cl
  _BYTE *v24; // rax
  int v25; // eax
  int v26; // edi
  LONG v27; // r9d
  int v28; // r12d
  char v29; // di
  __int64 i; // r11
  struct _PLGRUN *v31; // rsi
  __int64 v32; // r10
  int v33; // ebx
  _BYTE *v34; // rdx
  unsigned __int64 v35; // r15
  char v36; // r8
  _BYTE *v37; // rax
  int v38; // eax
  int v39; // ecx
  LONG v40; // edi
  int v41; // edx
  int v42; // ecx
  int v43; // eax
  __int64 v44; // rcx
  bool j; // zf
  int v46; // edx
  LONG v47; // esi
  __int64 v48; // rbx
  _BYTE *v49; // rbx
  char v50; // r15
  unsigned __int64 v51; // rdi
  char v52; // r14
  _BYTE *v53; // rax
  int v54; // [rsp+30h] [rbp-50h]
  struct _RECTL rclBounds; // [rsp+38h] [rbp-48h] BYREF
  int v56; // [rsp+48h] [rbp-38h]
  LONG v57; // [rsp+4Ch] [rbp-34h]
  int v58; // [rsp+50h] [rbp-30h]
  unsigned __int64 v59; // [rsp+58h] [rbp-28h]
  unsigned __int64 v60; // [rsp+60h] [rbp-20h]
  __int64 v61; // [rsp+68h] [rbp-18h]
  struct _PLGRUN *v62; // [rsp+70h] [rbp-10h]

  if ( a2 )
  {
    v5 = *((_QWORD *)a3 + 9);
    v6 = v5 + *((unsigned int *)a3 + 16) - 1LL;
    v59 = v5;
    v60 = v6;
    v8 = a3;
    v9 = a2;
    if ( a4 )
    {
      j = a4->iDComplexity == 1;
      rclBounds = 0LL;
      if ( j )
      {
        rclBounds = a4->rclBounds;
        while ( a1 < v9 )
        {
          v25 = *(_DWORD *)a1;
          v26 = *(_DWORD *)a1;
          v27 = *((_DWORD *)a1 + 1);
          v28 = *((_DWORD *)a1 + 2);
          a1 = (struct _PLGRUN *)((char *)a1 + 12);
          v29 = v25 | (16 * v26);
          for ( i = *((_QWORD *)v8 + 10) + *((_DWORD *)v8 + 22) * v27; v28; --v28 )
          {
            v31 = (struct _PLGRUN *)((char *)a1 + 8);
            if ( (struct _PLGRUN *)((char *)a1 + 8) > v9 )
              break;
            if ( v27 >= rclBounds.top && v27 < rclBounds.bottom )
            {
              v32 = *(int *)a1;
              v33 = *((_DWORD *)a1 + 1);
              v34 = (_BYTE *)(i + (v32 >> 1));
              if ( v33 )
              {
                v35 = v60;
                v36 = (v32 & 1) != 0 ? 15 : -16;
                do
                {
                  if ( (unsigned __int64)v34 < v5 || (unsigned __int64)v34 > v35 )
                    break;
                  if ( (int)v32 >= rclBounds.left && (int)v32 < rclBounds.right )
                  {
                    *v34 = v36 & v29 | *v34 & ~v36;
                    v5 = v59;
                  }
                  LODWORD(v32) = v32 + 1;
                  v37 = v34 + 1;
                  v36 = ~v36;
                  if ( v36 != -16 )
                    v37 = v34;
                  v34 = v37;
                  --v33;
                }
                while ( v33 );
                v9 = a2;
              }
            }
            ++v27;
            i += *((int *)v8 + 22);
            a1 = v31;
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
        rclBounds = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
        while ( a1 < v9 )
        {
          v38 = *(_DWORD *)a1;
          v39 = *(_DWORD *)a1;
          v40 = *((_DWORD *)a1 + 1);
          v41 = *((_DWORD *)a1 + 2);
          a1 = (struct _PLGRUN *)((char *)a1 + 12);
          v42 = v38 | (16 * v39);
          v43 = *((_DWORD *)v8 + 22) * v40;
          v58 = v42;
          v44 = *((_QWORD *)v8 + 10) + v43;
          for ( j = v41 == 0; ; j = v41 == 0 )
          {
            v61 = v44;
            v54 = v41;
            v57 = v40;
            if ( j )
              break;
            v62 = (struct _PLGRUN *)((char *)a1 + 8);
            if ( (struct _PLGRUN *)((char *)a1 + 8) > v9 )
              break;
            if ( v40 < rclBounds.top || v40 >= rclBounds.bottom )
            {
              XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v40);
              v44 = v61;
              v41 = v54;
            }
            if ( v40 >= rclBounds.top && v40 < rclBounds.bottom )
            {
              v46 = *((_DWORD *)a1 + 1);
              v47 = *(_DWORD *)a1;
              v48 = *(int *)a1;
              v56 = v46;
              v49 = (_BYTE *)(v44 + (v48 >> 1));
              if ( v46 )
              {
                v50 = v58;
                v51 = v59;
                v52 = (v47 & 1) != 0 ? 15 : -16;
                do
                {
                  if ( (unsigned __int64)v49 < v51 || (unsigned __int64)v49 > v60 )
                    break;
                  if ( v47 < rclBounds.left || v47 >= rclBounds.right )
                  {
                    XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v47);
                    v46 = v56;
                  }
                  if ( v47 >= rclBounds.left && v47 < rclBounds.right )
                    *v49 = v52 & v50 | *v49 & ~v52;
                  --v46;
                  v53 = v49 + 1;
                  ++v47;
                  v56 = v46;
                  v52 = ~v52;
                  if ( v52 != -16 )
                    v53 = v49;
                  v49 = v53;
                }
                while ( v46 );
                v40 = v57;
                v9 = a2;
                v8 = a3;
                v44 = v61;
              }
              v41 = v54;
            }
            ++v40;
            a1 = v62;
            v44 += *((int *)v8 + 22);
            --v41;
          }
        }
      }
    }
    else
    {
      while ( a1 < v9 )
      {
        v10 = *((_DWORD *)a1 + 2);
        v11 = *(_DWORD *)a1 | (16 * *(_DWORD *)a1);
        v12 = *((_DWORD *)v8 + 22) * *((_DWORD *)a1 + 1);
        a1 = (struct _PLGRUN *)((char *)a1 + 12);
        for ( k = *((_QWORD *)v8 + 10) + v12; v10; --v10 )
        {
          v14 = (struct _PLGRUN *)((char *)a1 + 8);
          if ( (struct _PLGRUN *)((char *)a1 + 8) > v9 )
            break;
          v15 = *(int *)a1;
          v16 = *((_DWORD *)a1 + 1);
          v17 = v15 >> 1;
          v18 = v15 & 1;
          v19 = (_BYTE *)(k + v17);
          if ( v16 )
          {
            v20 = v59;
            v21 = v60;
            v22 = v18 != 0 ? 15 : -16;
            do
            {
              if ( (unsigned __int64)v19 < v20 || (unsigned __int64)v19 > v21 )
                break;
              v23 = v22 & v11 | ~v22 & *v19;
              v22 = ~v22;
              *v19 = v23;
              v24 = v19 + 1;
              if ( v22 != -16 )
                v24 = v19;
              v19 = v24;
              --v16;
            }
            while ( v16 );
            v9 = a2;
            v8 = a3;
          }
          a1 = v14;
          k += *((int *)v8 + 22);
        }
      }
    }
  }
}
