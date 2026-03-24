/*
 * XREFs of ??0DXGDIAGNOSTICS@@QEAA@IIW4_POOL_TYPE@@I@Z @ 0x1C0021758
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C017B444 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C017C358 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 *     ?InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C029ABC4 (-InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 */

DXGDIAGNOSTICS *__fastcall DXGDIAGNOSTICS::DXGDIAGNOSTICS(
        DXGDIAGNOSTICS *this,
        unsigned int a2,
        int a3,
        POOL_TYPE a4,
        unsigned int a5)
{
  SIZE_T v6; // rsi
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  PVOID v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // rax

  v6 = a2;
  *((_QWORD *)this + 3) = 10000000LL * a5;
  *(_DWORD *)this = 35;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = a4;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v9 = operator new[](0x28uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v9 )
  {
    *v9 = 0LL;
    v9[1] = 0LL;
    v9[2] = 0LL;
    *((_DWORD *)v9 + 6) = 0;
    *((_DWORD *)v9 + 7) = 47;
    *((_DWORD *)v9 + 8) = 53;
  }
  else
  {
    v9 = 0LL;
  }
  *((_QWORD *)this + 7) = v9;
  if ( !v9 )
  {
    v20 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
    *(_QWORD *)(v20 + 24) = 112LL;
LABEL_10:
    WdLogEvent5_WdLowResource(v20);
    return this;
  }
  v14 = operator new[](v6, 0x4B677844u, a4);
  *((_QWORD *)this + 6) = v14;
  if ( !v14 )
  {
    v20 = WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
    *(_QWORD *)(v20 + 24) = *((unsigned int *)this + 4);
    goto LABEL_10;
  }
  *((_DWORD *)this + 4) = v6;
  *((_DWORD *)this + 5) = a3;
  memset(v14, 0, v6);
  return this;
}
