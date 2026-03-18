/*
 * XREFs of ??0CConnection@DirectComposition@@AEAA@XZ @ 0x1C005AEE0
 * Callers:
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C005ACC4 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C005CF18 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

DirectComposition::CConnection *__fastcall DirectComposition::CConnection::CConnection(
        DirectComposition::CConnection *this)
{
  DirectComposition::CConnection *result; // rax

  *((_BYTE *)this + 24) = 0;
  *((_QWORD *)this + 6) = 8LL;
  *((_BYTE *)this + 216) = 0;
  *((_QWORD *)this + 25) = (char *)this + 192;
  *((_QWORD *)this + 24) = (char *)this + 192;
  *((_QWORD *)this + 37) = 0LL;
  *((_BYTE *)this + 304) = 0;
  *((_QWORD *)this + 41) = 0LL;
  *((_BYTE *)this + 336) = 0;
  *((_DWORD *)this + 86) = 0;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_DWORD *)this + 78) = 37120;
  *((_DWORD *)this + 79) = 37120;
  *((_QWORD *)this + 40) = 1LL;
  `vector constructor iterator'(
    (char *)this + 376,
    0x1D0uLL,
    0x12CuLL,
    (void *(*)(void *))DirectComposition::CConnection::CFrameStats::CFrameStats);
  *(_DWORD *)this = 1;
  InitializeSListHead((PSLIST_HEADER)this + 6);
  result = this;
  *((_QWORD *)this + 22) = DirectComposition::CConnection::s_qpcFrequency.QuadPart / 0x3CuLL;
  return result;
}
