__int64 __fastcall SmKmFileInfoDuplicate(_OWORD *a1, __int64 a2)
{
  NTSTATUS v4; // ebx
  void *v5; // rcx
  size_t v6; // rbx
  void *NonPaged; // rax
  int v8; // eax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  HANDLE TargetHandle[8]; // [rsp+40h] [rbp-40h] BYREF
  HANDLE TargetProcessHandle; // [rsp+B0h] [rbp+30h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+38h] BYREF

  TargetProcessHandle = 0LL;
  memset(TargetHandle, 0, sizeof(TargetHandle));
  v4 = ObOpenObjectByPointer(SmKmGlobals, 0x200u, 0LL, 0, 0LL, 0, &TargetProcessHandle);
  if ( v4 >= 0 )
  {
    if ( !*(_QWORD *)a2
      || (v4 = ZwDuplicateObject(TargetProcessHandle, *(HANDLE *)a2, TargetProcessHandle, TargetHandle, 0, 0, 6u),
          v4 >= 0)
      && (Object = 0LL,
          v4 = ObReferenceObjectByHandle(TargetHandle[0], 0x10003u, 0LL, 0, &Object, 0LL),
          TargetHandle[1] = Object,
          v4 >= 0) )
    {
      v5 = *(void **)(a2 + 16);
      if ( v5 )
      {
        TargetHandle[2] = *(HANDLE *)(a2 + 16);
        ObfReferenceObject(v5);
        TargetHandle[3] = *(HANDLE *)(a2 + 24);
      }
      v6 = (unsigned int)(16 * *(_DWORD *)(a2 + 56));
      NonPaged = (void *)SSHSupportAllocateNonPaged(v6, 0x74586D73u);
      TargetHandle[6] = NonPaged;
      if ( NonPaged )
      {
        memmove(NonPaged, *(const void **)(a2 + 48), v6);
        v8 = *(_DWORD *)(a2 + 56);
        v9 = *(_OWORD *)&TargetHandle[2];
        *a1 = *(_OWORD *)TargetHandle;
        LODWORD(TargetHandle[7]) = v8;
        v10 = *(_OWORD *)&TargetHandle[4];
        a1[1] = v9;
        v11 = *(_OWORD *)&TargetHandle[6];
        a1[2] = v10;
        a1[3] = v11;
        memset(TargetHandle, 0, sizeof(TargetHandle));
        v4 = 0;
      }
      else
      {
        v4 = -1073741670;
      }
    }
  }
  if ( TargetProcessHandle )
    ZwClose(TargetProcessHandle);
  SmKmFileInfoCleanup((__int64)TargetHandle);
  return (unsigned int)v4;
}
