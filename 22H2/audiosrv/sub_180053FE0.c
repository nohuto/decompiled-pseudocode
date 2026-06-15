/*
 * XREFs of sub_180053FE0 @ 0x180053FE0
 * Callers:
 *     DllMain @ 0x18006D2E0 (DllMain.c)
 * Callees:
 *     <none>
 */

__int64 sub_180053FE0()
{
  void *v1; // [rsp+40h] [rbp-18h] BYREF

  dword_18014500C = 1;
  v1 = &unk_18015C460;
  if ( !(unsigned int)((__int64 (__fastcall *)(__int64 (__fastcall *)(), _QWORD, void *, __int64, void **, _QWORD, _QWORD, __int64 *))EtwRegisterTraceGuidsW)(
                        sub_180104AC0,
                        0LL,
                        &unk_1801B2020,
                        1LL,
                        &v1,
                        0LL,
                        0LL,
                        &qword_180145020) )
    return 1LL;
  dword_18014500C = 0;
  return 0LL;
}
