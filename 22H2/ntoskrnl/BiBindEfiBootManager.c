/*
 * XREFs of BiBindEfiBootManager @ 0x14097043C
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x1409708D8 (BiBindEfiNamespaceObjects.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     BcdOpenObject @ 0x140783940 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140783ACC (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x140783EDC (BcdSetElementDataWithFlags.c)
 *     BiLogMessage @ 0x140784C9C (BiLogMessage.c)
 *     BcdCreateObject @ 0x14096EC68 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14096ED00 (BcdDeleteObject.c)
 *     BiQueryBootEntryOrder @ 0x1409728AC (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x140972984 (BiQueryBootOptions.c)
 *     BiTranslateBootEntryId @ 0x140972C04 (BiTranslateBootEntryId.c)
 *     BiTranslateBootOrder @ 0x140972C6C (BiTranslateBootOrder.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiBindEfiBootManager(HANDLE BcdStoreHandle, __int64 a2)
{
  void *v4; // r14
  NTSTATUS v5; // ebx
  PVOID PoolWithTag; // rax
  BCD_FLAGS v7; // r8d
  int v8; // eax
  BCD_FLAGS v9; // r8d
  unsigned int *v10; // rsi
  __int64 v11; // rdx
  BCD_FLAGS v12; // r8d
  HANDLE BcdObjectHandle; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-48h] BYREF
  PVOID v16; // [rsp+40h] [rbp-40h] BYREF
  int v17; // [rsp+48h] [rbp-38h] BYREF
  _BCD_OBJECT_DESCRIPTION Description; // [rsp+50h] [rbp-30h] BYREF
  PVOID P; // [rsp+58h] [rbp-28h] BYREF
  __int64 Buffer; // [rsp+60h] [rbp-20h] BYREF
  __int128 v21; // [rsp+68h] [rbp-18h] BYREF

  v17 = 0;
  v15 = 0;
  Buffer = 0LL;
  v16 = 0LL;
  P = 0LL;
  BcdObjectHandle = 0LL;
  v4 = 0LL;
  v21 = 0LL;
  if ( BcdOpenObject(BcdStoreHandle, &GUID_FIRMWARE_BOOTMGR, &BcdObjectHandle) >= 0 )
  {
    BcdDeleteObject(BcdObjectHandle);
    BcdObjectHandle = 0LL;
  }
  Description.Type = 269484033;
  Description.Version = 1;
  v5 = BcdCreateObject(BcdStoreHandle, &GUID_FIRMWARE_BOOTMGR, &Description, &BcdObjectHandle);
  if ( v5 >= 0 )
  {
    v5 = BiQueryBootEntryOrder(&v16, &v15);
    if ( v5 >= 0 )
    {
      if ( v15 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * v15, 0x4B444342u);
        v4 = PoolWithTag;
        if ( !PoolWithTag )
        {
          v5 = -1073741670;
          goto LABEL_19;
        }
        BiTranslateBootOrder(a2, v16, PoolWithTag, &v15);
        if ( v15 )
        {
          v5 = BcdSetElementDataWithFlags(BcdObjectHandle, 0x24000001u, v7, v4, 16 * v15);
          if ( v5 < 0 )
            goto LABEL_19;
        }
      }
      v8 = BiQueryBootOptions(&P, &v17);
      v10 = (unsigned int *)P;
      v5 = v8;
      if ( v8 >= 0 )
      {
        if ( *((_DWORD *)P + 2) == -1
          || (Buffer = *((unsigned int *)P + 2),
              v5 = BcdSetElementDataWithFlags(BcdObjectHandle, 0x25000004u, v9, &Buffer, 8u),
              v5 >= 0) )
        {
          v11 = v10[4];
          if ( (_DWORD)v11 == -2
            || (int)BiTranslateBootEntryId(a2, v11, &v21) < 0
            || (v5 = BcdSetElementDataWithFlags(BcdObjectHandle, 0x24000002u, v12, &v21, 0x10u), v5 >= 0) )
          {
            v5 = 0;
          }
        }
      }
      if ( v10 )
        ExFreePoolWithTag(v10, 0x4B444342u);
    }
LABEL_19:
    if ( v16 )
      ExFreePoolWithTag(v16, 0x4B444342u);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x4B444342u);
  }
  if ( BcdObjectHandle )
  {
    if ( v5 >= 0 )
      BcdCloseObject(BcdObjectHandle);
    else
      BcdDeleteObject(BcdObjectHandle);
  }
  if ( v5 < 0 )
    BiLogMessage(4LL, L"BiBindEfiBootManager failed %x", (unsigned int)v5);
  return (unsigned int)v5;
}
