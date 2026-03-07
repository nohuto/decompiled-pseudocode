__int64 __fastcall EtwpEnableStackCaching(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  unsigned int v4; // ebx
  unsigned int v7; // edi
  unsigned int v8; // r15d
  __int64 Pool2; // rax
  union _SLIST_HEADER *v10; // r14
  union _SLIST_HEADER *v11; // rax
  __int64 v12; // rcx
  int v13; // ebp
  unsigned int v14; // edi
  __int64 v15; // rax
  signed __int32 v17[18]; // [rsp+0h] [rbp-48h] BYREF

  v4 = 0;
  if ( *(_QWORD *)(a1 + 1008) )
    return (unsigned int)-1073741053;
  v7 = 3145728;
  v8 = 256;
  if ( a2 >= 0x300000 )
    v7 = a2;
  if ( v7 > 0x3200000 )
    v7 = 52428800;
  if ( a3 >= 0x100 )
    v8 = a3;
  if ( v8 > 0x1000 )
    v8 = 4096;
  Pool2 = ExAllocatePool2(64LL, 24 * v8 + 32, 1937208389LL);
  v10 = (union _SLIST_HEADER *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  *(_DWORD *)(Pool2 + 8) = v8;
  *(_QWORD *)Pool2 = a1;
  InitializeSListHead((PSLIST_HEADER)(Pool2 + 16));
  v11 = v10 + 2;
  v12 = v8;
  do
  {
    v11[1].Alignment = 0LL;
    v11->Region = (unsigned __int64)v11;
    v11->Alignment = (unsigned __int64)v11;
    v11 = (union _SLIST_HEADER *)((char *)v11 + 24);
    --v12;
  }
  while ( v12 );
  v13 = 0;
  v14 = v7 / 0x128;
  if ( v14 )
  {
    while ( 1 )
    {
      v15 = ExAllocatePool2(64LL, 296LL, 2021094469LL);
      if ( !v15 )
        break;
      *(_DWORD *)(v15 + 24) = 0;
      RtlpInterlockedPushEntrySList(v10 + 1, (PSLIST_ENTRY)v15);
      if ( ++v13 >= v14 )
        goto LABEL_19;
    }
    EtwpFreeStackCache(v10);
    return (unsigned int)-1073741801;
  }
LABEL_19:
  *(_QWORD *)(a1 + 1008) = v10;
  _InterlockedOr(v17, 0);
  _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x1000000u);
  if ( a4 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 820), 1u);
  return v4;
}
