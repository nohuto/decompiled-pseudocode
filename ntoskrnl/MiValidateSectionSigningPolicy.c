/*
 * XREFs of MiValidateSectionSigningPolicy @ 0x1406A14E8
 * Callers:
 *     MiValidateExistingImage @ 0x1406A1230 (MiValidateExistingImage.c)
 *     MiCreateNewSection @ 0x1406A6414 (MiCreateNewSection.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     MiValidateSectionCreate @ 0x14069F890 (MiValidateSectionCreate.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x1409E74B4 (EtwTimLogProhibitNonMicrosoftBinaries.c)
 */

__int64 __fastcall MiValidateSectionSigningPolicy(
        unsigned int a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        char a7,
        char a8,
        char a9)
{
  int v13; // edx
  _KPROCESS *Process; // r13
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ebx
  int v19; // r8d
  int v20; // r9d
  int v21; // ecx
  __int64 v22; // [rsp+20h] [rbp-48h]

  if ( a1 < 2 )
  {
    if ( (a7 & 6) == 0 )
      return 0LL;
    v13 = a6 | 0x2000000;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( (a7 & 2) != 0 )
      v13 = a6;
    v15 = v13 | 0x800000;
    if ( (a7 & 8) == 0 )
      v15 = v13;
    v18 = MiValidateSectionCreate(a2, a3, a4, a5, v15, a8, a9);
    if ( v18 < 0 )
    {
      v17 = (unsigned int)(a1 != 1) + 1;
      dword_140C65490 = (a1 != 1) + 1;
    }
    if ( (a7 & 2) != 0 && v18 < 0 )
    {
      if ( v18 != -1073740760 || (a7 & 9) != 1 )
        return (unsigned int)v18;
      LOBYTE(v19) = a8;
      v22 = a2 + 88;
      v21 = 2;
    }
    else
    {
      if ( (a7 & 4) == 0 )
        return (unsigned int)v18;
      if ( v18 < 0 )
        return 0;
      if ( qword_140C37600 )
      {
        LOBYTE(v16) = a9;
        LOBYTE(v17) = *(_BYTE *)(*(_QWORD *)a3 + 15LL) >> 4;
        if ( (unsigned int)qword_140C37600(v17, v16) )
          return (unsigned int)v18;
      }
      LOBYTE(v19) = a9;
      v22 = a2 + 88;
      v21 = 1;
    }
    LOBYTE(v20) = *(_BYTE *)(*(_QWORD *)a3 + 15LL) >> 4;
    EtwTimLogProhibitNonMicrosoftBinaries(v21, (_DWORD)Process, v19, v20, v22);
    return (unsigned int)v18;
  }
  return 3221225485LL;
}
