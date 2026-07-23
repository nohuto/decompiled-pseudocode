/*
 * XREFs of SmIssueIo @ 0x14059FD4C
 * Callers:
 *     ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x14059AA84 (-StDeviceIoIssue@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z.c)
 *     ?StStagingRegionIssueIo@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@K@Z @ 0x14059D074 (-StStagingRegionIssueIo@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     SmKmStoreReference @ 0x14028A7A8 (SmKmStoreReference.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14028A928 (SmKmStoreRefFromStoreIndex.c)
 *     SmKmIssueIo @ 0x14059E16C (SmKmIssueIo.c)
 */

__int64 __fastcall SmIssueIo(unsigned __int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int64 a6)
{
  int v6; // esi
  unsigned __int64 v7; // rdi
  int v8; // ebp
  int v9; // r15d
  int v10; // r12d
  int v13; // edi
  unsigned int v14; // edx
  unsigned __int64 v15; // rax
  void (*v16)(void *, struct _IO_STATUS_BLOCK *, unsigned int); // r8
  struct _EX_RUNDOWN_REF *v17; // rax
  _QWORD v19[2]; // [rsp+30h] [rbp-58h] BYREF
  int v20; // [rsp+40h] [rbp-48h]
  int v21; // [rsp+44h] [rbp-44h]
  int v22; // [rsp+48h] [rbp-40h]
  int v23; // [rsp+4Ch] [rbp-3Ch]
  __int64 v24; // [rsp+50h] [rbp-38h]

  v6 = 0;
  v7 = a6 & 0xFFFFFFFFFFFFFFFEuLL;
  v8 = 0;
  v9 = a4;
  v10 = a3;
  if ( (a6 & 1) == 0 )
    v7 = a6;
  if ( (*(_DWORD *)(v7 + 28) & 4) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 6021) & 1) != 0 )
      return (unsigned int)-1073741058;
  }
  else
  {
    if ( !SmKmStoreReference((__int64)&SmGlobals, *(_DWORD *)(a1 + 6016), a3, a4) )
      return (unsigned int)-1073741058;
    v6 = 1;
  }
  if ( (a6 & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 6104));
    v8 = 1;
  }
  v24 = 0LL;
  v14 = *(_DWORD *)a1;
  v23 = *(_DWORD *)(a1 + 6208);
  v19[1] = a5;
  v22 = a2;
  v21 = v10;
  v20 = v9;
  v24 = a6 & 1;
  if ( (v14 & 0x2000) != 0 )
  {
    v15 = v7 + 32;
    v7 = a1;
    v19[0] = v15;
    v16 = (void (*)(void *, struct _IO_STATUS_BLOCK *, unsigned int))SmpIoCompletionApc;
  }
  else
  {
    *(_QWORD *)(v7 + 40) = a1;
    v19[0] = v7 + 48;
    v16 = (void (*)(void *, struct _IO_STATUS_BLOCK *, unsigned int))SmpDeviceIoCompletion;
    *(_DWORD *)(v7 + 32) = v9;
    v14 = *(_DWORD *)a1;
  }
  v13 = SmKmIssueIo((struct _SMKM_FILE_INFO *)(a1 + 6216), (__int64)v19, v16, (void *)v7, (v14 >> 13) & 1);
  if ( v13 >= 0 )
  {
    v6 = 0;
    v8 = 0;
  }
  if ( v8 )
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 6104));
  if ( v6 )
  {
    v17 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, *(_DWORD *)(a1 + 6016) & 0x3FF);
    ExReleaseRundownProtection(v17 + 1);
  }
  return (unsigned int)v13;
}
