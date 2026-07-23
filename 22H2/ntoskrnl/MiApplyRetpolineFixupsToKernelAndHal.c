/*
 * XREFs of MiApplyRetpolineFixupsToKernelAndHal @ 0x140A5054C
 * Callers:
 *     MiRebaseDynamicRelocationRegions @ 0x140A4F400 (MiRebaseDynamicRelocationRegions.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402624F0 (VslpEnterIumSecureMode.c)
 *     RtlImageNtHeader @ 0x14029CFE0 (RtlImageNtHeader.c)
 *     RtlUpdateImportRelocationsInImage @ 0x1403B6618 (RtlUpdateImportRelocationsInImage.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     RtlLookupImageSectionByName @ 0x14058CE44 (RtlLookupImageSectionByName.c)
 *     RtlCopyRetpolineStubsUnwindInfo @ 0x14058F940 (RtlCopyRetpolineStubsUnwindInfo.c)
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x14058FDFC (RtlPerformRetpolineRelocationsOnImageEx.c)
 */

__int64 __fastcall MiApplyRetpolineFixupsToKernelAndHal(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  __int64 *v4; // rbx
  unsigned int (*v5)(void); // rsi
  unsigned int v6; // edi
  int updated; // ecx
  char *v9; // rbx
  PIMAGE_NT_HEADERS v10; // rax
  const char *v11; // rax
  unsigned int v12; // edx
  unsigned __int64 v13; // rax
  __int64 v14; // r12
  PIMAGE_NT_HEADERS v15; // r15
  const char *v16; // rax
  int v17; // ebx
  __int64 *v18; // rdi
  unsigned int v19; // r13d
  __int64 v20; // rsi
  const char *v21; // rax
  PVOID v22; // r9
  unsigned int v23; // r8d
  int v24; // ecx
  __int64 v25; // [rsp+58h] [rbp-69h] BYREF
  __int64 v26; // [rsp+60h] [rbp-61h] BYREF
  _DWORD v27[4]; // [rsp+68h] [rbp-59h] BYREF
  _QWORD v28[14]; // [rsp+78h] [rbp-49h] BYREF

  v1 = *(_QWORD *)(a1 + 240);
  v25 = 0LL;
  v3 = *(_QWORD *)(a1 + 16);
  dword_140C4CC4C = *(_DWORD *)(v1 + 3468) >> 12;
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0
    && (v25 = v3,
        v9 = *(char **)(v3 + 48),
        v10 = RtlImageNtHeader(v9),
        v11 = RtlLookupImageSectionByName((__int64)v10, "RETPOL"),
        v12 = *((_DWORD *)v11 + 2),
        Base = &v9[*((unsigned int *)v11 + 3)],
        dword_140C4CC88 = (v12 >> 12) + ((v12 & 0xFFF) != 0),
        dword_140C4CC88 > (unsigned int)dword_140C4CC4C) )
  {
    updated = -1073741811;
  }
  else if ( ((KiSpeculationFeatures & 0x20000000000LL) != 0 || (KiSpeculationFeatures & 0x40000000000LL) != 0)
         && (MiFlags & 0x10000) != 0 )
  {
    memset(v28, 0, 0x68uLL);
    v13 = ((unsigned __int64)KiSpeculationFeatures >> 41) & 1 | 2;
    if ( (KiSpeculationFeatures & 0x40000000000LL) == 0 )
      v13 = ((unsigned __int64)KiSpeculationFeatures >> 41) & 1;
    v28[1] = v13;
    updated = VslpEnterIumSecureMode(2u, 220, 0, (__int64)v28);
  }
  else if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
  {
    v14 = v25;
    v15 = RtlImageNtHeader(*(PVOID *)(v25 + 48));
    v16 = RtlLookupImageSectionByName((__int64)v15, "INITKDBG");
    v17 = 0;
    v18 = &v25;
    v27[0] = *((_DWORD *)v16 + 3);
    v19 = 1;
    LODWORD(v26) = *((_DWORD *)v16 + 2);
    while ( 1 )
    {
      v20 = *v18;
      v21 = RtlLookupImageSectionByName((__int64)v15, "MINIEX");
      v22 = Base;
      v23 = *(_DWORD *)(v20 + 64);
      v24 = *((_DWORD *)v21 + 3);
      v27[v19 - 2] = *((_DWORD *)v21 + 2);
      v27[v19] = v24;
      updated = RtlPerformRetpolineRelocationsOnImageEx(
                  *(char **)(v20 + 48),
                  *(_QWORD *)(v20 + 48),
                  v23,
                  (__int64)v22,
                  (__int64)v22,
                  1,
                  (__int64)v27,
                  (__int64)&v26,
                  v19 + 1);
      if ( updated < 0 )
        break;
      v19 = 0;
      ++v17;
      ++v18;
      if ( v17 )
      {
        updated = RtlCopyRetpolineStubsUnwindInfo(
                    *(_QWORD *)(v14 + 48),
                    *(_QWORD *)(v14 + 48),
                    (unsigned int *)Base,
                    (int)Base);
        if ( updated < 0 )
          break;
        goto LABEL_6;
      }
    }
  }
  else
  {
LABEL_6:
    if ( (KiSpeculationFeatures & 0x40000000000LL) != 0 )
    {
      v4 = *(__int64 **)(a1 + 16);
      v5 = (unsigned int (*)(void))((unsigned __int64)MiIsBootImageTargetFullyRetpolined & -(__int64)((KiSpeculationFeatures & 0x20000000000LL) != 0));
      v6 = 0;
      while ( 1 )
      {
        updated = RtlUpdateImportRelocationsInImage(
                    (char *)v4[6],
                    v4[6],
                    *((_DWORD *)v4 + 16),
                    v5,
                    (__int64)Base,
                    (__int64)Base,
                    1,
                    (KiSpeculationFeatures & 0x20000000000LL) == 0);
        if ( ((updated + 0x80000000) & 0x80000000) == 0 && updated != -1073741637 )
          break;
        *((_DWORD *)v4 + 26) |= 0x80u;
        ++v6;
        v4 = (__int64 *)*v4;
        if ( v6 >= 2 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      updated = 0;
    }
  }
  dword_140C4CC8C = updated;
  return (unsigned int)updated;
}
