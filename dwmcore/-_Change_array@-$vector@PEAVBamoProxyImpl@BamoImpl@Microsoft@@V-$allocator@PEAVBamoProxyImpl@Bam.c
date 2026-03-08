/*
 * XREFs of ?_Change_array@?$vector@PEAVBamoProxyImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoProxyImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAXQEAPEAVBamoProxyImpl@BamoImpl@Microsoft@@_K1@Z @ 0x1801B8DC4
 * Callers:
 *     ??$_Emplace_reallocate@AEBQEAVBamoProxyImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoProxyImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoProxyImpl@BamoImpl@Microsoft@@@std@@@std@@QEAAPEAPEAVBamoProxyImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1801B54A8 (--$_Emplace_reallocate@AEBQEAVBamoProxyImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoProxyImpl@Bamo.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Microsoft::BamoImpl::BamoProxyImpl *>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
