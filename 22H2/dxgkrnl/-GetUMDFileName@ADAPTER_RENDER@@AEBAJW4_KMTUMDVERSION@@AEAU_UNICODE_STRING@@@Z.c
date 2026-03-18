/*
 * XREFs of ?GetUMDFileName@ADAPTER_RENDER@@AEBAJW4_KMTUMDVERSION@@AEAU_UNICODE_STRING@@@Z @ 0x1C0192E48
 * Callers:
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C0192AEC (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C0192DC4 (-CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetUMDFileName(ADAPTER_RENDER *this, unsigned int a2, struct _UNICODE_STRING *a3)
{
  __int64 v3; // rbx
  int v6; // ecx
  __int64 v7; // rax
  struct _UNICODE_STRING v8; // xmm0

  v3 = a2;
  if ( a2 >= 6 )
  {
    WdLogSingleEntry1(1LL, 3409LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(UINT)umdVersion < (UINT)NUM_KMTUMDVERSIONS",
      3409LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGPROCESS::GetCurrent() )
  {
    WdLogSingleEntry1(1LL, 3410LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGPROCESS::GetCurrent() != NULL",
      3410LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = *((_DWORD *)DXGPROCESS::GetCurrent() + 106);
  if ( (v6 & 8) != 0 )
  {
    v7 = v3 + 26;
    goto LABEL_10;
  }
  if ( (_DWORD)v3 == 4 )
  {
    v8 = (struct _UNICODE_STRING)*((_OWORD *)this + 35);
    goto LABEL_11;
  }
  if ( (_DWORD)v3 == 5 )
  {
    v8 = (struct _UNICODE_STRING)*((_OWORD *)this + 36);
    goto LABEL_11;
  }
  if ( (v6 & 0x30) == 0 )
  {
    v7 = v3 + 20;
LABEL_10:
    v8 = (struct _UNICODE_STRING)*((_OWORD *)this + v7);
LABEL_11:
    *a3 = v8;
    return 0LL;
  }
  if ( (_DWORD)v3 == 3 )
  {
    v8 = (struct _UNICODE_STRING)*((_OWORD *)this + 34);
    goto LABEL_11;
  }
  return 3221225485LL;
}
