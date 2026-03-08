/*
 * XREFs of WMI_AcquireControllerName @ 0x1C008B98C
 * Callers:
 *     WMI_ExecuteMethodUsbWmiStdData @ 0x1C008BE50 (WMI_ExecuteMethodUsbWmiStdData.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     HUBUCX_GetControllerName @ 0x1C0028D3C (HUBUCX_GetControllerName.c)
 */

__int64 __fastcall WMI_AcquireControllerName(__int64 a1, unsigned int a2, unsigned int *a3, __int64 a4)
{
  unsigned int *v6; // rbx
  unsigned int v7; // eax
  int ControllerName; // eax
  unsigned int v9; // edi
  int v11; // [rsp+28h] [rbp-10h]

  *a3 = 0;
  if ( a2 < 0xA || (v6 = (unsigned int *)(a4 + 4), v7 = *(_DWORD *)(a4 + 4), v7 < 0xA) || v7 > a2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0xDu, (__int64)&WPP_354a0f7c514c308e6a0f4d9506e11eea_Traceguids);
    v9 = -1073741789;
    goto LABEL_13;
  }
  if ( v7 < a2 )
    a2 = *(_DWORD *)(a4 + 4);
  *a3 = a2;
  *v6 -= 4;
  ControllerName = HUBUCX_GetControllerName(a1, (_DWORD *)(a4 + 4), *v6);
  v9 = ControllerName;
  if ( ControllerName < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = ControllerName;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        0xEu,
        (__int64)&WPP_354a0f7c514c308e6a0f4d9506e11eea_Traceguids,
        v11);
    }
LABEL_13:
    *a3 = 0;
    return v9;
  }
  *v6 += 4;
  return v9;
}
