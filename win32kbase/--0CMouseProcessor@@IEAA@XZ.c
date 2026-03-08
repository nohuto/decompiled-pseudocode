/*
 * XREFs of ??0CMouseProcessor@@IEAA@XZ @ 0x1C0095D40
 * Callers:
 *     ?CreateInstance@CMouseProcessor@@SAJPEAPEAV1@@Z @ 0x1C0095CA4 (-CreateInstance@CMouseProcessor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0MousePerfSummary@@QEAA@XZ @ 0x1C0095F48 (--0MousePerfSummary@@QEAA@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C00968E4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

CMouseProcessor *__fastcall CMouseProcessor::CMouseProcessor(CMouseProcessor *this)
{
  CMouseProcessor *result; // rax

  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CMouseProcessor::`vftable';
  *((_DWORD *)this + 12) = (unsigned int)PsGetCurrentThreadId();
  *(_OWORD *)((char *)this + 52) = 0LL;
  *((_DWORD *)this + 17) = 0;
  memset((char *)this + 72, 0, 0xA80uLL);
  `vector constructor iterator'(
    (char *)this + 72,
    0xA8uLL,
    0x10uLL,
    (void *(*)(void *))CMouseProcessor::RawMouseEvent::RawMouseEvent);
  *((_DWORD *)this + 690) = 0;
  *((_DWORD *)this + 696) = 1;
  memset((char *)this + 2792, 0, 0x270uLL);
  MousePerfSummary::MousePerfSummary((CMouseProcessor *)((char *)this + 2792));
  *((_QWORD *)this + 429) = 0LL;
  *((_OWORD *)this + 215) = 0LL;
  *((_QWORD *)this + 432) = 0LL;
  *((_WORD *)this + 1767) = 7;
  *((_QWORD *)this + 442) = 0LL;
  *((_QWORD *)this + 443) = 0LL;
  *((_QWORD *)this + 444) = 0LL;
  *((_BYTE *)this + 3560) = 0;
  *((_BYTE *)this + 3564) = 0;
  *((_QWORD *)this + 446) = 0LL;
  memset((char *)this + 3576, 0, 0x70uLL);
  *((_BYTE *)this + 3688) = 0;
  *((_DWORD *)this + 924) = 0;
  *((_BYTE *)this + 3720) = 0;
  *((_DWORD *)this + 931) = 0;
  *((_QWORD *)this + 466) = 0LL;
  *((_DWORD *)this + 934) = 0;
  *((_DWORD *)this + 935) = (unsigned int)PsGetCurrentThreadId();
  memset((char *)this + 3744, 0, 0x48uLL);
  *((_QWORD *)this + 477) = 0LL;
  *((_QWORD *)this + 463) = 0LL;
  *((_QWORD *)this + 464) = 0LL;
  *((_QWORD *)this + 478) = 0LL;
  *((_QWORD *)this + 479) = 0LL;
  *((_WORD *)this + 1920) = 0;
  *((_QWORD *)this + 483) = (char *)this + 3856;
  *((_QWORD *)this + 482) = (char *)this + 3856;
  *((_QWORD *)this + 484) = 0LL;
  *((_QWORD *)this + 485) = 0LL;
  *((_QWORD *)this + 486) = 0LL;
  *((_BYTE *)this + 3896) = 0;
  memset((char *)this + 3904, 0, 0x400uLL);
  *((_WORD *)this + 2464) = 0;
  *((_QWORD *)this + 617) = (char *)this + 3904;
  *((_WORD *)this + 2472) = 0;
  *((_BYTE *)this + 4956) = 0;
  result = this;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 346) = 0LL;
  *((_QWORD *)this + 347) = 0LL;
  *((_QWORD *)this + 427) = 0LL;
  *((_QWORD *)this + 428) = 0LL;
  return result;
}
