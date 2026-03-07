bool __fastcall ObpUseSystemDeviceMap(__int64 a1)
{
  WCHAR *NtSystemRoot; // rax
  WCHAR v3; // di
  WCHAR v4; // ax
  __int64 v5; // rcx
  bool result; // al

  result = 0;
  if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 8) != 0 && *(_WORD *)a1 >= 0xEu )
  {
    NtSystemRoot = (WCHAR *)RtlGetNtSystemRoot();
    v3 = RtlUpcaseUnicodeChar(*NtSystemRoot);
    v4 = RtlUpcaseUnicodeChar(*(_WORD *)(*(_QWORD *)(a1 + 8) + 8LL));
    v5 = *(_QWORD *)(a1 + 8);
    if ( *(_WORD *)(v5 + 10) == 58 && *(_WORD *)(v5 + 12) == 92 && v3 == v4 )
      return 1;
  }
  return result;
}
