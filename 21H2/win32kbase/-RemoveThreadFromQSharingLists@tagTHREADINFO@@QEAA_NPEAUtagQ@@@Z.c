/*
 * XREFs of ?RemoveThreadFromQSharingLists@tagTHREADINFO@@QEAA_NPEAUtagQ@@@Z @ 0x1C009A268
 * Callers:
 *     zzzDestroyQueue @ 0x1C0038C50 (zzzDestroyQueue.c)
 * Callees:
 *     ?RemoveThreadFromListWorker@tagTHREADINFO@@AEAA_NPEAUtagQ@@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z @ 0x1C009A2D0 (-RemoveThreadFromListWorker@tagTHREADINFO@@AEAA_NPEAUtagQ@@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z.c)
 */

char __fastcall tagTHREADINFO::RemoveThreadFromQSharingLists(tagTHREADINFO *this, struct tagQ *a2)
{
  char v4; // bl
  char v5; // r8
  char result; // al

  v4 = tagTHREADINFO::RemoveThreadFromListWorker(this, a2);
  v5 = tagTHREADINFO::RemoveThreadFromListWorker(this, a2);
  result = 0;
  if ( v4 || v5 )
    return 1;
  return result;
}
