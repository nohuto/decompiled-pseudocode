/*
 * XREFs of ??_ENT_DISK@@UEAAPEAXI@Z @ 0x14093D350
 * Callers:
 *     <none>
 * Callees:
 *     ??3SC_ENV_ALLOCATOR@@SAXPEAX@Z @ 0x140672B50 (--3SC_ENV_ALLOCATOR@@SAXPEAX@Z.c)
 *     ??1SC_DISK@@UEAA@XZ @ 0x140672EB0 (--1SC_DISK@@UEAA@XZ.c)
 */

NT_DISK *__fastcall NT_DISK::`vector deleting destructor'(NT_DISK *this, char a2)
{
  *(_QWORD *)this = &NT_DISK::`vftable';
  SC_DISK::~SC_DISK(this);
  if ( (a2 & 1) != 0 )
    SC_ENV_ALLOCATOR::operator delete(this);
  return this;
}
