/*
 * XREFs of ?vPlgWriteAND@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02D98C0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C00CEAA0 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x1C00CEB24 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00CEBA0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 */

void __fastcall vPlgWriteAND(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  unsigned __int64 v4; // r13
  struct _PLGRUN *v5; // rbx
  XCLIPOBJ *v6; // rdi
  struct _PLGRUN *v8; // r12
  unsigned __int64 v9; // r14
  int v10; // eax
  int v11; // edi
  int v12; // ebp
  __int64 j; // r8
  int v14; // r11d
  int v15; // r10d
  char *v16; // rcx
  unsigned __int8 v17; // r9
  char v18; // dl
  unsigned __int8 v19; // al
  int v20; // eax
  LONG v21; // esi
  int v22; // ecx
  __int64 v23; // r8
  bool i; // zf
  __int64 v25; // rdi
  int v26; // edx
  __int64 v27; // rax
  char *v28; // rbx
  unsigned __int8 v29; // cl
  char v30; // bp
  char v31; // r14
  unsigned __int64 v32; // rsi
  unsigned __int8 v33; // al
  unsigned __int8 v34; // [rsp+30h] [rbp-78h]
  int v35; // [rsp+34h] [rbp-74h]
  int v36; // [rsp+38h] [rbp-70h]
  LONG v37; // [rsp+3Ch] [rbp-6Ch]
  __int64 v38; // [rsp+40h] [rbp-68h]
  struct _RECTL si128; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v40; // [rsp+58h] [rbp-50h]
  int v41; // [rsp+60h] [rbp-48h]
  struct _PLGRUN *v42; // [rsp+68h] [rbp-40h]

  if ( a2 )
  {
    v4 = *((_QWORD *)a3 + 9);
    v5 = a1;
    v6 = (XCLIPOBJ *)a4;
    v8 = a2;
    v9 = *((unsigned int *)a3 + 16) + v4 - 1;
    v40 = v9;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      while ( v5 < v8 )
      {
        v20 = *(_DWORD *)v5;
        v21 = *((_DWORD *)v5 + 1);
        v22 = *((_DWORD *)v5 + 2);
        v5 = (struct _PLGRUN *)((char *)v5 + 12);
        v41 = v20;
        v23 = *((_QWORD *)a3 + 10) + v21 * *((_DWORD *)a3 + 22);
        for ( i = v22 == 0; ; i = v22 == 0 )
        {
          v38 = v23;
          v35 = v22;
          v37 = v21;
          if ( i )
            break;
          v42 = (struct _PLGRUN *)((char *)v5 + 8);
          if ( (struct _PLGRUN *)((char *)v5 + 8) > v8 )
            break;
          if ( v21 < si128.top || v21 >= si128.bottom )
          {
            XCLIPOBJ::vFindScan(v6, &si128, v21);
            v23 = v38;
            v22 = v35;
          }
          if ( v21 >= si128.top && v21 < si128.bottom )
          {
            v25 = *(int *)v5;
            v26 = *((_DWORD *)v5 + 1);
            v27 = *(_DWORD *)v5 & 7;
            v36 = v26;
            v28 = (char *)(v23 + (v25 >> 3));
            v29 = *((_BYTE *)&dword_1C02FB718 + v27);
            v34 = v29;
            if ( (int)v25 < 0
              || (int)v25 >= *((_DWORD *)a3 + 14)
              || (unsigned __int64)v28 < v4
              || (unsigned __int64)v28 > v9 )
            {
              v31 = 0;
              v30 = 0;
            }
            else
            {
              v30 = *v28;
              v31 = 1;
            }
            if ( v26 >= 0 )
            {
              v32 = v40;
              do
              {
                if ( (unsigned __int64)v28 < v4 || (unsigned __int64)v28 > v32 )
                  break;
                if ( (int)v25 < si128.left || (int)v25 >= si128.right )
                {
                  XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v25);
                  v26 = v36;
                  v29 = v34;
                }
                if ( (int)v25 >= si128.left && (int)v25 < si128.right )
                {
                  v33 = v29;
                  if ( v41 )
                    v33 = 0;
                  v30 &= ~v33;
                }
                --v26;
                LODWORD(v25) = v25 + 1;
                v29 >>= 1;
                v34 = v29;
                v36 = v26;
                if ( !v29 )
                {
                  if ( v31 )
                    *v28 = v30;
                  ++v28;
                  v29 = *((_BYTE *)&dword_1C02FB718 + (v25 & 7));
                  v34 = v29;
                  if ( (int)v25 < 0
                    || (int)v25 >= *((_DWORD *)a3 + 14)
                    || (unsigned __int64)v28 < v4
                    || (unsigned __int64)v28 > v32 )
                  {
                    v31 = 0;
                    v30 = 0;
                  }
                  else
                  {
                    v30 = *v28;
                    v31 = 1;
                  }
                }
              }
              while ( v26 >= 0 );
              v21 = v37;
              v8 = a2;
              v23 = v38;
            }
            i = v31 == 0;
            v9 = v40;
            if ( i || (unsigned __int64)v28 < v4 )
            {
              v22 = v35;
              v6 = (XCLIPOBJ *)a4;
            }
            else
            {
              v6 = (XCLIPOBJ *)a4;
              v22 = v35;
              if ( (unsigned __int64)v28 <= v40 )
                *v28 = v30;
            }
          }
          ++v21;
          v5 = v42;
          v23 += *((int *)a3 + 22);
          --v22;
        }
      }
    }
    else if ( a1 < a2 )
    {
      do
      {
        v10 = *((_DWORD *)a3 + 22) * *((_DWORD *)v5 + 1);
        v11 = *((_DWORD *)v5 + 2);
        v12 = *(_DWORD *)v5;
        v5 = (struct _PLGRUN *)((char *)v5 + 12);
        for ( j = *((_QWORD *)a3 + 10) + v10; v11; --v11 )
        {
          if ( (struct _PLGRUN *)((char *)v5 + 8) > v8 )
            break;
          v14 = *(_DWORD *)v5;
          v15 = *((_DWORD *)v5 + 1);
          v16 = (char *)(j + ((__int64)*(int *)v5 >> 3));
          v17 = *((_BYTE *)&dword_1C02FB718 + (*(_DWORD *)v5 & 7));
          if ( (unsigned __int64)v16 < v4 || (unsigned __int64)v16 > v9 )
            v18 = 0;
          else
            v18 = *v16;
          if ( v15 < 0 )
          {
LABEL_22:
            if ( (unsigned __int64)v16 >= v4 && (unsigned __int64)v16 <= v9 )
              *v16 = v18;
          }
          else
          {
            while ( (unsigned __int64)v16 >= v4 )
            {
              if ( (unsigned __int64)v16 <= v9 )
              {
                v19 = v17;
                if ( v12 )
                  v19 = 0;
                --v15;
                LOBYTE(v14) = v14 + 1;
                v18 &= ~v19;
                v17 >>= 1;
                if ( !v17 )
                {
                  *v16++ = v18;
                  if ( (unsigned __int64)v16 < v4 || (unsigned __int64)v16 > v9 )
                    v18 = 0;
                  else
                    v18 = *v16;
                  v17 = *((_BYTE *)&dword_1C02FB718 + (v14 & 7));
                }
                if ( v15 >= 0 )
                  continue;
              }
              goto LABEL_22;
            }
          }
          j += *((int *)a3 + 22);
          v5 = (struct _PLGRUN *)((char *)v5 + 8);
        }
      }
      while ( v5 < v8 );
    }
  }
}
