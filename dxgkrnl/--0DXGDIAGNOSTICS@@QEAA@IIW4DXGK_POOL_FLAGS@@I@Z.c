/*
 * XREFs of ??0DXGDIAGNOSTICS@@QEAA@IIW4DXGK_POOL_FLAGS@@I@Z @ 0x1C001FBD4
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0205878 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C02067E8 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 *     ?InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C0327D6C (-InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::DXGDIAGNOSTICS(__int64 a1, unsigned int a2, int a3, __int64 a4, unsigned int a5)
{
  void *v8; // rax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d

  *(_DWORD *)a1 = 49;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = a4;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 24) = 10000000LL * a5;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 47;
  *(_DWORD *)(a1 + 104) = 66;
  v8 = (void *)operator new[](a2, 0x4B677844u, a4);
  *(_QWORD *)(a1 + 56) = v8;
  if ( v8 )
  {
    *(_DWORD *)(a1 + 16) = a2;
    *(_DWORD *)(a1 + 20) = a3;
    memset(v8, 0, a2);
  }
  else
  {
    WdLogSingleEntry1(6LL, *(unsigned int *)(a1 + 16));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v11,
        v10,
        v12,
        0,
        1,
        -1,
        (__int64)L"Unable to allocate diagnosability buffer of size 0x%I64x",
        *(unsigned int *)(a1 + 16),
        0LL,
        0LL,
        0LL,
        0LL);
  }
  return a1;
}
