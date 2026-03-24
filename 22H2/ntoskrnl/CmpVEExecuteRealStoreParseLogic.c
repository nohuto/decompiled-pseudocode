/*
 * XREFs of CmpVEExecuteRealStoreParseLogic @ 0x1406E89F0
 * Callers:
 *     CmpVEExecuteParseLogic @ 0x1406498B0 (CmpVEExecuteParseLogic.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     CmpUnblockHiveWrites @ 0x1406E8B98 (CmpUnblockHiveWrites.c)
 *     CmpFindPathByName @ 0x1406E8C18 (CmpFindPathByName.c)
 *     CmpBlockHiveWrites @ 0x1406E8C40 (CmpBlockHiveWrites.c)
 *     CmpIsKeyDeleted @ 0x1406E9D20 (CmpIsKeyDeleted.c)
 *     CmpVirtualBranchIsReplicated @ 0x1406EAEDC (CmpVirtualBranchIsReplicated.c)
 *     CmRealKCBToVirtualPath @ 0x1406EB88C (CmRealKCBToVirtualPath.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpVEExecuteRealStoreParseLogic(__int64 a1, __int64 a2, _DWORD *a3, UNICODE_STRING *a4, __int64 a5)
{
  int v5; // r12d
  void *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // r14
  int v11; // ebx
  char PathByName; // al
  char v13; // r12
  __int64 v15; // rax
  wchar_t *Buffer; // rcx
  _BYTE v17[4]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-2Ch] BYREF
  __int64 v19; // [rsp+38h] [rbp-28h] BYREF
  __int64 v20; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF

  v5 = a2;
  v19 = 0xFFFFFFFFLL;
  v18 = 0;
  v17[0] = 0;
  v20 = 0LL;
  DestinationString = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (unsigned __int8)CmpIsKeyDeleted(a1, 0LL) )
  {
    v13 = 0;
  }
  else
  {
    v11 = CmpBlockHiveWrites(*(_QWORD *)(a1 + 32), 0LL, 0LL);
    if ( v11 < 0 )
      goto LABEL_9;
    v8 = *(void **)(a1 + 32);
    PathByName = CmpFindPathByName(a1, v5, 0, (unsigned int)&v18, (__int64)&v20);
    v10 = v20;
    v13 = PathByName;
    if ( PathByName )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v20 + 8))(v20, v18, &v19);
      v9 = v15;
      if ( !v15 )
      {
        v11 = -1073741670;
        goto LABEL_9;
      }
      if ( (*(_DWORD *)(v15 + 52) & 0x200000) != 0 )
      {
LABEL_8:
        v11 = -1073741199;
        goto LABEL_9;
      }
      (*(void (__fastcall **)(__int64, __int64 *))(v10 + 16))(v10, &v19);
    }
    CmpUnblockHiveWrites(*(PVOID *)(a1 + 32));
  }
  v8 = 0LL;
  v9 = 0LL;
  v11 = CmRealKCBToVirtualPath(a1, a2, a5, &DestinationString);
  if ( v11 < 0 )
    goto LABEL_9;
  *a3 |= 8u;
  if ( !(unsigned __int8)CmpVirtualBranchIsReplicated(0LL, &DestinationString, v17)
    && ((*a3 & 1) == 0 || v13 || !v17[0]) )
  {
    goto LABEL_8;
  }
  Buffer = a4->Buffer;
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0);
  *a4 = DestinationString;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v11 = 260;
LABEL_9:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v9 )
    (*(void (__fastcall **)(__int64, __int64 *))(v10 + 16))(v10, &v19);
  if ( v8 )
    CmpUnblockHiveWrites(v8);
  return (unsigned int)v11;
}
