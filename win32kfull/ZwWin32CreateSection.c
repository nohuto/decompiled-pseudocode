__int64 __fastcall ZwWin32CreateSection(int a1, int a2, int a3, int a4, ULONG a5, int a6, void *a7, HANDLE Handle)
{
  int v8; // ebx
  int v10; // [rsp+28h] [rbp-30h]
  void *v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+40h] [rbp-18h]

  Handle = 0LL;
  v8 = ZwWin32CreateSectionRetainHandle(a1, a2, a3, a4, a5, v10, a7, v11, v12, &Handle);
  if ( v8 >= 0 )
    ZwClose(Handle);
  return (unsigned int)v8;
}
