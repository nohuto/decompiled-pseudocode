/*
 * XREFs of LdrResolveDelayLoadedAPI @ 0x180010380
 * Callers:
 *     LdrpResolveDelayLoadDescriptor @ 0x1800101B0 (LdrpResolveDelayLoadDescriptor.c)
 *     LdrQueryOptionalDelayLoadedAPI @ 0x1800CE860 (LdrQueryOptionalDelayLoadedAPI.c)
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180010500 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     LdrpHandleProtectedDelayload @ 0x1800318A0 (LdrpHandleProtectedDelayload.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800334E8 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x18005424C (LdrpUnsuppressAddressTakenIat.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x1800880CC (LdrpHandleUnprotectedDelayLoad.c)
 *     LdrpLogDbgPrint @ 0x1800CDB18 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrResolveDelayLoadedAPI(const void *a1, _BYTE *a2, int a3, int a4, __int64 *a5, int a6)
{
  int v7; // r12d
  __int64 v9; // rbx
  int LoadedDllByHandle; // ecx
  __int64 v11; // rsi
  int v12; // eax
  char v13; // cl
  char v15; // al
  __int64 v16; // [rsp+50h] [rbp-38h] BYREF

  v7 = (int)a2;
  v9 = 0LL;
  if ( ((a6 & 0xFFFFDFFF) == 8 || (~((LdrpPolicyBits & 4 | 0x7B) << 8) & a6) == 0) && (*a2 & 1) != 0 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(a1, &v16, 0LL);
    if ( LoadedDllByHandle < 0 )
    {
      v15 = LdrpDebugFlags;
      if ( (LdrpDebugFlags & 3) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrdload.c",
          1257,
          (unsigned int)"LdrResolveDelayLoadedAPI",
          0,
          (__int64)"LdrResolveDelayLoadedAPI:Unable to locate DLL based at 0x%p.Status = 0x%x\n",
          a1,
          LoadedDllByHandle);
        v15 = LdrpDebugFlags;
      }
      if ( (v15 & 0x10) != 0 )
        __debugbreak();
    }
    else
    {
      v9 = *a5;
      v11 = v16;
      if ( *a5 - (__int64)a1 < (unsigned __int64)*(unsigned int *)(v16 + 64) )
      {
        if ( (*(_DWORD *)(v16 + 104) & 0x8000) != 0 )
        {
          v9 = LdrpHandleProtectedDelayload(v16, v7, a3, a4, (__int64)a5, a6);
        }
        else
        {
          v9 = LdrpHandleUnprotectedDelayLoad(v16, v7, a3, a4, (__int64)a5, a6);
          if ( v9 )
          {
            if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression() )
            {
              v12 = LdrpUnsuppressAddressTakenIat(
                      a1,
                      (unsigned int)((_DWORD)a5 - (_DWORD)a1),
                      (unsigned int)((_DWORD)a5 - (_DWORD)a1));
              if ( v12 < 0 )
              {
                v13 = LdrpDebugFlags;
                if ( (LdrpDebugFlags & 3) != 0 )
                {
                  LdrpLogDbgPrint(
                    (unsigned int)"minkernel\\ntdll\\ldrdload.c",
                    1236,
                    (unsigned int)"LdrResolveDelayLoadedAPI",
                    0,
                    (__int64)"LdrResolveDelayLoadedAPI:Unable to unsuppress the export suppressed functions that are impo"
                             "rted in the DLL based at 0x%p.Status = 0x%x\n",
                    a1,
                    v12);
                  v13 = LdrpDebugFlags;
                }
                if ( (v13 & 0x10) != 0 )
                  __debugbreak();
              }
            }
          }
        }
      }
      LdrpDereferenceModule(v11);
    }
  }
  return v9;
}
