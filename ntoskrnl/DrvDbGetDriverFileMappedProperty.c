/*
 * XREFs of DrvDbGetDriverFileMappedProperty @ 0x140A68D60
 * Callers:
 *     DrvDbDispatchDriverFile @ 0x140A6B1D0 (DrvDbDispatchDriverFile.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     DrvDbGetRegValueMappedProperty @ 0x140865F5C (DrvDbGetRegValueMappedProperty.c)
 *     DrvDbGetObjectDatabaseNodeName @ 0x140A695E4 (DrvDbGetObjectDatabaseNodeName.c)
 *     DrvDbOpenDriverFileRegKey @ 0x140A69D20 (DrvDbOpenDriverFileRegKey.c)
 */

__int64 __fastcall DrvDbGetDriverFileMappedProperty(
        __int64 a1,
        __int64 a2,
        HANDLE a3,
        __int64 a4,
        _DWORD *a5,
        _WORD *a6,
        unsigned int a7,
        _DWORD *a8)
{
  _DWORD *v8; // r14
  _DWORD *v10; // rdi
  int v11; // ebp
  int v12; // r15d
  int v13; // ebx
  __int64 v14; // rax
  _WORD *v15; // r9
  int ObjectDatabaseNodeName; // ebx
  __int64 v17; // rdx
  __int64 (**i)[3]; // r8
  __int64 *v19; // r11
  __int64 v20; // rcx
  __int64 v22; // rcx
  __int64 (**v23)[3]; // rsi
  unsigned int v24; // [rsp+20h] [rbp-38h]
  HANDLE Handle; // [rsp+78h] [rbp+20h] BYREF

  v8 = a5;
  v10 = a8;
  v11 = a2;
  Handle = 0LL;
  v12 = a1;
  *a5 = 0;
  *v10 = 0;
  v13 = *(_DWORD *)(a4 + 16);
  if ( v13 == 2 )
  {
    v14 = *(_QWORD *)a4 - DEVPKEY_NODE;
    if ( *(_QWORD *)a4 == DEVPKEY_NODE )
      v14 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
    if ( !v14 )
    {
      v15 = a6;
      v24 = a7 >> 1;
      *v8 = 18;
      ObjectDatabaseNodeName = DrvDbGetObjectDatabaseNodeName(a1, 4LL, a2, v15, v24, v10);
      if ( (int)(ObjectDatabaseNodeName + 0x80000000) < 0 || ObjectDatabaseNodeName == -1073741789 )
        *v10 *= 2;
      goto LABEL_21;
    }
  }
  v17 = 0LL;
  for ( i = &off_14000B2A0; ; i += 5 )
  {
    v19 = (__int64 *)*i;
    if ( LODWORD((**i)[2]) == v13 )
    {
      v20 = *v19 - *(_QWORD *)a4;
      if ( *v19 == *(_QWORD *)a4 )
        v20 = v19[1] - *(_QWORD *)(a4 + 8);
      if ( !v20 )
        break;
    }
    v17 = (unsigned int)(v17 + 1);
    if ( (unsigned int)v17 >= 2 )
      return (unsigned int)-1073741802;
  }
  v22 = 5 * v17;
  v23 = &off_14000B2A0 + 5 * v17;
  if ( !v23 )
    return (unsigned int)-1073741802;
  if ( !a3 )
  {
    ObjectDatabaseNodeName = DrvDbOpenDriverFileRegKey(v12, v11, 1, 0, (__int64)&Handle, 0LL);
    if ( ObjectDatabaseNodeName < 0 )
      goto LABEL_21;
    a3 = Handle;
  }
  ObjectDatabaseNodeName = DrvDbGetRegValueMappedProperty(v22, a3, (__int64)v23, v8, a6, a7, v10);
LABEL_21:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)ObjectDatabaseNodeName;
}
