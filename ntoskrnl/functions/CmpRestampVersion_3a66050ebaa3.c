__int64 __fastcall CmpRestampVersion(HANDLE KeyHandle)
{
  __int64 v1; // rdi
  int v3; // eax
  ULONG DataSize; // ebx
  void *Data; // rcx
  int v6; // eax
  void *v7; // rcx
  int v8; // eax
  void *v9; // rcx
  int v10; // eax
  wchar_t Dst[128]; // [rsp+30h] [rbp-118h] BYREF

  v1 = CmpEditionVersion;
  if ( (*(_DWORD *)(CmpEditionVersion + 800) & 0x20) != 0 )
  {
    v3 = swprintf_s(Dst, 0x80uLL, L"%u", (unsigned __int16)*(_DWORD *)(CmpEditionVersion + 8));
    if ( v3 == -1 )
      return 2147483653LL;
    DataSize = (unsigned __int16)(2 * v3) + 2;
    ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentBuildNumberString, 0, 1u, Dst, DataSize);
    ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentBuildString, 0, 1u, Dst, DataSize);
  }
  if ( (*(_DWORD *)(v1 + 800) & 0x40) != 0 )
    ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpUBRString, 0, 4u, (PVOID)(v1 + 12), 4u);
  Data = *(void **)(v1 + 72);
  if ( Data )
  {
    v6 = *(unsigned __int16 *)(v1 + 64);
    if ( (_WORD)v6 )
      ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpBuildBranchString, 0, 1u, Data, v6 + 2);
  }
  v7 = *(void **)(v1 + 88);
  if ( v7 )
  {
    v8 = *(unsigned __int16 *)(v1 + 80);
    if ( (_WORD)v8 )
      ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpBuildLabString, 0, 1u, v7, v8 + 2);
  }
  v9 = *(void **)(v1 + 104);
  if ( v9 )
  {
    v10 = *(unsigned __int16 *)(v1 + 96);
    if ( (_WORD)v10 )
      ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpBuildLabExString, 0, 1u, v9, v10 + 2);
  }
  return 0LL;
}
