/*
 * XREFs of WmipAddDataSource @ 0x140867978
 * Callers:
 *     WmipProcessWmiRegInfo @ 0x140867FA4 (WmipProcessWmiRegInfo.c)
 *     WmipInitializeDataStructs @ 0x140B540A4 (WmipInitializeDataStructs.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     WmipCountedToSz @ 0x14069C5C0 (WmipCountedToSz.c)
 *     WmipUnreferenceEntry @ 0x14069C9D0 (WmipUnreferenceEntry.c)
 *     WmipAddMofResource @ 0x1408199DC (WmipAddMofResource.c)
 *     WmipGenerateMofResourceNotification @ 0x14084DD30 (WmipGenerateMofResourceNotification.c)
 *     WmipGenerateBinaryMofNotification @ 0x14084FEDC (WmipGenerateBinaryMofNotification.c)
 *     WmipBuildInstanceSet @ 0x140867C6C (WmipBuildInstanceSet.c)
 *     WmipLinkDataSourceToList @ 0x1408681AC (WmipLinkDataSourceToList.c)
 *     WmipGenerateRegistrationNotification @ 0x1408682E0 (WmipGenerateRegistrationNotification.c)
 *     WmipAllocEntry @ 0x140868798 (WmipAllocEntry.c)
 *     WmipProcessSynchronousEtw @ 0x1408689F0 (WmipProcessSynchronousEtw.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipAddDataSource(__int64 a1, __int64 a2, int a3, unsigned __int16 *a4, unsigned __int16 *a5)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v8; // r12
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rsi
  unsigned int i; // r13d
  int v13; // eax
  int v14; // eax
  unsigned __int64 v15; // rsi
  char v16; // r14
  __int64 v17; // rdx
  int v18; // edi
  wchar_t *v19; // rsi
  wchar_t *v20; // rdi
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // rax
  bool v25; // zf
  _QWORD *v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // r14
  char v29[8]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v30; // [rsp+38h] [rbp-30h] BYREF
  _OWORD v31[2]; // [rsp+48h] [rbp-20h] BYREF
  char v32; // [rsp+B0h] [rbp+48h]

  v5 = *(_QWORD *)(a1 + 32);
  v29[0] = 0;
  v32 = 0;
  v6 = a2;
  v8 = 0LL;
  v30 = 0LL;
  v31[0] = 0LL;
  if ( !v5 )
  {
    v9 = WmipAllocEntry(&WmipDSChunkInfo);
    v5 = v9;
    if ( !v9 )
      return (unsigned int)-1073741670;
    v10 = (_QWORD *)(v9 + 40);
    *(_DWORD *)(v5 + 64) = 4;
    v32 = 1;
    v10[1] = v10;
    *v10 = v10;
    *(_QWORD *)(v5 + 72) = v5 + 80;
    *(_OWORD *)(v5 + 80) = 0LL;
    *(_OWORD *)(v5 + 96) = 0LL;
    *(_DWORD *)(v5 + 56) = *(_DWORD *)(a1 + 56);
  }
  v11 = v6 + 24;
  for ( i = 0; i < *(_DWORD *)(v6 + 16); ++i )
  {
    v13 = *(_DWORD *)(v11 + 16);
    if ( (v13 & 0x10000) == 0 && (v13 & 0x81000) != 0x80000 )
    {
      v22 = WmipAllocEntry(&WmipISChunkInfo);
      v23 = v22;
      if ( !v22 )
      {
        v18 = -1073741670;
LABEL_43:
        v16 = v32;
LABEL_41:
        if ( v5 && v16 )
        {
          *(_DWORD *)(v5 + 16) |= 1u;
          WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, (volatile signed __int64 *)v5);
        }
        return (unsigned int)v18;
      }
      *(_DWORD *)(v22 + 16) |= 8u;
      *(_QWORD *)(v22 + 56) = v11;
      *(_QWORD *)(v22 + 64) = v5;
      v18 = WmipBuildInstanceSet(v11, v6, a3, v22, *(_DWORD *)(v5 + 56));
      v24 = *(_QWORD *)v11 - WmipBinaryMofGuid;
      if ( *(_QWORD *)v11 == WmipBinaryMofGuid )
        v24 = *(_QWORD *)(v11 + 8) - 0x102906C9A000F0B2LL;
      v25 = v24 == 0;
      v26 = (_QWORD *)(v5 + 40);
      v27 = *(_QWORD *)(v5 + 40);
      if ( v25 )
        v8 = v23;
      v28 = (_QWORD *)(v23 + 40);
      if ( *(_QWORD **)(v27 + 8) != v26 )
        __fastfail(3u);
      *v28 = v27;
      v28[1] = v26;
      *(_QWORD *)(v27 + 8) = v28;
      *v26 = v28;
      if ( v18 < 0 )
        goto LABEL_43;
      v6 = a2;
    }
    v11 += 32LL;
  }
  v14 = *(_DWORD *)(a1 + 48) & 0x40000000;
  if ( v14 )
  {
    *((_QWORD *)&v30 + 1) = &v30;
    *(_QWORD *)&v30 = &v30;
    *((_QWORD *)&v31[0] + 1) = v31;
    *(_QWORD *)&v31[0] = v31;
  }
  v15 = (unsigned __int64)&v30 & -(__int64)(v14 != 0);
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v16 = v32;
  LOBYTE(v17) = v32;
  v18 = WmipLinkDataSourceToList(v5, v17, v15);
  KeReleaseMutex(&WmipSMMutex, 0);
  if ( v15 )
    WmipProcessSynchronousEtw(v15);
  if ( v18 < 0 )
    goto LABEL_41;
  *(_QWORD *)(a1 + 32) = v5;
  if ( v8 )
    WmipGenerateBinaryMofNotification(v8, &GUID_MOF_RESOURCE_ADDED_NOTIFICATION);
  if ( a4 )
    v19 = WmipCountedToSz(a4);
  else
    v19 = 0LL;
  if ( a5 )
    v20 = WmipCountedToSz(a5);
  else
    v20 = 0LL;
  if ( v19 )
  {
    if ( *v19 && v20 && *v20 && (int)WmipAddMofResource(v5, v19, 0, v20, v29) >= 0 && v29[0] )
      WmipGenerateMofResourceNotification(v19, v20, &GUID_MOF_RESOURCE_ADDED_NOTIFICATION, 1);
    ExFreePoolWithTag(v19, 0);
  }
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  WmipGenerateRegistrationNotification(v5, 1LL);
  return 0;
}
