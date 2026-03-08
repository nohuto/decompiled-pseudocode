/*
 * XREFs of ?GotoPreChild@?$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z @ 0x1801F3398
 * Callers:
 *     ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x1801F309C (--$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonLi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCBspNode@@@@$0EA@$01$09@@QEAAJAEBUCFrame@?$CGraphWalker@VCBspNode@@@@@Z @ 0x1801F3500 (-Push@-$CWatermarkStack@UCFrame@-$CGraphWalker@VCBspNode@@@@$0EA@$01$09@@QEAAJAEBUCFrame@-$CGrap.c)
 */

__int64 __fastcall CGraphWalker<CBspNode>::GotoPreChild(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // esi
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+38h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0;
  *a2 = 0LL;
  if ( *(_DWORD *)(a1 + 28) )
    v6 = *(_QWORD *)(v2 + 16);
  else
    v6 = *(_QWORD *)(v2 + 24);
  if ( v6 )
  {
    v11 = *(_QWORD *)(a1 + 16);
    v12 = *(_DWORD *)(a1 + 24);
    v7 = CWatermarkStack<CGraphWalker<CBspNode>::CFrame,64,2,10>::Push(a1 + 32, &v11);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x144u, 0LL);
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 8);
      ++*(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 16) = v9;
      *(_QWORD *)(a1 + 8) = v6;
      *a2 = v6;
    }
  }
  return v3;
}
