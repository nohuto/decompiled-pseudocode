/*
 * XREFs of VidSchQueryDmaHeader @ 0x1C010A2F0
 * Callers:
 *     VidSchCollectDbgInfo @ 0x1C0109A80 (VidSchCollectDbgInfo.c)
 * Callees:
 *     VidSchiBlockDriverCallback @ 0x1C010A3BC (VidSchiBlockDriverCallback.c)
 */

__int64 __fastcall VidSchQueryDmaHeader(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v6; // ebx
  unsigned int v9; // r10d
  unsigned int v10; // edx
  int *i; // r8
  int v12; // eax
  __int64 v14; // rcx
  unsigned int v15; // [rsp+44h] [rbp+1Ch]

  v15 = HIDWORD(a3);
  v6 = a3;
  VidSchiBlockDriverCallback(a1);
  v9 = *(_DWORD *)(a1 + 2620);
  v10 = 0;
  if ( !v9 )
    return 3221225485LL;
  for ( i = (int *)(a2 + 11384); ; i += 56 )
  {
    v12 = *i;
    if ( a4 )
      break;
    if ( v12 != 3 )
      goto LABEL_7;
LABEL_8:
    if ( ++v10 >= v9 )
      return 3221225485LL;
  }
  if ( v12 != 3 )
    goto LABEL_8;
LABEL_7:
  if ( *((_QWORD *)i + 2) != __PAIR64__(v15, v6) )
    goto LABEL_8;
  v14 = 224LL * v10;
  *(_OWORD *)a5 = *(_OWORD *)(v14 + a2 + 11368);
  *(_OWORD *)(a5 + 16) = *(_OWORD *)(v14 + a2 + 11384);
  *(_QWORD *)(a5 + 32) = *(_QWORD *)(v14 + a2 + 11400);
  return 0LL;
}
