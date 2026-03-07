void __fastcall ACPIWakeRemoveDevicesAndUpdate(__int64 a1, __int64 a2)
{
  char v4; // bp
  __int64 *v5; // rdx
  unsigned __int16 *v6; // rdx
  unsigned int i; // r10d
  __int64 v8; // r9
  __int64 *v9; // rsi
  __int64 v10; // rbx
  _QWORD *v11; // rax
  void **v12; // rcx
  __int64 **v13; // rax
  __int64 v14; // rax
  void *v15; // rcx
  unsigned int v16; // eax
  int v17; // edi
  __int64 v18; // rbx
  unsigned __int8 v19; // cl
  _BYTE *v20; // rax
  unsigned int v21; // ebx
  __int64 v22; // [rsp+38h] [rbp-40h]

  v4 = *((_BYTE *)AcpiInformation + 133);
  KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
  if ( !v4 )
  {
    v6 = (unsigned __int16 *)AcpiInformation;
    for ( i = 0; i < *((unsigned __int16 *)AcpiInformation + 51); v6 = (unsigned __int16 *)AcpiInformation )
    {
      v8 = i++;
      *((_BYTE *)GpeCurEnable + v8) &= *((_BYTE *)GpeSpecialHandler + v8) | (unsigned __int8)~(*((_BYTE *)GpeWakeEnable
                                                                                               + v8) | *((_BYTE *)GpeWakeHandler + v8));
    }
    memset(GpeWakeEnable, 0, v6[51]);
  }
  v9 = (__int64 *)AcpiPowerWaitWakeList;
  while ( v9 != &AcpiPowerWaitWakeList )
  {
    v5 = v9;
    v9 = (__int64 *)*v9;
    v10 = v5[5];
    if ( v10 == a1 )
    {
      _InterlockedExchange64((volatile __int64 *)(v5[25] + 104), 0LL);
      if ( !*(_BYTE *)(v5[25] + 68) )
      {
        v11 = (_QWORD *)*v5;
        if ( *(__int64 **)(*v5 + 8) != v5
          || (v12 = (void **)v5[1], *v12 != v5)
          || (*v12 = v11, v11[1] = v12, v13 = *(__int64 ***)(a2 + 8), *v13 != (__int64 *)a2) )
        {
          __fastfail(3u);
        }
        *v5 = a2;
        v5[1] = (__int64)v13;
        *v13 = v5;
        *(_QWORD *)(a2 + 8) = v5;
        *((_DWORD *)v5 + 14) &= ~0x40u;
        *((_DWORD *)v5 + 27) |= 2u;
      }
    }
    else if ( !v4 && (*(_QWORD *)(v10 + 1008) & 0x500000000LL) == 0 && *((_DWORD *)v5 + 26) >= AcpiMostRecentSleepState )
    {
      if ( *(_BYTE *)((unsigned int)ACPIGpeIndexToByteIndex() + GpeMap) )
      {
        v14 = *(_QWORD *)(v10 + 8);
        v5 = (__int64 *)&unk_1C00622D0;
        v15 = &unk_1C00622D0;
        if ( (v14 & 0x200000000000LL) != 0 )
        {
          v5 = *(__int64 **)(v10 + 608);
          if ( (v14 & 0x400000000000LL) != 0 )
            v15 = *(void **)(v10 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v22 = (__int64)v5;
          LOBYTE(v5) = 4;
          WPP_RECORDER_SF_dqss(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v5,
            17,
            24,
            (__int64)&WPP_033ae0b85663354d3b9e90e6d2c94310_Traceguids,
            *(_DWORD *)(v10 + 504),
            v10,
            v22,
            (__int64)v15);
        }
      }
      else
      {
        v16 = ACPIGpeIndexToGpeRegister(*(unsigned int *)(v10 + 504));
        v5 = (__int64 *)GpeWakeEnable;
        v17 = 1 << (*(_BYTE *)(v10 + 504) & 7);
        v18 = v16;
        v19 = *((_BYTE *)GpeWakeEnable + v16);
        if ( (v19 & (unsigned __int8)v17) == 0 )
        {
          *((_BYTE *)GpeWakeEnable + v16) = v17 | v19;
          ACPIWriteGpeStatusRegister(v16);
          if ( ((unsigned __int8)v17 & *((_BYTE *)GpeEnable + v18)) != 0 )
          {
            if ( ((unsigned __int8)v17 & *((_BYTE *)GpeSpecialHandler + v18)) == 0 )
            {
              v20 = GpeWakeHandler;
LABEL_27:
              v20[v18] |= v17;
            }
          }
          else if ( ((unsigned __int8)v17 & *((_BYTE *)GpeCurEnable + v18)) == 0 )
          {
            *((_BYTE *)GpeIsLevel + v18) |= v17;
            v20 = GpeCurEnable;
            goto LABEL_27;
          }
        }
      }
    }
  }
  if ( !v4 )
  {
    v21 = 0;
    if ( *((_WORD *)AcpiInformation + 51) )
    {
      do
      {
        if ( AcpiPowerLeavingS0 )
        {
          v5 = (__int64 *)GpeCurEnable;
          *((_BYTE *)GpeCurEnable + v21) &= ~*((_BYTE *)GpeWakeEnable + v21);
        }
        else
        {
          *((_BYTE *)GpeCurEnable + v21) |= *((_BYTE *)GpeWakeEnable + v21) & (unsigned __int8)~*((_BYTE *)GpePending
                                                                                                + v21);
        }
        LOBYTE(v5) = *((_BYTE *)GpeCurEnable + v21);
        ACPIWriteGpeEnableRegister(v21++, v5);
        v5 = (__int64 *)*((unsigned __int16 *)AcpiInformation + 51);
      }
      while ( v21 < (unsigned int)v5 );
    }
  }
  KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
}
