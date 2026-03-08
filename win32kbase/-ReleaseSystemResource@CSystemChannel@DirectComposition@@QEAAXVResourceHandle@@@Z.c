/*
 * XREFs of ?ReleaseSystemResource@CSystemChannel@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0064AB4
 * Callers:
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C005E76C (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?Delete@CSystemResourceReference@CBatch@DirectComposition@@QEAAXPEAVCApplicationChannel@3@@Z @ 0x1C0061878 (-Delete@CSystemResourceReference@CBatch@DirectComposition@@QEAAXPEAVCApplicationChannel@3@@Z.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C006A848 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 * Callees:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x1C005F994 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CSystemChannel::ReleaseSystemResource(
        DirectComposition::CApplicationChannel *a1,
        int a2)
{
  unsigned __int64 v3; // rcx
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  __int64 result; // rax

  v3 = (unsigned int)(a2 - 1);
  if ( a2 && v3 < *((_QWORD *)a1 + 17) )
    v4 = *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)a1 + 18) * v3 + *((_QWORD *)a1 + 14));
  else
    v4 = 0LL;
  result = DirectComposition::CApplicationChannel::ReleaseResource(a1, v4);
  if ( !result )
    return DirectComposition::CApplicationChannel::Commit(a1, 0LL, 0, 0, 0LL, 0LL, 0LL, 0);
  return result;
}
