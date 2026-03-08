/*
 * XREFs of ??1CRIMBase@@UEAA@XZ @ 0x1C0096730
 * Callers:
 *     ??_GCHidInput@@UEAAPEAXI@Z @ 0x1C0095370 (--_GCHidInput@@UEAAPEAXI@Z.c)
 *     ??_GCBaseInput@@UEAAPEAXI@Z @ 0x1C020B9E0 (--_GCBaseInput@@UEAAPEAXI@Z.c)
 *     ??_GCRIMBase@@UEAAPEAXI@Z @ 0x1C020BA30 (--_GCRIMBase@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0096938 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall CRIMBase::~CRIMBase(CRIMBase *this)
{
  *(_QWORD *)this = &CRIMBase::`vftable';
  `vector destructor iterator'(
    (char *)this + 168,
    0x40uLL,
    0x12uLL,
    (void (*)(void *))CRIMBase::SensorDispatcherObject::~SensorDispatcherObject);
}
