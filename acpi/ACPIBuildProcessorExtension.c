__int64 __fastcall ACPIBuildProcessorExtension(volatile signed __int32 *a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  unsigned int v6; // edi
  __int64 v7; // rbx
  void *Pool2; // rax
  __int64 v9; // rcx
  const char *v10; // rsi
  const char *v11; // r8
  const char *v12; // rdx
  char *v13; // rax
  __int64 v14; // rax
  const char *v15; // rdx
  const char *v16; // rcx
  __int64 v17; // rcx
  const char *v18; // rax
  char *v19; // rax
  __int64 v20; // rcx
  const char *v21; // rsi
  const char *v22; // rax

  if ( !*((_QWORD *)&AcpiProcessorString + 1) )
    return 3221225524LL;
  result = ACPIBuildDeviceExtension(a1, a2, a3);
  v6 = result;
  if ( (int)result >= 0 )
  {
    v7 = *a3;
    if ( v7 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v7 + 8), 0x1000300000uLL);
      Pool2 = (void *)ExAllocatePool2(64LL, (unsigned __int16)AcpiProcessorString, 1399874369LL);
      *(_QWORD *)(v7 + 608) = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, *((const void **)&AcpiProcessorString + 1), (unsigned __int16)AcpiProcessorString);
        v13 = (char *)ExAllocatePool2(64LL, 15LL, 1399874369LL);
        *(_QWORD *)(v7 + 184) = v13;
        if ( v13 )
        {
          strcpy(v13, "ACPI\\Processor");
          v19 = (char *)ExAllocatePool2(64LL, 11LL, 1399874369LL);
          *(_QWORD *)(v7 + 616) = v19;
          if ( !v19 )
            return 3221225626LL;
          RtlStringCchPrintfA(v19, 0xBuLL, "%2x", *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)a1 + 96LL) + 8LL));
          _InterlockedOr64((volatile signed __int64 *)(v7 + 8), 0x8001E00000000000uLL);
          v20 = *(_QWORD *)(v7 + 8);
          v21 = (const char *)&unk_1C00622D0;
          v22 = (const char *)&unk_1C00622D0;
          if ( (v20 & 0x200000000000LL) != 0 )
          {
            v21 = *(const char **)(v7 + 608);
            if ( (v20 & 0x400000000000LL) != 0 )
              v22 = *(const char **)(v7 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              6u,
              0x37u,
              (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
              v6,
              v7,
              v21,
              v22);
          return v6;
        }
        v14 = *(_QWORD *)(v7 + 8);
        v10 = (const char *)&unk_1C00622D0;
        v15 = (const char *)&unk_1C00622D0;
        v16 = (const char *)&unk_1C00622D0;
        if ( (v14 & 0x200000000000LL) != 0 )
        {
          v15 = *(const char **)(v7 + 608);
          if ( (v14 & 0x400000000000LL) != 0 )
            v16 = *(const char **)(v7 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            6u,
            0x35u,
            (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
            15,
            v7,
            v15,
            v16);
      }
      else
      {
        v9 = *(_QWORD *)(v7 + 8);
        v10 = (const char *)&unk_1C00622D0;
        v11 = (const char *)&unk_1C00622D0;
        v12 = (const char *)&unk_1C00622D0;
        if ( (v9 & 0x200000000000LL) != 0 )
        {
          v11 = 0LL;
          if ( (v9 & 0x400000000000LL) != 0 )
            v12 = *(const char **)(v7 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            6u,
            0x34u,
            (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
            AcpiProcessorString,
            v7,
            v11,
            v12);
      }
      v17 = *(_QWORD *)(v7 + 8);
      v6 = -1073741670;
      v18 = (const char *)&unk_1C00622D0;
      if ( (v17 & 0x200000000000LL) != 0 )
      {
        v10 = *(const char **)(v7 + 608);
        if ( (v17 & 0x400000000000LL) != 0 )
          v18 = *(const char **)(v7 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          6u,
          0x36u,
          (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
          154,
          v7,
          v10,
          v18);
      if ( *(_QWORD *)(v7 + 616) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 8), 0xFFFEBFFFFFFFFFFFuLL);
        ExFreePoolWithTag(*(PVOID *)(v7 + 616), 0);
        *(_QWORD *)(v7 + 616) = 0LL;
      }
      if ( *(_QWORD *)(v7 + 608) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 8), 0xFFFF5FFFFFFFFFFFuLL);
        ExFreePoolWithTag(*(PVOID *)(v7 + 608), 0);
        *(_QWORD *)(v7 + 608) = 0LL;
      }
      if ( *(_QWORD *)(v7 + 184) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 8), 0x7FFFFFFFFFFFFFFFuLL);
        ExFreePoolWithTag(*(PVOID *)(v7 + 184), 0);
        *(_QWORD *)(v7 + 184) = 0LL;
      }
      _InterlockedOr64((volatile signed __int64 *)(v7 + 8), 0x2000000000000uLL);
      return v6;
    }
  }
  return result;
}
