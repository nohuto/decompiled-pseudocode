/*
 * XREFs of ?BuildTransformParentStack@CLightPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x18019A5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x180042ECC (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800BA3C0 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Top@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEBAJPEAPEAVCVisual@@I@Z @ 0x18019AAE4 (-Top@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEBAJPEAPEAVCVisual@@I@Z.c)
 */

__int64 __fastcall CLightPreComputeHelper::BuildTransformParentStack(
        CLightPreComputeHelper *this,
        struct CComposition *a2,
        const struct CVisualTree *a3,
        struct CVisual *a4,
        unsigned __int64 a5)
{
  unsigned int v5; // edi
  struct CVisual *v6; // rbx
  unsigned __int64 v9; // r14
  __int64 **TreeData; // rax
  struct CVisual *v11; // rsi
  char v12; // r10
  struct CVisual *v13; // rax
  unsigned int *v14; // r11
  int v15; // eax
  __int64 v16; // rcx
  struct CVisual *v18; // [rsp+70h] [rbp+18h] BYREF
  struct CVisual *v19; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0;
  v6 = a4;
  v18 = a4;
  if ( a4 == *((struct CVisual **)a3 + 7) )
  {
LABEL_7:
    v12 = 1;
  }
  else
  {
    v9 = a5;
    while ( 1 )
    {
      TreeData = CVisual::FindTreeData(v6, a3);
      if ( TreeData )
      {
        if ( (unsigned __int64)TreeData[15] >= v9 )
          break;
      }
      v11 = (struct CVisual *)*((_QWORD *)v6 + 10);
      CWatermarkStack<CVisual *,64,2,10>::Push((unsigned int *)this + 2, &v18);
      if ( v11 )
      {
        v6 = v11;
        v18 = v11;
        if ( v11 != *((struct CVisual **)a3 + 7) )
          continue;
      }
      goto LABEL_7;
    }
    v12 = 0;
  }
  v13 = 0LL;
  v14 = (unsigned int *)((char *)this + 8);
  v19 = 0LL;
  if ( *((_DWORD *)this + 2) )
  {
    v15 = CWatermarkStack<CVisual *,64,2,10>::Top((char *)this + 8, &v19);
    v5 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x259u, 0LL);
      return v5;
    }
    v13 = v19;
  }
  if ( v12 && v13 != v6 )
    CWatermarkStack<CVisual *,64,2,10>::Push(v14, &v18);
  return v5;
}
