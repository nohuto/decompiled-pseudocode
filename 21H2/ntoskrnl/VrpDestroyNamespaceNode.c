/*
 * XREFs of VrpDestroyNamespaceNode @ 0x1405D3260
 * Callers:
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1405D2C9C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1405D2FAC (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpCleanupNamespace @ 0x1405D61B0 (VrpCleanupNamespace.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1408829FC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpPostUnloadKey @ 0x140883378 (VrpPostUnloadKey.c)
 *     VrpPreLoadKey @ 0x1408834EC (VrpPreLoadKey.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14034D0C0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwDeleteKey @ 0x1403FC000 (ZwDeleteKey.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     VrpFindExactNamespaceNode @ 0x1405D371C (VrpFindExactNamespaceNode.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VrpDestroyNamespaceNode(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // r12d
  unsigned __int64 v5; // rsi
  HANDLE v6; // rcx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rax
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  unsigned __int64 v14; // r8
  char *v15; // r14
  size_t v16; // rsi
  unsigned __int64 v17; // kr00_8
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r13
  size_t v23; // r14
  void *v24; // r15
  PVOID PoolWithTag; // rax
  void *v26; // rsi
  size_t v27; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp+48h] BYREF

  KeyHandle = 0LL;
  v2 = 0;
  if ( VrpFindExactNamespaceNode(a1, a2, &KeyHandle) != a2 )
    goto LABEL_4;
  v5 = a1[6];
  v2 = 1;
  v6 = KeyHandle;
  if ( (unsigned __int64)KeyHandle >= v5 )
    goto LABEL_4;
  v7 = a1[5];
  v8 = v7 * (_QWORD)KeyHandle;
  KeyHandle = 0LL;
  if ( !is_mul_ok(v7, (unsigned __int64)v6) )
    goto LABEL_4;
  v14 = a1[9];
  v15 = (char *)(v14 + v8);
  if ( v14 + v8 < v14 )
    goto LABEL_4;
  v16 = v5 - (_QWORD)v6 - 1;
  if ( v16 )
  {
    KeyHandle = 0LL;
    v17 = v16;
    v16 *= v7;
    if ( !is_mul_ok(v17, v7) )
      goto LABEL_4;
    KeyHandle = 0LL;
    v18 = v7 * ((_QWORD)v6 + 1);
    if ( !is_mul_ok(v7, (unsigned __int64)v6 + 1) || v14 + v18 < v14 )
      goto LABEL_4;
    memmove(v15, (const void *)(v14 + v18), v16);
    v7 = a1[5];
  }
  memset(&v15[v16], 0, v7);
  v19 = --a1[6];
  if ( v19 <= 0x10 )
    goto LABEL_4;
  v20 = a1[5];
  v21 = a1[7];
  if ( v21 * v20 < 0x400 )
    goto LABEL_4;
  if ( v19 >= v21 >> 2 )
    goto LABEL_4;
  v22 = v21 >> 1;
  KeyHandle = (HANDLE)(v21 * v20);
  if ( !is_mul_ok(v21, v20) )
    goto LABEL_4;
  v23 = v22 * v20;
  if ( !is_mul_ok(v22, v20) )
    goto LABEL_4;
  v24 = (void *)a1[9];
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v22 * v20, 0x72615452u);
  v26 = PoolWithTag;
  if ( !v24 )
  {
    if ( PoolWithTag )
      memset(PoolWithTag, 0, v23);
LABEL_34:
    if ( v26 )
    {
      a1[9] = v26;
      a1[7] = v22;
    }
    goto LABEL_4;
  }
  if ( PoolWithTag )
    memset(PoolWithTag, 0, v23);
  if ( v26 )
  {
    v27 = (size_t)KeyHandle;
    if ( (unsigned __int64)KeyHandle >= v23 )
      v27 = v23;
    memmove(v26, v24, v27);
    ExFreePoolWithTag(v24, 0x72615452u);
    goto LABEL_34;
  }
LABEL_4:
  if ( (*(_DWORD *)(a2 + 56) & 0xC0000000) == 0xC0000000 )
  {
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)(a2 + 40);
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
    {
      ZwDeleteKey(KeyHandle);
      ZwClose(KeyHandle);
    }
  }
  v9 = *(void **)(a2 + 16);
  if ( v9 )
    ObDereferenceObjectDeferDeleteWithTag(v9, 0x67655256u);
  v10 = *(void **)(a2 + 8);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x67655256u);
  v11 = *(void **)(a2 + 32);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x67655256u);
  v12 = *(void **)(a2 + 48);
  if ( v12 )
    ExFreePoolWithTag(v12, 0x67655256u);
  ExFreePoolWithTag((PVOID)a2, 0x67655256u);
  return v2;
}
