/*
 * XREFs of ?vSrcTranCopyS8D32Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C00D5BC0
 * Callers:
 *     vSrcTranCopyS8D32 @ 0x1C00D5B00 (vSrcTranCopyS8D32.c)
 * Callees:
 *     ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z @ 0x1C00D60B4 (-pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

void __fastcall vSrcTranCopyS8D32Unsafe(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  __int64 v12; // rdi
  int v14; // esi
  const unsigned __int8 *v15; // r12
  unsigned int *v16; // r15
  unsigned int v17; // r14d
  unsigned int v18; // edi
  char *v19; // rdx
  const unsigned __int8 *v21; // r11
  unsigned int *v22; // rax
  unsigned int *v23; // rbx
  __int64 v24; // rcx
  unsigned int v25; // edi
  __int64 v26; // rsi
  int v27; // r9d
  unsigned int v28; // r10d
  int v29; // r9d
  unsigned int v30; // r10d
  int v31; // r9d
  char *v32; // [rsp+30h] [rbp-98h]
  _QWORD v33[15]; // [rsp+50h] [rbp-78h] BYREF
  int v35; // [rsp+F8h] [rbp+30h]

  v12 = a2;
  memset(v33, 0, 0x40uLL);
  v14 = a6 - a5;
  v35 = a6 - a5;
  v15 = &a1[v12];
  v16 = (unsigned int *)&a4[4 * a5];
  v17 = *v16;
  v18 = a9;
  v19 = (char *)pvFillOpaqTableCT(4u, a9, *v16, a11, (struct _BLENDINFO *)v33, 1);
  v32 = v19;
  while ( a8 )
  {
    v21 = v15;
    v22 = v16;
    v23 = &v16[v14];
    while ( v22 < v23 )
    {
      v24 = *v21;
      if ( (_BYTE)v24 )
      {
        if ( (_BYTE)v24 == 114 )
        {
          *v22 = v18;
        }
        else
        {
          v25 = *v22;
          v26 = 4 * v24;
          if ( *v22 == v17 )
          {
            *v22 = *(_DWORD *)&v19[v26];
          }
          else
          {
            v27 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v25 & v33[3]) << SLOBYTE(v33[0])) >> SBYTE4(v33[0]))
                                     + v33[6]);
            v28 = v33[3] & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v27
                                                                             + (((HIDWORD(v33[4]) - v27)
                                                                               * alAlpha[*((unsigned __int8 *)off_1C03260D0
                                                                                         + v26)]
                                                                               + 0x80000) >> 20))
                                                              + v33[7]) << SBYTE4(v33[0])) >> SLOBYTE(v33[0]));
            v29 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v25 & HIDWORD(v33[3])) << SLOBYTE(v33[1])) >> SBYTE4(v33[1]))
                                     + v33[6]);
            v30 = HIDWORD(v33[3]) & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v29
                                                                                      + (((LODWORD(v33[5]) - v29)
                                                                                        * alAlpha[*((unsigned __int8 *)off_1C03260D0
                                                                                                  + v26
                                                                                                  + 1)]
                                                                                        + 0x80000) >> 20))
                                                                       + v33[7]) << SBYTE4(v33[1])) >> SLOBYTE(v33[1])) | v28;
            v31 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v25 & v33[4]) << SLOBYTE(v33[2])) >> SBYTE4(v33[2]))
                                     + v33[6]);
            *v22 = v33[4] & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v31
                                                                              + (((HIDWORD(v33[5]) - v31)
                                                                                * alAlpha[*((unsigned __int8 *)off_1C03260D0
                                                                                          + v26
                                                                                          + 2)]
                                                                                + 0x80000) >> 20))
                                                               + v33[7]) << SBYTE4(v33[2])) >> SLOBYTE(v33[2])) | v30;
            v19 = v32;
          }
          v18 = a9;
        }
      }
      ++v22;
      ++v21;
    }
    --a8;
    v15 += a3;
    v16 = (unsigned int *)((char *)v16 + a7);
    v14 = v35;
  }
}
