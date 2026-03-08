/*
 * XREFs of KdpWriteFileCallback @ 0x140AB0E60
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     ZwWriteFile @ 0x140412410 (ZwWriteFile.c)
 */

__int64 __fastcall KdpWriteFileCallback(__int64 a1, LARGE_INTEGER a2, void *a3, ULONG Length)
{
  void *v4; // rcx
  ULONG_PTR v5; // rdi
  NTSTATUS v6; // eax
  unsigned int v7; // ebx
  struct _IO_STATUS_BLOCK v9; // [rsp+50h] [rbp-18h] BYREF
  LARGE_INTEGER v10; // [rsp+70h] [rbp+8h] BYREF

  v4 = *(void **)(a1 + 16);
  v5 = Length;
  v10 = a2;
  v9 = 0LL;
  v6 = ZwWriteFile(v4, 0LL, 0LL, 0LL, &v9, a3, Length, &v10, 0LL);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( v9.Information < v5 )
      return (unsigned int)-1073741823;
  }
  else
  {
    DbgPrintEx(0, 2u, "\nKdPullRemoteFile: Local file write failed, 0x%08x\n", v6);
  }
  return v7;
}
