__int64 __fastcall VrpCreateNamespaceNode(
        __int64 a1,
        unsigned __int16 *a2,
        void *a3,
        unsigned __int16 *a4,
        int a5,
        int a6,
        __int64 *a7)
{
  int v7; // esi
  int v12; // ebx
  __int64 Pool2; // rax
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rax
  void *v17; // rcx
  unsigned __int16 v18; // ax
  PVOID *v19; // rsi
  void *v20; // rcx
  unsigned __int16 v21; // ax
  __int64 BestMatchNamespaceNode; // rax
  __int64 v23; // r15
  int v24; // eax
  __int64 v25; // rbx
  __int64 v26; // rdx
  unsigned __int16 v27; // ax
  int v28; // ebx
  __int64 *v29; // rax
  void *v31; // rcx
  void *v32; // rcx
  __int64 v33; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING String1; // [rsp+28h] [rbp-28h] BYREF
  UNICODE_STRING Source; // [rsp+38h] [rbp-18h] BYREF
  __int64 v36; // [rsp+80h] [rbp+30h] BYREF

  v7 = a6;
  Source = 0LL;
  v36 = 0LL;
  String1 = 0LL;
  v33 = 0LL;
  if ( *(_DWORD *)(a1 + 84) )
    return (unsigned int)-1073741738;
  v12 = a5;
  if ( (a5 & 0xE0000007) != a5 )
    return (unsigned int)-1073741811;
  VrpStripTrailingCharacters(a2);
  VrpStripTrailingCharacters(a4);
  VrpGetNextToken(a2, &v36, (__int64)&String1);
  if ( !RtlEqualUnicodeString(&String1, &VrpRegistryString, 1u) )
    return (unsigned int)-1073741811;
  VrpGetNextToken(a2, &v36, (__int64)&String1);
  Pool2 = ExAllocatePool2(256LL, 72LL, 1734693462LL);
  v14 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  *(_DWORD *)(Pool2 + 56) = v12;
  v15 = -1;
  if ( v7 )
    v15 = v7;
  *(_DWORD *)(v14 + 60) = v15;
  v16 = ExAllocatePool2(256LL, a2[1], 1734693462LL);
  *(_QWORD *)(v14 + 8) = v16;
  v17 = (void *)v16;
  if ( v16 )
  {
    v18 = *a2;
    *(_WORD *)(v14 + 2) = *a2;
    *(_WORD *)v14 = v18;
    memmove(v17, *((const void **)a2 + 1), *a2);
    v19 = (PVOID *)(v14 + 32);
    v20 = (void *)ExAllocatePool2(256LL, a4[1], 1734693462LL);
    *(_QWORD *)(v14 + 32) = v20;
    if ( v20 )
    {
      v21 = *a4;
      *(_WORD *)(v14 + 24) = *a4;
      *(_WORD *)(v14 + 26) = v21;
      memmove(v20, *((const void **)a4 + 1), *a4);
      *(_WORD *)(v14 + 64) = VrpCountPathComponents(v14);
      *(_WORD *)(v14 + 66) = VrpCountPathComponents(v14 + 24);
      VrpGetNextToken(a2, &v36, (__int64)&String1);
      if ( !String1.Length )
      {
LABEL_16:
        if ( a3 )
          ObfReferenceObjectWithTag(a3, 0x67655256u);
        else
          a3 = 0LL;
        v29 = a7;
        v28 = 0;
        *(_QWORD *)(v14 + 16) = a3;
        *v29 = v14;
        return (unsigned int)v28;
      }
      BestMatchNamespaceNode = VrpFindBestMatchNamespaceNode(a1, v14, &v33);
      v23 = BestMatchNamespaceNode;
      if ( !BestMatchNamespaceNode || (v24 = *(_DWORD *)(BestMatchNamespaceNode + 56), (v24 & 4) != 0) )
      {
        v28 = -1073741811;
      }
      else
      {
        v25 = v33;
        *(_DWORD *)(v14 + 56) |= v24 & 2;
        v26 = 0LL;
        v36 = 0LL;
        if ( v25 )
        {
          do
          {
            VrpGetNextToken((unsigned __int16 *)v14, &v36, (__int64)&String1);
            --v25;
          }
          while ( v25 );
          v26 = v36;
        }
        v27 = *(_WORD *)v14;
        Source.Buffer = (wchar_t *)(*(_QWORD *)(v14 + 8) + 2 * v26);
        Source.Length = v27 - 2 * v26;
        Source.MaximumLength = Source.Length;
        v28 = VrpBuildKeyPath((PCUNICODE_STRING)(v23 + 24), &Source, (PUNICODE_STRING)(v14 + 40));
        if ( v28 >= 0 )
          goto LABEL_16;
      }
    }
    else
    {
      v28 = -1073741670;
    }
  }
  else
  {
    v28 = -1073741670;
    v19 = (PVOID *)(v14 + 32);
  }
  v31 = *(void **)(v14 + 8);
  if ( v31 )
    ExFreePoolWithTag(v31, 0x67655256u);
  if ( *v19 )
    ExFreePoolWithTag(*v19, 0x67655256u);
  v32 = *(void **)(v14 + 48);
  if ( v32 )
    ExFreePoolWithTag(v32, 0x67655256u);
  ExFreePoolWithTag((PVOID)v14, 0x67655256u);
  return (unsigned int)v28;
}
