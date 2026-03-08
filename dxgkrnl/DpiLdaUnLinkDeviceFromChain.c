/*
 * XREFs of DpiLdaUnLinkDeviceFromChain @ 0x1C03A4380
 * Callers:
 *     DpiAddDevice @ 0x1C01F38A0 (DpiAddDevice.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C0396F80 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0004778 (DpiCheckForOutstandingD3Requests.c)
 *     DpiEnableD3Requests @ 0x1C0180A2C (DpiEnableD3Requests.c)
 */

__int64 __fastcall DpiLdaUnLinkDeviceFromChain(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r14
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbp
  unsigned int v9; // edx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10

  v1 = *(_QWORD *)(a1 + 64);
  v2 = *(_QWORD *)(v1 + 40);
  v3 = *(_QWORD *)(v2 + 56);
  if ( *(_QWORD *)v3 != v3 )
  {
    do
    {
      if ( (*(_DWORD *)(v3 + 16) != 1953656900 || *(_DWORD *)(v3 + 20) != 4)
        && *(_DWORD *)(v3 + 500) == *(_DWORD *)(v1 + 500) )
      {
        v4 = *(_QWORD *)(v1 + 168);
        if ( v4 )
        {
          --*(_DWORD *)(v4 + 104);
          v5 = *(_QWORD *)(v1 + 1456);
          *(_QWORD *)(v1 + 168) = 0LL;
          --*(_DWORD *)(v5 + 8);
          v6 = *(_QWORD *)(v1 + 1464);
          *(_QWORD *)(v1 + 1456) = 0LL;
          --*(_DWORD *)(v6 + 8);
          *(_QWORD *)(v1 + 1464) = 0LL;
        }
        if ( *(_BYTE *)(v1 + 508) == 1 )
        {
          v7 = v1;
          v8 = v3;
LABEL_11:
          KeEnterCriticalRegion();
          if ( *(_BYTE *)(v3 + 484) )
            DpiCheckForOutstandingD3Requests(v3);
          ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
          --*(_DWORD *)(v7 + 2736);
          v9 = *(_DWORD *)(v8 + 2736);
          if ( v9 < *(_DWORD *)(v7 + 504) - 1 )
          {
            v10 = v9 + 1;
            do
            {
              v11 = *(_QWORD *)(v7 + 2728);
              v12 = *(_QWORD *)(v11 + 8 * v10);
              if ( !v12 )
                break;
              v10 = (unsigned int)(v10 + 1);
              *(_QWORD *)(v11 + 8LL * v9) = v12;
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 2728) + 8LL * v9) + 64LL) + 2736LL) = v9;
              ++v9;
            }
            while ( v9 < *(_DWORD *)(v7 + 504) - 1 );
          }
          *(_QWORD *)(*(_QWORD *)(v7 + 2728) + 8LL * v9) = 0LL;
          *(_QWORD *)(v8 + 2728) = 0LL;
          if ( *(_BYTE *)(v8 + 1152) )
            *(_BYTE *)(*(_QWORD *)(v3 + 168) + 108LL) = 0;
          if ( *(_BYTE *)(v3 + 484) )
            DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
          ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
          KeLeaveCriticalRegion();
          goto LABEL_22;
        }
        if ( *(_BYTE *)(v3 + 508) == 1 )
        {
          v7 = v3;
          v8 = v1;
          goto LABEL_11;
        }
      }
LABEL_22:
      v3 = *(_QWORD *)v3;
    }
    while ( *(_QWORD *)v3 != *(_QWORD *)(v2 + 56) );
  }
  return 0LL;
}
