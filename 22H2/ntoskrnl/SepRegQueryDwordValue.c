/*
 * XREFs of SepRegQueryDwordValue @ 0x14070E1BC
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x14070DED0 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     SepRegQueryValue @ 0x14070E238 (SepRegQueryValue.c)
 *     SepRegOpenKey @ 0x14070E324 (SepRegOpenKey.c)
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
