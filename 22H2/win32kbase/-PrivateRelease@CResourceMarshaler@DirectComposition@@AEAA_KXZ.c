/*
 * XREFs of ?PrivateRelease@CResourceMarshaler@DirectComposition@@AEAA_KXZ @ 0x1C00D5B4C
 * Callers:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C002FD60 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleasePathDataResources@CKeyframeAnimationMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0030214 (-ReleasePathDataResources@CKeyframeAnimationMarshaler@DirectComposition@@AEAAXPEAVCApplicationCh.c)
 *     ??1CResourceMarshalerArrayBase@DirectComposition@@QEAA@XZ @ 0x1C00303FC (--1CResourceMarshalerArrayBase@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     ?ValidateReferenceCountHash@CResourceMarshaler@DirectComposition@@AEAAXXZ @ 0x1C00D5C0C (-ValidateReferenceCountHash@CResourceMarshaler@DirectComposition@@AEAAXXZ.c)
 *     Feature_29159638__private_IsEnabledDeviceUsage @ 0x1C00D5C90 (Feature_29159638__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall DirectComposition::CResourceMarshaler::PrivateRelease(DirectComposition::CResourceMarshaler *this)
{
  __int64 result; // rax
  __int64 v3; // rax

  if ( (unsigned int)Feature_29159638__private_IsEnabledDeviceUsage() )
  {
    DirectComposition::CResourceMarshaler::ValidateReferenceCountHash(this);
    v3 = *((_QWORD *)this + 3);
    if ( !v3 )
      KeBugCheck(0xC000A003);
    result = v3 - 1;
    *((_DWORD *)this + 5) = result ^ ~(_DWORD)this;
  }
  else
  {
    result = *((_QWORD *)this + 3) - 1LL;
  }
  *((_QWORD *)this + 3) = result;
  return result;
}
