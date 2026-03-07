__int64 __fastcall PnpGetResourceRequirementsForAssignTable(unsigned __int64 a1, unsigned __int64 a2, _DWORD *a3)
{
  unsigned __int64 v5; // rbx
  int v6; // eax
  _QWORD *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  int v11; // eax
  void *v13; // rcx
  int v14; // esi
  __int64 v15; // rdi
  unsigned int v16; // ecx
  unsigned int v17; // eax
  void *v18; // rcx
  int v19; // [rsp+60h] [rbp+8h] BYREF
  int v20; // [rsp+68h] [rbp+10h]
  __int64 v21; // [rsp+70h] [rbp+18h]

  v19 = 0;
  v20 = 0;
  v21 = 0LL;
  *a3 = 0;
  if ( a1 < a2 )
  {
    v5 = a1 + 24;
    while ( 1 )
    {
      v6 = *(_DWORD *)(v5 - 16);
      v7 = (_QWORD *)(v5 + 8);
      *(_QWORD *)(v5 + 8) = 0LL;
      if ( (v6 & 0x20) == 0 )
        break;
LABEL_13:
      v5 += 64LL;
      if ( v5 - 24 >= a2 )
        return *a3 == 0 ? 0xC0000001 : 0;
    }
    *(_QWORD *)(v5 + 16) = 0LL;
    v8 = *(_QWORD *)(v5 - 24);
    *(_QWORD *)(v5 + 24) = 0LL;
    if ( v8 )
      v9 = *(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL);
    else
      v9 = 0LL;
    ExAcquireFastMutex(&PiResourceListLock);
    if ( (*(_DWORD *)(v9 + 396) & 0x400) != 0 )
    {
      v18 = *(void **)(v9 + 440);
      if ( v18 )
      {
        ExFreePoolWithTag(v18, 0);
        *(_QWORD *)(v9 + 440) = 0LL;
        PipClearDevNodeFlags(v9, 512);
        *(_DWORD *)(v5 - 16) |= 0x400u;
      }
    }
    ExReleaseFastMutex(&PiResourceListLock);
    if ( !*(_QWORD *)v5 )
    {
      v10 = *(_QWORD *)(v9 + 440);
      if ( !v10 || (*(_DWORD *)(v9 + 396) & 0x200) != 0 )
      {
        v11 = IopQueryDeviceResources(*(_QWORD *)(v5 - 24), 1LL, v5, &v19);
        if ( v11 < 0 || !*(_QWORD *)v5 )
        {
          *(_DWORD *)(v5 + 32) = v11;
LABEL_12:
          *(_DWORD *)(v5 - 16) |= 0x20u;
          goto LABEL_13;
        }
        ExAcquireFastMutex(&PiResourceListLock);
        v13 = *(void **)(v9 + 440);
        if ( v13 )
        {
          ExFreePoolWithTag(v13, 0);
          PipClearDevNodeFlags(v9, 512);
        }
        *(_QWORD *)(v9 + 440) = *(_QWORD *)v5;
        ExReleaseFastMutex(&PiResourceListLock);
      }
      else
      {
        *(_QWORD *)v5 = v10;
        *(_DWORD *)(v5 - 12) = 4;
      }
    }
    if ( (*(_DWORD *)(v5 - 16) & 0x200) != 0 )
    {
      if ( (int)PnpFilterResourceRequirementsList(*(void **)v5) >= 0 && v21 )
        *(_QWORD *)v5 = v21;
      else
        *(_DWORD *)(v5 - 16) &= ~0x200u;
    }
    v14 = IopResourceRequirementsListToReqList(v5 - 24, v5 + 8);
    if ( v14 >= 0 )
    {
      v15 = *v7;
      if ( *v7 )
      {
        IopRearrangeReqList(*v7);
        if ( *(_QWORD *)(v15 + 24) )
        {
          v16 = *(_DWORD *)(v15 + 32);
          v17 = 0;
          *(_DWORD *)(v5 + 32) = v14;
          if ( v16 >= 3 )
            v17 = v16;
          ++*a3;
          *(_DWORD *)(v5 - 8) = v17;
          goto LABEL_13;
        }
        PnpFreeResourceRequirementsForAssignTable(v5 - 24, v5 + 40);
        v14 = -1073741438;
      }
    }
    *(_DWORD *)(v5 + 32) = v14;
    goto LABEL_12;
  }
  return *a3 == 0 ? 0xC0000001 : 0;
}
