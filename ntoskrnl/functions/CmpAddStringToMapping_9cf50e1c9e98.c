__int64 __fastcall CmpAddStringToMapping(const void **a1, __int64 a2)
{
  unsigned int v4; // ebx
  char *v5; // rdx
  __int64 v6; // r9
  void *v7; // r9
  int v8; // eax
  __int64 v9; // r8
  PVOID v11; // rdi
  void *Pool2; // rax

  v4 = 0;
  ExAcquireFastMutex(&CmpSIDMappingLock);
  if ( CmpSIDToHiveMappingCount == -1 )
  {
    v4 = -1073741675;
    goto LABEL_5;
  }
  if ( CmpSIDToHiveMappingCount + 1 >= (unsigned int)CmpSIDToHiveMappingSize )
  {
    v11 = CmpSIDToHiveMapping;
    Pool2 = (void *)ExAllocatePool2(256LL, 32LL * (unsigned int)(CmpSIDToHiveMappingSize + 4), 1700154691LL);
    CmpSIDToHiveMapping = Pool2;
    if ( !Pool2 )
    {
      CmpSIDToHiveMapping = v11;
      goto LABEL_11;
    }
    CmpSIDToHiveMappingSize += 4;
    if ( v11 )
    {
      memmove(Pool2, v11, 32LL * (unsigned int)CmpSIDToHiveMappingCount);
      ExFreePoolWithTag(v11, 0x65564D43u);
    }
  }
  v5 = (char *)CmpSIDToHiveMapping;
  v6 = 32LL * (unsigned int)CmpSIDToHiveMappingCount;
  *(_QWORD *)((char *)CmpSIDToHiveMapping + v6 + 24) = a2;
  *(_WORD *)&v5[v6] = *(_WORD *)a1;
  *(_WORD *)&v5[v6 + 2] = *(_WORD *)a1;
  v7 = (void *)ExAllocatePool2(256LL, *(unsigned __int16 *)a1, 1700154691LL);
  *((_QWORD *)CmpSIDToHiveMapping + 4 * (unsigned int)CmpSIDToHiveMappingCount + 1) = v7;
  if ( !v7 )
  {
LABEL_11:
    v4 = -1073741670;
    goto LABEL_5;
  }
  memmove(v7, a1[1], *(unsigned __int16 *)a1);
  v8 = CmpHashUnicodeComponent(a1);
  v9 = 32LL * (unsigned int)CmpSIDToHiveMappingCount++;
  *(_DWORD *)((char *)CmpSIDToHiveMapping + v9 + 16) = v8;
LABEL_5:
  ExReleaseFastMutex(&CmpSIDMappingLock);
  return v4;
}
