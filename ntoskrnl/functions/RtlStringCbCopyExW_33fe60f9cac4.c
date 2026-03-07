NTSTATUS __stdcall RtlStringCbCopyExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cbDest,
        NTSTRSAFE_PCWSTR pszSrc,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcbRemaining,
        ULONG dwFlags)
{
  DWORD v6; // r15d
  size_t v8; // rdi
  int v11; // ebx
  wchar_t *v12; // rbp
  const wchar_t *v13; // rax
  size_t v15; // r8
  size_t *pcchRemaining; // [rsp+20h] [rbp-48h]
  size_t v17[2]; // [rsp+30h] [rbp-38h] BYREF
  size_t pcchNewDestLength; // [rsp+78h] [rbp+10h] BYREF

  v6 = dwFlags;
  v8 = cbDest >> 1;
  v11 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && v8 || v8 > 0x7FFFFFFF )
      v11 = -1073741811;
  }
  else if ( v8 - 1 > 0x7FFFFFFE )
  {
    v11 = -1073741811;
  }
  if ( v11 < 0 )
  {
    if ( v8 )
      *pszDest = 0;
  }
  else
  {
    pcchNewDestLength = (size_t)pszDest;
    v12 = pszDest;
    v17[0] = cbDest >> 1;
    if ( (dwFlags & 0x100) != 0 )
    {
      v13 = (const wchar_t *)&cchOriginalDestLength;
      if ( pszSrc )
        v13 = pszSrc;
      pszSrc = v13;
    }
    v11 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v11 = -1073741811;
      if ( v8 )
        *pszDest = 0;
    }
    else if ( v8 )
    {
      pcchNewDestLength = 0LL;
      v11 = RtlStringCopyWorkerW_1(pszDest, v8, &pcchNewDestLength, pszSrc, (size_t)pcchRemaining);
      v8 -= pcchNewDestLength;
      v17[0] = v8;
      v12 = &pszDest[pcchNewDestLength];
      pcchNewDestLength = (size_t)v12;
      if ( v11 >= 0 )
      {
        if ( (v6 & 0x200) != 0 )
        {
          v15 = (cbDest & 1) + 2 * v8;
          if ( v15 > 2 )
            memset(v12 + 1, (unsigned __int8)v6, v15 - 2);
        }
        goto LABEL_13;
      }
    }
    else
    {
      if ( !*pszSrc )
      {
LABEL_13:
        if ( ppszDestEnd )
          *ppszDestEnd = v12;
        if ( pcbRemaining )
          *pcbRemaining = (cbDest & 1) + 2 * v8;
        return v11;
      }
      v11 = pszDest != 0LL ? -2147483643 : -1073741811;
    }
    if ( (v6 & 0x1C00) != 0 && cbDest )
    {
      StringExHandleOtherFlagsW(pszDest, cbDest, (size_t)pszSrc, (STRSAFE_LPWSTR *)&pcchNewDestLength, v17, v6);
      v12 = (wchar_t *)pcchNewDestLength;
      v8 = v17[0];
    }
    if ( (int)(v11 + 0x80000000) < 0 || v11 == -2147483643 )
      goto LABEL_13;
  }
  return v11;
}
