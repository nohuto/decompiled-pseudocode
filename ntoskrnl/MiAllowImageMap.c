/*
 * XREFs of MiAllowImageMap @ 0x1407D35A0
 * Callers:
 *     MiMapViewOfImageSection @ 0x1407D3750 (MiMapViewOfImageSection.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     SeGetTrustLabelAce @ 0x14033DCA0 (SeGetTrustLabelAce.c)
 *     MiReferenceControlAreaFile @ 0x140344094 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x1403441A0 (MiDereferenceControlAreaFile.c)
 *     MiGetControlAreaLoadConfig @ 0x14034C364 (MiGetControlAreaLoadConfig.c)
 *     ObReleaseObjectSecurityEx @ 0x1406993F0 (ObReleaseObjectSecurityEx.c)
 *     ObpGetObjectSecurity @ 0x1406DB240 (ObpGetObjectSecurity.c)
 *     SeQueryMandatoryLabel @ 0x140743AE8 (SeQueryMandatoryLabel.c)
 *     MiReferenceFileObjectForMap @ 0x1407D6358 (MiReferenceFileObjectForMap.c)
 *     PsBlockNonCetBinaries @ 0x1409AB194 (PsBlockNonCetBinaries.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1409E71A4 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwpTimLogMitigationForProcess @ 0x1409E897C (EtwpTimLogMitigationForProcess.c)
 */

__int64 __fastcall MiAllowImageMap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  bool v8; // al
  int v9; // edi
  _DWORD *ControlAreaLoadConfig; // rax
  int ObjectSecurity; // ebx
  int v12; // ebp
  bool v13; // al
  __int64 v15; // rsi
  PVOID v16; // r14
  __int64 v17; // rax
  void *v18; // rbx
  __int64 *v19; // r8
  bool v20; // di
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rbx
  __int64 v24; // rdx
  int v25; // edi
  __int64 v26; // [rsp+20h] [rbp-38h] BYREF
  char v27; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(a1 + 2512);
  v26 = 0LL;
  v8 = (v4 & 0x100000) != 0;
  v9 = v4 & 0x80000;
  if ( (v4 & 0x80000) != 0 )
    v8 = 1;
  if ( v8 && (*(_BYTE *)(a2 + 40) & 3) != 0 )
  {
    v17 = MiReferenceFileObjectForMap(a2);
    v18 = (void *)v17;
    if ( (*(_DWORD *)(*(_QWORD *)(v17 + 8) + 52LL) & 0x80000) == 0 )
    {
      v19 = MITIGATION_AUDIT_PROHIBIT_REMOTE_IMAGE_MAP;
      if ( v9 )
        v19 = MITIGATION_ENFORCE_PROHIBIT_REMOTE_IMAGE_MAP;
      EtwpTimLogMitigationForProcess(1LL, (unsigned int)(v9 != 0) + 1, v19, a1);
      if ( v9 )
      {
        ObfDereferenceObject(v18);
        return 3221225506LL;
      }
    }
    ObfDereferenceObject(v18);
  }
  if ( !*(_BYTE *)(a4 + 50) )
    goto LABEL_7;
  ControlAreaLoadConfig = (_DWORD *)MiGetControlAreaLoadConfig(a3);
  if ( (*(_DWORD *)(a1 + 2512) & 4) != 0 && (!ControlAreaLoadConfig || (*ControlAreaLoadConfig & 1) == 0) )
    return 3221227014LL;
  if ( (*(_DWORD *)(a1 + 2516) & 0x200000) == 0 )
    goto LABEL_7;
  v20 = 0;
  if ( ControlAreaLoadConfig )
    v20 = (*(_BYTE *)ControlAreaLoadConfig & 0x40) != 0;
  v21 = MiReferenceControlAreaFile(a3);
  LOBYTE(v22) = v20;
  v23 = v21;
  v24 = *(_QWORD *)(*(_QWORD *)a3 + 56LL);
  LOBYTE(v24) = *(_BYTE *)(v24 + 76) & 1;
  v25 = PsBlockNonCetBinaries(a1, v24, v22, v21 + 88);
  MiDereferenceControlAreaFile(a3, v23);
  if ( v25 >= 0 )
  {
LABEL_7:
    ObjectSecurity = 0;
    v12 = v4 & 0x200000;
    v13 = (v4 & 0x400000) != 0;
    if ( (v4 & 0x200000) != 0 )
      v13 = 1;
    if ( !v13 )
      return (unsigned int)ObjectSecurity;
    v27 = 0;
    v15 = MiReferenceControlAreaFile(a3);
    ObjectSecurity = ObpGetObjectSecurity(v15, (PVOID *)&v26, &v27, 0);
    if ( ObjectSecurity < 0 )
    {
      ObjectSecurity = -1073741790;
    }
    else
    {
      v16 = (PVOID)v26;
      if ( (unsigned int)SeQueryMandatoryLabel(v26) <= 0x1000 && !SeGetTrustLabelAce((__int64)v16) )
        ObjectSecurity = -1073741790;
      ObReleaseObjectSecurityEx(v16, v27, v15);
      if ( ObjectSecurity != -1073741790 )
        goto LABEL_16;
    }
    EtwTimLogProhibitLowILImageMap((unsigned int)(v12 != 0) + 1, a1, v15 + 88);
    if ( !v12 )
      ObjectSecurity = 0;
LABEL_16:
    MiDereferenceControlAreaFile(a3, v15);
    return (unsigned int)ObjectSecurity;
  }
  return (unsigned int)v25;
}
