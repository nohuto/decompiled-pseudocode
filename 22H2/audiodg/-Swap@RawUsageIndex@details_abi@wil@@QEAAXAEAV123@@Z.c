/*
 * XREFs of ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x1400278E0
 * Callers:
 *     ?RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z @ 0x140026CF8 (-RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z.c)
 * Callees:
 *     ??4?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x140021130 (--4-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x14003B100 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall wil::details_abi::RawUsageIndex::Swap(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::RawUsageIndex *a2)
{
  __int64 v4; // xmm0_8
  wil::details **v5; // rcx
  wil::details *v6; // rax
  __int128 v7; // xmm0
  void *v8; // rdx
  char v9; // cl
  char v10; // al
  char v11; // cl
  __int128 v12; // [rsp+20h] [rbp-38h]
  wil::details *v13; // [rsp+48h] [rbp-10h] BYREF
  __int64 v14; // [rsp+60h] [rbp+8h]

  v12 = *(_OWORD *)((char *)this + 24);
  v4 = *((_QWORD *)this + 5);
  v5 = (wil::details **)((char *)this + 48);
  v14 = v4;
  v6 = *v5;
  *v5 = 0LL;
  v7 = *(_OWORD *)((char *)a2 + 24);
  v13 = v6;
  *(_OWORD *)((char *)this + 24) = v7;
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 5);
  wistd::unique_ptr<void,wil::process_heap_deleter>::operator=(v5, (wil::details **)a2 + 6);
  *(_OWORD *)((char *)a2 + 24) = v12;
  *((_QWORD *)a2 + 5) = v14;
  wistd::unique_ptr<void,wil::process_heap_deleter>::operator=((wil::details **)a2 + 6, &v13);
  if ( v13 )
    wil::details::FreeProcessHeap(v13, v8);
  v9 = *((_BYTE *)this + 56);
  *((_BYTE *)this + 56) = *((_BYTE *)a2 + 56);
  v10 = *((_BYTE *)a2 + 57);
  *((_BYTE *)a2 + 56) = v9;
  v11 = *((_BYTE *)this + 57);
  *((_BYTE *)this + 57) = v10;
  *((_BYTE *)a2 + 57) = v11;
}
