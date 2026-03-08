/*
 * XREFs of ??0IOCPDispatcher@@IEAA@XZ @ 0x1C00966A4
 * Callers:
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1C0096578 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C00968E4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

IOCPDispatcher *__fastcall IOCPDispatcher::IOCPDispatcher(IOCPDispatcher *this)
{
  IOCPDispatcher *result; // rax

  *(_QWORD *)this = &IOCPDispatcher::`vftable';
  memset((char *)this + 8, 0, 0xA00uLL);
  *((_DWORD *)this + 642) = 0;
  memset((char *)this + 2576, 0, 0x140uLL);
  `vector constructor iterator'(
    (char *)this + 2576,
    0x20uLL,
    0xAuLL,
    (void *(*)(void *))IOCPDispatcher::ThreadIOCPWCP::ThreadIOCPWCP);
  *((_DWORD *)this + 724) = 0;
  result = this;
  *((_QWORD *)this + 363) = 0LL;
  *((_QWORD *)this + 364) = 0LL;
  return result;
}
