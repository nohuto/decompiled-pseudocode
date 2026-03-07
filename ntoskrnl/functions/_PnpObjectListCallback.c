__int64 __fastcall PnpObjectListCallback(__int64 a1, __int64 a2, const wchar_t *a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v7; // ebx
  unsigned int v8; // eax

  v4 = -1LL;
  do
    ++v4;
  while ( a3[v4] );
  v7 = v4 + 1;
  if ( !*(_QWORD *)a4
    || (*(unsigned __int8 (__fastcall **)(__int64, const wchar_t *, _QWORD, _QWORD))a4)(
         a1,
         a3,
         0LL,
         *(_QWORD *)(a4 + 8)) )
  {
    *(_DWORD *)(a4 + 28) += v7;
    v8 = *(_DWORD *)(a4 + 24);
    if ( v8 > v7 )
    {
      RtlStringCchCopyExW(*(NTSTRSAFE_PWSTR *)(a4 + 16), v8, a3, 0LL, 0LL, 0x900u);
      *(_QWORD *)(a4 + 16) += 2LL * v7;
      *(_DWORD *)(a4 + 24) -= v7;
    }
  }
  return 0LL;
}
