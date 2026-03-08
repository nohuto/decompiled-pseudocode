/*
 * XREFs of ExpValidateLoader @ 0x140B48484
 * Callers:
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall ExpValidateLoader(unsigned int *a1)
{
  ULONG_PTR result; // rax
  unsigned int *v2; // rdx

  result = 0LL;
  if ( *(_QWORD *)a1 != 10LL
    || a1[2] != 368
    || (v2 = (unsigned int *)*((_QWORD *)a1 + 30), result = *v2, (_DWORD)result != 3872)
    || v2[746] != 167772172 )
  {
    KeBugCheckEx(0x100u, *a1, a1[1], a1[2], result);
  }
  return result;
}
