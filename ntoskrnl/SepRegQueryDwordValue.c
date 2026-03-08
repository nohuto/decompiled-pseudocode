/*
 * XREFs of SepRegQueryDwordValue @ 0x1407393AC
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x1407390D0 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     SepRegOpenKey @ 0x140739428 (SepRegOpenKey.c)
 *     SepRegQueryValue @ 0x1407394A4 (SepRegQueryValue.c)
 */

__int64 __fastcall SepRegQueryDwordValue(__int64 a1, __int64 a2, void *a3)
{
  int Value; // ebx
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  Handle = 0LL;
  Value = SepRegOpenKey(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa", 0x201u, &Handle);
  if ( Value >= 0 )
  {
    Value = SepRegQueryValue(Handle, a3);
    ZwClose(Handle);
  }
  return (unsigned int)Value;
}
