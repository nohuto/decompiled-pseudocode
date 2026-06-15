/*
 * XREFs of ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14003DFA0
 * Callers:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140007AD0 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ??1?$CAutoPtr@VCPipeInstance@@@ATL@@QEAA@XZ @ 0x14003D9C8 (--1-$CAutoPtr@VCPipeInstance@@@ATL@@QEAA@XZ.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x140040EDC (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14004683C (-CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140046C94 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14004CF30 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x14004EC98 (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 *     ?Reset@CFormatConverterPipe@@QEAAXXZ @ 0x14004F150 (-Reset@CFormatConverterPipe@@QEAAXXZ.c)
 * Callees:
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x14003DC3C (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 */

LPVOID *__fastcall ATL::CAutoPtr<CPipeInstance>::Free(LPVOID **a1)
{
  LPVOID *v2; // rcx
  LPVOID *result; // rax

  v2 = *a1;
  if ( v2 )
    result = CPipeInstance::`scalar deleting destructor'(v2);
  *a1 = 0LL;
  return result;
}
