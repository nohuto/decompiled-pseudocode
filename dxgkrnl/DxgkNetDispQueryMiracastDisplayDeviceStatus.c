/*
 * XREFs of DxgkNetDispQueryMiracastDisplayDeviceStatus @ 0x1C02CE9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C000296C (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x1C0045498 (-DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkMiracastQueryMiracastStatus @ 0x1C039BE64 (DxgkMiracastQueryMiracastStatus.c)
 */

__int64 __fastcall DxgkNetDispQueryMiracastDisplayDeviceStatus(unsigned __int16 *a1, _DWORD *a2)
{
  char *v4; // rsi
  struct DXGPROCESS *Current; // rax
  int v6; // eax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax
  char *v9; // rax
  size_t v10; // rbx
  unsigned __int64 v12; // [rsp+60h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+A0h] [rbp+18h] BYREF
  int v14; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0LL;
  v14 = 0;
  v13 = 0;
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  if ( (int)DxgkNetDispAccessCheck(Current) >= 0 )
  {
    v12 = 520LL;
    if ( ((unsigned __int8)a1 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(a1 + 260) > MmUserProbeAddress || a1 + 260 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    v6 = RtlStringCchLengthW(a1, 0x208uLL, &v12);
    if ( v6 >= 0 )
    {
      v7 = v12;
      v8 = 2 * (v12 + 1);
      if ( !is_mul_ok(v12 + 1, 2uLL) )
        v8 = -1LL;
      v9 = (char *)operator new[](v8, 0x4B677844u, 256LL);
      v4 = v9;
      if ( v9 )
      {
        v10 = 2 * v7;
        memmove(v9, a1, v10);
        *(_WORD *)&v4[v10] = 0;
        if ( (int)DxgkMiracastQueryMiracastStatus(v4, &v14, &v13) >= 0 )
        {
          if ( (unsigned __int64)a2 >= MmUserProbeAddress )
            a2 = (_DWORD *)MmUserProbeAddress;
          *a2 = v14;
        }
      }
      else
      {
        v13 = -2147483638;
        WdLogSingleEntry1(6LL, -2147483638LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate buffer for LocalDeviceName, returning 0x%I64x",
          -2147483638LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    else
    {
      v13 = -2147483640;
      WdLogSingleEntry1(3LL, v6);
    }
  }
  else
  {
    v13 = -2147483643;
    WdLogSingleEntry1(3LL, -2147483643LL);
  }
  if ( v4 )
    operator delete(v4);
  return v13;
}
