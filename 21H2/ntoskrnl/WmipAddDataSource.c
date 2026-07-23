/*
 * XREFs of WmipAddDataSource @ 0x140756A68
 * Callers:
 *     WmipProcessWmiRegInfo @ 0x1407570F8 (WmipProcessWmiRegInfo.c)
 *     WmipInitializeDataStructs @ 0x140A6AEBC (WmipInitializeDataStructs.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F92F0 (KeReleaseMutex.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     WmipUnreferenceEntry @ 0x14062E428 (WmipUnreferenceEntry.c)
 *     WmipBuildInstanceSet @ 0x140756D98 (WmipBuildInstanceSet.c)
 *     WmipCountedToSz @ 0x140757A70 (WmipCountedToSz.c)
 *     WmipGenerateRegistrationNotification @ 0x140757AE0 (WmipGenerateRegistrationNotification.c)
 *     WmipLinkDataSourceToList @ 0x1407580B0 (WmipLinkDataSourceToList.c)
 *     WmipAllocEntry @ 0x140758280 (WmipAllocEntry.c)
 *     WmipAddMofResource @ 0x1407BEAAC (WmipAddMofResource.c)
 *     WmipLegacyEtwWorker @ 0x1407C54E0 (WmipLegacyEtwWorker.c)
 *     WmipGenerateMofResourceNotification @ 0x1407C5AF0 (WmipGenerateMofResourceNotification.c)
 *     WmipGenerateBinaryMofNotification @ 0x1407D12DC (WmipGenerateBinaryMofNotification.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipAddDataSource(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  int v6; // edi
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rsi
  unsigned int v12; // r15d
  int v13; // eax
  int v14; // eax
  _QWORD **v15; // r14
  char v16; // r13
  __int64 v17; // rdx
  int v18; // edi
  __int64 v19; // rax
  _WORD *v20; // rsi
  _WORD *v21; // rdi
  _QWORD *v23; // rsi
  _QWORD **v24; // r14
  _QWORD *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rdx
  bool v30; // zf
  _QWORD *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // r14
  _QWORD *v34; // rax
  _QWORD *v35; // r15
  _QWORD *v36; // rcx
  __int64 v37; // rax
  _QWORD *v38; // rax
  char v39[8]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v40; // [rsp+38h] [rbp-28h]
  __int128 v41; // [rsp+40h] [rbp-20h] BYREF
  __int128 v42; // [rsp+50h] [rbp-10h] BYREF
  char v43; // [rsp+A0h] [rbp+40h]

  v5 = *(_QWORD *)(a1 + 32);
  v40 = 0LL;
  v39[0] = 0;
  v6 = a3;
  v43 = 0;
  v41 = 0LL;
  v42 = 0LL;
  if ( !v5 )
  {
    v9 = WmipAllocEntry(&WmipDSChunkInfo);
    v5 = v9;
    if ( v9 )
    {
      v10 = (_QWORD *)(v9 + 40);
      *(_DWORD *)(v5 + 64) = 4;
      v10[1] = v10;
      *v10 = v10;
      *(_QWORD *)(v5 + 72) = v5 + 80;
      *(_OWORD *)(v5 + 80) = 0LL;
      *(_OWORD *)(v5 + 96) = 0LL;
    }
    if ( !v5 )
      return (unsigned int)-1073741670;
    *(_DWORD *)(v5 + 56) = *(_DWORD *)(a1 + 56);
    v43 = 1;
  }
  v11 = a2 + 24;
  v12 = 0;
  if ( !*(_DWORD *)(a2 + 16) )
  {
LABEL_10:
    v14 = *(_DWORD *)(a1 + 48) & 0x40000000;
    if ( v14 )
    {
      *((_QWORD *)&v41 + 1) = &v41;
      *(_QWORD *)&v41 = &v41;
      *((_QWORD *)&v42 + 1) = &v42;
      *(_QWORD *)&v42 = &v42;
    }
    v15 = (_QWORD **)((unsigned __int64)&v41 & -(__int64)(v14 != 0));
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    v16 = v43;
    LOBYTE(v17) = v43;
    v18 = WmipLinkDataSourceToList(v5, v17, v15);
    KeReleaseMutex(&WmipSMMutex, 0);
    if ( v15 )
    {
      while ( 1 )
      {
        v23 = *v15;
        if ( *v15 == v15 )
          break;
        if ( (_QWORD **)v23[1] != v15 )
          goto LABEL_61;
        v34 = (_QWORD *)*v23;
        if ( *(_QWORD **)(*v23 + 8LL) != v23 )
          goto LABEL_61;
        *v15 = v34;
        v34[1] = v15;
        WmipLegacyEtwWorker(v23[2]);
        v35 = v23 + 5;
        while ( 1 )
        {
          v36 = (_QWORD *)*v35;
          if ( (_QWORD *)*v35 == v35 )
            break;
          if ( (_QWORD *)v36[1] != v35 )
            goto LABEL_61;
          v37 = *v36;
          if ( *(_QWORD **)(*v36 + 8LL) != v36 )
            goto LABEL_61;
          *v35 = v37;
          *(_QWORD *)(v37 + 8) = v35;
          KeSetEvent((PRKEVENT)(v36 + 2), 0, 0);
        }
        ExFreePoolWithTag(v23, 0x70696D57u);
      }
      v24 = v15 + 2;
      while ( 1 )
      {
        v25 = *v24;
        if ( *v24 == v24 )
          break;
        if ( (_QWORD **)v25[1] != v24 )
          goto LABEL_61;
        v38 = (_QWORD *)*v25;
        if ( *(_QWORD **)(*v25 + 8LL) != v25 )
          goto LABEL_61;
        *v24 = v38;
        v38[1] = v24;
        KeWaitForSingleObject(v25 + 4, Executive, 0, 0, 0LL);
        ExFreePoolWithTag(v25, 0x70696D57u);
      }
    }
    if ( v18 >= 0 )
    {
      v19 = v40;
      *(_QWORD *)(a1 + 32) = v5;
      if ( v19 )
        WmipGenerateBinaryMofNotification(v19, &GUID_MOF_RESOURCE_ADDED_NOTIFICATION);
      if ( a4 )
        v20 = (_WORD *)WmipCountedToSz(a4);
      else
        v20 = 0LL;
      if ( a5 )
        v21 = (_WORD *)WmipCountedToSz(a5);
      else
        v21 = 0LL;
      if ( v20 )
      {
        if ( *v20 && v21 && *v21 && (int)WmipAddMofResource(v5, v20, 0LL, v21, v39) >= 0 && v39[0] )
          WmipGenerateMofResourceNotification(v20, v21);
        ExFreePoolWithTag(v20, 0);
      }
      if ( v21 )
        ExFreePoolWithTag(v21, 0);
      WmipGenerateRegistrationNotification(v5, 1LL);
      v5 = 0LL;
      v18 = 0;
    }
    goto LABEL_28;
  }
  while ( 1 )
  {
    v13 = *(_DWORD *)(v11 + 16);
    if ( (v13 & 0x10000) != 0 || (v13 & 0x81000) == 0x80000 )
      goto LABEL_9;
    v26 = WmipAllocEntry(&WmipISChunkInfo);
    v27 = v26;
    if ( !v26 )
      break;
    *(_DWORD *)(v26 + 16) |= 8u;
    *(_QWORD *)(v26 + 56) = v11;
    *(_QWORD *)(v26 + 64) = v5;
    v18 = WmipBuildInstanceSet(v11, a2, v6, v26, *(_DWORD *)(v5 + 56));
    v28 = *(_QWORD *)v11 - WmipBinaryMofGuid;
    if ( *(_QWORD *)v11 == WmipBinaryMofGuid )
      v28 = *(_QWORD *)(v11 + 8) - 0x102906C9A000F0B2LL;
    v29 = v40;
    v30 = v28 == 0;
    v31 = (_QWORD *)(v5 + 40);
    v32 = *(_QWORD *)(v5 + 40);
    if ( v30 )
      v29 = v27;
    v33 = (_QWORD *)(v27 + 40);
    v40 = v29;
    if ( *(_QWORD **)(v32 + 8) != v31 )
LABEL_61:
      __fastfail(3u);
    *v33 = v32;
    v33[1] = v31;
    *(_QWORD *)(v32 + 8) = v33;
    *v31 = v33;
    if ( v18 < 0 )
      goto LABEL_47;
    v6 = a3;
LABEL_9:
    ++v12;
    v11 += 32LL;
    if ( v12 >= *(_DWORD *)(a2 + 16) )
      goto LABEL_10;
  }
  v18 = -1073741670;
LABEL_47:
  v16 = v43;
LABEL_28:
  if ( v5 && v16 )
  {
    *(_DWORD *)(v5 + 16) |= 1u;
    WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, (volatile signed __int64 *)v5);
  }
  return (unsigned int)v18;
}
