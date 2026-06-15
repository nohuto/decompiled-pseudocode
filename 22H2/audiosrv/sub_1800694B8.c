/*
 * XREFs of sub_1800694B8 @ 0x1800694B8
 * Callers:
 *     sub_18007D0A0 @ 0x18007D0A0 (sub_18007D0A0.c)
 * Callees:
 *     sub_1800B7F64 @ 0x1800B7F64 (sub_1800B7F64.c)
 *     sub_1800BA558 @ 0x1800BA558 (sub_1800BA558.c)
 *     sub_1800EA8B0 @ 0x1800EA8B0 (sub_1800EA8B0.c)
 */

void sub_1800694B8()
{
  __int64 v0; // rdx

  sub_1800BA558(&unk_18019EFC0);
  if ( qword_18019F068 )
    sub_1800EA8B0(qword_18019F068, v0);
  sub_1800B7F64(&unk_18019EFC0);
  DeleteCriticalSection(&stru_18019EF98);
}
