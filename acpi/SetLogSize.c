/*
 * XREFs of SetLogSize @ 0x1C004E6AC
 * Callers:
 *     AMLIInitialize @ 0x1C00AAAB0 (AMLIInitialize.c)
 * Callees:
 *     memset @ 0x1C0002180 (memset.c)
 */

char SetLogSize()
{
  char v0; // bl
  void *Pool2; // rax

  v0 = 0;
  if ( qword_1C006F910 )
  {
    ExFreePoolWithTag(qword_1C006F910, 0);
    qword_1C006F910 = 0LL;
    qword_1C006F908 = 0LL;
  }
  Pool2 = (void *)ExAllocatePool2(64LL, 14688LL, 1196379205LL);
  qword_1C006F910 = Pool2;
  if ( Pool2 )
  {
    qword_1C006F908 = 204LL;
    memset(Pool2, 0, 0x3960uLL);
    return 1;
  }
  return v0;
}
