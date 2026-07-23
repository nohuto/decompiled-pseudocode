/*
 * XREFs of PspWow64ThunkProcessParameters @ 0x14024596C
 * Callers:
 *     PspWow64SetupUserProcessAddressSpace @ 0x140286360 (PspWow64SetupUserProcessAddressSpace.c)
 * Callees:
 *     PspWow64CopyUnicodeString @ 0x140245ECC (PspWow64CopyUnicodeString.c)
 *     ZwAllocateVirtualMemory @ 0x1403FA880 (ZwAllocateVirtualMemory.c)
 *     memmove @ 0x140414040 (memmove.c)
 */

NTSTATUS __fastcall PspWow64ThunkProcessParameters(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r15
  ULONG_PTR v9; // rbx
  NTSTATUS result; // eax
  char *v11; // r15
  char *v12; // rsi
  unsigned int v13; // ecx
  char *v14; // rbx
  char *v15; // rsi
  size_t v16; // r14
  unsigned int *v17; // rdx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rax
  unsigned __int16 v20; // r14
  _DWORD *v21; // rdx
  char *v22; // rcx
  unsigned __int64 i; // r8
  int v24; // eax
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+50h] [rbp-48h]
  PVOID BaseAddress; // [rsp+A8h] [rbp+10h] BYREF
  void *v29; // [rsp+B8h] [rbp+20h] BYREF

  v5 = a1;
  v6 = *a2;
  v7 = v6 - 384;
  if ( a2[270] )
    v7 = v6 - 380;
  v8 = v7;
  v9 = *((_QWORD *)a2 + 126) + v7;
  BaseAddress = 0LL;
  RegionSize = v9;
  result = ZwAllocateVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &BaseAddress,
             KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[5] - 1,
             &RegionSize,
             0x3000u,
             4u);
  if ( result >= 0 )
  {
    v29 = (char *)BaseAddress + 704;
    v11 = (char *)BaseAddress + v8;
    *(_DWORD *)BaseAddress = v9;
    *((_DWORD *)BaseAddress + 1) = v9;
    *((_DWORD *)BaseAddress + 2) = a2[2];
    *((_DWORD *)BaseAddress + 3) = a2[3];
    *((_DWORD *)BaseAddress + 4) = a2[4];
    *((_DWORD *)BaseAddress + 5) = a2[6];
    *((_DWORD *)BaseAddress + 6) = a2[8];
    *((_DWORD *)BaseAddress + 7) = a2[10];
    *((_DWORD *)BaseAddress + 8) = a2[12];
    *((_DWORD *)BaseAddress + 19) = a2[34];
    *((_DWORD *)BaseAddress + 20) = a2[35];
    *((_DWORD *)BaseAddress + 21) = a2[36];
    *((_DWORD *)BaseAddress + 22) = a2[37];
    *((_DWORD *)BaseAddress + 23) = a2[38];
    *((_DWORD *)BaseAddress + 24) = a2[39];
    *((_DWORD *)BaseAddress + 25) = a2[40];
    *((_DWORD *)BaseAddress + 26) = a2[41];
    *((_DWORD *)BaseAddress + 27) = a2[42];
    *((_DWORD *)BaseAddress + 168) = a2[259];
    *((_DWORD *)BaseAddress + 175) = a2[271];
    PspWow64CopyUnicodeString(&v29, (char *)BaseAddress + 36, a2 + 14);
    *((_DWORD *)BaseAddress + 11) = a2[18];
    PspWow64CopyUnicodeString(&v29, (char *)BaseAddress + 48, a2 + 20);
    PspWow64CopyUnicodeString(&v29, (char *)BaseAddress + 56, a2 + 24);
    PspWow64CopyUnicodeString(&v29, (char *)BaseAddress + 64, a2 + 28);
    PspWow64CopyUnicodeString(&v29, (char *)BaseAddress + 112, a2 + 44);
    PspWow64CopyUnicodeString(&v29, (char *)BaseAddress + 120, a2 + 48);
    PspWow64CopyUnicodeString(&v29, (char *)BaseAddress + 128, a2 + 52);
    PspWow64CopyUnicodeString(&v29, (char *)BaseAddress + 676, a2 + 260);
    PspWow64CopyUnicodeString(&v29, (char *)BaseAddress + 684, a2 + 264);
    if ( *((_WORD *)a2 + 112) && *((_QWORD *)a2 + 29) )
    {
      v26 = 0LL;
      v15 = (char *)v29;
      *((_DWORD *)BaseAddress + 35) = (_DWORD)v29;
      v16 = *((unsigned __int16 *)a2 + 112);
      v17 = (unsigned int *)*((_QWORD *)a2 + 29);
      if ( (unsigned __int16)v16 < 4u )
        v18 = 0LL;
      else
        v18 = *v17;
      v19 = v18 + 8 * v18 + 4;
      v26 = v19;
      if ( v16 >= v19 )
      {
        v20 = v16 - v19;
        memmove(v15, v17, v18 + 4);
        v21 = (_DWORD *)(v18 + *((_QWORD *)a2 + 29) + 4LL);
        v22 = &v15[v18 + 4];
        for ( i = 0LL; i < v18; ++i )
        {
          *(_DWORD *)v22 = *v21;
          v22 += 4;
          v21 += 2;
        }
        memmove(v22, v21, v20);
        *((_WORD *)BaseAddress + 68) = 5 * v18 + 4 + v20;
      }
      else
      {
        memmove(v15, v17, v16);
        *((_WORD *)BaseAddress + 68) = *((_WORD *)a2 + 112);
      }
      *((_WORD *)BaseAddress + 69) = *((_WORD *)BaseAddress + 68);
      v12 = &v15[*((unsigned __int16 *)BaseAddress + 68)];
      v29 = v12;
      v5 = a1;
    }
    else
    {
      v12 = (char *)v29;
    }
    v13 = a2[270];
    if ( v13 )
    {
      *((_DWORD *)BaseAddress + 174) = v13;
      v14 = (char *)((unsigned __int64)(v12 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
      v29 = v14;
      *((_DWORD *)BaseAddress + 173) = (_DWORD)v14;
      memmove(v14, *((const void **)a2 + 134), 8LL * a2[270]);
      v29 = &v14[8 * a2[270]];
    }
    *((_DWORD *)BaseAddress + 18) = (_DWORD)v11;
    *((_DWORD *)BaseAddress + 164) = a2[252];
    *((_DWORD *)BaseAddress + 165) = a2[254];
    memmove(v11, *((const void **)a2 + 16), *((unsigned int *)BaseAddress + 164));
    *((_DWORD *)BaseAddress + 167) = a2[258];
    v24 = (int)BaseAddress;
    *(_DWORD *)(v5 + 16) = (_DWORD)BaseAddress;
    *a3 = v24;
    return 0;
  }
  return result;
}
