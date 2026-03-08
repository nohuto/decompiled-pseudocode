/*
 * XREFs of VrpDestroyNamespaceNode @ 0x140737134
 * Callers:
 *     VrpPreLoadKey @ 0x140735EB4 (VrpPreLoadKey.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140736258 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x140736B44 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpCleanupNamespace @ 0x140737928 (VrpCleanupNamespace.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140A6F45C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpPostUnloadKey @ 0x140A6FF3C (VrpPostUnloadKey.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140283390 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwDeleteKey @ 0x140413E50 (ZwDeleteKey.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     VrpFindExactNamespaceNode @ 0x140737324 (VrpFindExactNamespaceNode.c)
 *     ExAllocatePoolWithTag @ 0x140AAB230 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpDestroyNamespaceNode(size_t *a1, __int64 a2)
{
  unsigned int v2; // r15d
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
  unsigned __int64 v22; // r12
  size_t v23; // r14
  void *v24; // r13
  PVOID PoolWithTag; // rax
  void *v26; // rsi
  size_t v27; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp+48h] BYREF

  KeyHandle = 0LL;
  v2 = 0;
  if ( VrpFindExactNamespaceNode(a1, a2, &KeyHandle) == a2 )
  {
    v5 = a1[6];
    v2 = 1;
    v6 = KeyHandle;
    if ( (unsigned __int64)KeyHandle < v5 )
    {
      v7 = a1[5];
      v8 = v7 * (_QWORD)KeyHandle;
      KeyHandle = 0LL;
      if ( is_mul_ok(v7, (unsigned __int64)v6) )
      {
        v14 = a1[9];
        v15 = (char *)(v14 + v8);
        if ( v14 + v8 >= v14 )
        {
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
          }
          memset(&v15[v16], 0, a1[5]);
          v19 = a1[6] - 1;
          a1[6] = v19;
          if ( v19 > 0x10 )
          {
            v20 = a1[5];
            v21 = a1[7];
            if ( v21 * v20 >= 0x400 && v19 < v21 >> 2 )
            {
              v22 = v21 >> 1;
              KeyHandle = (HANDLE)(v21 * v20);
              if ( is_mul_ok(v21, v20) )
              {
                v23 = v22 * v20;
                if ( is_mul_ok(v22, v20) )
                {
                  v24 = (void *)a1[9];
                  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v22 * v20, 0x72615452u);
                  v26 = PoolWithTag;
                  if ( v24 )
                  {
                    if ( !PoolWithTag )
                      goto LABEL_4;
                    memset(PoolWithTag, 0, v23);
                    v27 = (size_t)KeyHandle;
                    if ( (unsigned __int64)KeyHandle >= v23 )
                      v27 = v23;
                    memmove(v26, v24, v27);
                    ExFreePoolWithTag(v24, 0x72615452u);
                    goto LABEL_28;
                  }
                  if ( PoolWithTag )
                    memset(PoolWithTag, 0, v23);
                  if ( v26 )
                  {
LABEL_28:
                    a1[9] = (size_t)v26;
                    a1[7] = v22;
                  }
                }
              }
            }
          }
        }
      }
    }
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
