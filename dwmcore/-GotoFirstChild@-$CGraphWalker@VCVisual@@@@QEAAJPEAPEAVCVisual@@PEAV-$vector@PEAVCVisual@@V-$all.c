/*
 * XREFs of ?GotoFirstChild@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@PEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x1800E6DB0
 * Callers:
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x18009A318 (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContex.c)
 * Callees:
 *     ?Push@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCVisual@@@@$0EA@$01$09@@QEAAJAEBUCFrame@?$CGraphWalker@VCVisual@@@@@Z @ 0x18004C328 (-Push@-$CWatermarkStack@UCFrame@-$CGraphWalker@VCVisual@@@@$0EA@$01$09@@QEAAJAEBUCFrame@-$CGraph.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800AA170 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetChildAt@CVisual@@QEBAPEAV1@I@Z @ 0x1800E6E78 (-GetChildAt@CVisual@@QEBAPEAV1@I@Z.c)
 */

__int64 __fastcall CGraphWalker<CVisual>::GotoFirstChild(__int64 a1, struct CVisual **a2, _QWORD *a3)
{
  int Count; // ebp
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  unsigned int v10; // eax
  struct CVisual *ChildAt; // r8
  __int64 v12; // rax
  __int128 v14; // [rsp+30h] [rbp-18h] BYREF

  *a2 = 0LL;
  Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(*(_QWORD *)(a1 + 8) + 80LL));
  if ( Count )
  {
    *(_QWORD *)&v14 = *(_QWORD *)(a1 + 16);
    DWORD2(v14) = *(_DWORD *)(a1 + 24);
    v7 = CWatermarkStack<CGraphWalker<CVisual>::CFrame,64,2,10>::Push((unsigned int *)(a1 + 32), &v14);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x87u, 0LL);
    }
    else
    {
      v10 = 0;
      if ( *(_DWORD *)(a1 + 28) != 1 )
        v10 = Count - 1;
      *(_DWORD *)(a1 + 24) = v10;
      if ( a3 )
        ChildAt = *(struct CVisual **)(*a3 + 8LL * v10);
      else
        ChildAt = CVisual::GetChildAt(*(CVisual **)(a1 + 8), v10);
      v12 = *(_QWORD *)(a1 + 8);
      ++*(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 16) = v12;
      *(_QWORD *)(a1 + 8) = ChildAt;
      *a2 = ChildAt;
    }
  }
  else
  {
    return 1;
  }
  return v9;
}
