void __fastcall vPlgWriteAND(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  XCLIPOBJ *v5; // rdi
  struct _PLGRUN *v6; // rbp
  struct _PLGRUN *v7; // rbx
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r12
  __int64 v10; // rcx
  int v11; // edi
  int v12; // eax
  int v13; // r14d
  __int64 j; // r10
  int v15; // r11d
  int v16; // r9d
  char *v17; // rcx
  unsigned __int8 v18; // r8
  char v19; // dl
  unsigned __int8 v20; // al
  __int64 v21; // rcx
  int v22; // eax
  LONG v23; // r14d
  int v24; // edx
  __int64 v25; // r8
  bool i; // zf
  int v27; // edi
  int v28; // ecx
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  char *v31; // rbx
  unsigned __int8 v32; // r12
  char v33; // si
  char v34; // bp
  unsigned __int8 v35; // al
  bool v36; // cc
  int v37; // [rsp+30h] [rbp-78h]
  int v38; // [rsp+34h] [rbp-74h]
  int v39; // [rsp+3Ch] [rbp-6Ch]
  unsigned __int64 v40; // [rsp+40h] [rbp-68h]
  __int64 v41; // [rsp+48h] [rbp-60h]
  struct _PLGRUN *v42; // [rsp+50h] [rbp-58h]
  struct _RECTL si128; // [rsp+58h] [rbp-50h] BYREF

  if ( a2 )
  {
    v5 = (XCLIPOBJ *)a4;
    v6 = a2;
    v7 = a1;
    v8 = *((_QWORD *)a3 + 9);
    v9 = *((unsigned int *)a3 + 16) + v8 - 1;
    v40 = v9;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      if ( v7 < v6 )
      {
        LODWORD(v21) = *((_DWORD *)a3 + 22);
        do
        {
          v22 = *(_DWORD *)v7;
          v23 = *((_DWORD *)v7 + 1);
          v24 = *((_DWORD *)v7 + 2);
          v7 = (struct _PLGRUN *)((char *)v7 + 12);
          v39 = v22;
          v25 = *((_QWORD *)a3 + 10) + v23 * (int)v21;
          for ( i = v24 == 0; ; i = v24 == 0 )
          {
            v41 = v25;
            v37 = v24;
            if ( i )
              break;
            v42 = (struct _PLGRUN *)((char *)v7 + 8);
            if ( (struct _PLGRUN *)((char *)v7 + 8) > v6 )
              break;
            if ( v23 < si128.top || v23 >= si128.bottom )
            {
              XCLIPOBJ::vFindScan(v5, &si128, v23);
              v25 = v41;
              v24 = v37;
            }
            if ( v23 >= si128.top && v23 < si128.bottom )
            {
              v27 = *(_DWORD *)v7;
              v28 = *((_DWORD *)v7 + 1);
              v29 = v40;
              v30 = *(_DWORD *)v7 & 7;
              v38 = v28;
              v31 = (char *)(v25 + ((__int64)*(int *)v7 >> 3));
              v32 = *((_BYTE *)&dword_1C032B8B0 + v30);
              if ( v27 < 0 || v27 >= *((_DWORD *)a3 + 14) || (unsigned __int64)v31 < v8 || (unsigned __int64)v31 > v40 )
              {
                v34 = 0;
                v33 = 0;
              }
              else
              {
                v33 = *v31;
                v34 = 1;
              }
              if ( v28 >= 0 )
              {
                do
                {
                  if ( (unsigned __int64)v31 < v8 || (unsigned __int64)v31 > v29 )
                    break;
                  if ( v27 < si128.left || v27 >= si128.right )
                  {
                    XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v27);
                    v29 = v40;
                    v28 = v38;
                  }
                  if ( v27 >= si128.left && v27 < si128.right )
                  {
                    v35 = v32;
                    if ( v39 )
                      v35 = 0;
                    v33 &= ~v35;
                  }
                  --v28;
                  ++v27;
                  v32 >>= 1;
                  v38 = v28;
                  if ( !v32 )
                  {
                    if ( v34 )
                      *v31 = v33;
                    ++v31;
                    v32 = *((_BYTE *)&dword_1C032B8B0 + (v27 & 7));
                    if ( v27 < 0
                      || v27 >= *((_DWORD *)a3 + 14)
                      || (unsigned __int64)v31 < v8
                      || (unsigned __int64)v31 > v29 )
                    {
                      v34 = 0;
                      v33 = 0;
                    }
                    else
                    {
                      v33 = *v31;
                      v34 = 1;
                    }
                  }
                }
                while ( v28 >= 0 );
                v25 = v41;
              }
              if ( v34 && (unsigned __int64)v31 >= v8 )
              {
                v6 = a2;
                v36 = (unsigned __int64)v31 <= v29;
                v24 = v37;
                v5 = (XCLIPOBJ *)a4;
                if ( v36 )
                  *v31 = v33;
              }
              else
              {
                v24 = v37;
                v5 = (XCLIPOBJ *)a4;
                v6 = a2;
              }
            }
            v21 = *((int *)a3 + 22);
            ++v23;
            v7 = v42;
            v25 += v21;
            --v24;
          }
        }
        while ( v7 < v6 );
      }
    }
    else if ( a1 < a2 )
    {
      LODWORD(v10) = *((_DWORD *)a3 + 22);
      do
      {
        v11 = *((_DWORD *)v7 + 2);
        v12 = *((_DWORD *)v7 + 1) * v10;
        v13 = *(_DWORD *)v7;
        v7 = (struct _PLGRUN *)((char *)v7 + 12);
        for ( j = *((_QWORD *)a3 + 10) + v12; v11; --v11 )
        {
          if ( (struct _PLGRUN *)((char *)v7 + 8) > v6 )
            break;
          v15 = *(_DWORD *)v7;
          v16 = *((_DWORD *)v7 + 1);
          v17 = (char *)(j + ((__int64)*(int *)v7 >> 3));
          v18 = *((_BYTE *)&dword_1C032B8B0 + (*(_DWORD *)v7 & 7));
          if ( (unsigned __int64)v17 < v8 || (unsigned __int64)v17 > v9 )
            v19 = 0;
          else
            v19 = *v17;
          if ( v16 < 0 )
          {
LABEL_23:
            if ( (unsigned __int64)v17 >= v8 && (unsigned __int64)v17 <= v9 )
              *v17 = v19;
          }
          else
          {
            while ( (unsigned __int64)v17 >= v8 && (unsigned __int64)v17 <= v9 )
            {
              v20 = v18;
              if ( v13 )
                v20 = 0;
              --v16;
              LOBYTE(v15) = v15 + 1;
              v19 &= ~v20;
              v18 >>= 1;
              if ( !v18 )
              {
                *v17++ = v19;
                if ( (unsigned __int64)v17 < v8 || (unsigned __int64)v17 > v9 )
                  v19 = 0;
                else
                  v19 = *v17;
                v18 = *((_BYTE *)&dword_1C032B8B0 + (v15 & 7));
              }
              if ( v16 < 0 )
                goto LABEL_23;
            }
          }
          v10 = *((int *)a3 + 22);
          j += v10;
          v7 = (struct _PLGRUN *)((char *)v7 + 8);
        }
      }
      while ( v7 < v6 );
    }
  }
}
