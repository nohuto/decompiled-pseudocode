/*
 * XREFs of ?GatherKeyboardDeviceSummaryInfo@CKeyboardProcessor@@QEAAXPEAUDEVICEINFO@@PEAK@Z @ 0x1C002EEE8
 * Callers:
 *     ?GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH11@Z @ 0x1C002F9CC (-GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH11@Z.c)
 * Callees:
 *     wcsncmp @ 0x1C00DAD28 (wcsncmp.c)
 */

void __fastcall CKeyboardProcessor::GatherKeyboardDeviceSummaryInfo(
        CKeyboardProcessor *this,
        struct DEVICEINFO *a2,
        unsigned int *a3,
        __int64 a4)
{
  const wchar_t *v4; // rcx
  unsigned __int16 v7; // si
  __int64 v8; // xmm0_8
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int128 v23; // [rsp+20h] [rbp-18h]

  v4 = (const wchar_t *)*((_QWORD *)a2 + 27);
  if ( !v4 || wcsncmp(v4, L"\\??\\Root#RDP", 0xCuLL) )
  {
    LOBYTE(v4) = *((_BYTE *)a2 + 456);
    if ( (unsigned __int8)((_BYTE)v4 - 7) <= 1u || (_BYTE)v4 == 4 && *((_BYTE *)a2 + 457) != 0xFF )
    {
      v7 = *(_WORD *)(SGDGetUserSessionState(v4, a2, a3, a4) + 12572);
      v23 = *(_OWORD *)((char *)a2 + 456);
      v8 = *((_QWORD *)a2 + 59);
      v9 = *((_DWORD *)a2 + 120);
      v14 = SGDGetUserSessionState(v11, v10, v12, v13);
      *(_OWORD *)(v14 + 12568) = v23;
      *(_QWORD *)(v14 + 12584) = v8;
      *(_DWORD *)(v14 + 12592) = v9;
      if ( v7 > *(_WORD *)(SGDGetUserSessionState(v16, v15, v17, v18) + 12572) )
        *(_WORD *)(SGDGetUserSessionState(v20, v19, v21, v22) + 12572) = v7;
    }
  }
  ++*a3;
}
