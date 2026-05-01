/*
 * XREFs of ??_ECRefThread@@MEAAPEAXI@Z @ 0x180283380
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CRefThread@@MEAA@XZ @ 0x1802831E4 (--1CRefThread@@MEAA@XZ.c)
 */

CRefThread *__fastcall CRefThread::`vector deleting destructor'(CRefThread *this, char a2)
{
  CRefThread::~CRefThread(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
