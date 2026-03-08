/*
 * XREFs of ulBlendPixelCT @ 0x1C0273E48
 * Callers:
 *     ?vSrcTranCopyS8D16NewUnsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@P6AX011JPEAPEAG@Z1@Z @ 0x1C027719C (-vSrcTranCopyS8D16NewUnsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@P6AX011JPEAPEAG@Z1@Z.c)
 *     ?vSrcTranCopyS8D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C0277490 (-vSrcTranCopyS8D24Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ulBlendPixelCT(int *a1, unsigned int a2, unsigned __int8 *a3)
{
  unsigned int v3; // r11d
  __int64 v4; // rsi
  int v5; // r10d
  __int64 v8; // rbp
  unsigned __int64 v9; // rax
  char v10; // cl
  int v11; // r8d
  unsigned int v12; // ebx
  char v13; // cl
  int v14; // r8d
  unsigned int v15; // ebx
  int v16; // r8d

  v3 = a1[6];
  v4 = *((_QWORD *)a1 + 6);
  v5 = *a1;
  v8 = *((_QWORD *)a1 + 7);
  v9 = (a2 & v3) << *a1;
  v10 = a1[1];
  v11 = *(unsigned __int8 *)((unsigned __int8)(v9 >> v10) + v4);
  v12 = v3 & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v11
                                                               + ((dword_1C0319240[*a3] * (a1[9] - v11) + 0x80000) >> 20))
                                                + v8) << v10) >> v5);
  v13 = a1[3];
  v14 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((a2 & a1[7]) << a1[2]) >> v13) + v4);
  v15 = a1[7] & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v14
                                                                  + ((dword_1C0319240[a3[1]] * (a1[10] - v14) + 0x80000) >> 20))
                                                   + v8) << v13) >> a1[2]) | v12;
  v16 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((a2 & a1[8]) << a1[4]) >> a1[5]) + v4);
  return v15 | a1[8] & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v16
                                                                         + ((dword_1C0319240[a3[2]] * (a1[11] - v16)
                                                                           + 0x80000) >> 20))
                                                          + v8) << a1[5]) >> a1[4]);
}
