/*
 * XREFs of KsepPatchDriverImportsTable @ 0x140800258
 * Callers:
 *     KsepApplyShimsToDriver @ 0x140800924 (KsepApplyShimsToDriver.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14035E710 (RtlImageDirectoryEntryToData.c)
 *     VfIsVerifierEnabled @ 0x14036B1B0 (VfIsVerifierEnabled.c)
 *     VfIsVerificationEnabledForImage @ 0x1405CBDD8 (VfIsVerificationEnabledForImage.c)
 *     KsepPatchImportTableEntry @ 0x140974334 (KsepPatchImportTableEntry.c)
 *     VfGetHookAddressForOriginal @ 0x140AC788C (VfGetHookAddressForOriginal.c)
 */

__int64 __fastcall KsepPatchDriverImportsTable(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // r13
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 result; // rax
  __int64 v8; // rbx
  int v9; // r15d
  __int64 HookAddressForOriginal; // rsi
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0;
  v2 = a2;
  if ( a1 && a2 )
  {
    LOBYTE(a2) = 1;
    v4 = RtlImageDirectoryEntryToData(*(_QWORD *)(a1 + 48), a2, 12, (int)&v11);
    if ( !v4 )
      return 3221225473LL;
    v5 = *(_QWORD *)(v2 + 48);
    if ( v5 )
    {
      LODWORD(v6) = 0;
      while ( 1 )
      {
        if ( *(_DWORD *)v5 == 4 )
          return 0LL;
        if ( *(_DWORD *)v5 <= 2u )
          break;
LABEL_8:
        v6 = (unsigned int)(v6 + 1);
        v5 = *(_QWORD *)(v2 + 48) + 24 * v6;
        if ( !v5 )
          return 0LL;
      }
      v8 = *(_QWORD *)(v5 + 16);
      if ( v8 )
      {
        v9 = 0;
        while ( 1 )
        {
          if ( *(_DWORD *)v8 == 2 )
            goto LABEL_8;
          if ( !*(_QWORD *)(v8 + 16) || !*(_QWORD *)(v8 + 24) || *(_DWORD *)v8 )
            return 3221225485LL;
          result = KsepPatchImportTableEntry(v4, v11);
          if ( (_DWORD)result == -1073741275 )
          {
            if ( (unsigned int)VfIsVerifierEnabled() )
            {
              if ( (unsigned int)VfIsVerificationEnabledForImage(a1) )
              {
                HookAddressForOriginal = VfGetHookAddressForOriginal(*(_QWORD *)(v8 + 8));
                if ( HookAddressForOriginal )
                {
                  result = KsepPatchImportTableEntry(v4, v11);
                  if ( (int)result < 0 )
                    goto LABEL_26;
                  *(_QWORD *)(v8 + 24) = HookAddressForOriginal;
                }
              }
            }
          }
          else if ( (int)result < 0 )
          {
LABEL_26:
            if ( (_DWORD)result != -1073741275 )
              return result;
          }
          v8 = *(_QWORD *)(v5 + 16) + 32LL * (unsigned int)++v9;
          if ( !v8 )
            goto LABEL_8;
        }
      }
    }
  }
  return 3221225485LL;
}
