/*
 * XREFs of WaitForWerSvc @ 0x1800DD604
 * Callers:
 *     SendMessageToWERService @ 0x1800DD34C (SendMessageToWERService.c)
 * Callees:
 *     NtWaitForSingleObject @ 0x18009D560 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     NtOpenEvent @ 0x18009DCE0 (NtOpenEvent.c)
 */

NTSTATUS __fastcall WaitForWerSvc(int a1)
{
  __int64 v1; // rbx
  NTSTATUS result; // eax
  char v3; // dl
  LARGE_INTEGER *v4; // r8
  NTSTATUS v5; // ebx
  int v6; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v7; // [rsp+28h] [rbp-38h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE EventHandle; // [rsp+78h] [rbp+18h] BYREF
  __int64 v10; // [rsp+80h] [rbp+20h] BYREF

  v1 = a1;
  v7 = L"\\KernelObjects\\SystemErrorPortReady";
  v6 = 4718662;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v6;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenEvent(&EventHandle, 0x100001u, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( (_DWORD)v1 == -1 )
    {
      v3 = 1;
    }
    else
    {
      v3 = 0;
      v10 = -10000 * v1;
    }
    v4 = (LARGE_INTEGER *)&v10;
    if ( v3 )
      v4 = 0LL;
    v5 = NtWaitForSingleObject(EventHandle, 0, v4);
    NtClose(EventHandle);
    return v5;
  }
  return result;
}
