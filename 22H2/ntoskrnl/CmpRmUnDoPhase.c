/*
 * XREFs of CmpRmUnDoPhase @ 0x140875A44
 * Callers:
 *     CmpStartRMLog @ 0x14077D3E4 (CmpStartRMLog.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwOpenTransaction @ 0x1403FC040 (ZwOpenTransaction.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmListGetNextElement @ 0x14066EA14 (CmListGetNextElement.c)
 *     CmpTransMgrFreeVolatileData @ 0x14071C8A0 (CmpTransMgrFreeVolatileData.c)
 *     CmpTransMgrPrepare @ 0x140768324 (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1407684C0 (CmpTransMgrCommit.c)
 *     CmpTransMgrRollback @ 0x140770D50 (CmpTransMgrRollback.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

char *__fastcall CmpRmUnDoPhase(__int64 a1)
{
  char *result; // rax
  __int64 v3; // r8
  char *v4; // rbx
  __int64 v5; // rcx
  _DWORD *v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  _DWORD *v9; // r9
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  __int64 v14; // rcx
  char **v15; // rax
  __int64 v16; // [rsp+28h] [rbp-39h]
  char v17[4]; // [rsp+38h] [rbp-29h] BYREF
  int v18; // [rsp+3Ch] [rbp-25h] BYREF
  HANDLE TransactionHandle; // [rsp+40h] [rbp-21h] BYREF
  _QWORD *v20; // [rsp+48h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-11h] BYREF
  _OWORD v22[3]; // [rsp+80h] [rbp+1Fh] BYREF

  TransactionHandle = 0LL;
  v18 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v17[0] = 0;
  memset(v22, 0, sizeof(v22));
LABEL_2:
  v20 = 0LL;
  while ( 1 )
  {
    result = CmListGetNextElement((_QWORD **)(a1 + 16), &v20, 0);
    v4 = result;
    if ( !result )
      return result;
    if ( (*((_DWORD *)result + 12) & 2) != 0 )
    {
      CmpTransMgrRollback((__int64)result, &v18);
      CmpAttachToRegistryProcess((__int64)v22, v11, v12, v13);
      v10 = 8;
LABEL_12:
      CmpTransMgrFreeVolatileData((ULONG_PTR)v4, v10);
      KiUnstackDetachProcess((__int64)v22, 0);
      v14 = *(_QWORD *)v4;
      if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || (v15 = (char **)*((_QWORD *)v4 + 1), *v15 != v4) )
        __fastfail(3u);
      *v15 = (char *)v14;
      *(_QWORD *)(v14 + 8) = v15;
      ExFreePoolWithTag(v4, 0x72544D43u);
      goto LABEL_2;
    }
    ObjectAttributes.RootDirectory = (HANDLE)((__int64)ObjectAttributes.RootDirectory & v3);
    ObjectAttributes.ObjectName = (PUNICODE_STRING)((__int64)ObjectAttributes.ObjectName & v3);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenTransaction(&TransactionHandle, 0x1F003Fu, &ObjectAttributes, (LPGUID)(result + 88), (HANDLE)(v3 & v16)) < 0 )
    {
      if ( (int)CmpTransMgrPrepare(a1, (__int64)v4, &v18, v17) < 0
        || (int)CmpTransMgrCommit(v5, (__int64)v4, &v18, v6) < 0 )
      {
        *((_DWORD *)v4 + 12) |= 2u;
        goto LABEL_2;
      }
      CmpAttachToRegistryProcess((__int64)v22, v7, v8, v9);
      v10 = 4;
      goto LABEL_12;
    }
    ZwClose(TransactionHandle);
  }
}
