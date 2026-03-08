/*
 * XREFs of ??0CInputSink@@QEAA@XZ @ 0x1C00AB798
 * Callers:
 *     ?ObjectInit@CompositionInputObject@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1C00AB730 (-ObjectInit@CompositionInputObject@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z.c)
 * Callees:
 *     memset @ 0x1C00E1980 (memset.c)
 */

CInputSink *__fastcall CInputSink::CInputSink(CInputSink *this)
{
  _DWORD *v2; // rdi
  __int64 v3; // rax

  *((_QWORD *)this + 1) = 0LL;
  v2 = (_DWORD *)((char *)this + 88);
  *((_QWORD *)this + 2) = 0LL;
  *((_BYTE *)this + 24) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *(_QWORD *)this = &CInputSink::`vftable';
  memset((char *)this + 88, 0, 0x40uLL);
  v3 = 4LL;
  do
  {
    *v2 = 1065353216;
    v2 += 5;
    --v3;
  }
  while ( v3 );
  return this;
}
