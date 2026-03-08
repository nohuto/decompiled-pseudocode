/*
 * XREFs of MiCfgMarkValidEntries @ 0x14075C3DC
 * Callers:
 *     NtSetInformationVirtualMemory @ 0x14075BCB0 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     MiStartingOffset @ 0x14028C530 (MiStartingOffset.c)
 *     MiGetProtoPteAddress @ 0x14031C780 (MiGetProtoPteAddress.c)
 *     MiUnlockAndDereferenceVad @ 0x14031EDC0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x14031EFE0 (MiObtainReferencedVadEx.c)
 *     MiSectionControlArea @ 0x1403349C0 (MiSectionControlArea.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     CfgAddressToBitState @ 0x1406540A4 (CfgAddressToBitState.c)
 *     MiValidateXfgUserCallTarget @ 0x1406540E8 (MiValidateXfgUserCallTarget.c)
 *     MiPopulateCfgBitMap @ 0x14075C600 (MiPopulateCfgBitMap.c)
 *     MiSelectCfgBitMap @ 0x1407D2C08 (MiSelectCfgBitMap.c)
 *     MiIsProcessCfgExportSuppressionEnabled @ 0x140A40FD0 (MiIsProcessCfgExportSuppressionEnabled.c)
 *     MiIsProcessXfgEnabled @ 0x140A40FF8 (MiIsProcessXfgEnabled.c)
 *     MiValidateUserCallTarget @ 0x140A41024 (MiValidateUserCallTarget.c)
 */

__int64 __fastcall MiCfgMarkValidEntries(
        __int64 a1,
        unsigned __int64 a2,
        __int64 *a3,
        _QWORD *a4,
        unsigned int a5,
        _DWORD *a6,
        char a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  __int64 *v11; // r14
  unsigned int v14; // esi
  unsigned int v15; // edx
  __int64 v16; // rax
  int v17; // r8d
  __int64 v18; // r12
  _QWORD *v19; // rdi
  __int64 v20; // r14
  __int64 v21; // rax
  int v22; // r8d
  __int64 v23; // rdi
  unsigned __int64 v24; // r14
  int v25; // ebx
  _QWORD *v27; // r8
  __int64 v28; // rdx
  _KPROCESS *Process; // r12
  __int64 v30; // rcx
  unsigned int SessionId; // eax
  unsigned __int64 v32; // rax
  int v33; // [rsp+30h] [rbp-30h]
  int v34; // [rsp+30h] [rbp-30h]
  unsigned int v35; // [rsp+34h] [rbp-2Ch] BYREF
  const signed __int64 **v36; // [rsp+38h] [rbp-28h]
  __int128 v37; // [rsp+40h] [rbp-20h] BYREF
  _DWORD *v38; // [rsp+50h] [rbp-10h]
  __int64 *v39; // [rsp+A0h] [rbp+40h] BYREF

  v39 = a3;
  v35 = 0;
  LODWORD(v38) = 0;
  v11 = a3;
  v37 = 0LL;
  *a6 = 0;
  if ( (((unsigned int)a2 | (unsigned int)a3) & 0xFFF) != 0 )
    return 3221225485LL;
  v14 = a5;
  v15 = 1;
  if ( a5 > 1 )
  {
    v27 = a4 + 2;
    while ( a4[2 * v15 - 2] <= *v27 )
    {
      ++v15;
      v27 += 2;
      if ( v15 >= a5 )
        goto LABEL_3;
    }
    return 3221225485LL;
  }
LABEL_3:
  if ( a4[2 * a5 - 2] >= (unsigned __int64)v11 )
    return 3221225485LL;
  v16 = MiSelectCfgBitMap(a1, a2, 0LL);
  v34 = v17 & v33;
  v18 = v16;
  v36 = (const signed __int64 **)v16;
  if ( v14 )
  {
    v19 = a4;
    while ( (*v19 & 0xFLL) == *(_DWORD *)(v18 + 24) )
    {
      v20 = v19[1];
      if ( (v20 & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
        break;
      if ( (a7 & 1) != 0 && (v20 & 1) != 0 )
        return 3221225506LL;
      if ( (v20 & 4) != 0 )
      {
        if ( !(unsigned int)MiIsProcessCfgExportSuppressionEnabled(a1) )
          return 3221225506LL;
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( (unsigned int)CfgAddressToBitState(v28 + a2, *v36) == 2
          && (unsigned int)MiIsProcessCfgExportSuppressionEnabled(Process) )
        {
          v18 = (__int64)v36;
        }
        else
        {
          v18 = (__int64)v36;
          if ( !(unsigned int)MiValidateUserCallTarget(a2 + *v19, v36) )
            return 3221225506LL;
        }
      }
      if ( (v20 & 0x10) != 0
        && (!a10 && (!*(_QWORD *)(*(_QWORD *)(a1 + 1680) + 432LL) || (*(_DWORD *)(a1 + 2516) & 0x4000000) == 0)
         || !(unsigned int)MiIsProcessXfgEnabled(a1)
         || !MiValidateXfgUserCallTarget(a2 + *v19, (const signed __int64 **)v18)
         && !(unsigned int)MiValidateUserCallTarget(a2 + *v19, v18))
        || (v20 & 8) != 0
        && (!a10
         || !(unsigned int)MiIsProcessXfgEnabled(a1)
         || (((_BYTE)a2 + *(_BYTE *)v19) & 0xF) != 0
         || ((a2 + *v19) & 0xFFF) == 0) )
      {
        return 3221225506LL;
      }
      v19 += 2;
      if ( ++v34 >= v14 )
      {
        v11 = v39;
        goto LABEL_14;
      }
    }
    return 3221225485LL;
  }
LABEL_14:
  if ( *a6 == v14 )
    return 0LL;
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 1680) + 432LL) )
    return 3221225541LL;
  v21 = MiObtainReferencedVadEx(a2, 0, (int *)&v35);
  v23 = v21;
  if ( !v21 )
    return v35;
  v24 = (unsigned __int64)v11 + a2 - 1;
  if ( v24 <= (((*(unsigned int *)(v21 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 33) << 32)) << 12) | 0xFFF)
    && (!a8
     || (v39 = 0LL, (*(_DWORD *)(v21 + 48) & 0x200000) == 0)
     && **(_QWORD **)(v21 + 72) == MiSectionControlArea(a8)
     && (v30 = *(unsigned int *)(v23 + 24), (v30 | ((unsigned __int64)*(unsigned __int8 *)(v23 + 32) << 32)) << 12 == a2)
     && (MiGetProtoPteAddress(v23, v30 | ((unsigned __int64)*(unsigned __int8 *)(v23 + 32) << 32), 0, &v39),
         SessionId = MmGetSessionIdEx(a1),
         v32 = MiStartingOffset(v39, *(_QWORD *)(v23 + 80), SessionId),
         v32 == a9)) )
  {
    v38 = a6;
    LODWORD(v37) = v14;
    *((_QWORD *)&v37 + 1) = a4;
    v25 = MiPopulateCfgBitMap(v18, (unsigned int)&v37, v22, 1, a2, (v24 + 4095) & 0xFFFFFFFFFFFFF000uLL);
    if ( v25 >= 0 )
      v25 = 0;
  }
  else
  {
    v25 = -1073741811;
  }
  MiUnlockAndDereferenceVad((PVOID)v23);
  return (unsigned int)v25;
}
