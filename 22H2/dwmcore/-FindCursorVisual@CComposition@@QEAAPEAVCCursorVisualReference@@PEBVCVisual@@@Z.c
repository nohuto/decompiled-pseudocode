/*
 * XREFs of ?FindCursorVisual@CComposition@@QEAAPEAVCCursorVisualReference@@PEBVCVisual@@@Z @ 0x1800E1810
 * Callers:
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1800E068C (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z @ 0x1800D5AE0 (-RemoveAt@-$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z.c)
 *     ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800E4DDC (--_GCCursorVisualReference@@QEAAPEAXI@Z.c)
 *     ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1800E5388 (-GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 */

struct CCursorVisualReference *__fastcall CComposition::FindCursorVisual(CComposition *this, const struct CVisual *a2)
{
  int v2; // edi
  __int64 v3; // rbx
  _QWORD *v5; // r14
  CCursorVisualReference *v6; // rsi
  CExcludeVisualReference *v7; // rcx
  unsigned int v8; // r8d
  unsigned int v10; // edx

  v2 = *((_DWORD *)this + 210);
  v3 = 0LL;
  if ( v2 > 0 )
  {
    v5 = (_QWORD *)((char *)this + 816);
    do
    {
      v6 = *(CCursorVisualReference **)(*v5 + 8LL * (unsigned int)(v2 - 1));
      if ( CExcludeVisualReference::GetVisual(v6) )
      {
        if ( CExcludeVisualReference::GetVisual(v7) == a2 )
          return v6;
      }
      else
      {
        DynArray<CCursorVisualReference *,0>::RemoveAt((__int64)v5, v8);
        if ( v6 )
          CCursorVisualReference::`scalar deleting destructor'(v6, v10);
      }
      --v2;
    }
    while ( v2 > 0 );
  }
  return (struct CCursorVisualReference *)v3;
}
