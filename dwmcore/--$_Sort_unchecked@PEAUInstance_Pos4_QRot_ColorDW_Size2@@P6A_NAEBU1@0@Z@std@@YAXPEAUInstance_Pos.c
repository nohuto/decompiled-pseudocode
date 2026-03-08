/*
 * XREFs of ??$_Sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@0_JP6A_NAEBU1@2@Z@Z @ 0x18020525C
 * Callers:
 *     ??$_Sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@0_JP6A_NAEBU1@2@Z@Z @ 0x18020525C (--$_Sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos.c)
 *     ?EmitInstancedGeometry@@YAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180205454 (-EmitInstancedGeometry@@YAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z.c)
 * Callees:
 *     ??$_Insertion_sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAPEAUInstance_Pos4_QRot_ColorDW_Size2@@QEAU1@0P6A_NAEBU1@1@Z@Z @ 0x180204940 (--$_Insertion_sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAPEAUIns.c)
 *     ??$_Make_heap_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@0P6A_NAEBU1@1@Z@Z @ 0x180204A80 (--$_Make_heap_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstanc.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YA?AU?$pair@PEAUInstance_Pos4_QRot_ColorDW_Size2@@PEAU1@@0@PEAUInstance_Pos4_QRot_ColorDW_Size2@@0P6A_NAEBU2@1@Z@Z @ 0x180204C48 (--$_Partition_by_median_guess_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std.c)
 *     ??$_Sort_heap_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@0P6A_NAEBU1@1@Z@Z @ 0x180205190 (--$_Sort_heap_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstanc.c)
 *     ??$_Sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos4_QRot_ColorDW_Size2@@0_JP6A_NAEBU1@2@Z@Z @ 0x18020525C (--$_Sort_unchecked@PEAUInstance_Pos4_QRot_ColorDW_Size2@@P6A_NAEBU1@0@Z@std@@YAXPEAUInstance_Pos.c)
 */

char *__fastcall std::_Sort_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
        char *a1,
        char *a2,
        __int64 a3,
        unsigned __int8 (__fastcall *a4)(__int128 *, char *))
{
  char *v6; // rbx
  char *v7; // rdi
  char *v9; // [rsp+20h] [rbp-18h] BYREF
  char *v10; // [rsp+28h] [rbp-10h]

  v6 = a2;
  v7 = a1;
  if ( a2 - a1 < 1584 )
    return std::_Insertion_sort_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
             v7,
             v6,
             a4);
  while ( a3 > 0 )
  {
    std::_Partition_by_median_guess_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
      &v9,
      (unsigned __int64)v7,
      v6,
      (unsigned __int8 (__fastcall *)(_OWORD *, _OWORD *))a4);
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (__int64)(0xAAAAAAAAAAAAAAABuLL * ((v9 - v7) >> 4)) >= (__int64)(0xAAAAAAAAAAAAAAABuLL * ((v6 - v10) >> 4)) )
    {
      std::_Sort_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
        v10,
        v6,
        a3,
        a4);
      v6 = v9;
    }
    else
    {
      std::_Sort_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
        v7,
        v9,
        a3,
        a4);
      v7 = v10;
    }
    if ( v6 - v7 < 1584 )
      return std::_Insertion_sort_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
               v7,
               v6,
               a4);
  }
  std::_Make_heap_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
    (__int64)v7,
    (__int64)v6,
    (__int64)a4);
  return (char *)std::_Sort_heap_unchecked<Instance_Pos4_QRot_ColorDW_Size2 *,bool (*)(Instance_Pos4_QRot_ColorDW_Size2 const &,Instance_Pos4_QRot_ColorDW_Size2 const &)>(
                   v7,
                   (__int64)v6,
                   (unsigned __int8 (__fastcall *)(__int64, __int64))a4);
}
