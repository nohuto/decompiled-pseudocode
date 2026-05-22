/*
 * XREFs of ??_GSipcEndpoint@@EEAAPEAXI@Z @ 0x1800BF580
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SharedObjectBase@@MEAA@XZ @ 0x1800BEE64 (--1SharedObjectBase@@MEAA@XZ.c)
 */

SipcEndpoint *__fastcall SipcEndpoint::`scalar deleting destructor'(SipcEndpoint *this, char a2)
{
  *(_QWORD *)this = &SharedUnknownBase<ISIPCEndpoint>::`vftable'{for `SharedObjectBase'};
  *((_QWORD *)this + 2) = &SharedUnknownBase<ISIPCEndpoint>::`vftable'{for `ISIPCEndpoint'};
  SharedObjectBase::~SharedObjectBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x78);
  return this;
}
