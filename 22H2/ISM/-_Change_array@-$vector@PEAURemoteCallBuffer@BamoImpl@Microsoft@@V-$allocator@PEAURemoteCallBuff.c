/*
 * XREFs of ?_Change_array@?$vector@PEAURemoteCallBuffer@BamoImpl@Microsoft@@V?$allocator@PEAURemoteCallBuffer@BamoImpl@Microsoft@@@std@@@std@@AEAAXQEAPEAURemoteCallBuffer@BamoImpl@Microsoft@@_K1@Z @ 0x1800403F0
 * Callers:
 *     ??$_Emplace_reallocate@AEBQEAURemoteCallBuffer@BamoImpl@Microsoft@@@?$vector@PEAURemoteCallBuffer@BamoImpl@Microsoft@@V?$allocator@PEAURemoteCallBuffer@BamoImpl@Microsoft@@@std@@@std@@QEAAPEAPEAURemoteCallBuffer@BamoImpl@Microsoft@@QEAPEAU234@AEBQEAU234@@Z @ 0x18003F8C0 (--$_Emplace_reallocate@AEBQEAURemoteCallBuffer@BamoImpl@Microsoft@@@-$vector@PEAURemoteCallBuffe.c)
 *     ??$_Emplace_reallocate@ULampUpdateState@@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@QEAAPEAULampUpdateState@@QEAU2@$$QEAU2@@Z @ 0x1800A0D18 (--$_Emplace_reallocate@ULampUpdateState@@@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateSta.c)
 *     ?_Reallocate_exactly@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@AEAAX_K@Z @ 0x1800A29D4 (-_Reallocate_exactly@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateState@@@std@@@std@@AEAAX.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Microsoft::BamoImpl::RemoteCallBuffer *>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(
      v6,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
