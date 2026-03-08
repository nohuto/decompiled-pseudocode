/*
 * XREFs of ACPIBusAndFilterIrpEject @ 0x1C007D4D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDebugGetIrpText @ 0x1C000153C (ACPIDebugGetIrpText.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00015BC (WPP_RECORDER_SF_qsLqss.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C000A374 (WPP_RECORDER_SF_qqss.c)
 *     ACPIGet @ 0x1C0029384 (ACPIGet.c)
 *     ACPIInternalClearFlags @ 0x1C002E508 (ACPIInternalClearFlags.c)
 */

__int64 __fastcall ACPIBusAndFilterIrpEject(ULONG_PTR a1, __int64 a2, __int64 a3, char a4)
{
  char v5; // r15
  unsigned __int8 v6; // r13
  __int64 DeviceExtension; // rax
  __int64 v8; // rbx
  const char *v9; // rbp
  int v10; // edi
  _QWORD *v11; // rsi
  const char *v12; // rdx
  __int64 v13; // rax
  const char *v14; // rcx
  _QWORD *v15; // r14
  __int64 v16; // r9
  __int64 v17; // rax
  const char *v18; // rdx
  const char *v19; // rcx
  char *IrpText; // rax
  const char *v21; // r8
  __int64 v23; // [rsp+98h] [rbp+10h] BYREF

  v23 = 0LL;
  v5 = a2;
  v6 = *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v8 = DeviceExtension;
  v9 = byte_1C00622D0;
  if ( *(_QWORD *)(DeviceExtension + 760) )
  {
    if ( *(_DWORD *)(DeviceExtension + 368) <= 1u )
    {
      v15 = (_QWORD *)(DeviceExtension + 8);
      ACPIInternalClearFlags((void *)(DeviceExtension + 8), 2048LL);
      ACPIGet(v8, 0x304A455Fu, 277872640, v16, 4, 0LL, 0LL, 0LL, 0LL);
      v10 = ACPIGet(v8, 0x4154535Fu, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v23, 0LL);
      v11 = v15;
      if ( v10 >= 0 && !a4 )
      {
        v17 = *v15;
        if ( (*v15 & 2) == 0 )
        {
          v18 = byte_1C00622D0;
          v19 = byte_1C00622D0;
          if ( (v17 & 0x200000000000LL) != 0 )
          {
            v18 = *(const char **)(v8 + 608);
            if ( (v17 & 0x400000000000LL) != 0 )
              v19 = *(const char **)(v8 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              5u,
              0xBu,
              (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
              v5,
              v8,
              v18,
              v19);
          v10 = -1073741823;
        }
      }
    }
    else
    {
      v11 = (_QWORD *)(DeviceExtension + 8);
      v12 = byte_1C00622D0;
      v13 = *(_QWORD *)(DeviceExtension + 8);
      v14 = byte_1C00622D0;
      if ( (v13 & 0x200000000000LL) != 0 )
      {
        v12 = *(const char **)(v8 + 608);
        if ( (v13 & 0x400000000000LL) != 0 )
          v14 = *(const char **)(v8 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0xAu,
          (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
          v5,
          v8,
          v12,
          v14);
      v10 = -1073741823;
    }
  }
  else
  {
    v10 = -1073741637;
    v11 = (_QWORD *)(DeviceExtension + 8);
  }
  if ( (*v11 & 0x200000000000LL) != 0 )
    v9 = *(const char **)(v8 + 608);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    IrpText = ACPIDebugGetIrpText(0x400000000000LL, v6);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0xCu,
      (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
      v5,
      (__int64)IrpText,
      v10,
      v8,
      v9,
      v21);
  }
  return (unsigned int)v10;
}
