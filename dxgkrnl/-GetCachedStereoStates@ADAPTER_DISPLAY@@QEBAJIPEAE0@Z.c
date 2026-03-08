/*
 * XREFs of ?GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z @ 0x1C02B8214
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C02F5694 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetCachedStereoStates(ADAPTER_DISPLAY *this, unsigned int a2, bool *a3, bool *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // rdx
  int v11; // r8d

  v4 = a2;
  if ( (a3 && a4
     || (WdLogSingleEntry1(1LL, 6525LL),
         DxgkLogInternalTriageEvent(
           0LL,
           262146,
           -1,
           (__int64)L"pCurModeSupportsStereo && pStereoExists",
           6525LL,
           0LL,
           0LL,
           0LL,
           0LL),
         a3)
     && a4)
    && (unsigned int)v4 < *((_DWORD *)this + 24) )
  {
    v8 = *((_QWORD *)this + 16);
    v9 = -1073741275;
    v10 = 4000 * v4;
    v11 = *(_DWORD *)(4000 * v4 + v8 + 1132);
    if ( v11 != -1 && *(_DWORD *)(v10 + v8 + 1136) != -1 )
    {
      *a3 = v11 == 1;
      v9 = 0;
      *a4 = *(_DWORD *)(*((_QWORD *)this + 16) + v10 + 1136) == 1;
    }
    return v9;
  }
  else
  {
    WdLogSingleEntry5(2LL, a3, a4, v4, *((unsigned int *)this + 24), -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified invalid parameters or invalid VidPN source ID. pCurModeSupportsStereo=0x%I64x, pStereoEx"
                "ists=0x%I64x, VidPnSourceId=0x%I64x (value should be less than 0x%I64x). Returning 0x%I64x",
      (__int64)a3,
      (__int64)a4,
      v4,
      *((unsigned int *)this + 24),
      -1073741811LL);
    return 3221225485LL;
  }
}
