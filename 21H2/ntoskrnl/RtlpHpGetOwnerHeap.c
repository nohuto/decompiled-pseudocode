/*
 * XREFs of RtlpHpGetOwnerHeap @ 0x140366CB0
 * Callers:
 *     ExGetHeapFromVA @ 0x140366C48 (ExGetHeapFromVA.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x14022FB20 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpQueryVA @ 0x140362864 (RtlpHpQueryVA.c)
 *     RtlpHpEnvGetHeapManager @ 0x140362B58 (RtlpHpEnvGetHeapManager.c)
 */

unsigned __int64 __fastcall RtlpHpGetOwnerHeap(__int64 a1, __int128 *a2)
{
  int v4; // eax
  _QWORD *HeapManager; // rax
  __int64 v6; // rax
  __int128 v8; // xmm0
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+44h] [rbp+Ch]
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  if ( (_WORD)a1 )
  {
    v4 = 0;
LABEL_5:
    v10 = 0x100000;
    v11 = 0x1000000;
    return (a1 & -(__int64)(unsigned int)*(&v10 + v4) ^ RtlpHpHeapGlobals ^ *(_QWORD *)((a1 & -(__int64)(unsigned int)*(&v10 + v4))
                                                                                      + 0x10) ^ 0xA2E64EADA2E64EADuLL)
         - 192LL * v4
         - 320;
  }
  v9 = *a2;
  HeapManager = RtlpHpEnvGetHeapManager(&v9);
  v6 = RtlCSparseBitmapBitmaskRead((__int64)(HeapManager + 2), 2 * ((unsigned __int64)(a1 - HeapManager[1]) >> 20));
  if ( v6 )
  {
    v4 = v6 - 1;
    if ( v4 != 2 )
      goto LABEL_5;
  }
  v8 = *a2;
  v12 = 0LL;
  v9 = v8;
  RtlpHpQueryVA(a1, &v9, &v12, &v10);
  return *(_QWORD *)v12;
}
