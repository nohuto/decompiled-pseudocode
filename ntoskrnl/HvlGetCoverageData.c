/*
 * XREFs of HvlGetCoverageData @ 0x14053D1C8
 * Callers:
 *     ExpCovQueryHypervisorInformation @ 0x140A03908 (ExpCovQueryHypervisorInformation.c)
 * Callees:
 *     IopAllocateMdl @ 0x140241F90 (IopAllocateMdl.c)
 *     MmBuildMdlForNonPagedPool @ 0x1402B5DB0 (MmBuildMdlForNonPagedPool.c)
 *     IoFreeMdl @ 0x1403147E0 (IoFreeMdl.c)
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 */

bool __fastcall HvlGetCoverageData(char a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int16 v4; // bx
  bool v5; // r14
  struct _MDL *Mdl; // rax
  struct _MDL *v8; // r15
  unsigned __int64 v9; // rdi
  _DWORD *v10; // rbx
  __int128 v12; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+40h] [rbp-C0h]
  __int64 v14; // [rsp+48h] [rbp-B8h]
  __int128 v15; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A0h]
  __int64 v17; // [rsp+68h] [rbp-98h]
  _BYTE v18[144]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v19[2064]; // [rsp+100h] [rbp+0h] BYREF

  v4 = a3;
  v16 = 0LL;
  v5 = 0;
  LODWORD(v17) = 0;
  v13 = 0LL;
  v15 = 0LL;
  LODWORD(v14) = 0;
  v12 = 0LL;
  Mdl = (struct _MDL *)IopAllocateMdl(a3, a2, 0, a4, 0LL, 0);
  v8 = Mdl;
  if ( Mdl )
  {
    MmBuildMdlForNonPagedPool(Mdl);
    v9 = ((v4 & 0xFFF) + 4095LL + (unsigned __int64)v8->ByteCount) >> 12;
    v10 = (_DWORD *)HvlpAcquireHypercallPage(&v15, 1LL, v19, 1032LL);
    HvlpAcquireHypercallPage(&v12, 2LL, v18, 72LL);
    *v10 = (a1 != 0) + 1;
    v10[1] = v9;
    memmove(v10 + 2, &v8[1], 8LL * (unsigned int)v9);
    LOWORD(v10) = HvcallInitiateHypercall(147);
    HvlpReleaseHypercallPage(&v12);
    HvlpReleaseHypercallPage(&v15);
    v5 = (_WORD)v10 == 0;
    IoFreeMdl(v8);
  }
  return v5;
}
