/*
 * XREFs of ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x140009CF0
 * Callers:
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000CA40 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14000E170 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000E8E0 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14004683C (-CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140046C94 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140007300 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

CPipeInstance *__fastcall CPipeInstance::CPipeInstance(CPipeInstance *this, enum PIPE_TYPE a2)
{
  struct IUnknown **v3; // rcx
  CPipeInstance *result; // rax

  *((_DWORD *)this + 14) = 10;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 10;
  *((_QWORD *)this + 19) = 0LL;
  v3 = (struct IUnknown **)((char *)this + 176);
  *v3 = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_DWORD *)this + 72) = 10;
  *((_DWORD *)this + 78) = 0;
  *((_WORD *)this + 158) = 0;
  *((_BYTE *)this + 318) = 0;
  *((_DWORD *)this + 58) = 0;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 28) = a2;
  *(_QWORD *)((char *)this + 116) = 0LL;
  *(_QWORD *)((char *)this + 124) = 0LL;
  *((_QWORD *)this + 17) = 1LL;
  *((_DWORD *)this + 36) = 0;
  if ( *v3 )
    ATL::AtlComPtrAssign(v3, 0LL);
  if ( *((_QWORD *)this + 23) )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 23, 0LL);
  *((_QWORD *)this + 25) = 0LL;
  result = this;
  *((_DWORD *)this + 52) = 1;
  *((_DWORD *)this + 2) = 0;
  *(GUID *)((char *)this + 216) = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)((char *)this + 296) = GUID_00000000_0000_0000_0000_000000000000;
  return result;
}
