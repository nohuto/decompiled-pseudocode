/*
 * XREFs of ?ApplyRimDevBackedDeviceSummaryInformation@CBaseInput@@AEAAXK@Z @ 0x1C002F8AC
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C002F3AC (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     ?GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH11@Z @ 0x1C002F9CC (-GatherDeviceInfoSummaryInformation@CBaseInput@@AEAAXPEAUDEVICEINFO@@PEAK1PEAH11@Z.c)
 *     ApiSetApplyGatheredDeviceInfoSummaryInformation @ 0x1C002FA80 (ApiSetApplyGatheredDeviceInfoSummaryInformation.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 */

void __fastcall CBaseInput::ApplyRimDevBackedDeviceSummaryInformation(CBaseInput *this, int a2)
{
  __int64 v2; // rbx
  unsigned int v4; // esi
  unsigned int v5; // r15d
  int v6; // r12d
  unsigned int v7; // r13d
  CBaseInput *v9; // rcx
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rax
  unsigned int v13; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v14[3]; // [rsp+44h] [rbp-Ch] BYREF
  unsigned int v15; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v16; // [rsp+A0h] [rbp+50h] BYREF
  int v17; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *((_QWORD *)this + 165);
  v4 = 0;
  v5 = 0;
  v14[0] = 0;
  v6 = 0;
  v7 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v13 = 0;
  RIMLockExclusive(v2);
  v10 = **((_QWORD **)this + 166);
  if ( v10 )
  {
    while ( 1 )
    {
      v11 = *(unsigned __int8 *)(v10 + 48);
      if ( v11 == a2 )
      {
        CBaseInput::GatherDeviceInfoSummaryInformation(v9, (struct DEVICEINFO *)v10, &v15, &v16, &v17, &v13, v14);
        v4 = v15;
      }
      else
      {
        if ( a2 != 2 )
        {
          if ( a2 )
            goto LABEL_4;
          if ( (_BYTE)v11 != 2 )
            goto LABEL_4;
          v12 = *(_QWORD *)(v10 + 472);
          if ( !v12 || (unsigned int)(*(_DWORD *)(v12 + 24) - 1) > 6 )
            goto LABEL_4;
LABEL_15:
          v15 = ++v4;
          goto LABEL_4;
        }
        if ( !(_BYTE)v11 )
          goto LABEL_15;
      }
LABEL_4:
      v10 = *(_QWORD *)(v10 + 56);
      if ( !v10 )
      {
        v5 = v16;
        v6 = v17;
        v7 = v13;
        break;
      }
    }
  }
  *(_QWORD *)(v2 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
  ApiSetApplyGatheredDeviceInfoSummaryInformation(a2, v4, v7, v5, v6, v14[0]);
}
