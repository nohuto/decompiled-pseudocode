/*
 * XREFs of ?FormFullImageName@@YAKPEBU_UNICODE_STRING@@PEAU1@1@Z @ 0x1C00E2A9C
 * Callers:
 *     ?LoadApiSetHost@@YAJPEAU_Win32kApiSetHost@@PEAU_UNICODE_STRING@@@Z @ 0x1C00E29A4 (-LoadApiSetHost@@YAJPEAU_Win32kApiSetHost@@PEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall FormFullImageName(const struct _UNICODE_STRING *a1, const STRING *a2, struct _STRING *a3)
{
  USHORT v4; // r9
  WCHAR *Pool2; // rax
  NTSTATUS appended; // eax
  PWSTR Buffer; // rcx

  v4 = a2->Length + 2 + a1->Length;
  a3->MaximumLength = v4;
  Pool2 = (WCHAR *)ExAllocatePool2(256LL, v4, 1798517335LL);
  a3->Buffer = (PCHAR)Pool2;
  if ( Pool2 )
  {
    a3->Length = a1->Length;
    memmove(Pool2, a1->Buffer, a1->Length);
    appended = RtlAppendStringToString(a3, a2);
    Buffer = (PWSTR)a3->Buffer;
    if ( appended >= 0 )
    {
      Buffer[(unsigned __int64)a3->Length >> 1] = 0;
      return 1LL;
    }
    ExFreePoolWithTag(Buffer, 0);
  }
  return 0LL;
}
