/*
 * XREFs of IrqArbGetNextAllocationRange @ 0x1C009D3B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000ACAC (WPP_RECORDER_SF_d.c)
 *     LinkNodeCrackPrt @ 0x1C005CE9C (LinkNodeCrackPrt.c)
 *     WPP_RECORDER_SF_ii @ 0x1C005EB30 (WPP_RECORDER_SF_ii.c)
 *     PcisuppIsPciDevice @ 0x1C0099F68 (PcisuppIsPciDevice.c)
 *     IrqArbIrqFromGsiv @ 0x1C009D6BC (IrqArbIrqFromGsiv.c)
 *     IrqArbpFindBootConfig @ 0x1C009DCEC (IrqArbpFindBootConfig.c)
 *     IrqArbpFindIrqInAlternatives @ 0x1C009DD80 (IrqArbpFindIrqInAlternatives.c)
 *     ArbGetNextAllocationRange @ 0x1C00A1A10 (ArbGetNextAllocationRange.c)
 */

char __fastcall IrqArbGetNextAllocationRange(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  __int64 v5; // r8
  __int64 v6; // rax
  __int16 v7; // cx
  int v8; // r8d
  int v9; // r9d
  _DWORD *v10; // rdi
  void *v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r10d
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r11
  int BootConfig; // eax
  __int64 v18; // r8
  char result; // al
  int v20; // eax
  __int64 v21; // rcx
  int v22; // [rsp+20h] [rbp-30h]
  int v23; // [rsp+40h] [rbp-10h] BYREF
  __int64 v24; // [rsp+48h] [rbp-8h] BYREF
  bool v25; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v26; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v27; // [rsp+98h] [rbp+48h] BYREF

  v2 = a2[4];
  v3 = a2;
  v23 = 0;
  v24 = 0LL;
  v26 = 0;
  v5 = *(_QWORD *)(v2 + 32);
  v27 = 0;
  v25 = 0;
  if ( *(PVOID *)(v5 + 8) == AcpiDriverObject && (*(_DWORD *)(*(_QWORD *)(v5 + 64) + 8LL) & 0x2000000) != 0 )
    return ArbGetNextAllocationRange(a1, a2);
  v6 = a2[5];
  if ( v6 )
    v7 = *(_WORD *)(*(_QWORD *)(v6 + 40) + 4LL);
  else
    v7 = *(_WORD *)(*(_QWORD *)(a2[7] + 40LL) + 4LL);
  if ( (v7 & 0x20) != 0 )
    goto LABEL_45;
  if ( (int)PcisuppIsPciDevice(v5, &v25) < 0 )
    return 0;
  if ( !v25 )
  {
LABEL_45:
    a2 = v3;
    return ArbGetNextAllocationRange(a1, a2);
  }
  v10 = (_DWORD *)v3[9];
  if ( !v3[5] )
    *v10 = 4096;
  do
  {
    v11 = &WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v11) = 4;
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v11,
              20,
              10,
              (__int64)&WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids);
            v11 = &WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids;
          }
          if ( *v10 != 4096 )
            break;
          switch ( IrqArbGlobalDistributionDisposition )
          {
            case 0:
              goto LABEL_42;
            case 1:
              *v10 = 4100;
              break;
            case 2:
              *v10 = 4098;
              break;
            default:
LABEL_42:
              *v10 = 4097;
              break;
          }
        }
        if ( *v10 == 4097 )
          break;
        v12 = (unsigned int)(*v10 - 4098);
        switch ( *v10 )
        {
          case 0x1002:
            *v10 = 4099;
            v27 = IrqArbGlobalStackingIrq;
            v18 = (unsigned int)IrqArbGlobalStackingIrq;
            goto LABEL_28;
          case 0x1003:
            *v10 = 4100;
            BootConfig = IrqArbpFindBootConfig(a1, v3, &v27);
            v11 = &WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids;
            if ( BootConfig >= 0 )
            {
              v18 = v27;
              goto LABEL_28;
            }
            break;
          case 0x1004:
            *v10 = 4101;
            v14 = (__int64 *)v3[7];
            v3[5] = v14;
LABEL_24:
            v15 = *v14;
            v3[2] = *v14;
            v16 = v14[1];
            goto LABEL_30;
          case 0x1005:
            v13 = *((_DWORD *)v3 + 12);
            v3[5] += 64LL;
            if ( v3[5] >= v3[7] + ((unsigned __int64)v13 << 6) )
              return 0;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v11) = 4;
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                (_DWORD)v11,
                20,
                11,
                (__int64)&WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids);
            }
            v14 = (__int64 *)v3[5];
            goto LABEL_24;
        }
      }
      *v10 = 4099;
      v20 = LinkNodeCrackPrt(*(_QWORD *)(v3[4] + 32LL), &v24, &v23, 0);
      v11 = &WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids;
      if ( v20 >= 0 )
      {
        v11 = &WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids;
        if ( v24 )
        {
          v21 = *(unsigned int *)(v24 + 40);
          v11 = &WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids;
          if ( (_DWORD)v21 != -1 )
            break;
        }
      }
    }
    v27 = IrqArbIrqFromGsiv(v21, &WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids);
    v18 = v27;
LABEL_28:
    ;
  }
  while ( (int)IrqArbpFindIrqInAlternatives(v12, v3, v18, &v26) < 0 );
  LOBYTE(v15) = v16;
  v3[5] = v3[7] + ((unsigned __int64)v26 << 6);
  v3[2] = v16;
LABEL_30:
  v3[3] = v16;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ii(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v11, v8, v9, v22, v15, v16);
  result = 1;
  ++IrqArbPciAlternativeRotation;
  return result;
}
