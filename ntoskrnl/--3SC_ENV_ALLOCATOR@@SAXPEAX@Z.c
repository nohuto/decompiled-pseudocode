/*
 * XREFs of ??3SC_ENV_ALLOCATOR@@SAXPEAX@Z @ 0x140672B50
 * Callers:
 *     ??_ENT_DISK@@UEAAPEAXI@Z @ 0x14093D350 (--_ENT_DISK@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x14078FD20 (-Free@SC_ENV@@SAXPEAX@Z.c)
 */

void __fastcall SC_ENV_ALLOCATOR::operator delete(void *a1)
{
  SC_ENV::Free(a1);
}
