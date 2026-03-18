/*
 * XREFs of ?AssignAttachQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z @ 0x1C00B7390
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z @ 0x1C003A6D8 (-AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z.c)
 */

struct tagQ *__fastcall tagTHREADINFO::AssignAttachQueue(tagTHREADINFO *this, struct tagQ *a2)
{
  return (struct tagQ *)tagTHREADINFO::AssignQueueWorker(this, (ULONG_PTR)a2, 480, 1496, 656);
}
