/*
 * XREFs of RtlStringCbPrintfExA @ 0x1404B63C4
 * Callers:
 *     KiDisplayBlueScreen @ 0x140518300 (KiDisplayBlueScreen.c)
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlStringVPrintfWorkerA @ 0x1403AD768 (RtlStringVPrintfWorkerA.c)
 *     RtlStringExValidateDestA @ 0x1403CD978 (RtlStringExValidateDestA.c)
 *     RtlStringExHandleFillBehindNullA @ 0x1404B654C (RtlStringExHandleFillBehindNullA.c)
 *     RtlStringExHandleOtherFlagsA @ 0x1404B6578 (RtlStringExHandleOtherFlagsA.c)
 */

NTSTATUS RtlStringCbPrintfExA(
        NTSTRSAFE_PSTR pszDest,
        size_t cbDest,
        NTSTRSAFE_PSTR *ppszDestEnd,
        size_t *pcbRemaining,
        ULONG dwFlags,
        NTSTRSAFE_PCSTR pszFormat,
        ...)
{
  int v9; // ebx
  char *v10; // r12
  size_t v11; // r14
  const char *v12; // r9
  size_t v13; // rax
  NTSTRSAFE_PSTR ppszDestEnda; // [rsp+30h] [rbp-18h] BYREF
  size_t pcchNewDestLength[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list va; // [rsp+C0h] [rbp+78h] BYREF

  va_start(va, pszFormat);
  v9 = RtlStringExValidateDestA(pszDest, cbDest, (const size_t)ppszDestEnd, dwFlags);
  if ( v9 < 0 )
  {
    if ( cbDest )
      *pszDest = 0;
    return v9;
  }
  ppszDestEnda = pszDest;
  v10 = pszDest;
  pcchNewDestLength[0] = cbDest;
  v11 = cbDest;
  if ( (dwFlags & 0x100) != 0 )
  {
    v12 = &Src;
    if ( pszFormat )
      v12 = pszFormat;
  }
  else
  {
    v12 = pszFormat;
  }
  v9 = 0;
  if ( (dwFlags & 0xFFFFE000) == 0 )
  {
    if ( cbDest )
    {
      pcchNewDestLength[0] = 0LL;
      v9 = RtlStringVPrintfWorkerA(pszDest, cbDest, pcchNewDestLength, v12, va);
      v13 = pcchNewDestLength[0];
      v11 = cbDest - pcchNewDestLength[0];
      pcchNewDestLength[0] = cbDest - pcchNewDestLength[0];
      v10 = &pszDest[v13];
      ppszDestEnda = &pszDest[v13];
      if ( v9 < 0 )
        goto LABEL_18;
      if ( (dwFlags & 0x200) != 0 && v11 > 1 )
        RtlStringExHandleFillBehindNullA(&pszDest[v13], v11, dwFlags);
    }
    else
    {
      if ( !*v12 )
        goto LABEL_23;
      v9 = pszDest != 0LL ? -2147483643 : -1073741811;
    }
    if ( v9 < 0 )
      goto LABEL_18;
LABEL_23:
    if ( ppszDestEnd )
      *ppszDestEnd = v10;
    if ( pcbRemaining )
      *pcbRemaining = v11;
    return v9;
  }
  v9 = -1073741811;
  if ( cbDest )
    *pszDest = 0;
LABEL_18:
  if ( (dwFlags & 0x1C00) != 0 && cbDest )
  {
    RtlStringExHandleOtherFlagsA(pszDest, cbDest, 0LL, &ppszDestEnda, pcchNewDestLength, dwFlags);
    v10 = ppszDestEnda;
    v11 = pcchNewDestLength[0];
  }
  if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
    goto LABEL_23;
  return v9;
}
