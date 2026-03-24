/*
 * XREFs of MiCfgMarkValidEntries @ 0x1406FAA44
 * Callers:
 *     NtSetInformationVirtualMemory @ 0x1406FA310 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14021AF40 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x14021B260 (MiObtainReferencedVadEx.c)
 *     MiIsProcessCfgEnabled @ 0x14025A880 (MiIsProcessCfgEnabled.c)
 *     MiIsProcessCfgExportSuppressionEnabled @ 0x14025BF64 (MiIsProcessCfgExportSuppressionEnabled.c)
 *     MiSectionControlArea @ 0x1402958E0 (MiSectionControlArea.c)
 *     MiStartingOffset @ 0x14029EAA0 (MiStartingOffset.c)
 *     MiGetProtoPteAddress @ 0x1402B11D0 (MiGetProtoPteAddress.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     CfgAddressToBitState @ 0x14034FF04 (CfgAddressToBitState.c)
 *     MiSelectCfgBitMap @ 0x14061C394 (MiSelectCfgBitMap.c)
 *     MiPopulateCfgBitMap @ 0x1406201D8 (MiPopulateCfgBitMap.c)
 *     MiValidateUserCallTarget @ 0x1406FA2A4 (MiValidateUserCallTarget.c)
 */

__int64 __fastcall MiCfgMarkValidEntries(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        unsigned int a5,
        _DWORD *a6,
        char a7,
        __int64 a8,
        __int64 a9)
{
  unsigned int v12; // ebx
  unsigned int v13; // edx
  __int64 v14; // r12
  unsigned int v15; // r10d
  unsigned int v16; // r15d
  _QWORD *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r8
  volatile signed __int32 *v20; // rax
  __int64 v21; // r8
  __int64 v22; // rdi
  unsigned __int64 v23; // r15
  int v24; // ebx
  _QWORD *v26; // r8
  bool v27; // zf
  __int64 v28; // rcx
  unsigned int SessionId; // eax
  unsigned __int64 v30; // rax
  __int128 v31; // [rsp+30h] [rbp-20h] BYREF
  _DWORD *v32; // [rsp+40h] [rbp-10h]
  __int64 *v34; // [rsp+A0h] [rbp+50h] BYREF

  v32 = 0LL;
  LODWORD(v34) = 0;
  v31 = 0LL;
  *a6 = 0;
  if ( (((unsigned __int16)a2 | (unsigned __int16)a3) & 0xFFF) != 0 )
    return 3221225485LL;
  v12 = a5;
  v13 = 1;
  if ( a5 > 1 )
  {
    v26 = a4 + 2;
    while ( a4[2 * v13 - 2] <= *v26 )
    {
      ++v13;
      v26 += 2;
      if ( v13 >= a5 )
        goto LABEL_3;
    }
    return 3221225485LL;
  }
LABEL_3:
  if ( a4[2 * a5 - 2] >= a3 )
    return 3221225485LL;
  v14 = MiSelectCfgBitMap(a1, a2, 0LL);
  v16 = v15;
  if ( v12 )
  {
    v17 = a4;
    while ( (*v17 & 0xFLL) == *(_DWORD *)(v14 + 24) )
    {
      v18 = v17[1];
      if ( (v18 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
        break;
      if ( (a7 & 1) != 0 && (v18 & 1) != 0
        || (v18 & 4) != 0
        && (!MiIsProcessCfgExportSuppressionEnabled()
         || ((unsigned int)CfgAddressToBitState(v19 + a2, *(const signed __int64 **)v14) != 2
          || !MiIsProcessCfgExportSuppressionEnabled())
         && !(unsigned int)MiValidateUserCallTarget(a2 + *v17, v14)) )
      {
        return 3221225506LL;
      }
      ++v16;
      v17 += 2;
      if ( v16 >= v12 )
        goto LABEL_14;
    }
    return 3221225485LL;
  }
LABEL_14:
  if ( *a6 == v12 )
    return 0LL;
  if ( !MiIsProcessCfgEnabled() )
    return 3221225541LL;
  v20 = MiObtainReferencedVadEx(a2, 0, (int *)&v34);
  v22 = (__int64)v20;
  if ( !v20 )
    return (unsigned int)v34;
  v23 = a2 + a3 - 1;
  if ( v23 <= (((*((unsigned int *)v20 + 7) | ((unsigned __int64)*((unsigned __int8 *)v20 + 33) << 32)) << 12) | 0xFFF)
    && (!a8
     || (v27 = (v20[12] & 0x100000) == 0, v34 = 0LL, v27)
     && **((_QWORD **)v20 + 9) == MiSectionControlArea(a8)
     && (v28 = *(unsigned int *)(v22 + 24), (v28 | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32)) << 12 == a2)
     && (MiGetProtoPteAddress(v22, v28 | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32), 0, &v34),
         SessionId = MmGetSessionIdEx(a1),
         v30 = MiStartingOffset(v34, *(_QWORD *)(v22 + 80), SessionId),
         v30 == a9)) )
  {
    v32 = a6;
    LODWORD(v31) = v12;
    *((_QWORD *)&v31 + 1) = a4;
    v24 = MiPopulateCfgBitMap((_QWORD *)v14, (unsigned __int64)&v31, v21, 1u, a2, (v23 + 4095) & 0xFFFFFFFFFFFFF000uLL);
    if ( v24 >= 0 )
      v24 = 0;
  }
  else
  {
    v24 = -1073741811;
  }
  MiUnlockAndDereferenceVad((char *)v22);
  return (unsigned int)v24;
}
