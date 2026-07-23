/*
 * XREFs of VrpCreateNamespaceNode @ 0x1405D34B4
 * Callers:
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1405D2C9C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1408829FC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpPreLoadKey @ 0x1408834EC (VrpPreLoadKey.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     VrpFindBestMatchNamespaceNode @ 0x1405D29C8 (VrpFindBestMatchNamespaceNode.c)
 *     VrpCountPathComponents @ 0x1405D4DCC (VrpCountPathComponents.c)
 *     VrpGetNextToken @ 0x1405D52F4 (VrpGetNextToken.c)
 *     VrpStripTrailingCharacters @ 0x1405D53E4 (VrpStripTrailingCharacters.c)
 *     VrpBuildKeyPath @ 0x1405D5420 (VrpBuildKeyPath.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VrpCreateNamespaceNode(
        __int64 a1,
        const void **a2,
        void *a3,
        const void **a4,
        int a5,
        int a6,
        _QWORD *a7)
{
  int v7; // r13d
  int v11; // r12d
  int v12; // ebx
  __int64 v13; // r9
  char *PoolWithTag; // rax
  char *v15; // rdi
  int v16; // eax
  PVOID v17; // rax
  void *v18; // rcx
  __int16 v19; // ax
  PVOID v20; // rax
  void *v21; // rcx
  __int16 v22; // ax
  _QWORD *v23; // rax
  int v24; // ebx
  __int64 BestMatchNamespaceNode; // rax
  __int64 v27; // rsi
  int v28; // eax
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int16 v31; // ax
  void *v32; // rcx
  void *v33; // rcx
  void *v34; // rcx
  __int64 v35; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING String1; // [rsp+28h] [rbp-28h] BYREF
  UNICODE_STRING Source; // [rsp+38h] [rbp-18h] BYREF
  __int64 v38; // [rsp+80h] [rbp+30h] BYREF

  v7 = a6;
  v11 = a1;
  Source = 0LL;
  v38 = 0LL;
  String1 = 0LL;
  v35 = 0LL;
  if ( *(_DWORD *)(a1 + 84) )
    return (unsigned int)-1073741738;
  v12 = a5;
  if ( (a5 & 0xE0000007) != a5 )
    return (unsigned int)-1073741811;
  VrpStripTrailingCharacters(a2);
  VrpStripTrailingCharacters(v13);
  VrpGetNextToken(a2, &v38, &String1);
  if ( !RtlEqualUnicodeString(&String1, &VrpRegistryString, 1u) )
    return (unsigned int)-1073741811;
  VrpGetNextToken(a2, &v38, &String1);
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x67655256u);
  v15 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 0x48uLL);
  *((_DWORD *)v15 + 14) = v12;
  v16 = -1;
  if ( v7 )
    v16 = v7;
  *((_DWORD *)v15 + 15) = v16;
  v17 = ExAllocatePoolWithTag(PagedPool, *((unsigned __int16 *)a2 + 1), 0x67655256u);
  *((_QWORD *)v15 + 1) = v17;
  v18 = v17;
  if ( v17
    && (v19 = *(_WORD *)a2,
        *((_WORD *)v15 + 1) = *(_WORD *)a2,
        *(_WORD *)v15 = v19,
        memmove(v18, a2[1], *(unsigned __int16 *)a2),
        v20 = ExAllocatePoolWithTag(PagedPool, *((unsigned __int16 *)a4 + 1), 0x67655256u),
        *((_QWORD *)v15 + 4) = v20,
        (v21 = v20) != 0LL) )
  {
    v22 = *(_WORD *)a4;
    *((_WORD *)v15 + 12) = *(_WORD *)a4;
    *((_WORD *)v15 + 13) = v22;
    memmove(v21, a4[1], *(unsigned __int16 *)a4);
    *((_WORD *)v15 + 32) = VrpCountPathComponents(v15);
    *((_WORD *)v15 + 33) = VrpCountPathComponents(v15 + 24);
    VrpGetNextToken(a2, &v38, &String1);
    if ( !String1.Length )
    {
LABEL_10:
      if ( a3 )
        ObfReferenceObjectWithTag(a3, 0x67655256u);
      else
        a3 = 0LL;
      v23 = a7;
      v24 = 0;
      *((_QWORD *)v15 + 2) = a3;
      *v23 = v15;
      return (unsigned int)v24;
    }
    BestMatchNamespaceNode = VrpFindBestMatchNamespaceNode(v11, (int)v15, (__int64)&v35);
    v27 = BestMatchNamespaceNode;
    if ( !BestMatchNamespaceNode || (v28 = *(_DWORD *)(BestMatchNamespaceNode + 56), (v28 & 4) != 0) )
    {
      v24 = -1073741811;
    }
    else
    {
      v29 = v35;
      *((_DWORD *)v15 + 14) |= v28 & 2;
      v30 = 0LL;
      v38 = 0LL;
      if ( v29 )
      {
        do
        {
          VrpGetNextToken(v15, &v38, &String1);
          --v29;
        }
        while ( v29 );
        v30 = v38;
      }
      v31 = *(_WORD *)v15;
      Source.Buffer = (wchar_t *)(*((_QWORD *)v15 + 1) + 2 * v30);
      Source.Length = v31 - 2 * v30;
      Source.MaximumLength = Source.Length;
      v24 = VrpBuildKeyPath((PCUNICODE_STRING)(v27 + 24), &Source, (PUNICODE_STRING)(v15 + 40));
      if ( v24 >= 0 )
        goto LABEL_10;
    }
  }
  else
  {
    v24 = -1073741670;
  }
  v32 = (void *)*((_QWORD *)v15 + 1);
  if ( v32 )
    ExFreePoolWithTag(v32, 0x67655256u);
  v33 = (void *)*((_QWORD *)v15 + 4);
  if ( v33 )
    ExFreePoolWithTag(v33, 0x67655256u);
  v34 = (void *)*((_QWORD *)v15 + 6);
  if ( v34 )
    ExFreePoolWithTag(v34, 0x67655256u);
  ExFreePoolWithTag(v15, 0x67655256u);
  return (unsigned int)v24;
}
