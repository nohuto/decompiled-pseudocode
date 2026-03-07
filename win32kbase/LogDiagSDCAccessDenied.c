__int64 __fastcall LogDiagSDCAccessDenied(struct _UNICODE_STRING *a1, struct _UNICODE_STRING *a2)
{
  wchar_t *v4; // rdx
  unsigned __int16 **v5; // r9
  wchar_t *v6; // rdx
  unsigned __int16 **v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 DxgkWin32kInterface; // rax
  _QWORD v12[14]; // [rsp+30h] [rbp-88h] BYREF

  memset(v12, 0, sizeof(v12));
  v12[0] = 0x700000002BLL;
  memset(&v12[1], 0, 36);
  RtlStringCchCopyUnicodeStringEx((NTSTRSAFE_PWSTR)&v12[6], v4, a1, v5);
  RtlStringCchCopyUnicodeStringEx((NTSTRSAFE_PWSTR)&v12[10], v6, a2, v7);
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v9, v8);
  return (*(__int64 (__fastcall **)(_QWORD *))(DxgkWin32kInterface + 304))(v12);
}
