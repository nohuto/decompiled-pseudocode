/*
 * XREFs of ?reserve@?$vector@EV?$allocator@E@std@@@std@@QEAAX_K@Z @ 0x1800AB7A8
 * Callers:
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x1800AB464 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ @ 0x1802507C8 (-OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ.c)
 *     DebugInspectSysMemSurface_NoOpt @ 0x18026F714 (DebugInspectSysMemSurface_NoOpt.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x1802ABE0C (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 * Callees:
 *     ?_Reallocate_exactly@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x1800AB544 (-_Reallocate_exactly@-$vector@EV-$allocator@E@std@@@std@@AEAAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@UICheckMPOCache@@U?$default_delete@UICheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x1801AF7D8 (-_Xlength@-$vector@V-$unique_ptr@UICheckMPOCache@@U-$default_delete@UICheckMPOCache@@@std@@@std@.c)
 */

unsigned __int64 __fastcall std::vector<unsigned char>::reserve(_QWORD *a1, SIZE_T a2)
{
  unsigned __int64 result; // rax

  result = a1[2] - *a1;
  if ( a2 > result )
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
      std::vector<std::unique_ptr<ICheckMPOCache>>::_Xlength();
    return std::vector<unsigned char>::_Reallocate_exactly((__int64)a1, a2);
  }
  return result;
}
