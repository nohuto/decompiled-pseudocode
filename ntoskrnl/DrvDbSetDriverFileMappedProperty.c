/*
 * XREFs of DrvDbSetDriverFileMappedProperty @ 0x140A6A2BC
 * Callers:
 *     DrvDbDispatchDriverFile @ 0x140A6B1D0 (DrvDbDispatchDriverFile.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     DrvDbSetRegValueMappedProperty @ 0x1407FFCCC (DrvDbSetRegValueMappedProperty.c)
 *     DrvDbOpenDriverFileRegKey @ 0x140A69D20 (DrvDbOpenDriverFileRegKey.c)
 */

__int64 __fastcall DrvDbSetDriverFileMappedProperty(
        __int64 *a1,
        __int64 a2,
        HANDLE a3,
        __int64 a4,
        int a5,
        int *a6,
        ULONG a7)
{
  int v8; // ebx
  __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // rdx
  __int64 (**i)[3]; // r8
  __int64 *v15; // r10
  __int64 v16; // rcx
  __int64 v18; // rcx
  __int64 (**v19)[3]; // rsi
  int v20; // edi
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  Handle = 0LL;
  v8 = *(_DWORD *)(a4 + 16);
  if ( v8 == 2 )
  {
    v11 = *(_QWORD *)a4 - DEVPKEY_NODE;
    if ( *(_QWORD *)a4 == DEVPKEY_NODE )
      v11 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
    if ( !v11 )
      return (unsigned int)-1073741790;
  }
  v13 = 0LL;
  for ( i = &off_14000B2A0; ; i += 5 )
  {
    v15 = (__int64 *)*i;
    if ( LODWORD((**i)[2]) == v8 )
    {
      v16 = *v15 - *(_QWORD *)a4;
      if ( *v15 == *(_QWORD *)a4 )
        v16 = v15[1] - *(_QWORD *)(a4 + 8);
      if ( !v16 )
        break;
    }
    v13 = (unsigned int)(v13 + 1);
    if ( (unsigned int)v13 >= 2 )
      return (unsigned int)-1073741802;
  }
  v18 = 5 * v13;
  v19 = &off_14000B2A0 + 5 * v13;
  if ( !v19 )
    return (unsigned int)-1073741802;
  v20 = a5;
  if ( a5 != *((_DWORD *)v19 + 2) && a5 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v12 = DrvDbOpenDriverFileRegKey(a1, a2, 2, 0, (__int64)&Handle, 0LL);
    if ( v12 < 0 )
      goto LABEL_22;
    a3 = Handle;
  }
  v12 = DrvDbSetRegValueMappedProperty(v18, a3, (__int64)v19, v20, a6, a7);
LABEL_22:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v12;
}
