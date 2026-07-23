/*
 * XREFs of RtlFindActivationContextSectionString @ 0x18001C6C0
 * Callers:
 *     sxsisol_SearchActCtxForDllName @ 0x18001C2B4 (sxsisol_SearchActCtxForDllName.c)
 *     LdrpQuerySxSMUIFile @ 0x18007757C (LdrpQuerySxSMUIFile.c)
 * Callees:
 *     RtlAddRefActivationContext @ 0x1800134C0 (RtlAddRefActivationContext.c)
 *     RtlpFindUnicodeStringInSection @ 0x18001CA18 (RtlpFindUnicodeStringInSection.c)
 *     RtlpFindNextActivationContextSection @ 0x18001CF60 (RtlpFindNextActivationContextSection.c)
 *     RtlpLocateActivationContextSection @ 0x18001D0FC (RtlpLocateActivationContextSection.c)
 *     RtlpFindActivationContextSection_CheckParameters @ 0x18001D278 (RtlpFindActivationContextSection_CheckParameters.c)
 *     DbgPrintEx @ 0x180051450 (DbgPrintEx.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x1800812CC (RtlpFindActivationContextSection_FillOutReturnedData.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __cdecl RtlFindActivationContextSectionString(
        ULONG Flags,
        PGUID ExtensionGuid,
        ULONG SectionId,
        PUNICODE_STRING StringToFind,
        PACTCTX_SECTION_KEYED_DATA ReturnedData)
{
  struct _TEB *v5; // r10
  PUNICODE_STRING v7; // r14
  _PEB *ProcessEnvironmentBlock; // rax
  PACTCTX_SECTION_KEYED_DATA v11; // rsi
  NTSTATUS result; // eax
  __int64 v13; // rbx
  _DWORD *v14; // rdi
  struct _TEB *v15; // rcx
  const char *SystemDefaultActivationContextData; // rsi
  unsigned int v17; // r14d
  __int64 ActivationContext; // rdi
  _PEB *v19; // r13
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  void (__fastcall *v23)(__int64, __int64, _QWORD, _QWORD, _QWORD, char *); // rax
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rax
  char v25[4]; // [rsp+48h] [rbp-21h] BYREF
  unsigned int v26; // [rsp+4Ch] [rbp-1Dh] BYREF
  __int64 v27; // [rsp+50h] [rbp-19h] BYREF
  _DWORD *v28; // [rsp+58h] [rbp-11h] BYREF
  unsigned int v29; // [rsp+60h] [rbp-9h] BYREF
  ULONG v30; // [rsp+64h] [rbp-5h]
  PGUID v31; // [rsp+68h] [rbp-1h]
  ULONG v32; // [rsp+70h] [rbp+7h]
  unsigned int v33; // [rsp+74h] [rbp+Bh]
  int v34; // [rsp+78h] [rbp+Fh]
  int v35; // [rsp+80h] [rbp+17h] BYREF
  int v36; // [rsp+84h] [rbp+1Bh] BYREF
  struct _TEB *v37; // [rsp+88h] [rbp+1Fh]

  v5 = NtCurrentTeb();
  v7 = StringToFind;
  ProcessEnvironmentBlock = v5->ProcessEnvironmentBlock;
  if ( !ProcessEnvironmentBlock->ActivationContextData
    && !ProcessEnvironmentBlock->SystemDefaultActivationContextData
    && !v5->ActivationContextStackPointer->ActiveFrame )
  {
    return -1072365567;
  }
  v11 = ReturnedData;
  v36 = -1;
  v26 = 0;
  v35 = 0;
  result = RtlpFindActivationContextSection_CheckParameters(
             Flags,
             (_DWORD)ExtensionGuid,
             SectionId,
             (_DWORD)StringToFind,
             (__int64)ReturnedData);
  if ( result >= 0 )
  {
    v32 = SectionId;
    v27 = 0LL;
    v29 = 32;
    v30 = Flags;
    v34 = 0;
    v31 = ExtensionGuid;
    if ( (Flags & 0xFFFFFFF8) != 0 )
      return -1073741811;
    v33 = 0;
    result = RtlpFindNextActivationContextSection(&v29, &v28, &v26, &v27);
    v13 = v27;
    if ( result >= 0 )
    {
      v14 = v28;
      while ( 1 )
      {
        if ( v26 < 0x2C || *v14 != 1682469715 )
        {
          DbgPrintEx(
            0x33u,
            0,
            "RtlFindActivationContextSectionString() found section at %p (length %lu) which is not a string section\n",
            v14,
            v26);
          return -1072365565;
        }
        result = RtlpFindUnicodeStringInSection(v14, v26, v7, v11, &v36, &v35);
        if ( result >= 0 )
        {
          if ( ((v13 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL )
          {
            v23 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, char *))(v13 + 32);
            if ( v23 )
            {
              if ( (*(_BYTE *)(v13 + 48) & 8) == 0 || (*(_BYTE *)(v13 + 80) & 8) == 0 )
              {
                v25[0] = 0;
                v23(3LL, v13, *(_QWORD *)(v13 + 24), *(_QWORD *)(v13 + 40), 0LL, v25);
                *(_DWORD *)(v13 + 48) |= 8u;
                if ( v25[0] )
                  *(_DWORD *)(v13 + 80) |= 8u;
              }
            }
          }
          if ( !v11 )
            return 0;
          result = RtlpFindActivationContextSection_FillOutReturnedData(
                     Flags,
                     v11,
                     v13,
                     &v29,
                     v14,
                     v14[9],
                     v14[10],
                     v26);
          if ( result >= 0 )
            return 0;
          return result;
        }
        if ( result != -1072365560 )
          return result;
        v13 = 0LL;
        v27 = 0LL;
        if ( v29 < 0x20 || (v30 & 0xFFFFFFF8) != 0 )
        {
          result = -1073741811;
LABEL_19:
          if ( result == -1072365567 )
            return -1072365560;
          return result;
        }
        v15 = NtCurrentTeb();
        SystemDefaultActivationContextData = 0LL;
        v17 = v33;
        ActivationContext = 0LL;
        v37 = v15;
        v19 = v15->ProcessEnvironmentBlock;
        while ( 1 )
        {
          if ( v17 )
          {
            if ( v17 != 1 )
            {
              if ( v17 != 2 )
                goto LABEL_16;
              goto LABEL_32;
            }
          }
          else
          {
            ActivationContextStackPointer = v15->ActivationContextStackPointer;
            if ( ActivationContextStackPointer && ActivationContextStackPointer->ActiveFrame )
            {
              ActivationContext = (__int64)ActivationContextStackPointer->ActiveFrame->ActivationContext;
              if ( ActivationContext )
              {
                if ( ActivationContext == -4 )
                {
                  SystemDefaultActivationContextData = (const char *)v19->SystemDefaultActivationContextData;
                }
                else
                {
                  if ( ActivationContext == -3 )
                  {
                    SystemDefaultActivationContextData = "Actx ";
LABEL_60:
                    v17 = 1;
LABEL_34:
                    v33 = v17;
                    goto LABEL_17;
                  }
                  SystemDefaultActivationContextData = *(const char **)(ActivationContext + 24);
                }
              }
              if ( SystemDefaultActivationContextData )
                goto LABEL_60;
            }
          }
          SystemDefaultActivationContextData = (const char *)v19->ActivationContextData;
          ActivationContext = 0LL;
          if ( SystemDefaultActivationContextData )
          {
            v17 = 2;
            goto LABEL_34;
          }
LABEL_32:
          SystemDefaultActivationContextData = (const char *)v19->SystemDefaultActivationContextData;
          ActivationContext = -4LL;
          if ( SystemDefaultActivationContextData )
          {
            v17 = 3;
            goto LABEL_34;
          }
LABEL_16:
          if ( v17 > 3 )
          {
            result = -1073741595;
            goto LABEL_19;
          }
LABEL_17:
          if ( !SystemDefaultActivationContextData )
          {
            result = -1072365567;
            goto LABEL_19;
          }
          result = RtlpLocateActivationContextSection(
                     (_DWORD)SystemDefaultActivationContextData,
                     (_DWORD)v31,
                     v32,
                     (unsigned int)&v28,
                     (__int64)&v26);
          if ( result >= 0 )
            break;
          if ( result != -1072365567 || v17 == 3 )
            goto LABEL_30;
          v15 = v37;
        }
        v20 = 2;
        v21 = 0;
        if ( ActivationContext != -4 )
          v20 = 0;
        LOBYTE(v21) = ActivationContext == 0;
        v22 = v21 | v20;
        result = 0;
        v34 = v22;
        if ( ActivationContext != -4 )
          v13 = ActivationContext;
LABEL_30:
        if ( result < 0 )
          goto LABEL_19;
        RtlAddRefActivationContext((PACTIVATION_CONTEXT)v13);
        v14 = v28;
        v11 = ReturnedData;
        v7 = StringToFind;
      }
    }
  }
  return result;
}
