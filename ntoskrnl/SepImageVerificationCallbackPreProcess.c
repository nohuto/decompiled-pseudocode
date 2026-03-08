/*
 * XREFs of SepImageVerificationCallbackPreProcess @ 0x1407F9370
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

char *__fastcall SepImageVerificationCallbackPreProcess(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned int Size)
{
  char *result; // rax

  memmove(a3, a4, Size);
  a3[2] = (char *)a3 + a4[2] - (_QWORD)a4;
  a3[6] = (char *)a3 + a4[6] - (_QWORD)a4;
  a3[8] = (char *)a3 + a4[8] - (_QWORD)a4;
  a3[9] = (char *)a3 + a4[9] - (_QWORD)a4;
  result = (char *)a3 + a4[10] - (_QWORD)a4;
  a3[10] = result;
  return result;
}
