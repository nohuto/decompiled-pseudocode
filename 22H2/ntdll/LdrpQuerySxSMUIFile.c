/*
 * XREFs of LdrpQuerySxSMUIFile @ 0x18007757C
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180034EA0 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x180016090 (RtlCompareUnicodeString.c)
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x1800197B0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180019900 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001A9E0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlFindActivationContextSectionString @ 0x18001C6C0 (RtlFindActivationContextSectionString.c)
 *     RtlLcidToLocaleName @ 0x18003B2F0 (RtlLcidToLocaleName.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A4600 (memset.c)
 */

__int64 __fastcall LdrpQuerySxSMUIFile(
        PUNICODE_STRING StringToFind,
        unsigned __int16 a2,
        _UNICODE_STRING *a3,
        _UNICODE_STRING *a4,
        PUNICODE_STRING *NewName)
{
  LCID v7; // r15d
  __int64 hActCtx; // rdi
  NTSTATUS ActivationContextSectionString; // ebx
  int v12; // eax
  ULONG NewFlags; // [rsp+50h] [rbp-1E8h] BYREF
  NTSTATUS v14; // [rsp+54h] [rbp-1E4h]
  _UNICODE_STRING String1; // [rsp+58h] [rbp-1E0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-1D0h] BYREF
  _UNICODE_STRING LocaleName; // [rsp+70h] [rbp-1C8h] BYREF
  tagACTCTX_SECTION_KEYED_DATA ReturnedData; // [rsp+80h] [rbp-1B8h] BYREF
  __int64 v19; // [rsp+F0h] [rbp-148h] BYREF
  int v20; // [rsp+F8h] [rbp-140h]
  __int128 v21; // [rsp+100h] [rbp-138h]
  __int128 v22; // [rsp+110h] [rbp-128h]
  __int128 v23; // [rsp+120h] [rbp-118h]
  __int64 v24; // [rsp+130h] [rbp-108h]
  char v25; // [rsp+140h] [rbp-F8h] BYREF

  v7 = a2;
  hActCtx = 0LL;
  v16 = 0LL;
  String1.MaximumLength = 0;
  NewFlags = 0;
  ReturnedData.cbSize = 112;
  memset(&ReturnedData.ulDataFormatVersion, 0, 0x6CuLL);
  v19 = 72LL;
  v20 = 1;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  ActivationContextSectionString = RtlDosApplyFileIsolationRedirection_Ustr(
                                     1u,
                                     StringToFind,
                                     0LL,
                                     a3,
                                     a4,
                                     NewName,
                                     &NewFlags,
                                     0LL,
                                     0LL);
  if ( ActivationContextSectionString >= 0 )
  {
    if ( LdrpCreateActCtxLanguageW )
    {
      if ( (NewFlags & 1) == 0 )
      {
        ActivationContextSectionString = RtlFindActivationContextSectionString(7u, 0LL, 2u, StringToFind, &ReturnedData);
        if ( ActivationContextSectionString >= 0 )
        {
          if ( ReturnedData.ulDataFormatVersion == 1 )
          {
            if ( (ReturnedData.ulFlags & 1) == 0 )
            {
              hActCtx = (__int64)ReturnedData.hActCtx;
              if ( (ReturnedData.ulFlags & 2) != 0 )
                hActCtx = -4LL;
            }
            ReturnedData.hActCtx = (HANDLE)hActCtx;
            String1.MaximumLength = *((_WORD *)ReturnedData.AssemblyMetadata.lpInformation + 46);
            String1.Length = String1.MaximumLength;
            String1.Buffer = (wchar_t *)((char *)ReturnedData.AssemblyMetadata.lpSectionBase
                                       + *((unsigned int *)ReturnedData.AssemblyMetadata.lpInformation + 24));
            LocaleName.Buffer = (wchar_t *)&v25;
            LocaleName.MaximumLength = 170;
            ActivationContextSectionString = RtlLcidToLocaleName(v7, &LocaleName, 2u, 0);
            if ( ActivationContextSectionString >= 0 )
            {
              if ( RtlCompareUnicodeString(&String1, &LocaleName, 1u) )
              {
                v12 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 *))LdrpCreateActCtxLanguageW)(
                        hActCtx,
                        (unsigned __int16)v7,
                        &v16);
                ActivationContextSectionString = v12;
                if ( v12 >= 0 )
                {
                  if ( v16 != -1 )
                  {
                    RtlActivateActivationContextUnsafeFast((__int64)&v19, v16);
                    if ( a4->Buffer )
                      RtlFreeAnsiString(a4);
                    ActivationContextSectionString = RtlDosApplyFileIsolationRedirection_Ustr(
                                                       0,
                                                       StringToFind,
                                                       0LL,
                                                       a3,
                                                       a4,
                                                       NewName,
                                                       &NewFlags,
                                                       0LL,
                                                       0LL);
                    v14 = ActivationContextSectionString;
                    if ( ActivationContextSectionString >= 0 )
                    {
                      ActivationContextSectionString = RtlFindActivationContextSectionString(
                                                         7u,
                                                         0LL,
                                                         2u,
                                                         StringToFind,
                                                         &ReturnedData);
                      v14 = ActivationContextSectionString;
                      if ( ActivationContextSectionString >= 0 )
                      {
                        if ( ReturnedData.ulDataFormatVersion == 1 )
                        {
                          String1.MaximumLength = *((_WORD *)ReturnedData.AssemblyMetadata.lpInformation + 46);
                          String1.Length = String1.MaximumLength;
                          String1.Buffer = (wchar_t *)((char *)ReturnedData.AssemblyMetadata.lpSectionBase
                                                     + *((unsigned int *)ReturnedData.AssemblyMetadata.lpInformation + 24));
                          if ( RtlCompareUnicodeString(&String1, &LocaleName, 1u) )
                            ActivationContextSectionString = -1072365564;
                        }
                        else
                        {
                          ActivationContextSectionString = -1072365563;
                        }
                        v14 = ActivationContextSectionString;
                      }
                    }
                    RtlDeactivateActivationContextUnsafeFast((__int64)&v19);
                  }
                  if ( LdrpReleaseActCtxW )
                    LdrpReleaseActCtxW();
                }
              }
            }
          }
          else
          {
            return (unsigned int)-1072365563;
          }
        }
      }
    }
  }
  return (unsigned int)ActivationContextSectionString;
}
