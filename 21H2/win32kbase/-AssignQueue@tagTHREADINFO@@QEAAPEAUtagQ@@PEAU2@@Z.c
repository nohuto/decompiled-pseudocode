/*
 * XREFs of ?AssignQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z @ 0x1C00BB720
 * Callers:
 *     <none>
 * Callees:
 *     ?AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z @ 0x1C003A6D8 (-AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z.c)
 */

struct tagQ *__fastcall tagTHREADINFO::AssignQueue(tagTHREADINFO *this, struct tagQ *a2)
{
  return (struct tagQ *)tagTHREADINFO::AssignQueueWorker(this, (ULONG_PTR)a2, 472, 1488, 432);
}
