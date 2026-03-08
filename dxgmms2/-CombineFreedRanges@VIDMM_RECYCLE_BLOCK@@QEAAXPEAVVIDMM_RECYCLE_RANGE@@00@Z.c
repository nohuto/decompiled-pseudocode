/*
 * XREFs of ?CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z @ 0x1C00F5B60
 * Callers:
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0096940 (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 * Callees:
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0097470 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0099D0C (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C009AA38 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C009AF28 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00B3404 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00F5734 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00F6618 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

void __fastcall VIDMM_RECYCLE_BLOCK::CombineFreedRanges(
        VIDMM_RECYCLE_BLOCK *this,
        struct VIDMM_RECYCLE_RANGE *a2,
        struct VIDMM_RECYCLE_RANGE *a3,
        struct VIDMM_RECYCLE_RANGE *a4)
{
  _QWORD *v7; // rax
  struct VIDMM_RECYCLE_MULTIRANGE *v8; // rsi
  struct VIDMM_RECYCLE_RANGE *i; // rbp
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // r15
  _QWORD *v14; // r12
  __int64 v15; // r13
  _QWORD *v16; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v17; // rbp
  struct VIDMM_RECYCLE_RANGE *NextRange; // rax
  __int64 v19; // r8
  struct VIDMM_RECYCLE_MULTIRANGE *v20; // rdx
  struct VIDMM_RECYCLE_RANGE *v21; // r15

  if ( g_IsInternalReleaseOrDbg )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v7[3] = a2;
    v7[4] = a4;
    v7[5] = a3;
    v7[6] = *((_QWORD *)a2 + 9);
  }
  v8 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)a4 + 17);
  for ( i = a2; ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    v10 = *(_QWORD *)(*((_QWORD *)i + 9) + 32LL);
    if ( *((_DWORD *)i + 22) == 2 )
    {
      VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(v10, 2LL, i);
    }
    else
    {
      VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(v10, 2, *((_QWORD *)i + 17));
      if ( !v8 )
        v8 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)i + 17);
    }
    if ( i == a3 )
      break;
  }
  v12 = *((_QWORD *)a2 + 4);
  v13 = *((_QWORD *)a3 + 5);
  v14 = (_QWORD *)*((_QWORD *)a2 + 16);
  v15 = *((_QWORD *)a3 + 15);
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v11) + 24) = v8;
  *((_QWORD *)a4 + 4) = v12;
  *((_QWORD *)a4 + 5) = v13;
  if ( v8 )
  {
    *((_QWORD *)v8 + 4) = v12;
    *((_QWORD *)v8 + 5) = v13;
    *((_QWORD *)v8 + 8) = a4;
    *((_QWORD *)v8 + 9) = a4;
    *((_QWORD *)a4 + 17) = v8;
  }
  v16 = *(_QWORD **)(*((_QWORD *)a4 + 9) + 32LL);
  if ( v8 )
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(v16, 2, (__int64)v8);
  else
    VIDMM_RECYCLE_HEAP::AddRangeToTree(v16, 2, (__int64)a4);
  v17 = *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)a2 + 9) + 32LL) + 8LL);
  while ( 1 )
  {
    NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(a2);
    v20 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)a2 + 17);
    v21 = NextRange;
    if ( v20 && v20 != v8 )
      VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(v17, v20);
    if ( a2 != a4 )
      VIDMM_RECYCLE_HEAP_MGR::DestroyRange(v17, a2, v19);
    if ( a2 == a3 )
      break;
    a2 = v21;
  }
  *((_QWORD *)a4 + 16) = v14;
  *v14 = (char *)a4 + 120;
  *((_QWORD *)a4 + 15) = v15;
  *(_QWORD *)(v15 + 8) = (char *)a4 + 120;
}
