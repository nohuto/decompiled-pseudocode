NTSTATUS __fastcall IopGetFileVolumeNameInformation(void *a1, __int64 a2, _DWORD *a3, int a4)
{
  unsigned int v6; // ebx
  NTSTATUS result; // eax
  unsigned int Length; // esi
  unsigned int v9; // ebx
  ULONG ReturnLength[4]; // [rsp+20h] [rbp-248h] BYREF
  struct _OBJECT_NAME_INFORMATION ObjectNameInfo; // [rsp+30h] [rbp-238h] BYREF

  ReturnLength[0] = 0;
  v6 = a4 - 4;
  result = ObQueryNameString(a1, &ObjectNameInfo, 0x200u, ReturnLength);
  if ( result < 0 )
  {
    *(_DWORD *)a2 = result;
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  else
  {
    Length = ObjectNameInfo.Name.Length;
    if ( v6 < ObjectNameInfo.Name.Length )
      Length = v6 & 0xFFFFFFFE;
    v9 = v6 < ObjectNameInfo.Name.Length ? 0x80000005 : 0;
    *a3 = ObjectNameInfo.Name.Length;
    memmove(a3 + 1, ObjectNameInfo.Name.Buffer, Length);
    *(_DWORD *)a2 = v9;
    *(_QWORD *)(a2 + 8) = Length + 4;
    return v9;
  }
  return result;
}
