/*
 * XREFs of SmIssueIo @ 0x1405CB0C8
 * Callers:
 *     ?StDeviceIoIssue@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z @ 0x1405C1E04 (-StDeviceIoIssue@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_PF_QUEUE@@@Z.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreReference @ 0x140356410 (SmKmStoreReference.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140356594 (SmKmStoreRefFromStoreIndex.c)
 *     SmKmIssueIo @ 0x1405C9144 (SmKmIssueIo.c)
 */

__int64 __fastcall SmIssueIo(unsigned __int64 a1, int a2, int a3, int a4, __int64 a5, unsigned __int64 a6)
{
  int v6; // esi
  __int64 v7; // r12
  unsigned __int64 v8; // rdi
  int v9; // r14d
  int v13; // edi
  bool v14; // zf
  unsigned __int64 v15; // rax
  void (*v16)(void *, struct _IO_STATUS_BLOCK *, unsigned int); // r8
  struct _EX_RUNDOWN_REF *v17; // rax
  _QWORD v19[2]; // [rsp+30h] [rbp-58h] BYREF
  int v20; // [rsp+40h] [rbp-48h]
  int v21; // [rsp+44h] [rbp-44h]
  int v22; // [rsp+48h] [rbp-40h]
  int v23; // [rsp+4Ch] [rbp-3Ch]
  __int64 v24; // [rsp+50h] [rbp-38h]
  int v25; // [rsp+98h] [rbp+10h]

  v25 = a2;
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 6728);
  v8 = a6 & 0xFFFFFFFFFFFFFFFEuLL;
  v9 = 0;
  if ( (a6 & 1) == 0 )
    v8 = a6;
  if ( (*(_DWORD *)(v8 + 28) & 4) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 6021) & 1) != 0 )
      return (unsigned int)-1073741058;
  }
  else
  {
    if ( !SmKmStoreReference(*(_QWORD *)(a1 + 6728), *(_DWORD *)(a1 + 6016)) )
      return (unsigned int)-1073741058;
    a2 = v25;
    v6 = 1;
  }
  if ( (a6 & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 6104));
    v9 = 1;
  }
  v24 = 0LL;
  v23 = *(_DWORD *)(a1 + 6208);
  v19[1] = a5;
  v22 = a2;
  v21 = a3;
  v14 = (*(_DWORD *)a1 & 0x2000) == 0;
  v20 = a4;
  v24 = a6 & 1;
  if ( v14 )
  {
    v15 = v8 + 48;
    *(_QWORD *)(v8 + 40) = a1;
    *(_DWORD *)(v8 + 32) = a4;
    v16 = (void (*)(void *, struct _IO_STATUS_BLOCK *, unsigned int))SmpDeviceIoCompletion;
  }
  else
  {
    v15 = v8 + 32;
    v8 = a1;
    v16 = (void (*)(void *, struct _IO_STATUS_BLOCK *, unsigned int))SmpIoCompletionApc;
  }
  v19[0] = v15;
  v13 = SmKmIssueIo((struct _SMKM_FILE_INFO *)(a1 + 6216), (__int64)v19, v16, (void *)v8, (*(_DWORD *)a1 >> 13) & 1);
  if ( v13 < 0 )
  {
    if ( v9 )
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 6104));
    if ( v6 )
    {
      v17 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(v7, *(_DWORD *)(a1 + 6016) & 0x3FF);
      ExReleaseRundownProtection_0(v17 + 1);
    }
  }
  return (unsigned int)v13;
}
