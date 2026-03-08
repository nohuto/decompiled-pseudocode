/*
 * XREFs of ?Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z @ 0x18007F10C
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180080580 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??0CRoundedRectangleShape@@QEAA@AEBUCRoundedRectangleGeometryData@@@Z @ 0x1800D2BE4 (--0CRoundedRectangleShape@@QEAA@AEBUCRoundedRectangleGeometryData@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??0SharedData@CRoundedRectangleShape@@IEAA@AEBUCRoundedRectangleGeometryData@@@Z @ 0x18007F1B0 (--0SharedData@CRoundedRectangleShape@@IEAA@AEBUCRoundedRectangleGeometryData@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

struct CRoundedRectangleShape::SharedData *__fastcall CRoundedRectangleShape::SharedData::Create(
        const struct CRoundedRectangleGeometryData *a1)
{
  HANDLE ProcessHeap; // rax
  CRoundedRectangleShape::SharedData *v3; // rax
  CRoundedRectangleShape::SharedData *v4; // rbx
  CRoundedRectangleShape::SharedData *v6; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((float *)a1 + 12) <= 0.0 )
  {
    v6 = (CRoundedRectangleShape::SharedData *)operator new(0x50uLL);
    if ( v6 )
      return (struct CRoundedRectangleShape::SharedData *)CRoundedRectangleShape::SharedData::SharedData(v6, a1);
    else
      return 0LL;
  }
  else
  {
    ProcessHeap = GetProcessHeap();
    v3 = (CRoundedRectangleShape::SharedData *)HeapAlloc(ProcessHeap, 0, 0x68uLL);
    v4 = v3;
    if ( !v3 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    CRoundedRectangleShape::SharedData::SharedData(v3, a1);
    *(_QWORD *)v4 = &CRoundedRectangleShape::FlattenedShapeSharedData::`vftable';
    *((_QWORD *)v4 + 10) = 0LL;
    *((_QWORD *)v4 + 11) = 0LL;
    *((_QWORD *)v4 + 12) = 0LL;
  }
  return v4;
}
