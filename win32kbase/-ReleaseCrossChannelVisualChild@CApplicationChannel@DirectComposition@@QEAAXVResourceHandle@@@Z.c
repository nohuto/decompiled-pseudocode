/*
 * XREFs of ?ReleaseCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C000B3CC
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0007780 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C000B338 (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall DirectComposition::CApplicationChannel::ReleaseCrossChannelVisualChild(
        DirectComposition::CApplicationChannel *a1,
        unsigned int a2)
{
  _UNKNOWN **result; // rax
  _QWORD *v3; // rsi
  _QWORD *i; // rdi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = (_QWORD *)((char *)a1 + 248);
  for ( i = (_QWORD *)*((_QWORD *)a1 + 31); i != v3; i = (_QWORD *)*i )
  {
    result = (_UNKNOWN **)(*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*(i - 48) + 320LL))(i - 48, a2);
    if ( (_BYTE)result )
      return (_UNKNOWN **)DirectComposition::CApplicationChannel::ReleaseResource(
                            a1,
                            (struct DirectComposition::CResourceMarshaler *)(i - 48));
  }
  return result;
}
