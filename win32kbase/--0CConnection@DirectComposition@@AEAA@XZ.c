/*
 * XREFs of ??0CConnection@DirectComposition@@AEAA@XZ @ 0x1C009595C
 * Callers:
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C009582C (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C00968E4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
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
  *((_QWORD *)this + 28) = 0LL;
  *((_BYTE *)this + 232) = 0;
  *((_QWORD *)this + 38) = 0LL;
  *((_BYTE *)this + 312) = 0;
  *((_DWORD *)this + 84) = 0;
  *((_QWORD *)this + 43) = 0LL;
  *((_BYTE *)this + 352) = 0;
  *((_DWORD *)this + 90) = 0;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_DWORD *)this + 80) = 37120;
  *((_DWORD *)this + 81) = 37120;
  *((_QWORD *)this + 41) = 1LL;
  `vector constructor iterator'(
    (char *)this + 392,
    0x1D0uLL,
    0x12CuLL,
    (void *(*)(void *))DirectComposition::CConnection::CFrameStats::CFrameStats);
  *(_DWORD *)this = 1;
  InitializeSListHead((PSLIST_HEADER)this + 6);
  result = this;
  *((_QWORD *)this + 22) = DirectComposition::CConnection::s_qpcFrequency.QuadPart / 0x3CuLL;
  return result;
}
