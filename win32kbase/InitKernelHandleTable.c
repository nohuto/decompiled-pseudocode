/*
 * XREFs of InitKernelHandleTable @ 0x1C031E1A8
 * Callers:
 *     Win32UserInitialize @ 0x1C031E444 (Win32UserInitialize.c)
 * Callees:
 *     Win32CreateSection @ 0x1C002D5F4 (Win32CreateSection.c)
 */

__int64 __fastcall InitKernelHandleTable(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  NTSTATUS v4; // ebx
  __int64 v5; // [rsp+20h] [rbp-38h]
  int v6; // [rsp+60h] [rbp+8h] BYREF
  int v7; // [rsp+64h] [rbp+Ch]
  ULONG_PTR ViewSize; // [rsp+68h] [rbp+10h] BYREF

  v7 = 0;
  v6 = 1572864;
  result = Win32CreateSection(&ghSectionKernelHandleTable, 983071LL, a3, (__int64)&v6, v5, 0x4000000);
  if ( (int)result >= 0 )
  {
    ViewSize = 0LL;
    gpKernelHandleTable = 0LL;
    v4 = MmMapViewInSessionSpace(ghSectionKernelHandleTable, &gpKernelHandleTable, &ViewSize);
    if ( v4 < 0 )
    {
      ObfDereferenceObject(ghSectionShared);
      ghSectionShared = 0LL;
      return (unsigned int)v4;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
