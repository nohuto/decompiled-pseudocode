/*
 * XREFs of ??$TakeItemFromCache@VCGroupDrawListEntry@@@CDrawListBatchManager@@CAJPEAV?$ShrinkableReferenceArray@PEAVCGroupDrawListEntry@@@@PEAPEAVCGroupDrawListEntry@@@Z @ 0x1800C5170
 * Callers:
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x180090104 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800522A0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18005A210 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8944 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CDrawListBatchManager::TakeItemFromCache<CGroupDrawListEntry>(__int64 a1, _QWORD *a2)
{
  int v2; // r8d
  unsigned int v3; // edi
  __int64 v6; // r8
  unsigned int v7; // ecx
  volatile signed __int32 *v9; // rax
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rbx
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // eax
  __int64 v15; // rcx
  volatile signed __int32 *v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0;
  if ( v2 )
    goto LABEL_2;
  v9 = (volatile signed __int32 *)DefaultHeap::Alloc(0x38uLL);
  v11 = v9;
  if ( v9 )
  {
    *(_OWORD *)v9 = 0LL;
    *((_OWORD *)v9 + 1) = 0LL;
    *((_OWORD *)v9 + 2) = 0LL;
    *((_QWORD *)v9 + 6) = 0LL;
    *((_DWORD *)v9 + 6) = 0;
    *((_QWORD *)v9 + 4) = 0LL;
    *((_DWORD *)v9 + 2) = 0;
    *(_QWORD *)v9 = &CGroupDrawListEntry::`vftable'{for `CMILRefCountBase'};
    *((_QWORD *)v9 + 2) = &CGroupDrawListEntry::`vftable'{for `CBaseDrawListEntry'};
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x16Cu, 0LL);
    return v3;
  }
  _InterlockedAdd(v11 + 2, 1u);
  v12 = *(_DWORD *)(a1 + 24);
  v16 = v11;
  v13 = v12 + 1;
  if ( v12 + 1 < v12 )
  {
    v3 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_14;
  }
  if ( v13 > *(_DWORD *)(a1 + 20) )
  {
    v14 = DynArrayImpl<0>::AddMultipleAndSet(a1, 8, 1, &v16);
    v3 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xC0u, 0LL);
LABEL_14:
    if ( (v3 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v3, 0x16Eu, 0LL);
      CDrawListEntry::Release((CDrawListEntry *)v11);
      return v3;
    }
    goto LABEL_12;
  }
  *(_QWORD *)(*(_QWORD *)a1 + 8LL * v12) = v11;
  *(_DWORD *)(a1 + 24) = v13;
LABEL_12:
  v2 = *(_DWORD *)(a1 + 24);
LABEL_2:
  v6 = (unsigned int)(v2 - 1);
  *a2 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v6);
  v7 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 24) = v6;
  if ( v7 >= (unsigned int)v6 )
    v7 = v6;
  *(_DWORD *)(a1 + 32) = v7;
  return v3;
}
