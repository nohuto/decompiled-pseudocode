/*
 * XREFs of ?FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z @ 0x1C0038024
 * Callers:
 *     _EnableIAMThreadAccess @ 0x1C0037894 (_EnableIAMThreadAccess.c)
 *     IAMThreadAccessGranted @ 0x1C0037FF4 (IAMThreadAccessGranted.c)
 * Callees:
 *     <none>
 */

struct tagIAM_THREAD *__fastcall FindIAMThread(const struct tagTHREADINFO *a1)
{
  struct tagIAM_THREAD *result; // rax

  for ( result = (struct tagIAM_THREAD *)gIAMThreadList.Flink;
        result != (struct tagIAM_THREAD *)&gIAMThreadList;
        result = *(struct tagIAM_THREAD **)result )
  {
    if ( *((const struct tagTHREADINFO **)result + 2) == a1 )
      return result;
  }
  return 0LL;
}
