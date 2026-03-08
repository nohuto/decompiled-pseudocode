/*
 * XREFs of ?GetQ@tagTHREADINFO@@QEBAPEAUtagQ@@XZ @ 0x1C01A70E0
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 * Callees:
 *     <none>
 */

struct tagQ *__fastcall tagTHREADINFO::GetQ(tagTHREADINFO *this)
{
  return (struct tagQ *)*((_QWORD *)this + 54);
}
