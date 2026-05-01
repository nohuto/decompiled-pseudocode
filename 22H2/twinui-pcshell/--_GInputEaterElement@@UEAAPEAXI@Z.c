/*
 * XREFs of ??_GInputEaterElement@@UEAAPEAXI@Z @ 0x18042C0D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906B4 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??1CMultitaskingViewElementBase@@QEAA@XZ @ 0x180404CE0 (--1CMultitaskingViewElementBase@@QEAA@XZ.c)
 */

InputEaterElement *__fastcall InputEaterElement::`scalar deleting destructor'(InputEaterElement *this, char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 27);
  if ( v4 )
  {
    *((_QWORD *)this + 27) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)this + 53) = -1073741823;
  CMultitaskingViewElementBase::~CMultitaskingViewElementBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
