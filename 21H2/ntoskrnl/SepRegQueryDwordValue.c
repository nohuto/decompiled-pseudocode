/*
 * XREFs of SepRegQueryDwordValue @ 0x14071701C
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x140716D30 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     SepRegQueryValue @ 0x140717098 (SepRegQueryValue.c)
 *     SepRegOpenKey @ 0x140717184 (SepRegOpenKey.c)
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
