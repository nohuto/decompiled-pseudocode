/*
 * XREFs of PfpCopyUserPfnPrioRequest @ 0x1406AEA90
 * Callers:
 *     PfpPfnPrioRequest @ 0x1406AE8C4 (PfpPfnPrioRequest.c)
 * Callees:
 *     MmGetHighestPhysicalPage @ 0x140236718 (MmGetHighestPhysicalPage.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpCopyUserPfnPrioRequest(unsigned __int64 a1, unsigned int a2, int a3, _QWORD *a4, char a5, int a6)
{
  unsigned int v9; // r15d
  _QWORD *v10; // r14
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  unsigned int v13; // r8d
  unsigned int v14; // r10d
  __int64 Pool2; // rax
  size_t v16; // r8
  void *v17; // rcx
  unsigned __int64 i; // rdx

  v9 = 0;
  v10 = 0LL;
  if ( a5 && a2 )
  {
    if ( (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = a2 + a1;
    if ( v11 > 0x7FFFFFFF0000LL || v11 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v12 = *(_QWORD *)(a1 + 8);
  if ( v12 <= 0xFFFFFFFF && 24 * (v12 + 8) <= 0xFFFFFFFF && v12 && v12 <= MmGetHighestPhysicalPage(0) + 1 && v13 <= v14 )
  {
    Pool2 = ExAllocatePool2(64LL, v13, 1112565328LL);
    v10 = (_QWORD *)Pool2;
    if ( !Pool2 )
    {
      v9 = -1073741670;
      goto LABEL_24;
    }
    *(_OWORD *)Pool2 = *(_OWORD *)a1;
    *(_OWORD *)(Pool2 + 16) = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(Pool2 + 32) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(Pool2 + 48) = *(_OWORD *)(a1 + 48);
    *(_OWORD *)(Pool2 + 64) = *(_OWORD *)(a1 + 64);
    *(_OWORD *)(Pool2 + 80) = *(_OWORD *)(a1 + 80);
    *(_OWORD *)(Pool2 + 96) = *(_OWORD *)(a1 + 96);
    *(_OWORD *)(Pool2 + 112) = *(_OWORD *)(a1 + 112);
    *(_OWORD *)(Pool2 + 128) = *(_OWORD *)(a1 + 128);
    *(_OWORD *)(Pool2 + 144) = *(_OWORD *)(a1 + 144);
    *(_OWORD *)(Pool2 + 160) = *(_OWORD *)(a1 + 160);
    *(_OWORD *)(Pool2 + 176) = *(_OWORD *)(a1 + 176);
    if ( *(_DWORD *)Pool2 == 1
      && ((unsigned int)(a3 - 6) > 1 || (*(_DWORD *)(Pool2 + 4) & 0xFFFFFFFE) == 0)
      && *(_QWORD *)(Pool2 + 8) == v12 )
    {
      v16 = (unsigned int)(24 * v12);
      v17 = (void *)(Pool2 + 192);
      if ( a6 )
      {
        memset(v17, 0, v16);
        for ( i = 0LL; i < v12; ++i )
          v10[3 * i + 25] = *(_QWORD *)(24 * i + a1 + 200);
      }
      else
      {
        memmove(v17, (const void *)(a1 + 192), v16);
      }
      *a4 = v10;
      v10 = 0LL;
      goto LABEL_24;
    }
  }
  v9 = -1073741811;
LABEL_24:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return v9;
}
