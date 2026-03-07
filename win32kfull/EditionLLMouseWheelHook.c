__int64 __fastcall EditionLLMouseWheelHook(__int64 a1, __int64 a2, __int64 *a3, int a4)
{
  __int64 v5; // xmm0_8
  char v7; // bp
  char v8; // bp
  unsigned __int64 v9; // r12
  __int64 v10; // rcx
  struct tagHOOK *Valid; // rsi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v15; // rcx
  int v16; // [rsp+30h] [rbp-68h] BYREF
  __int64 *v17; // [rsp+38h] [rbp-60h] BYREF
  __int64 v18; // [rsp+40h] [rbp-58h] BYREF
  int v19; // [rsp+48h] [rbp-50h]

  v5 = *a3;
  v7 = *(_BYTE *)(a1 + 12);
  v19 = *((_DWORD *)a3 + 2);
  v8 = v7 & 1;
  v9 = (unsigned int)a2;
  v18 = v5;
  if ( (unsigned __int8)IsInputThread(a1, a2, a3) )
    v10 = gptiRit;
  else
    v10 = gptiCurrent;
  Valid = (struct tagHOOK *)PhkFirstValid(v10, 14);
  if ( Valid )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v17, "LowLevelMouseWheelHook", 0LL);
    v12 = *(_QWORD *)(gptiCurrent + 1416LL);
    v16 = 0;
    *(_QWORD *)(gptiCurrent + 1416LL) = a1;
    v13 = xxxCallHook2(Valid, 0, v9, a1, &v16, 0);
    *(_QWORD *)(gptiCurrent + 1416LL) = v12;
    if ( v13 )
    {
LABEL_6:
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v17);
      return 1LL;
    }
    if ( a4 && !IsGpqForegroundAccessibleOnInputThread(v8, (const struct tagUIPI_INFO_INT *)&v18) )
    {
      MSGLUA_GPQFOREGROUND(v15);
      goto LABEL_6;
    }
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v17);
  }
  return 0LL;
}
