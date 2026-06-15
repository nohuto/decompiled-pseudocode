/*
 * XREFs of sub_18001F490 @ 0x18001F490
 * Callers:
 *     ??$_Parse_fp_with_locale@$0A@@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@CA?AU_Num_get_parse_result@1@QEADHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@1@1AEBVlocale@1@@Z @ 0x1800121B0 (--$_Parse_fp_with_locale@$0A@@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@.c)
 *     sub_18001E300 @ 0x18001E300 (sub_18001E300.c)
 *     sub_180035A80 @ 0x180035A80 (sub_180035A80.c)
 *     sub_180048E60 @ 0x180048E60 (sub_180048E60.c)
 *     sub_180049150 @ 0x180049150 (sub_180049150.c)
 *     sub_18004BCD0 @ 0x18004BCD0 (sub_18004BCD0.c)
 *     sub_1800D5E18 @ 0x1800D5E18 (sub_1800D5E18.c)
 *     sub_1800D76E0 @ 0x1800D76E0 (sub_1800D76E0.c)
 *     sub_1800DE2A0 @ 0x1800DE2A0 (sub_1800DE2A0.c)
 *     sub_1801197D0 @ 0x1801197D0 (sub_1801197D0.c)
 *     sub_18012E990 @ 0x18012E990 (sub_18012E990.c)
 *     sub_18012EFF0 @ 0x18012EFF0 (sub_18012EFF0.c)
 *     sub_180131274 @ 0x180131274 (sub_180131274.c)
 * Callees:
 *     sub_180020498 @ 0x180020498 (sub_180020498.c)
 *     sub_18004701C @ 0x18004701C (sub_18004701C.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180132630 @ 0x180132630 (sub_180132630.c)
 */

__int64 __fastcall sub_18001F490(unsigned __int16 *Src, unsigned int a2, __int64 *a3, float a4, int a5)
{
  HANDLE ProcessHeap; // rax
  LPVOID v9; // rax
  __int64 v10; // rsi
  __int16 v11; // r11
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int16 v14; // ax
  int v15; // ecx
  int v16; // r8d
  int v17; // edx
  int v18; // r9d
  unsigned int v19; // ecx
  unsigned int v20; // r9d
  unsigned int v21; // eax
  void *v22; // rbx
  HANDLE v23; // rax
  SIZE_T v24; // rbx
  HANDLE v25; // rax
  void *v26; // rax
  __int16 *v27; // rcx
  __int16 v28; // dx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // ebx

  if ( a3 )
  {
    *a3 = 0LL;
    ProcessHeap = GetProcessHeap();
    v9 = HeapAlloc(ProcessHeap, 0, 0x20uLL);
    if ( v9 )
    {
      v10 = sub_180020498(v9);
      if ( v10 )
      {
        if ( !Src )
        {
LABEL_42:
          *(float *)(v10 + 24) = a4;
          v31 = 0;
          *a3 = 0LL;
          *a3 = v10;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 8LL))(v10, 0x4798B71F4E997F73LL);
          return v31;
        }
        if ( a5 )
        {
LABEL_25:
          v21 = Src[8];
          if ( v21 + 18 < v21 )
          {
            v31 = -2147024362;
          }
          else
          {
            if ( v21 + 18 <= a2 )
            {
              v22 = *(void **)(v10 + 16);
              v23 = GetProcessHeap();
              HeapFree(v23, 0, v22);
              *(_QWORD *)(v10 + 16) = 0LL;
              v24 = 18LL;
              if ( *Src != 1 )
                v24 = Src[8] + 18LL;
              v25 = GetProcessHeap();
              v26 = HeapAlloc(v25, 0, v24);
              *(_QWORD *)(v10 + 16) = v26;
              if ( v26 )
              {
                memcpy(v26, Src, v24);
                if ( *Src == 1 )
                  *(_WORD *)(*(_QWORD *)(v10 + 16) + 16LL) = 0;
                v27 = *(__int16 **)(v10 + 16);
                v28 = *v27;
                if ( *v27 )
                {
                  if ( ((v28 - 1) & 0xFFFD) == 0 )
                    goto LABEL_41;
                  if ( v28 != -2 )
                    goto LABEL_46;
                  v29 = 0x10000000000001LL - *((_QWORD *)v27 + 3);
                  if ( *((_QWORD *)v27 + 3) == 0x10000000000001LL )
                    v29 = 0x719B3800AA000080LL - *((_QWORD *)v27 + 4);
                  if ( !v29 )
                    goto LABEL_41;
                  v30 = 0x10000000000003LL - *((_QWORD *)v27 + 3);
                  if ( *((_QWORD *)v27 + 3) == 0x10000000000003LL )
                    v30 = 0x719B3800AA000080LL - *((_QWORD *)v27 + 4);
                  if ( v30 )
LABEL_46:
                    *(_DWORD *)(v10 + 12) = 1;
                  else
LABEL_41:
                    *(_DWORD *)(v10 + 12) = 0;
                }
                goto LABEL_42;
              }
              goto LABEL_55;
            }
            v31 = -2147024809;
          }
LABEL_56:
          if ( v10 )
            sub_180132630(v10, 1LL);
          *a3 = 0LL;
          return v31;
        }
        v11 = *Src;
        if ( *Src == 0xFFFE )
        {
          if ( Src[8] < 0x16u )
            goto LABEL_49;
          v12 = 0x80001000000000LL - *(_QWORD *)(Src + 13);
          if ( *(_QWORD *)(Src + 13) == 0x80001000000000LL )
          {
            v13 = *(unsigned int *)(Src + 17);
            v12 = 939567616 - v13;
            if ( v13 == 939567616 )
              v12 = 29083LL - Src[19];
          }
          if ( v12 )
LABEL_49:
            v14 = 0;
          else
            v14 = Src[12];
        }
        else
        {
          v14 = *Src;
        }
        if ( v14 == 1 )
        {
          v16 = sub_18004701C(Src);
        }
        else
        {
          if ( v14 != 3 )
          {
            v16 = 1;
LABEL_21:
            if ( v11 == -2 )
            {
              v16 = 0;
              if ( Src[8] >= 0x16u )
                v16 = Src[9] <= Src[7];
            }
            if ( v16 )
              goto LABEL_25;
LABEL_51:
            v31 = -2147024809;
            goto LABEL_56;
          }
          v15 = Src[1];
          v16 = 0;
          if ( (_WORD)v15 )
          {
            v17 = Src[7];
            if ( (((_WORD)v17 - 32) & 0xFFDF) == 0 )
            {
              v18 = Src[6];
              if ( v18 == v15 * v17 / 8 )
              {
                v19 = v18 * *((_DWORD *)Src + 1);
                v16 = 1;
                v20 = *((_DWORD *)Src + 2);
                if ( v20 > v19 / 0x14 + v19 || v20 < v19 - v19 / 0x14 )
                  v16 = 0;
              }
            }
          }
        }
        if ( !v16 )
          goto LABEL_51;
        goto LABEL_21;
      }
    }
    else
    {
      v10 = 0LL;
    }
LABEL_55:
    v31 = -2147024882;
    goto LABEL_56;
  }
  return 2147942487LL;
}
