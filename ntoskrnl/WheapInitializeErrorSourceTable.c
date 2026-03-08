/*
 * XREFs of WheapInitializeErrorSourceTable @ 0x140B3E058
 * Callers:
 *     WheaInitialize @ 0x140B3E1A0 (WheaInitialize.c)
 * Callees:
 *     WheapAddErrorSource @ 0x14037D97C (WheapAddErrorSource.c)
 *     WheapInitializeErrorSource @ 0x14080C6B4 (WheapInitializeErrorSource.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WheapInitializeErrorSourceTable(unsigned int a1, unsigned int *a2)
{
  int v2; // esi
  __int64 Pool2; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned int *v8; // rdx
  __int64 v9; // rax
  __int128 v10; // xmm0
  void *v11; // rcx
  int v12; // ebp

  v2 = 0;
  if ( !a1 )
    return 0LL;
  while ( 1 )
  {
    if ( a2[2] > 0x12 )
      goto LABEL_9;
    Pool2 = ExAllocatePool2(64LL, 0x430uLL, 0x61656857u);
    v6 = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    v7 = Pool2 + 96;
    v8 = a2;
    v9 = 7LL;
    do
    {
      v10 = *(_OWORD *)v8;
      v8 += 32;
      *(_OWORD *)v7 = v10;
      v7 += 128LL;
      *(_OWORD *)(v7 - 112) = *((_OWORD *)v8 - 7);
      *(_OWORD *)(v7 - 96) = *((_OWORD *)v8 - 6);
      *(_OWORD *)(v7 - 80) = *((_OWORD *)v8 - 5);
      *(_OWORD *)(v7 - 64) = *((_OWORD *)v8 - 4);
      *(_OWORD *)(v7 - 48) = *((_OWORD *)v8 - 3);
      *(_OWORD *)(v7 - 32) = *((_OWORD *)v8 - 2);
      *(_OWORD *)(v7 - 16) = *((_OWORD *)v8 - 1);
      --v9;
    }
    while ( v9 );
    *(_OWORD *)v7 = *(_OWORD *)v8;
    *(_OWORD *)(v7 + 16) = *((_OWORD *)v8 + 1);
    *(_OWORD *)(v7 + 32) = *((_OWORD *)v8 + 2);
    *(_OWORD *)(v7 + 48) = *((_OWORD *)v8 + 3);
    *(_QWORD *)(v7 + 64) = *((_QWORD *)v8 + 8);
    *(_DWORD *)(v7 + 72) = v8[18];
    v11 = &unk_140D169F8;
    if ( *((_BYTE *)&unk_140D169F8 + 64 * (__int64)(int)a2[2]) )
    {
      v12 = WheapInitializeErrorSource(v6);
      if ( v12 < 0 )
      {
        ExFreePoolWithTag((PVOID)v6, 0x61656857u);
        return (unsigned int)v12;
      }
    }
    else
    {
      *(_DWORD *)(v6 + 40) = a2[2];
      *(_BYTE *)(v6 + 88) = 1;
    }
    WheapAddErrorSource((__int64)v11, v6);
    a2 = (unsigned int *)((char *)a2 + *a2);
LABEL_9:
    if ( ++v2 >= a1 )
      return 0LL;
  }
}
