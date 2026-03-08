/*
 * XREFs of ?ReleaseAllReferences@CGenericInkMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C02506D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CGenericInkMarshaler::ReleaseAllReferences(
        DirectComposition::CGenericInkMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  struct DirectComposition::CResourceMarshaler *v5; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 20);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 20) = 0LL;
    *((_DWORD *)this + 42) = 0;
    *((_DWORD *)this + 43) = 0;
    *((_DWORD *)this + 44) = 0;
  }
  v5 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 28);
  if ( v5 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
    *((_QWORD *)this + 28) = 0LL;
    *((_DWORD *)this + 58) = 0;
    *((_DWORD *)this + 59) = 0;
  }
}
