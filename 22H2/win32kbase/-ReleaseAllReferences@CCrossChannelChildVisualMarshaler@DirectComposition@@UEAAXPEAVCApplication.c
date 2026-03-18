/*
 * XREFs of ?ReleaseAllReferences@CCrossChannelChildVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C000D350
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0026120 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0032C00 (-ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CCrossChannelChildVisualMarshaler::ReleaseAllReferences(
        DirectComposition::CCrossChannelChildVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // rdx

  DirectComposition::CVisualMarshaler::ReleaseAllReferences(this, a2);
  v4 = *((unsigned int *)this + 94);
  if ( (_DWORD)v4 )
  {
    DirectComposition::CConnection::ReleaseSystemResource(*((_QWORD *)a2 + 5), v4);
    *((_DWORD *)this + 94) = 0;
  }
}
