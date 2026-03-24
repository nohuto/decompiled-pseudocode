/*
 * XREFs of HvlGetCoverageData @ 0x1404F14D8
 * Callers:
 *     ExpCovQueryHypervisorInformation @ 0x1409575C0 (ExpCovQueryHypervisorInformation.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x140264870 (MmBuildMdlForNonPagedPool.c)
 *     IoAllocateMdl @ 0x14035A110 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x14035AB60 (IoFreeMdl.c)
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 */

bool __fastcall HvlGetCoverageData(char a1, ULONG a2, void *a3)
{
  __int16 v3; // bx
  bool v5; // r14
  struct _MDL *Mdl; // rax
  struct _MDL *v7; // r15
  unsigned __int64 v8; // rdi
  _DWORD *v9; // rbx
  __int64 v10; // r9
  __int128 v12; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v13; // [rsp+40h] [rbp-C0h]
  __int128 v14; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v15; // [rsp+60h] [rbp-A0h]
  _BYTE v16[144]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v17[2064]; // [rsp+100h] [rbp+0h] BYREF

  v3 = (__int16)a3;
  v5 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  Mdl = IoAllocateMdl(a3, a2, 0, 0, 0LL);
  v7 = Mdl;
  if ( Mdl )
  {
    MmBuildMdlForNonPagedPool(Mdl);
    v8 = ((v3 & 0xFFF) + 4095LL + (unsigned __int64)v7->ByteCount) >> 12;
    v9 = (_DWORD *)HvlpAcquireHypercallPage(&v14, 1LL, v17, 1032LL);
    HvlpAcquireHypercallPage(&v12, 2LL, v16, 72LL);
    *v9 = (a1 != 0) + 1;
    v9[1] = v8;
    memmove(v9 + 2, &v7[1], 8LL * (unsigned int)v8);
    LOWORD(v9) = HvcallInitiateHypercall(147, *((__int64 *)&v15 + 1), *((__int64 *)&v13 + 1), v10);
    HvlpReleaseHypercallPage(&v12);
    HvlpReleaseHypercallPage(&v14);
    v5 = (_WORD)v9 == 0;
    IoFreeMdl(v7);
  }
  return v5;
}
