/*
 * XREFs of CmpRmUnDoPhase @ 0x140A1C3B4
 * Callers:
 *     CmpStartRMLog @ 0x140863C7C (CmpStartRMLog.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenTransaction @ 0x140414A30 (ZwOpenTransaction.c)
 *     CmpTransMgrPrepare @ 0x1406B5D04 (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1406B5ED0 (CmpTransMgrCommit.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406B617C (CmpTransMgrFreeVolatileData.c)
 *     CmpTransMgrRollback @ 0x140781FE8 (CmpTransMgrRollback.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     CmListGetNextElement @ 0x140AF2008 (CmListGetNextElement.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpRmUnDoPhase(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  int v6; // edx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // [rsp+28h] [rbp-39h]
  _BYTE v10[4]; // [rsp+38h] [rbp-29h] BYREF
  _DWORD v11[3]; // [rsp+3Ch] [rbp-25h] BYREF
  __int64 v12; // [rsp+48h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp+1Fh] BYREF

  memset(v11, 0, sizeof(v11));
  memset(&ObjectAttributes, 0, 44);
  v10[0] = 0;
  memset(&ApcState, 0, sizeof(ApcState));
LABEL_2:
  v12 = 0LL;
  while ( 1 )
  {
    result = CmListGetNextElement(a1 + 16, &v12, 0LL);
    v4 = (_QWORD *)result;
    if ( !result )
      return result;
    if ( (*(_DWORD *)(result + 48) & 2) != 0 )
    {
      CmpTransMgrRollback(result, v11);
      CmpAttachToRegistryProcess(&ApcState);
      v6 = 8;
LABEL_12:
      CmpTransMgrFreeVolatileData((ULONG_PTR)v4, v6);
      CmpDetachFromRegistryProcess(&ApcState);
      v7 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v8 = (_QWORD *)v4[1], (_QWORD *)*v8 != v4) )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      ExFreePoolWithTag(v4, 0x72544D43u);
      goto LABEL_2;
    }
    ObjectAttributes.RootDirectory = (HANDLE)((__int64)ObjectAttributes.RootDirectory & v3);
    ObjectAttributes.ObjectName = (PUNICODE_STRING)((__int64)ObjectAttributes.ObjectName & v3);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenTransaction((PHANDLE)&v11[1], 0x1F003Fu, &ObjectAttributes, (LPGUID)(result + 88), (HANDLE)(v3 & v9)) < 0 )
    {
      if ( (int)CmpTransMgrPrepare(a1, (__int64)v4, v11, v10) < 0 || (int)CmpTransMgrCommit(v5, (__int64)v4, v11) < 0 )
      {
        *((_DWORD *)v4 + 12) |= 2u;
        goto LABEL_2;
      }
      CmpAttachToRegistryProcess(&ApcState);
      v6 = 4;
      goto LABEL_12;
    }
    ZwClose(*(HANDLE *)&v11[1]);
  }
}
