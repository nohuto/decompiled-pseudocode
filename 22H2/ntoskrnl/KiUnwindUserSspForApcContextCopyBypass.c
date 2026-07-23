/*
 * XREFs of KiUnwindUserSspForApcContextCopyBypass @ 0x1405250D4
 * Callers:
 *     KiInitializeUserApc @ 0x140309CE4 (KiInitializeUserApc.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x14033F480 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x14033F500 (RtlInitializeExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x14033F584 (RtlpSanitizeContextFlags.c)
 *     RtlLocateExtendedFeature2 @ 0x140380F40 (RtlLocateExtendedFeature2.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140407B20 (_alloca_probe.c)
 *     KiVerifyContextXStateCetUEnabled @ 0x140515F60 (KiVerifyContextXStateCetUEnabled.c)
 *     RtlpReadExtendedContext @ 0x1406C0FC0 (RtlpReadExtendedContext.c)
 */

int __fastcall KiUnwindUserSspForApcContextCopyBypass(__int64 a1)
{
  ULONG v1; // eax
  int result; // eax
  ULONG v4; // ebx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  void *v7; // rsp
  void *v8; // rsp
  int v9; // edx
  int v10; // ecx
  char *ExtendedFeature2; // rax
  char *v12; // rbx
  ULONG ContextFlags; // [rsp+30h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+34h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+38h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 48);
  ContextEx = 0LL;
  ContextLength = 0;
  ContextFlags = v1;
  result = RtlpSanitizeContextFlags(&ContextFlags, 1);
  if ( result >= 0 )
  {
    v4 = ContextFlags;
    if ( (ContextFlags & 0x100040) != 0x100040 )
      return -1073741823;
    result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
    if ( result >= 0 )
    {
      v5 = ContextLength + 15LL;
      if ( v5 <= ContextLength )
        v5 = 0xFFFFFFFFFFFFFF0LL;
      v6 = v5 & 0xFFFFFFFFFFFFFFF0uLL;
      v7 = alloca(v6);
      v8 = alloca(v6);
      result = RtlInitializeExtendedContext((PCONTEXT)&ContextFlags, v4, &ContextEx);
      if ( result >= 0 )
      {
        LOBYTE(v9) = 1;
        result = RtlpReadExtendedContext(v10, v9, (_DWORD)ContextEx, v4, a1, 0LL);
        if ( result >= 0 )
        {
          ExtendedFeature2 = RtlLocateExtendedFeature2(ContextEx, 0xBu, 0xFFFFF780000003D8uLL, 0LL);
          v12 = ExtendedFeature2;
          if ( ExtendedFeature2 && (*(ULONG *)((char *)&ContextFlags + SLODWORD(STACK[0x510]) + 1232) & 0x800LL) != 0 )
          {
            *((_QWORD *)ExtendedFeature2 + 1) -= 8LL;
            result = KiVerifyContextXStateCetUEnabled(ExtendedFeature2, (void *)__readmsr(0x6A7u));
            if ( result >= 0 )
            {
              __writemsr(0x6A7u, *((_QWORD *)v12 + 1));
              return 0;
            }
            return result;
          }
          return -1073741823;
        }
      }
    }
  }
  return result;
}
