/*
 * XREFs of Wmi_CreateControllerCapabilities @ 0x1C00151B4
 * Callers:
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0013F90 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005BBC (WPP_RECORDER_SF_.c)
 *     XilRegister_ReadUlong @ 0x1C00180A0 (XilRegister_ReadUlong.c)
 *     Register_GetAllExtendedCapability @ 0x1C001A838 (Register_GetAllExtendedCapability.c)
 *     Register_GetExtendedCapabilityTotalSize @ 0x1C001E138 (Register_GetExtendedCapabilityTotalSize.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0037A20 (WPP_RECORDER_SF_sds.c)
 */

void __fastcall Wmi_CreateControllerCapabilities(__int64 *a1)
{
  __int64 v2; // rsi
  int ExtendedCapabilityTotalSize; // ebp
  _DWORD *Pool2; // rax
  __int64 v5; // r9
  int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r14
  unsigned int Ulong; // eax
  unsigned __int8 v15; // bl
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // r8
  unsigned int v22; // edx
  _BOOL8 v23; // r8
  int v24; // edx
  int v25; // r8d
  int v26; // r9d

  if ( !a1[2] )
  {
    v2 = *(_QWORD *)(*a1 + 88);
    if ( *(_BYTE *)(*a1 + 601) && KeGetCurrentIrql() )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v24, v25, v26);
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
    ExtendedCapabilityTotalSize = Register_GetExtendedCapabilityTotalSize(v2);
    *((_DWORD *)a1 + 2) = ExtendedCapabilityTotalSize + 184;
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(ExtendedCapabilityTotalSize + 184), 1229146200LL);
    a1[2] = (__int64)Pool2;
    v6 = (int)Pool2;
    if ( Pool2 )
    {
      *Pool2 = *(_DWORD *)(*a1 + 244);
      *(_DWORD *)(a1[2] + 4) = *(unsigned __int16 *)(*a1 + 248);
      *(_DWORD *)(a1[2] + 8) = *(unsigned __int16 *)(*a1 + 252);
      *(_DWORD *)(a1[2] + 12) = *(unsigned __int8 *)(*a1 + 256);
      v7 = *a1;
      v8 = a1[2];
      *(_DWORD *)(v8 + 16) = *(_DWORD *)(*a1 + 304);
      *(_BYTE *)(v8 + 20) = *(_BYTE *)(v7 + 308);
      v9 = *a1;
      v10 = a1[2];
      *(_DWORD *)(v10 + 21) = *(_DWORD *)(*a1 + 309);
      *(_BYTE *)(v10 + 25) = *(_BYTE *)(v9 + 313);
      v11 = *a1;
      v12 = a1[2];
      *(_DWORD *)(v12 + 26) = *(_DWORD *)(*a1 + 314);
      *(_BYTE *)(v12 + 30) = *(_BYTE *)(v11 + 318);
      *(_QWORD *)(a1[2] + 40) = *(_QWORD *)(*a1 + 328);
      v13 = *(_QWORD *)(v2 + 24);
      if ( v13 )
      {
        Ulong = XilRegister_ReadUlong(v2, *(_QWORD *)(v2 + 24));
        v15 = Ulong;
        *(_DWORD *)(a1[2] + 48) = HIBYTE(Ulong);
        *(_DWORD *)(a1[2] + 52) = BYTE2(Ulong);
        v16 = XilRegister_ReadUlong(v2, v13 + 4);
        *(_DWORD *)(a1[2] + 56) = (unsigned __int8)v16;
        *(_DWORD *)(a1[2] + 60) = (v16 >> 8) & 0x7FF;
        *(_DWORD *)(a1[2] + 64) = HIBYTE(v16);
        v17 = XilRegister_ReadUlong(v2, v13 + 8);
        *(_DWORD *)(a1[2] + 68) = v17 & 0xF;
        *(_DWORD *)(a1[2] + 72) = (unsigned __int8)v17 >> 4;
        *(_DWORD *)(a1[2] + 76) = (v17 >> 26) & 1;
        *(_DWORD *)(a1[2] + 80) = ((v17 >> 11) | v17 & 0x3E00000) >> 16;
        v18 = XilRegister_ReadUlong(v2, v13 + 12);
        *(_DWORD *)(a1[2] + 84) = (unsigned __int8)v18;
        *(_DWORD *)(a1[2] + 88) = HIWORD(v18);
        v19 = XilRegister_ReadUlong(v2, v13 + 16);
        *(_DWORD *)(a1[2] + 92) = v19 & 1;
        *(_DWORD *)(a1[2] + 96) = (v19 >> 1) & 1;
        *(_DWORD *)(a1[2] + 100) = (v19 >> 2) & 1;
        *(_DWORD *)(a1[2] + 104) = (v19 >> 3) & 1;
        *(_DWORD *)(a1[2] + 108) = (v19 >> 4) & 1;
        *(_DWORD *)(a1[2] + 112) = (v19 >> 5) & 1;
        *(_DWORD *)(a1[2] + 116) = (v19 >> 6) & 1;
        *(_DWORD *)(a1[2] + 120) = (v19 >> 7) & 1;
        *(_DWORD *)(a1[2] + 124) = (v19 >> 8) & 1;
        *(_DWORD *)(a1[2] + 128) = (v19 >> 9) & 1;
        *(_DWORD *)(a1[2] + 132) = (v19 >> 10) & 1;
        *(_DWORD *)(a1[2] + 136) = (v19 >> 11) & 1;
        *(_DWORD *)(a1[2] + 140) = (unsigned __int16)v19 >> 12;
        if ( v15 >= 0x20u )
        {
          v20 = XilRegister_ReadUlong(v2, v13 + 28);
          LODWORD(v5) = 1;
          v21 = 148LL;
          *(_DWORD *)(a1[2] + 144) = v20 & 1;
          do
          {
            v22 = v20 >> v5;
            v5 = (unsigned int)(v5 + 1);
            *(_DWORD *)(v21 + a1[2]) = v22 & 1;
            v21 += 4LL;
          }
          while ( v21 < 172 );
        }
      }
      v23 = *(_DWORD *)(*(_QWORD *)(*a1 + 128) + 16LL) != 0;
      *(_DWORD *)(a1[2] + 172) = v23;
      if ( ExtendedCapabilityTotalSize )
        Register_GetAllExtendedCapability(v2, a1[2] + 176, v23, v5);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(*a1 + 72), v6, 15, 11, (__int64)&WPP_ad99758670fa36758206abbbc9141c99_Traceguids);
      }
      *((_DWORD *)a1 + 2) = 0;
    }
  }
}
