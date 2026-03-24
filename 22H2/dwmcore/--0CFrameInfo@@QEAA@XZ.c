/*
 * XREFs of ??0CFrameInfo@@QEAA@XZ @ 0x1800D9B00
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800E7F5C (memset_0.c)
 */

CFrameInfo *__fastcall CFrameInfo::CFrameInfo(CFrameInfo *this)
{
  __int64 v2; // rcx
  __int128 v3; // rax

  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  memset_0(this, 0, 0x90uLL);
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 50) = 0;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 58) = 0;
  *((_BYTE *)this + 240) = 0;
  *((_QWORD *)this + 31) = 0LL;
  *((_BYTE *)this + 256) = 0;
  *((_WORD *)this + 132) = 0;
  *((_QWORD *)this + 35) = 0x10000003CLL;
  v2 = *((unsigned int *)this + 70);
  v3 = g_qpcFrequency.QuadPart * *((unsigned int *)this + 71);
  *((_BYTE *)this + 296) = 1;
  *(_QWORD *)&v3 = v3 / v2;
  *((_QWORD *)this + 34) = v3;
  *((_QWORD *)this + 36) = v3;
  return this;
}
