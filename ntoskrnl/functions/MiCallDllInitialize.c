unsigned __int64 __fastcall MiCallDllInitialize(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 (__fastcall *BugCheckParameter4)(__int64); // rbx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  result = RtlFindExportedRoutineByName(*(_QWORD *)(a1 + 48), "DllInitialize");
  BugCheckParameter4 = (__int64 (__fastcall *)(__int64))result;
  if ( result )
  {
    RtlPcToFileHeader(*(_QWORD *)(a1 + 48), &v6);
    if ( v6 != *(_QWORD *)(a1 + 48) )
      KeBugCheckEx(0x139u, 0xAuLL, 0LL, 0LL, (ULONG_PTR)BugCheckParameter4);
    return BugCheckParameter4(a2);
  }
  return result;
}
