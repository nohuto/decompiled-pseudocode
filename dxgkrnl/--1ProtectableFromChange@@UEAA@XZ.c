/*
 * XREFs of ??1ProtectableFromChange@@UEAA@XZ @ 0x1C0005304
 * Callers:
 *     ??1DMMVIDPNTOPOLOGY@@UEAA@XZ @ 0x1C000527C (--1DMMVIDPNTOPOLOGY@@UEAA@XZ.c)
 *     ??_EProtectableFromChange@@UEAAPEAXI@Z @ 0x1C006A2F0 (--_EProtectableFromChange@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ProtectableFromChange::~ProtectableFromChange(ProtectableFromChange *this)
{
  void *v2; // rcx
  void *v3; // rcx

  *((_QWORD *)this + 8) = &Vector<unsigned __int64>::`vftable';
  v2 = (void *)*((_QWORD *)this + 11);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = (void *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 3) = &Vector<unsigned __int64>::`vftable';
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
