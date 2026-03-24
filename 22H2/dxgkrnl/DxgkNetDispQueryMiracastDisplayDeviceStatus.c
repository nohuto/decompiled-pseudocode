/*
 * XREFs of DxgkNetDispQueryMiracastDisplayDeviceStatus @ 0x1C0225080
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0009A28 (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x1C003E704 (-DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkMiracastQueryMiracastStatus @ 0x1C02CFEE8 (DxgkMiracastQueryMiracastStatus.c)
 */

__int64 __fastcall DxgkNetDispQueryMiracastDisplayDeviceStatus(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _DWORD *v4; // r15
  char *v6; // rsi
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  SIZE_T v19; // rax
  char *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  size_t v26; // rbx
  unsigned __int64 v28[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v29; // [rsp+70h] [rbp+18h] BYREF
  int v30; // [rsp+78h] [rbp+20h] BYREF

  v4 = (_DWORD *)a2;
  v6 = 0LL;
  v30 = 0;
  v29 = 0;
  Current = DXGPROCESS::GetCurrent((__int64)a1, a2, a3, a4);
  if ( (int)DxgkNetDispAccessCheck(Current) >= 0 )
  {
    v28[0] = 520LL;
    if ( ((unsigned __int8)a1 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(a1 + 260) > MmUserProbeAddress || a1 + 260 < a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    v12 = RtlStringCchLengthW(a1, 0x208uLL, v28);
    v16 = v12;
    if ( v12 >= 0 )
    {
      v18 = v28[0];
      v19 = 2 * (v28[0] + 1);
      if ( !is_mul_ok(v28[0] + 1, 2uLL) )
        v19 = -1LL;
      v20 = (char *)operator new[](v19, 0x4B677844u, PagedPool);
      v6 = v20;
      if ( v20 )
      {
        v26 = 2 * v18;
        memmove(v20, a1, v26);
        *(_WORD *)&v6[v26] = 0;
        if ( (int)DxgkMiracastQueryMiracastStatus(v6, &v30, &v29) >= 0 )
        {
          if ( (unsigned __int64)v4 >= MmUserProbeAddress )
            v4 = (_DWORD *)MmUserProbeAddress;
          *v4 = v30;
        }
      }
      else
      {
        v29 = -2147483638;
        v25 = WdLogNewEntry5_WdLowResource(v22, v21, v23, v24);
        *(_QWORD *)(v25 + 24) = -2147483638LL;
        WdLogEvent5_WdLowResource(v25);
      }
    }
    else
    {
      v29 = -2147483640;
      v17 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      *(_QWORD *)(v17 + 24) = v16;
      WdLogEvent5_WdWarning(v17);
    }
  }
  else
  {
    v29 = -2147483643;
    v11 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v11 + 24) = -2147483643LL;
    WdLogEvent5_WdWarning(v11);
  }
  if ( v6 )
    operator delete[](v6);
  return v29;
}
