__int64 __fastcall ViHookDmaAdapter(_WORD *Object, __int64 a2, int a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 Pool2; // rax
  _BYTE *v13; // rax
  void *v14; // rax

  if ( (unsigned int)ViGetAdapterSignature((__int64)Object) == 1634550870 )
  {
    v11 = v10 - 16;
    if ( v10 == 16 )
      return v11;
    goto LABEL_19;
  }
  Pool2 = ExAllocatePool2(64LL, 0x160uLL, 0x566C6148u);
  v11 = Pool2;
  if ( !Pool2 )
    return v11;
  *(_DWORD *)(Pool2 + 76) = 0;
  ObfReferenceObject(Object);
  *(_QWORD *)(v11 + 104) = 0LL;
  *(_QWORD *)(v11 + 128) = 0LL;
  *(_QWORD *)(v11 + 96) = v11 + 88;
  *(_QWORD *)(v11 + 88) = v11 + 88;
  *(_QWORD *)(v11 + 152) = 0LL;
  *(_QWORD *)(v11 + 120) = v11 + 112;
  *(_QWORD *)(v11 + 112) = v11 + 112;
  *(_QWORD *)(v11 + 176) = 0LL;
  *(_QWORD *)(v11 + 144) = v11 + 136;
  *(_QWORD *)(v11 + 136) = v11 + 136;
  *(_QWORD *)(v11 + 168) = v11 + 160;
  *(_QWORD *)(v11 + 160) = v11 + 160;
  ViCopyDeviceDescription(v11 + 224, (unsigned int *)a2);
  *(_DWORD *)(v11 + 184) = a3;
  if ( *(_DWORD *)(a2 + 20) == 1 && *(_DWORD *)(a2 + 16) < 8u )
  {
    v13 = (_BYTE *)(a2 + 4);
  }
  else
  {
    v13 = (_BYTE *)(a2 + 4);
    if ( *(_BYTE *)(a2 + 4) )
      goto LABEL_10;
  }
  *(_BYTE *)(v11 + 74) = 1;
LABEL_10:
  *(_QWORD *)(v11 + 312) = 0LL;
  if ( *v13 && *(_BYTE *)(a2 + 5) )
  {
    if ( ViDoubleBufferDma )
      ViAllocateContiguousMemory(v11);
  }
  else
  {
    *(_BYTE *)(v11 + 73) = 1;
  }
  *(_DWORD *)(v11 + 32) = 1634550870;
  *(_QWORD *)(v11 + 40) = Object;
  *(_WORD *)(v11 + 16) = *Object;
  *(_WORD *)(v11 + 18) = 48;
  *(_QWORD *)(v11 + 56) = v11 + 48;
  *(_QWORD *)(v11 + 48) = v11 + 48;
  if ( *(_QWORD *)(*((_QWORD *)Object + 1) + 248LL) )
  {
    *(_DWORD *)(v11 + 224) = 3;
    v14 = &ViDmaOperationsV3;
  }
  else
  {
    v14 = &ViDmaOperationsV2;
  }
  *(_QWORD *)(v11 + 24) = v14;
LABEL_19:
  if ( a6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 76));
    *(_QWORD *)(v11 + 80) = a5;
    *(_QWORD *)(v11 + 64) = a4;
    ExInterlockedInsertHeadList(&ViAdapterList, (PLIST_ENTRY)v11, &qword_140C36590);
  }
  return v11;
}
