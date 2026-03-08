/*
 * XREFs of DpiLdaLinkDeviceToChain @ 0x1C03A3B80
 * Callers:
 *     DpiAddDevice @ 0x1C01F38A0 (DpiAddDevice.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0004778 (DpiCheckForOutstandingD3Requests.c)
 *     DpiEnableD3Requests @ 0x1C0180A2C (DpiEnableD3Requests.c)
 */

__int64 __fastcall DpiLdaLinkDeviceToChain(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // esi
  __int64 v3; // r15
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r14

  v1 = *(_QWORD *)(a1 + 64);
  v2 = 0;
  v3 = *(_QWORD *)(v1 + 40);
  v4 = *(_QWORD *)(v3 + 56);
  if ( *(_QWORD *)v4 != v4 )
  {
    do
    {
      if ( *(_DWORD *)(v4 + 16) == 1953656900 && *(_DWORD *)(v4 + 20) == 4
        || *(_DWORD *)(v4 + 500) != *(_DWORD *)(v1 + 500) )
      {
        goto LABEL_20;
      }
      if ( !*(_QWORD *)(v1 + 168) )
      {
        v5 = *(_QWORD *)(v4 + 168);
        *(_QWORD *)(v1 + 168) = v5;
        ++*(_DWORD *)(v5 + 104);
        v6 = *(_QWORD *)(v4 + 1456);
        *(_QWORD *)(v1 + 1456) = v6;
        ++*(_DWORD *)(v6 + 8);
        v7 = *(_QWORD *)(v4 + 1464);
        *(_QWORD *)(v1 + 1464) = v7;
        ++*(_DWORD *)(v7 + 8);
      }
      if ( *(_BYTE *)(v1 + 508) == 1 )
      {
        v8 = v1;
        v9 = v4;
      }
      else
      {
        if ( *(_BYTE *)(v4 + 508) != 1 )
          goto LABEL_20;
        v8 = v4;
        v9 = v1;
      }
      if ( *(_BYTE *)(v9 + 508) == 1 || *(_DWORD *)(v8 + 2736) >= *(_DWORD *)(v8 + 504) )
      {
        v2 = -1071774666;
        WdLogSingleEntry1(2LL, -1071774666LL);
        return v2;
      }
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v4 + 484) )
        DpiCheckForOutstandingD3Requests(v4);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
      *(_QWORD *)(v9 + 2728) = *(_QWORD *)(v8 + 24);
      *(_DWORD *)(v9 + 2736) = *(_DWORD *)(v8 + 2736);
      *(_QWORD *)(*(_QWORD *)(v8 + 2728) + 8LL * (unsigned int)(*(_DWORD *)(v8 + 2736))++) = *(_QWORD *)(v9 + 24);
      if ( *(_BYTE *)(v9 + 1152) )
        *(_BYTE *)(*(_QWORD *)(v1 + 168) + 108LL) = 1;
      if ( *(_BYTE *)(v4 + 484) )
        DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
      KeLeaveCriticalRegion();
LABEL_20:
      v4 = *(_QWORD *)v4;
    }
    while ( *(_QWORD *)v4 != *(_QWORD *)(v3 + 56) );
  }
  return v2;
}
