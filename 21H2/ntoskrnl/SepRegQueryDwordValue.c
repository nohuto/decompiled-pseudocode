/*
 * XREFs of SepRegQueryDwordValue @ 0x1406C566C
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x1406C5380 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     SepRegQueryValue @ 0x1406C56E8 (SepRegQueryValue.c)
 *     SepRegOpenKey @ 0x1406C57D4 (SepRegOpenKey.c)
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
