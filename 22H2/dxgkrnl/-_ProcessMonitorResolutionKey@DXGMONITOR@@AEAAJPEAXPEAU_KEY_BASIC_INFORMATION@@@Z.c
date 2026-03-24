/*
 * XREFs of ?_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C017FDD4
 * Callers:
 *     ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C017FB60 (-_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0003524 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ParseResolutionKeyName @ 0x1C017FFF0 (ParseResolutionKeyName.c)
 *     ?IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C0180704 (-IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z.c)
 *     ParseFreqRangeValue @ 0x1C02F59E8 (ParseFreqRangeValue.c)
 */

__int64 __fastcall DXGMONITOR::_ProcessMonitorResolutionKey(
        DXGMONITOR *this,
        void *a2,
        struct _KEY_BASIC_INFORMATION *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned __int16 v11; // r14
  void *v12; // r12
  PVOID v13; // rsi
  ULONG Length; // r15d
  __int64 v15; // rdx
  __int64 v16; // rcx
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  char v26; // bl
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v32; // rbx
  UINT v33; // ecx
  UINT v34; // eax
  UINT v35; // ecx
  UINT v36; // eax
  UINT v37; // eax
  int valid; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rsi
  DXGMONITOR *v43; // rbx
  DXGMONITOR **v44; // rcx
  __int64 v45; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-69h] BYREF
  UINT v47; // [rsp+34h] [rbp-65h] BYREF
  UINT v48; // [rsp+38h] [rbp-61h] BYREF
  UINT v49; // [rsp+3Ch] [rbp-5Dh] BYREF
  UINT v50; // [rsp+40h] [rbp-59h] BYREF
  UINT v51; // [rsp+44h] [rbp-55h] BYREF
  void *KeyHandle; // [rsp+48h] [rbp-51h] BYREF
  _WORD v53[2]; // [rsp+50h] [rbp-49h] BYREF
  int v54; // [rsp+54h] [rbp-45h]
  WCHAR *Name; // [rsp+58h] [rbp-41h]
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-29h] BYREF
  WCHAR SourceString[8]; // [rsp+A0h] [rbp+7h] BYREF

  v53[0] = a3->NameLength;
  v53[1] = v53[0];
  KeyHandle = 0LL;
  v54 = 0;
  v47 = 0;
  Name = a3->Name;
  v48 = 0;
  if ( !(unsigned __int8)ParseResolutionKeyName(v53, &v47, &v48) )
  {
    v23 = WdLogNewEntry5_WdError(v6, v5);
    goto LABEL_33;
  }
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v53;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v10 = v7;
  if ( v7 < 0 )
  {
    v24 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v24 + 24) = v10;
LABEL_23:
    WdLogEvent5_WdError(v24);
    goto LABEL_17;
  }
  wcscpy(SourceString, L"ModeX");
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  LODWORD(v10) = -1073741801;
  v11 = 1;
  while ( 1 )
  {
    v12 = KeyHandle;
    v13 = 0LL;
    SourceString[4] = v11 + 48;
    Length = 1024;
    do
    {
      if ( v13 )
        operator delete[](v13);
      v13 = operator new[](Length, 0x4D677844u, PagedPool);
      if ( v13 )
      {
        ResultLength = 0;
        v17 = ZwQueryValueKey(v12, &DestinationString, KeyValuePartialInformation, v13, Length, &ResultLength);
        Length = ResultLength;
        v20 = v17;
      }
      else
      {
        v25 = WdLogNewEntry5_WdError(v16, v15);
        WdLogEvent5_WdError(v25);
        v20 = -1073741801;
      }
    }
    while ( v20 == -2147483643 || v20 == -1073741789 );
    if ( v20 < 0 )
    {
      if ( v13 )
        operator delete[](v13);
      v21 = WdLogNewEntry5_WdTrace(v19, v18);
      *(_QWORD *)(v21 + 24) = v11;
      *(_QWORD *)(v21 + 32) = v20;
      goto LABEL_15;
    }
    ResultLength = 0;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    v26 = ParseFreqRangeValue(
            (_DWORD)v13,
            (unsigned int)&ResultLength,
            (unsigned int)&v49,
            (unsigned int)&v50,
            (__int64)&v51);
    operator delete[](v13);
    if ( !v26 )
      break;
    v29 = (struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)operator new[](0x40uLL, 0x4D677844u, PagedPool);
    v32 = v29;
    if ( !v29 )
    {
      v24 = WdLogNewEntry5_WdError(v31, v30);
      goto LABEL_23;
    }
    v29->RangeLimits.MinVSyncFreq.Numerator = ResultLength;
    v33 = v49;
    v29->Origin = D3DKMDT_MCO_SPECIFICCAP_REGISTRYOVERRIDE;
    v29->ConstraintType = D3DKMDT_MFRC_ACTIVESIZE;
    v34 = v47;
    v32->RangeLimits.MaxVSyncFreq.Numerator = v33;
    v35 = v50;
    v32->Constraint.ActiveSize.cx = v34;
    v36 = v48;
    v32->RangeLimits.MinHSyncFreq.Numerator = v35;
    v32->Constraint.ActiveSize.cy = v36;
    v37 = v51;
    v32->RangeLimits.MinVSyncFreq.Denominator = 1;
    v32->RangeLimits.MaxVSyncFreq.Denominator = 1;
    v32->RangeLimits.MinHSyncFreq.Denominator = 1;
    v32->RangeLimits.MaxHSyncFreq.Numerator = v37;
    v32->RangeLimits.MaxHSyncFreq.Denominator = 1;
    valid = IsValidFrequencyRange(v32);
    v42 = valid;
    if ( valid < 0 )
    {
      v45 = WdLogNewEntry5_WdWarning(v40, v39, v41);
      *(_QWORD *)(v45 + 24) = v42;
      WdLogEvent5_WdWarning(v45);
      operator delete(v32);
    }
    else
    {
      v43 = (DXGMONITOR *)&v32[1];
      v44 = (DXGMONITOR **)*((_QWORD *)this + 34);
      if ( *v44 != (DXGMONITOR *)((char *)this + 264) )
        __fastfail(3u);
      *(_QWORD *)v43 = (char *)this + 264;
      *((_QWORD *)v43 + 1) = v44;
      *v44 = v43;
      *((_QWORD *)this + 34) = v43;
      ++*((_DWORD *)this + 64);
      ++*((_DWORD *)this + 33);
    }
LABEL_15:
    if ( ++v11 >= 9u )
    {
      LODWORD(v10) = 0;
      goto LABEL_17;
    }
  }
  v23 = WdLogNewEntry5_WdError(v28, v27);
  *(_QWORD *)(v23 + 24) = v11;
LABEL_33:
  WdLogEvent5_WdError(v23);
  LODWORD(v10) = -1073741823;
LABEL_17:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v10;
}
