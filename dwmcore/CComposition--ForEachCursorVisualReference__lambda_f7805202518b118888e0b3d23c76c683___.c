/*
 * XREFs of CComposition::ForEachCursorVisualReference__lambda_f7805202518b118888e0b3d23c76c683___ @ 0x1801E8D88
 * Callers:
 *     ?RenderAdditionalTopmostContent@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801EAAB0 (-RenderAdditionalTopmostContent@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x18012A454 (-GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCExcludeVisualReference@@$0A@@@QEAAJI@Z @ 0x1801B1EFC (-RemoveAt@-$DynArray@PEAVCExcludeVisualReference@@$0A@@@QEAAJI@Z.c)
 *     _lambda_f7805202518b118888e0b3d23c76c683_::operator() @ 0x1801E958C (_lambda_f7805202518b118888e0b3d23c76c683_--operator().c)
 */

__int64 __fastcall CComposition::ForEachCursorVisualReference__lambda_f7805202518b118888e0b3d23c76c683___(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  _QWORD *v6; // r14
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx

  v2 = 0;
  v3 = 0LL;
  if ( *(_DWORD *)(a1 + 992) )
  {
    v6 = (_QWORD *)(a1 + 968);
    do
    {
      if ( CExcludeVisualReference::GetVisual(*(CExcludeVisualReference **)(*v6 + 8 * v3)) )
      {
        v8 = lambda_f7805202518b118888e0b3d23c76c683_::operator()(a2, v7);
        v2 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x2E1u, 0LL);
          return v2;
        }
        v3 = (unsigned int)(v3 + 1);
      }
      else
      {
        DynArray<CExcludeVisualReference *,0>::RemoveAt((__int64)v6, v3);
      }
    }
    while ( (unsigned int)v3 < *(_DWORD *)(a1 + 992) );
  }
  return v2;
}
