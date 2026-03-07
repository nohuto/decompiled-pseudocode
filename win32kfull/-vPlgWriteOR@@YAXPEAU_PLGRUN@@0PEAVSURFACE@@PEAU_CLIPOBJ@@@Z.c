void __fastcall vPlgWriteOR(struct _PLGRUN *a1, struct _PLGRUN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  unsigned __int64 v4; // r13
  XCLIPOBJ *v5; // rsi
  struct _PLGRUN *v7; // rdi
  struct _PLGRUN *v8; // rbx
  unsigned __int64 v9; // r12
  __int64 v10; // rcx
  int v11; // esi
  int v12; // eax
  int v13; // r14d
  __int64 j; // r11
  int v15; // edi
  int v16; // r10d
  char *v17; // rdx
  unsigned __int8 v18; // r9
  char v19; // r8
  __int64 v20; // rcx
  int v21; // eax
  LONG v22; // r14d
  int v23; // edx
  __int64 v24; // r9
  bool i; // zf
  int v26; // edi
  int v27; // edx
  unsigned __int64 v28; // r8
  __int64 v29; // rax
  char *v30; // rbx
  unsigned __int8 v31; // r12
  char v32; // si
  char v33; // bp
  int v34; // [rsp+30h] [rbp-78h]
  int v35; // [rsp+34h] [rbp-74h]
  int v36; // [rsp+3Ch] [rbp-6Ch]
  unsigned __int64 v37; // [rsp+40h] [rbp-68h]
  int v38[2]; // [rsp+48h] [rbp-60h]
  struct _PLGRUN *v39; // [rsp+50h] [rbp-58h]
  struct _RECTL si128; // [rsp+58h] [rbp-50h] BYREF

  if ( a2 )
  {
    v4 = *((_QWORD *)a3 + 9);
    v5 = (XCLIPOBJ *)a4;
    v7 = a2;
    v8 = a1;
    v9 = *((unsigned int *)a3 + 16) + v4 - 1;
    v37 = v9;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      if ( v8 < v7 )
      {
        LODWORD(v20) = *((_DWORD *)a3 + 22);
        do
        {
          v21 = *(_DWORD *)v8;
          v22 = *((_DWORD *)v8 + 1);
          v23 = *((_DWORD *)v8 + 2);
          v8 = (struct _PLGRUN *)((char *)v8 + 12);
          v36 = v21;
          v24 = *((_QWORD *)a3 + 10) + v22 * (int)v20;
          for ( i = v23 == 0; ; i = v23 == 0 )
          {
            *(_QWORD *)v38 = v24;
            v34 = v23;
            if ( i )
              break;
            v39 = (struct _PLGRUN *)((char *)v8 + 8);
            if ( (struct _PLGRUN *)((char *)v8 + 8) > v7 )
              break;
            if ( v22 < si128.top || v22 >= si128.bottom )
            {
              XCLIPOBJ::vFindScan(v5, &si128, v22);
              v24 = *(_QWORD *)v38;
              v23 = v34;
            }
            if ( v22 >= si128.top && v22 < si128.bottom )
            {
              v26 = *(_DWORD *)v8;
              v27 = *((_DWORD *)v8 + 1);
              v28 = v37;
              v29 = *(_DWORD *)v8 & 7;
              v35 = v27;
              v30 = (char *)(v24 + ((__int64)*(int *)v8 >> 3));
              v31 = *((_BYTE *)&dword_1C032B8B0 + v29);
              if ( v26 < 0 || v26 >= *((_DWORD *)a3 + 14) || (unsigned __int64)v30 < v4 || (unsigned __int64)v30 > v37 )
              {
                v33 = 0;
                v32 = 0;
              }
              else
              {
                v32 = *v30;
                v33 = 1;
              }
              if ( v27 >= 0 )
              {
                do
                {
                  if ( (unsigned __int64)v30 < v4 || (unsigned __int64)v30 > v28 )
                    break;
                  if ( v26 < si128.left || v26 >= si128.right )
                  {
                    XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v26);
                    v27 = v35;
                    v28 = v37;
                  }
                  if ( v26 >= si128.left && v26 < si128.right )
                    v32 |= v36 != 0 ? v31 : 0;
                  --v27;
                  ++v26;
                  v31 >>= 1;
                  v35 = v27;
                  if ( !v31 )
                  {
                    if ( v33 )
                      *v30 = v32;
                    ++v30;
                    v31 = *((_BYTE *)&dword_1C032B8B0 + (v26 & 7));
                    if ( v26 < 0
                      || v26 >= *((_DWORD *)a3 + 14)
                      || (unsigned __int64)v30 < v4
                      || (unsigned __int64)v30 > v28 )
                    {
                      v33 = 0;
                      v32 = 0;
                    }
                    else
                    {
                      v32 = *v30;
                      v33 = 1;
                    }
                  }
                }
                while ( v27 >= 0 );
                v24 = *(_QWORD *)v38;
              }
              if ( v33 && (unsigned __int64)v30 >= v4 )
              {
                v7 = a2;
                v23 = v34;
                if ( (unsigned __int64)v30 <= v28 )
                  *v30 = v32;
              }
              else
              {
                v23 = v34;
                v7 = a2;
              }
              v5 = (XCLIPOBJ *)a4;
            }
            v20 = *((int *)a3 + 22);
            ++v22;
            v8 = v39;
            v24 += v20;
            --v23;
          }
        }
        while ( v8 < v7 );
      }
    }
    else if ( a1 < a2 )
    {
      LODWORD(v10) = *((_DWORD *)a3 + 22);
      do
      {
        v11 = *((_DWORD *)v8 + 2);
        v12 = *((_DWORD *)v8 + 1) * v10;
        v13 = *(_DWORD *)v8;
        v8 = (struct _PLGRUN *)((char *)v8 + 12);
        for ( j = *((_QWORD *)a3 + 10) + v12; v11; --v11 )
        {
          if ( (struct _PLGRUN *)((char *)v8 + 8) > v7 )
            break;
          v15 = *(_DWORD *)v8;
          v16 = *((_DWORD *)v8 + 1);
          v17 = (char *)(j + ((__int64)*(int *)v8 >> 3));
          v18 = *((_BYTE *)&dword_1C032B8B0 + (*(_DWORD *)v8 & 7));
          if ( (unsigned __int64)v17 < v4 || (unsigned __int64)v17 > v9 )
            v19 = 0;
          else
            v19 = *v17;
          if ( v16 < 0 )
          {
LABEL_21:
            if ( (unsigned __int64)v17 >= v4 && (unsigned __int64)v17 <= v9 )
              *v17 = v19;
          }
          else
          {
            while ( (unsigned __int64)v17 >= v4 && (unsigned __int64)v17 <= v9 )
            {
              --v16;
              LOBYTE(v15) = v15 + 1;
              v19 |= v13 != 0 ? v18 : 0;
              v18 >>= 1;
              if ( !v18 )
              {
                *v17++ = v19;
                if ( (unsigned __int64)v17 < v4 || (unsigned __int64)v17 > v9 )
                  v19 = 0;
                else
                  v19 = *v17;
                v18 = *((_BYTE *)&dword_1C032B8B0 + (v15 & 7));
              }
              if ( v16 < 0 )
                goto LABEL_21;
            }
          }
          v10 = *((int *)a3 + 22);
          v7 = a2;
          j += v10;
          v8 = (struct _PLGRUN *)((char *)v8 + 8);
        }
      }
      while ( v8 < v7 );
    }
  }
}
