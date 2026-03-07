__int64 __fastcall PiDmGetObjectListCallback(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 (__fastcall *v5)(__int64, _QWORD, char *); // rax
  int v6; // esi
  __int64 v8; // rbx
  unsigned int v9; // eax
  unsigned int v10; // ebx
  char v11; // [rsp+58h] [rbp+10h] BYREF

  *a3 = 0;
  v5 = *(__int64 (__fastcall **)(__int64, _QWORD, char *))a2;
  v6 = 0;
  v11 = 0;
  if ( !v5 || (v6 = v5(a1, *(_QWORD *)(a2 + 8), &v11), v6 >= 0) && v11 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)(*(_QWORD *)(a1 + 16) + 2 * v8) );
    v9 = *(_DWORD *)(a2 + 24);
    v10 = v8 + 1;
    *(_DWORD *)(a2 + 28) += v10;
    if ( v9 > v10 )
    {
      RtlStringCchCopyExW(*(NTSTRSAFE_PWSTR *)(a2 + 16), v9, *(NTSTRSAFE_PCWSTR *)(a1 + 16), 0LL, 0LL, 0x900u);
      *(_QWORD *)(a2 + 16) += 2LL * v10;
      *(_DWORD *)(a2 + 24) -= v10;
    }
  }
  return (unsigned int)v6;
}
