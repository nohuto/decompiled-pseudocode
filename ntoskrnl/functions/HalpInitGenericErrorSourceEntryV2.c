__int64 __fastcall HalpInitGenericErrorSourceEntryV2(__int64 a1, __int64 *a2)
{
  unsigned int v4; // esi
  __int64 Pool2; // rdi
  __int64 v6; // rax
  char v7; // al
  _QWORD *v8; // rax
  unsigned int v9; // r15d
  _DWORD *v10; // rax
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int128 v16; // xmm1
  _DWORD Src[8]; // [rsp+20h] [rbp-60h] BYREF
  char pszDest[16]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v20; // [rsp+50h] [rbp-30h]
  __int64 v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+68h] [rbp-18h]

  v4 = 0;
  Pool2 = ExAllocatePool2(64LL, 1064LL, 1466720584LL);
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 48) = *(_DWORD *)(a1 + 44);
    *(_QWORD *)(Pool2 + 40) = MmMapIoSpaceEx(*(_QWORD *)(a1 + 56), 8LL, 0x204u);
    v6 = *(_QWORD *)(a1 + 56);
    Src[3] = 0;
    v21 = v6;
    v22 = *(unsigned int *)(a1 + 44);
    *(_OWORD *)pszDest = 0LL;
    v20 = 0LL;
    Src[0] = 1733060695;
    Src[1] = 1;
    Src[2] = 80;
    Src[5] = -2147483615;
    Src[4] = 1280201291;
    Src[6] = 2;
    Src[7] = 48;
    RtlStringCchCopyA(pszDest, 0x20uLL, "Error_Status_block_register");
    WheaLogInternalEvent(Src);
    if ( !*(_QWORD *)(Pool2 + 40) )
      goto LABEL_12;
    v7 = *(_BYTE *)(a1 + 95);
    if ( v7 == 3 && *(_BYTE *)(a1 + 93) == 32 )
    {
      *(_DWORD *)(Pool2 + 72) = 4;
    }
    else if ( v7 == 4 && *(_BYTE *)(a1 + 93) == 64 )
    {
      *(_DWORD *)(Pool2 + 72) = 8;
    }
    v8 = (_QWORD *)ExAllocatePool2(64LL, 8LL, 1466720584LL);
    *(_QWORD *)(Pool2 + 64) = v8;
    if ( v8
      && (*v8 = *(_QWORD *)(a1 + 96),
          v9 = *(_DWORD *)(a1 + 16) + 80 + *(_DWORD *)(Pool2 + 48),
          v10 = (_DWORD *)ExAllocatePool2(64LL, v9, 1466720584LL),
          (*(_QWORD *)(Pool2 + 24) = v10) != 0LL) )
    {
      *v10 = 1095059543;
      v14 = Pool2 + 88;
      v15 = 7LL;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 4LL) = 3;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 8LL) = v9;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 16LL) = 6;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 24LL) = *(_DWORD *)(a1 + 28);
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 28LL) = 5;
      *(GUID *)(*(_QWORD *)(Pool2 + 24) + 32LL) = GENERIC_NOTIFY_TYPE_GUID;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 56LL) = 7;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 64LL) = 80;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 68LL) = *(_DWORD *)(Pool2 + 48);
      do
      {
        *(_OWORD *)v14 = *(_OWORD *)a1;
        *(_OWORD *)(v14 + 16) = *(_OWORD *)(a1 + 16);
        *(_OWORD *)(v14 + 32) = *(_OWORD *)(a1 + 32);
        *(_OWORD *)(v14 + 48) = *(_OWORD *)(a1 + 48);
        *(_OWORD *)(v14 + 64) = *(_OWORD *)(a1 + 64);
        *(_OWORD *)(v14 + 80) = *(_OWORD *)(a1 + 80);
        *(_OWORD *)(v14 + 96) = *(_OWORD *)(a1 + 96);
        v14 += 128LL;
        v16 = *(_OWORD *)(a1 + 112);
        a1 += 128LL;
        *(_OWORD *)(v14 - 16) = v16;
        --v15;
      }
      while ( v15 );
      *(_OWORD *)v14 = *(_OWORD *)a1;
      *(_OWORD *)(v14 + 16) = *(_OWORD *)(a1 + 16);
      *(_OWORD *)(v14 + 32) = *(_OWORD *)(a1 + 32);
      *(_OWORD *)(v14 + 48) = *(_OWORD *)(a1 + 48);
      *(_QWORD *)(v14 + 64) = *(_QWORD *)(a1 + 64);
      *(_DWORD *)(v14 + 72) = *(_DWORD *)(a1 + 72);
    }
    else
    {
LABEL_12:
      v11 = *(void **)(Pool2 + 40);
      v4 = -1073741670;
      if ( v11 )
        MmUnmapIoSpace(v11, 8uLL);
      v12 = *(void **)(Pool2 + 64);
      if ( v12 )
        ExFreePoolWithTag(v12, 0x576C6148u);
      v13 = *(void **)(Pool2 + 24);
      if ( v13 )
        ExFreePoolWithTag(v13, 0x576C6148u);
      ExFreePoolWithTag((PVOID)Pool2, 0x576C6148u);
      Pool2 = 0LL;
    }
  }
  else
  {
    v4 = -1073741670;
  }
  *a2 = Pool2;
  return v4;
}
