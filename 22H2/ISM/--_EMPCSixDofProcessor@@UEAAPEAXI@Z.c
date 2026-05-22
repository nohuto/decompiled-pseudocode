/*
 * XREFs of ??_EMPCSixDofProcessor@@UEAAPEAXI@Z @ 0x18018C980
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCSixDofProcessor@@UEAA@XZ @ 0x18018B574 (--1MPCSixDofProcessor@@UEAA@XZ.c)
 */

MPCSixDofProcessor *__fastcall MPCSixDofProcessor::`vector deleting destructor'(MPCSixDofProcessor *this, char a2)
{
  MPCSixDofProcessor::~MPCSixDofProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1DE8);
  return this;
}
