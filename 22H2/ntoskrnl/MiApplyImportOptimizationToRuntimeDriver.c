/*
 * XREFs of MiApplyImportOptimizationToRuntimeDriver @ 0x14075C368
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075B2EC (MmLoadSystemImageEx.c)
 * Callees:
 *     MiReservePtes @ 0x140226570 (MiReservePtes.c)
 *     MiWalkEntireImage @ 0x140239E20 (MiWalkEntireImage.c)
 *     MiReleasePtes @ 0x140245170 (MiReleasePtes.c)
 *     RtlImageDirectoryEntryToData @ 0x140252B30 (RtlImageDirectoryEntryToData.c)
 *     MiIsImportOptimizationEnabled @ 0x1402F3618 (MiIsImportOptimizationEnabled.c)
 *     MiDoesControlAreaRequireRetpolineFixups @ 0x1403725EC (MiDoesControlAreaRequireRetpolineFixups.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140396E8C (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiCaptureRetpolineImportInfo @ 0x14077DC4C (MiCaptureRetpolineImportInfo.c)
 *     VslCaptureSecureImageIat @ 0x140890C48 (VslCaptureSecureImageIat.c)
 *     VfIsDriverSuspect @ 0x1409C2534 (VfIsDriverSuspect.c)
 */

__int64 __fastcall MiApplyImportOptimizationToRuntimeDriver(__int64 a1, ULONG_PTR a2)
{
  _QWORD *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx
  char v7; // r8
  int v8; // edx
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  int v11; // ebx
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned int v15; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0LL;
  if ( !MiIsImportOptimizationEnabled()
    || !MiDoesControlAreaRequireRetpolineFixups(v5)
    || *(_QWORD *)(*(_QWORD *)v6 + 32LL) != *(_QWORD *)(a1 + 48)
    || (v7 & 1) != 0
    || (unsigned int)VfIsDriverSuspect((PCUNICODE_STRING)(a1 + 88)) )
  {
    return 0;
  }
  if ( (MiFlags & 0x10000) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 48);
    v15 = 0;
    LOBYTE(v8) = 1;
    v14 = RtlImageDirectoryEntryToData(v13, v8, 12, (int)&v15);
    if ( v14 )
    {
      v11 = VslCaptureSecureImageIat(v13, v14, v15);
      if ( v11 < 0 )
        return (unsigned int)v11;
    }
  }
  else
  {
    v4 = (_QWORD *)MiReservePtes((__int64)&qword_140C4EF40, 1u, v9, v10);
    if ( !v4 )
      return (unsigned int)-1073741670;
    v11 = MiCaptureRetpolineImportInfo(a1, a2);
    if ( v11 < 0 )
      goto LABEL_12;
  }
  MiWalkEntireImage(a2, (__int64)v4, 16, 0xFFFFFFFF);
  if ( (MiFlags & 0x10000) == 0 )
    MiUpdateImportRelocationsOnDriverPrivatePages(a1, a2, (__int64)v4);
  *(_DWORD *)(a1 + 104) |= 0x80u;
  v11 = 0;
LABEL_12:
  if ( v4 )
    MiReleasePtes((__int64)&qword_140C4EF40, v4, 1u);
  return (unsigned int)v11;
}
