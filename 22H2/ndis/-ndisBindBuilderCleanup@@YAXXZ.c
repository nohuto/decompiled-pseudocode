/*
 * XREFs of ?ndisBindBuilderCleanup@@YAXXZ @ 0x1C012572C
 * Callers:
 *     ?ndisBindBuilderInitialize@@YAJXZ @ 0x1C0145E64 (-ndisBindBuilderInitialize@@YAJXZ.c)
 *     ?ndisBindInitialize@@YAJXZ @ 0x1C0145F24 (-ndisBindInitialize@@YAJXZ.c)
 * Callees:
 *     ??1NdisBindBuilderGlobal@@QEAA@XZ @ 0x1C0124A9C (--1NdisBindBuilderGlobal@@QEAA@XZ.c)
 */

void ndisBindBuilderCleanup(void)
{
  PVOID v0; // rbx

  v0 = qword_1C00E55C8;
  if ( qword_1C00E55C8 )
  {
    NdisBindBuilderGlobal::~NdisBindBuilderGlobal((NdisBindBuilderGlobal *)qword_1C00E55C8);
    ExFreePoolWithTag(v0, 0x4742444Eu);
    qword_1C00E55C8 = 0LL;
  }
}
