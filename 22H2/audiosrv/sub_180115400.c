/*
 * XREFs of sub_180115400 @ 0x180115400
 * Callers:
 *     <none>
 * Callees:
 *     sub_180061D94 @ 0x180061D94 (sub_180061D94.c)
 */

__int64 __fastcall sub_180115400(PVOID Parameter)
{
  DWORD v1; // eax

  do
  {
    sub_180061D94(3, 0, 5000);
    v1 = WaitForSingleObject(qword_18019FAA0, 0x1388u);
  }
  while ( v1 && v1 != -1 );
  return 0LL;
}
