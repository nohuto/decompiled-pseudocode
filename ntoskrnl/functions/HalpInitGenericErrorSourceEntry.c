__int64 __fastcall HalpInitGenericErrorSourceEntry(__int64 a1, __int64 *a2)
{
  unsigned int v4; // esi
  __int64 Pool2; // rdi
  __int64 v6; // rax
  unsigned int v7; // r14d
  _DWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int128 v11; // xmm1
  void *v13; // rcx
  void *v14; // rcx
  _DWORD Src[8]; // [rsp+20h] [rbp-60h] BYREF
  char pszDest[16]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v17; // [rsp+50h] [rbp-30h]
  __int64 v18; // [rsp+60h] [rbp-20h]
  __int64 v19; // [rsp+68h] [rbp-18h]

  v4 = 0;
  Pool2 = ExAllocatePool2(64LL, 1064LL, 1466720584LL);
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 48) = *(_DWORD *)(a1 + 44);
    *(_QWORD *)(Pool2 + 40) = MmMapIoSpaceEx(*(_QWORD *)(a1 + 56), 8LL, 0x204u);
    v6 = *(_QWORD *)(a1 + 56);
    Src[3] = 0;
    v18 = v6;
    v19 = *(unsigned int *)(a1 + 44);
    *(_OWORD *)pszDest = 0LL;
    v17 = 0LL;
    Src[0] = 1733060695;
    Src[1] = 1;
    Src[2] = 80;
    Src[5] = -2147483615;
    Src[4] = 1280201291;
    Src[6] = 2;
    Src[7] = 48;
    RtlStringCchCopyA(pszDest, 0x20uLL, "Error_Status_block_register");
    WheaLogInternalEvent(Src);
    if ( *(_QWORD *)(Pool2 + 40)
      && (v7 = *(_DWORD *)(a1 + 16) + 80 + *(_DWORD *)(Pool2 + 48),
          v8 = (_DWORD *)ExAllocatePool2(64LL, v7, 1466720584LL),
          (*(_QWORD *)(Pool2 + 24) = v8) != 0LL) )
    {
      *v8 = 1095059543;
      v9 = 7LL;
      v10 = Pool2 + 88;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 4LL) = 3;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 8LL) = v7;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 16LL) = 6;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 24LL) = *(_DWORD *)(a1 + 28);
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 28LL) = 5;
      *(GUID *)(*(_QWORD *)(Pool2 + 24) + 32LL) = GENERIC_NOTIFY_TYPE_GUID;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 56LL) = 7;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 64LL) = 80;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 68LL) = *(_DWORD *)(Pool2 + 48);
      do
      {
        *(_OWORD *)v10 = *(_OWORD *)a1;
        *(_OWORD *)(v10 + 16) = *(_OWORD *)(a1 + 16);
        *(_OWORD *)(v10 + 32) = *(_OWORD *)(a1 + 32);
        *(_OWORD *)(v10 + 48) = *(_OWORD *)(a1 + 48);
        *(_OWORD *)(v10 + 64) = *(_OWORD *)(a1 + 64);
        *(_OWORD *)(v10 + 80) = *(_OWORD *)(a1 + 80);
        *(_OWORD *)(v10 + 96) = *(_OWORD *)(a1 + 96);
        v10 += 128LL;
        v11 = *(_OWORD *)(a1 + 112);
        a1 += 128LL;
        *(_OWORD *)(v10 - 16) = v11;
        --v9;
      }
      while ( v9 );
      *(_OWORD *)v10 = *(_OWORD *)a1;
      *(_OWORD *)(v10 + 16) = *(_OWORD *)(a1 + 16);
      *(_OWORD *)(v10 + 32) = *(_OWORD *)(a1 + 32);
      *(_OWORD *)(v10 + 48) = *(_OWORD *)(a1 + 48);
      *(_QWORD *)(v10 + 64) = *(_QWORD *)(a1 + 64);
      *(_DWORD *)(v10 + 72) = *(_DWORD *)(a1 + 72);
    }
    else
    {
      v13 = *(void **)(Pool2 + 40);
      v4 = -1073741670;
      if ( v13 )
        MmUnmapIoSpace(v13, 8uLL);
      v14 = *(void **)(Pool2 + 24);
      if ( v14 )
        ExFreePoolWithTag(v14, 0x576C6148u);
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
