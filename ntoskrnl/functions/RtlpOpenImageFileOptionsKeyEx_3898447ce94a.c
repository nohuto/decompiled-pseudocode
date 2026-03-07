__int64 __fastcall RtlpOpenImageFileOptionsKeyEx(unsigned __int16 *a1, __int64 a2, __int64 a3, HANDLE *a4)
{
  unsigned int v5; // edx
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // edx
  bool v10; // r15
  __int64 result; // rax
  HANDLE v12; // r14
  ULONG v13; // eax
  bool v14; // zf
  __int64 v15; // rdx
  NTSTATUS v16; // ebx
  __int128 i; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+48h] BYREF

  Handle = 0LL;
  *a4 = 0LL;
  v5 = *a1;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  v7 = *((_QWORD *)a1 + 1) + v5;
  *(&ObjectAttributes.Length + 1) = 0;
  v8 = v5;
  for ( i = 0LL; v8; v8 -= 2 )
  {
    if ( *(_WORD *)(v7 - 2) == 92 )
      break;
    v7 -= 2LL;
  }
  v9 = v5 - v8;
  *((_QWORD *)&i + 1) = v7;
  LOWORD(i) = v9;
  if ( (unsigned __int16)v9 != v9 )
    return 3221225507LL;
  v10 = RtlpDisableIFEOCaching != 0;
  result = RtlpOpenBaseImageFileOptionsKey(&Handle);
  if ( (int)result >= 0 )
  {
    v12 = Handle;
    v13 = 1600;
    v14 = KeGetCurrentThread()->PreviousMode == 1;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = Handle;
    if ( !v14 )
      v13 = 576;
    ObjectAttributes.Attributes = v13;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&i;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v16 = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
    if ( v10 )
      ZwClose(v12);
    if ( v16 >= 0 )
    {
      Handle = KeyHandle;
      v16 = RtlpProcessIFEOKeyFilter(&Handle, v15, a1);
      if ( v16 < 0 )
      {
        if ( Handle )
          ZwClose(Handle);
      }
      else
      {
        *a4 = Handle;
      }
    }
    return (unsigned int)v16;
  }
  return result;
}
