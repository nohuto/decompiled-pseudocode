/*
 * XREFs of ??1HidLampRangeUpdateReportBuilder@@UEAA@XZ @ 0x1800A93FC
 * Callers:
 *     ??_GHidLampRangeUpdateReportBuilder@@UEAAPEAXI@Z @ 0x1800A9440 (--_GHidLampRangeUpdateReportBuilder@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180037280 (-Release@RefCountedObject@@UEAAKXZ.c)
 */

void __fastcall HidLampRangeUpdateReportBuilder::~HidLampRangeUpdateReportBuilder(
        HidLampRangeUpdateReportBuilder *this)
{
  RefCountedObject *v2; // rcx

  *(_QWORD *)this = &HidLampRangeUpdateReportBuilder::`vftable';
  v2 = (RefCountedObject *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    *((_QWORD *)this + 5) = 0LL;
    RefCountedObject::Release(v2);
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
