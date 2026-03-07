void __fastcall HeadlessInit(__int64 a1)
{
  char *v2; // rdi
  __int64 Pool2; // rax
  __int64 v4; // rbx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  char v9; // cl
  char v10; // al
  char v11; // dl
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  PVOID v16; // rax
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  _DWORD v20[68]; // [rsp+20h] [rbp-128h] BYREF

  v2 = *(char **)(*(_QWORD *)(a1 + 240) + 48LL);
  if ( v2 && (*((_DWORD *)v2 + 2) <= 4u || *v2) )
  {
    Pool2 = ExAllocatePool2(64LL, 0x88uLL, 0x736C6448u);
    v4 = Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = 0LL;
      v5 = *(_DWORD *)(Pool2 + 48) ^ (*(_DWORD *)(Pool2 + 48) ^ (*((_DWORD *)v2 + 2) << 9)) & 0xE00;
      *(_DWORD *)(Pool2 + 48) = v5;
      *(_QWORD *)(Pool2 + 64) = *((_QWORD *)v2 + 2);
      *(_DWORD *)(Pool2 + 52) = *((_DWORD *)v2 + 1);
      v6 = ((unsigned __int8)v5 ^ (unsigned __int8)(v2[3] << 7)) & 0x80 ^ v5;
      *(_DWORD *)(Pool2 + 48) = v6;
      v7 = ((unsigned __int16)v6 ^ (unsigned __int16)((unsigned __int8)v2[2] << 8)) & 0x100 ^ v6;
      *(_DWORD *)(Pool2 + 48) = v7;
      v8 = ((unsigned __int8)v7 ^ (unsigned __int8)(8 * *v2)) & 8 ^ v7;
      *(_DWORD *)(Pool2 + 48) = v8;
      v9 = v2[56];
      *(_BYTE *)(Pool2 + 116) = v9;
      *(_BYTE *)(Pool2 + 117) = 0;
      *(_BYTE *)(Pool2 + 84) = v2[57];
      *(_BYTE *)(Pool2 + 85) = v2[58];
      *(_BYTE *)(Pool2 + 86) = v2[59];
      *(_BYTE *)(Pool2 + 87) = v2[60];
      *(_OWORD *)(Pool2 + 100) = *(_OWORD *)(v2 + 40);
      if ( v9 )
      {
        v8 |= 0x1000u;
        *(_DWORD *)(Pool2 + 48) = v8;
      }
      *(_BYTE *)(Pool2 + 118) = 1;
      *(_BYTE *)(Pool2 + 119) = v2[36] & 1;
      *(_WORD *)(Pool2 + 120) = *((_WORD *)v2 + 13);
      *(_WORD *)(Pool2 + 122) = *((_WORD *)v2 + 12);
      *(_WORD *)(Pool2 + 124) = *((_WORD *)v2 + 15);
      *(_BYTE *)(Pool2 + 126) = v2[28];
      *(_BYTE *)(Pool2 + 127) = v2[32];
      *(_BYTE *)(Pool2 + 128) = v2[33];
      if ( (unsigned __int16)(*((_WORD *)v2 + 12) - 1) <= 0xFFFDu
        && (unsigned __int16)(*((_WORD *)v2 + 13) - 1) <= 0xFFFDu )
      {
        *(_DWORD *)(Pool2 + 48) = v8 | 0x1000;
        if ( (*((_DWORD *)v2 + 9) & 1) == 0 )
        {
          memset(v20, 0, sizeof(v20));
          v10 = *v2;
          v11 = v2[33];
          HIWORD(v20[3]) = -1;
          HIBYTE(v20[4]) = v10;
          LOWORD(v20[3]) = *((_WORD *)v2 + 12);
          HIWORD(v20[2]) = *((_WORD *)v2 + 13);
          v20[0] = (unsigned __int8)v2[28];
          LOWORD(v20[2]) = *((_WORD *)v2 + 15);
          v12 = v2[32] & 0x1F | (32 * (v11 & 7));
          LOBYTE(v20[4]) = -1;
          v20[1] = v12;
          ((void (__fastcall *)(__int64, _DWORD *))off_140C01A08[0])(a1, v20);
        }
      }
      v13 = ExAllocatePool2(64LL, 0x3800uLL, 0x736C6448u);
      *(_QWORD *)(v4 + 16) = v13;
      if ( v13
        && (*(_DWORD *)(v4 + 96) = -1,
            v14 = ExAllocatePool2(64LL, 0x50uLL, 0x736C6448u),
            (*(_QWORD *)(v4 + 24) = v14) != 0LL)
        && (v15 = ExAllocatePool2(64LL, 0x50uLL, 0x736C6448u), (*(_QWORD *)(v4 + 32) = v15) != 0LL)
        && (v16 = MmLockPagableDataSection(HdlspDispatch), (*(_QWORD *)(v4 + 8) = v16) != 0LL) )
      {
        if ( *(_DWORD *)(v4 + 52) == 9600 )
        {
          *(_DWORD *)(v4 + 76) = -1;
          *(_DWORD *)(v4 + 80) = 1301;
          *(_DWORD *)(v4 + 72) = -13010;
        }
        HeadlessGlobals = (PKSPIN_LOCK)v4;
        HdlspEnableTerminal(1);
      }
      else
      {
        v17 = *(void **)(v4 + 16);
        if ( v17 )
          ExFreePoolWithTag(v17, 0);
        v18 = *(void **)(v4 + 24);
        if ( v18 )
          ExFreePoolWithTag(v18, 0);
        v19 = *(void **)(v4 + 32);
        if ( v19 )
          ExFreePoolWithTag(v19, 0);
        ExFreePoolWithTag((PVOID)v4, 0);
      }
    }
  }
}
