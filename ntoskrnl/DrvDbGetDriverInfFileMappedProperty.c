/*
 * XREFs of DrvDbGetDriverInfFileMappedProperty @ 0x140864950
 * Callers:
 *     DrvDbDispatchDriverInfFile @ 0x140864AC0 (DrvDbDispatchDriverInfFile.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     DrvDbOpenDriverInfFileRegKey @ 0x140864A78 (DrvDbOpenDriverInfFileRegKey.c)
 *     DrvDbGetRegValueMappedProperty @ 0x140865F5C (DrvDbGetRegValueMappedProperty.c)
 *     DrvDbGetObjectDatabaseNodeName @ 0x140A695E4 (DrvDbGetObjectDatabaseNodeName.c)
 */

__int64 __fastcall DrvDbGetDriverInfFileMappedProperty(
        __int64 a1,
        __int64 a2,
        HANDLE a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int a7,
        _DWORD *a8)
{
  _DWORD *v8; // r14
  _DWORD *v10; // rdi
  int v11; // ebp
  int v12; // r15d
  int v13; // ebx
  __int64 v14; // rdx
  __int64 (**i)[3]; // r8
  __int64 *v16; // r11
  int ObjectDatabaseNodeName; // ebx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 (**v20)[3]; // rsi
  __int64 v22; // rax
  __int64 v23; // r9
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
    v22 = *(_QWORD *)a4 - DEVPKEY_NODE;
    if ( *(_QWORD *)a4 == DEVPKEY_NODE )
      v22 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
    if ( !v22 )
    {
      v23 = a6;
      v24 = a7 >> 1;
      *v8 = 18;
      ObjectDatabaseNodeName = DrvDbGetObjectDatabaseNodeName(a1, 3LL, a2, v23, v24, v10);
      if ( (int)(ObjectDatabaseNodeName + 0x80000000) < 0 || ObjectDatabaseNodeName == -1073741789 )
        *v10 *= 2;
      goto LABEL_14;
    }
  }
  v14 = 0LL;
  for ( i = &off_1400045A0; ; i += 5 )
  {
    v16 = (__int64 *)*i;
    if ( LODWORD((**i)[2]) == v13 )
    {
      v18 = *v16 - *(_QWORD *)a4;
      if ( *v16 == *(_QWORD *)a4 )
        v18 = v16[1] - *(_QWORD *)(a4 + 8);
      if ( !v18 )
        break;
    }
    v14 = (unsigned int)(v14 + 1);
    if ( (unsigned int)v14 >= 4 )
      return (unsigned int)-1073741802;
  }
  v19 = 5 * v14;
  v20 = &off_1400045A0 + 5 * v14;
  if ( !v20 )
    return (unsigned int)-1073741802;
  if ( !a3 )
  {
    ObjectDatabaseNodeName = DrvDbOpenDriverInfFileRegKey(v12, v11, 1, 0, (__int64)&Handle, 0LL);
    if ( ObjectDatabaseNodeName < 0 )
      goto LABEL_14;
    a3 = Handle;
  }
  ObjectDatabaseNodeName = DrvDbGetRegValueMappedProperty(v19, a3, v20, v8, a6, a7, v10);
LABEL_14:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)ObjectDatabaseNodeName;
}
