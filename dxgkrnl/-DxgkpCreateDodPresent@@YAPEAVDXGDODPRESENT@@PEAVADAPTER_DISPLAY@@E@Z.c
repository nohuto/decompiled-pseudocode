/*
 * XREFs of ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x1C0218410
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01F05EC (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??_GDXGDODPRESENT@@QEAAPEAXI@Z @ 0x1C0040A38 (--_GDXGDODPRESENT@@QEAAPEAXI@Z.c)
 *     ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1C01C6F04 (-Startup@BLTQUEUE@@QEAAJXZ.c)
 *     ??0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z @ 0x1C02184A0 (--0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z.c)
 */

struct DXGDODPRESENT *__fastcall DxgkpCreateDodPresent(struct ADAPTER_DISPLAY *a1, unsigned __int8 a2)
{
  unsigned __int8 *v4; // rax
  DXGDODPRESENT *v5; // rax
  unsigned int v6; // edi
  DXGDODPRESENT *v7; // rbx

  v4 = (unsigned __int8 *)operator new[](2920LL * *((unsigned int *)a1 + 24) + 144, 0x4B677844u, 64LL);
  if ( v4 )
  {
    v5 = DXGDODPRESENT::DXGDODPRESENT((DXGDODPRESENT *)v4, a1, v4 + 144, a2);
    v6 = 0;
    v7 = v5;
    if ( !*(_DWORD *)v5 )
      return v7;
    while ( (int)BLTQUEUE::Startup((char *)(*((_QWORD *)v7 + 1) + 2920LL * v6)) >= 0 )
    {
      if ( ++v6 >= *(_DWORD *)v7 )
        return v7;
    }
    DXGDODPRESENT::`scalar deleting destructor'(v7);
  }
  else
  {
    WdLogSingleEntry1(6LL, *((_QWORD *)a1 + 2));
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate DXGDODPRESENT for display only adapter 0x%I64x!",
      *((_QWORD *)a1 + 2),
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return 0LL;
}
