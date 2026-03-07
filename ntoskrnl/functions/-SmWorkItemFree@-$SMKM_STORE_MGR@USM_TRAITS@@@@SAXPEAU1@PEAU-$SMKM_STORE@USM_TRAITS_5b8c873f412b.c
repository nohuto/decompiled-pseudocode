void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(__int64 a1, __int64 a2, __int128 *a3, unsigned int *a4)
{
  struct _MDL *v4; // r14
  unsigned int v5; // edi
  int v7; // esi
  __int128 v10; // xmm1
  union _SLIST_HEADER *v11; // rcx
  BOOL v12; // ebx
  int v13; // eax
  struct _EX_RUNDOWN_REF *v14; // rax
  __int128 v15; // [rsp+20h] [rbp-58h] BYREF
  __int128 v16; // [rsp+30h] [rbp-48h]
  __int64 v17; // [rsp+40h] [rbp-38h]

  v4 = (struct _MDL *)*((_QWORD *)a3 + 4);
  v5 = *(_DWORD *)a3 & 7;
  v7 = 1;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( a4 )
  {
    v10 = a3[1];
    v15 = *a3;
    v17 = *((_QWORD *)a3 + 4);
    v16 = v10;
  }
  if ( v5 < 4 )
  {
    if ( v5 == 2 )
    {
      if ( (*((_DWORD *)a3 + 2) & 0x4000000) != 0 )
      {
        v11 = (union _SLIST_HEADER *)(a1 + 1248);
        if ( LOWORD(v11->Alignment) >= 0x1000u )
        {
          ExFreePoolWithTag(a3, 0);
LABEL_13:
          v12 = v5 == 1;
          goto LABEL_23;
        }
LABEL_11:
        RtlpInterlockedPushEntrySList(v11, (PSLIST_ENTRY)a3);
        goto LABEL_13;
      }
    }
    else if ( !v5 && *((int *)a3 + 2) < 0 )
    {
      *(_QWORD *)&v16 = **((_QWORD **)a3 + 2);
      v11 = (union _SLIST_HEADER *)(a1 + 1408);
      goto LABEL_11;
    }
    SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(a1, a3, v4);
    goto LABEL_13;
  }
  v13 = *((_DWORD *)a3 + 2) & 7;
  if ( v5 == 5 )
  {
    if ( v13 )
    {
      v12 = 0;
      ExFreePoolWithTag(a3, 0);
      goto LABEL_23;
    }
LABEL_20:
    ExFreePoolWithTag(a3, 0);
LABEL_28:
    v14 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, *(_DWORD *)(a2 + 6016) & 0x3FF);
    ExReleaseRundownProtection_0(v14 + 1);
    return;
  }
  v12 = 0;
  if ( !v13 )
  {
    *((_QWORD *)a3 + 4) = 0LL;
    goto LABEL_23;
  }
  if ( v13 == 3 )
    goto LABEL_20;
  if ( (unsigned int)(v13 - 1) <= 1 )
    v7 = 0;
LABEL_23:
  if ( !a4
    || (unsigned int)((__int64 (__fastcall *)(__int128 *, _QWORD, __int64, _QWORD))SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxWorkItemComplete)(
                       &v15,
                       *(_QWORD *)(a2 + 6728),
                       a2,
                       *a4) )
  {
    if ( v12 )
      SmFpFree(a1 + 1424, 0, (__int64)v4, v4);
  }
  if ( v7 )
    goto LABEL_28;
}
