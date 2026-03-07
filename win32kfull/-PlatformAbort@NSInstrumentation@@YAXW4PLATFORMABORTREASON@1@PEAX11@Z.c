__int64 __fastcall NSInstrumentation::PlatformAbort(int a1, ULONG_PTR a2)
{
  __int64 result; // rax
  int v3; // ecx
  int v4; // ecx

  result = 0LL;
  if ( !a1 )
    KeBugCheckEx(0x164u, 9uLL, a2, 0LL, 0LL);
  v3 = a1 - 1;
  if ( !v3 )
    KeBugCheckEx(0x164u, 0x23uLL, a2, 0LL, 0LL);
  v4 = v3 - 1;
  if ( !v4 )
    KeBugCheckEx(0x164u, 0x22uLL, a2, 0LL, 0LL);
  if ( v4 == 1 )
    KeBugCheckEx(0x164u, 0x21uLL, a2, 0LL, 0LL);
  return result;
}
