/*
 * XREFs of ??0CFrameInfo@@QEAA@XZ @ 0x1800FE7E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CFrameInfo *__fastcall CFrameInfo::CFrameInfo(CFrameInfo *this)
{
  LARGE_INTEGER v1; // kr18_8
  CFrameInfo *result; // rax

  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 50) = 0;
  *((_BYTE *)this + 208) = 0;
  *((_QWORD *)this + 27) = 0LL;
  *((_WORD *)this + 112) = 0;
  *((_BYTE *)this + 226) = 0;
  v1 = g_qpcFrequency;
  *((_BYTE *)this + 248) = 1;
  result = this;
  *((_QWORD *)this + 29) = v1.QuadPart / 60;
  *((_QWORD *)this + 30) = v1.QuadPart / 60;
  return result;
}
