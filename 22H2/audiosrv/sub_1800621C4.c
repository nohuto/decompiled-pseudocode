/*
 * XREFs of sub_1800621C4 @ 0x1800621C4
 * Callers:
 *     ServiceMain @ 0x180061950 (ServiceMain.c)
 * Callees:
 *     <none>
 */

__int64 sub_1800621C4()
{
  _QWORD *v0; // rbx
  __int64 *v1; // rdi
  __int64 v2; // r8
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+40h] [rbp-18h] BYREF

  v0 = off_18019C348;
  v1 = &qword_18019F8E0;
  while ( v0 )
  {
    v2 = *v1;
    v4[1] = 0LL;
    ++v1;
    v4[0] = v2;
    v0[4] = v2;
    result = ((__int64 (__fastcall *)(__int64 (__fastcall *)(), _QWORD *, __int64, __int64, _QWORD *, _QWORD, _QWORD, _QWORD *))EtwRegisterTraceGuidsW)(
               sub_1801154A0,
               v0,
               v2,
               1LL,
               v4,
               0LL,
               0LL,
               v0 + 1);
    v0 = (_QWORD *)*v0;
  }
  return result;
}
