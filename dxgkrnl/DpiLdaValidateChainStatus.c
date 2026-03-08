/*
 * XREFs of DpiLdaValidateChainStatus @ 0x1C03A4550
 * Callers:
 *     DpiLdaValidateSystemChainStatus @ 0x1C0217240 (DpiLdaValidateSystemChainStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiLdaValidateChainStatus(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // r8d
  unsigned int v6; // edx

  v1 = *(_QWORD *)(a1 + 64);
  v2 = 0;
  if ( *(_BYTE *)(v1 + 508) != 1 )
  {
    v3 = *(_QWORD *)(v1 + 2728);
    if ( !v3 )
    {
      v4 = -1071774671LL;
LABEL_4:
      v2 = v4;
      WdLogSingleEntry1(2LL, v4);
      return v2;
    }
    v1 = *(_QWORD *)(v3 + 64);
  }
  v5 = *(_DWORD *)(v1 + 2736);
  if ( v5 != *(_DWORD *)(v1 + 504) )
  {
    v4 = -1071774670LL;
    goto LABEL_4;
  }
  if ( *(_DWORD *)(v1 + 236) != 2 )
  {
    v4 = -1071774669LL;
    goto LABEL_4;
  }
  v6 = 1;
  if ( v5 > 1 )
  {
    while ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 2728) + 8LL * v6) + 64LL) + 236LL) == 2 )
    {
      if ( ++v6 >= v5 )
        return v2;
    }
    v2 = -1071774666;
    WdLogSingleEntry3(0LL, 275LL, 21LL, -1071774666LL);
  }
  return v2;
}
