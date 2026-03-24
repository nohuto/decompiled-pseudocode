/*
 * XREFs of ??0CMouseProcessor@@IEAA@XZ @ 0x1C008B5FC
 * Callers:
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C0088710 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C008BE58 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0MousePerfSummary@@QEAA@XZ @ 0x1C008BF0C (--0MousePerfSummary@@QEAA@XZ.c)
 *     ??0CSpatialProcessor@@QEAA@XZ @ 0x1C008C18C (--0CSpatialProcessor@@QEAA@XZ.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 */

CMouseProcessor *__fastcall CMouseProcessor::CMouseProcessor(CMouseProcessor *this)
{
  CMouseProcessor *result; // rax

  CSpatialProcessor::CSpatialProcessor(this);
  *(_QWORD *)this = &CMouseProcessor::`vftable';
  *((_DWORD *)this + 14) = (unsigned int)PsGetCurrentThreadId();
  *(_OWORD *)((char *)this + 60) = 0LL;
  *((_DWORD *)this + 19) = 0;
  memset((char *)this + 80, 0, 0xA80uLL);
  `vector constructor iterator'(
    (char *)this + 80,
    0xA8uLL,
    0x10uLL,
    (void *(*)(void *))CMouseProcessor::RawMouseEvent::RawMouseEvent);
  *((_DWORD *)this + 692) = 0;
  *((_DWORD *)this + 698) = 1;
  memset((char *)this + 2800, 0, 0x268uLL);
  MousePerfSummary::MousePerfSummary((CMouseProcessor *)((char *)this + 2800));
  *(_OWORD *)((char *)this + 3432) = 0LL;
  *((_QWORD *)this + 431) = 0LL;
  *((_WORD *)this + 1763) = 7;
  *((_QWORD *)this + 441) = 0LL;
  *((_QWORD *)this + 442) = 0LL;
  *((_QWORD *)this + 443) = 0LL;
  *((_BYTE *)this + 3552) = 0;
  *((_BYTE *)this + 3556) = 0;
  *((_QWORD *)this + 445) = 0LL;
  memset((char *)this + 3568, 0, 0x70uLL);
  *((_BYTE *)this + 3680) = 0;
  *((_DWORD *)this + 922) = 0;
  *((_BYTE *)this + 3712) = 0;
  *((_DWORD *)this + 929) = 0;
  *((_QWORD *)this + 465) = 0LL;
  *((_DWORD *)this + 932) = 0;
  *((_DWORD *)this + 933) = (unsigned int)PsGetCurrentThreadId();
  memset((char *)this + 3736, 0, 0x48uLL);
  *((_QWORD *)this + 476) = 0LL;
  *((_QWORD *)this + 462) = 0LL;
  *((_QWORD *)this + 463) = 0LL;
  *((_QWORD *)this + 477) = 0LL;
  *((_QWORD *)this + 478) = 0LL;
  *((_WORD *)this + 1916) = 0;
  *((_QWORD *)this + 482) = (char *)this + 3848;
  *((_QWORD *)this + 481) = (char *)this + 3848;
  *((_QWORD *)this + 483) = &CPushLock::`vftable';
  *((_QWORD *)this + 484) = 0LL;
  *((_QWORD *)this + 485) = 0LL;
  *((_QWORD *)this + 486) = 0LL;
  *((_BYTE *)this + 3896) = 0;
  memset((char *)this + 3904, 0, 0x400uLL);
  *((_WORD *)this + 2464) = 0;
  *((_QWORD *)this + 617) = (char *)this + 3904;
  *((_BYTE *)this + 4944) = 0;
  *((_BYTE *)this + 4956) = 0;
  result = this;
  *((_BYTE *)this + 4960) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 347) = 0LL;
  *((_QWORD *)this + 348) = 0LL;
  *((_QWORD *)this + 427) = 0LL;
  *((_QWORD *)this + 428) = 0LL;
  return result;
}
