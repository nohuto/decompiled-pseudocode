/*
 * XREFs of WPP_RECORDER_SF_DqZ @ 0x1C0084C3C
 * Callers:
 *     ?ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C003F6B0 (-ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 *     ?ndisMValidatePMWakeReason@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0091194 (-ndisMValidatePMWakeReason@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00ABD54 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_DqZ(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        unsigned __int16 *a8)
{
  unsigned __int64 v10; // rdi
  int v12; // eax
  __int64 v13; // rdx
  const wchar_t *v14; // rcx
  const wchar_t *v15; // rax
  int v17; // [rsp+20h] [rbp-78h]

  v10 = (unsigned __int64)a3 >> 16;
  v12 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v12, (a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v10 + 41) >= 4u )
  {
    if ( a8 )
      v13 = *a8;
    else
      v13 = 8LL;
    if ( a8 && *a8 )
      v14 = (const wchar_t *)*((_QWORD *)a8 + 1);
    else
      v14 = L"NULL";
    v15 = a8;
    if ( !a8 )
      v15 = L"\b";
    ndisWppFastTraceMessage(a5, a4, &a6, 4LL, &a7, 8LL, v15, 2LL, v14, v13, 0LL);
  }
  LOWORD(v17) = a4;
  return WppAutoLogTrace(a1, 4LL, a3, a5, v17, &a6);
}
