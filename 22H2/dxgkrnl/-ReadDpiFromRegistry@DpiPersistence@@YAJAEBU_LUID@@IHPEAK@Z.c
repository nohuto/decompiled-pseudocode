/*
 * XREFs of ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C014B710
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C014E780 (DxgkUpdateGdiInfo.c)
 *     DxgkGetDpiOverrideForSource @ 0x1C016D220 (DxgkGetDpiOverrideForSource.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C014AEA8 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C014B5AC (-WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C014BA3C (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 */

__int64 __fastcall DpiPersistence::ReadDpiFromRegistry(
        struct _LUID *this,
        const struct _LUID *a2,
        int a3,
        struct _UNICODE_STRING *a4)
{
  struct _UNICODE_STRING *SessionDataForSpecifiedSession; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  DXGSESSIONMGR *v12; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v14; // rax
  const WCHAR *v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  HANDLE v19; // r8
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  const struct _UNICODE_STRING *v24; // r9
  HANDLE v26; // r8
  int v27; // eax
  HANDLE v28; // rdx
  int v29; // eax
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned int *v38; // [rsp+20h] [rbp-89h]
  HANDLE KeyHandle; // [rsp+30h] [rbp-79h] BYREF
  HANDLE v40; // [rsp+38h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-69h] BYREF
  struct _UNICODE_STRING v42; // [rsp+50h] [rbp-59h] BYREF
  struct _UNICODE_STRING v43; // [rsp+60h] [rbp-49h] BYREF
  __int64 v44; // [rsp+70h] [rbp-39h] BYREF
  int v45; // [rsp+78h] [rbp-31h]
  const WCHAR *v46; // [rsp+80h] [rbp-29h]
  struct _UNICODE_STRING *v47; // [rsp+88h] [rbp-21h]
  int v48; // [rsp+90h] [rbp-19h]
  int *v49; // [rsp+98h] [rbp-11h]
  int v50; // [rsp+A0h] [rbp-9h]
  __int64 v51; // [rsp+A8h] [rbp-1h]
  int v52; // [rsp+B0h] [rbp+7h]
  __int128 v53; // [rsp+B8h] [rbp+Fh]
  __int128 v54; // [rsp+C8h] [rbp+1Fh]
  __int64 v55; // [rsp+D8h] [rbp+2Fh]
  int v56; // [rsp+120h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+128h] [rbp+7Fh] BYREF

  v56 = 0;
  *(_DWORD *)&a4->Length = 0;
  Handle = 0LL;
  v43 = 0LL;
  KeyHandle = 0LL;
  SessionDataForSpecifiedSession = 0LL;
  v40 = 0LL;
  v42 = 0LL;
  DestinationString = 0LL;
  LODWORD(v9) = DpiPersistence::AllocateMonitorSetIdFromAdapterSource(this, a2, &v43, a4);
  if ( (int)v9 >= 0 )
  {
    v12 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v8, v7) + 102);
    if ( v12 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11, v10);
      SessionDataForSpecifiedSession = (struct _UNICODE_STRING *)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                                   v12,
                                                                   CurrentProcessSessionId);
    }
    if ( !SessionDataForSpecifiedSession )
    {
      v30 = WdLogNewEntry5_WdError(v11, v10);
      LODWORD(v9) = -1073741811;
      *(_QWORD *)(v30 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v32, v31);
      *(_QWORD *)(v30 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v30);
      goto LABEL_14;
    }
    if ( SessionDataForSpecifiedSession[1169].Buffer )
    {
      v14 = WdLogNewEntry5_WdTrace(v11, v10);
      v15 = L"Control Panel\\Desktop\\PerMonitorSettings\\";
      *(_QWORD *)(v14 + 24) = 861LL;
      v42 = SessionDataForSpecifiedSession[1169];
    }
    else
    {
      if ( SessionDataForSpecifiedSession[1169].Length )
      {
        v33 = WdLogNewEntry5_WdAssertion(v11, v10);
        *(_QWORD *)(v33 + 24) = 852LL;
        WdLogEvent5_WdAssertion(v33);
      }
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v10) + 24) = 853LL;
      RtlInitUnicodeString(&v42, L"\\Registry\\Machine\\System");
      v15 = L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors";
    }
    RtlInitUnicodeString(&DestinationString, v15);
    v16 = OpenRegistrySubkey(&Handle, 0xF003Fu, 0LL, &v42, 0LL);
    v9 = v16;
    if ( v16 >= 0 )
    {
      v19 = Handle;
      if ( !Handle )
      {
        v34 = WdLogNewEntry5_WdAssertion(v18, v17);
        *(_QWORD *)(v34 + 24) = 881LL;
        WdLogEvent5_WdAssertion(v34);
        v19 = Handle;
      }
      v20 = OpenRegistrySubkey(&KeyHandle, 0xF003Fu, v19, &DestinationString, 0LL);
      v9 = v20;
      if ( v20 < 0 )
        goto LABEL_11;
      v26 = KeyHandle;
      if ( !KeyHandle )
      {
        v35 = WdLogNewEntry5_WdAssertion(v22, v21);
        *(_QWORD *)(v35 + 24) = 897LL;
        WdLogEvent5_WdAssertion(v35);
        v26 = KeyHandle;
      }
      v27 = OpenRegistrySubkey(&v40, 0xF003Fu, v26, &v43, 0LL);
      v9 = v27;
      if ( v27 < 0 )
      {
LABEL_11:
        v23 = WdLogNewEntry5_WdEvent(v22, v21);
        *(_QWORD *)(v23 + 24) = v9;
        WdLogEvent5_WdEvent(v23);
        goto LABEL_12;
      }
      v28 = v40;
      if ( !v40 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v22, 0LL);
        *(_QWORD *)(v36 + 24) = 913LL;
        WdLogEvent5_WdAssertion(v36);
        v28 = v40;
      }
      v44 = 0LL;
      v45 = 288;
      v46 = L"DpiValue";
      v47 = a4;
      v49 = &v56;
      v48 = 67108868;
      v55 = 0LL;
      v50 = 4;
      v51 = 0LL;
      v52 = 0;
      v53 = 0LL;
      v54 = 0LL;
      v29 = RtlQueryRegistryValuesEx(0x40000000LL, v28, &v44, 0LL, 0LL);
      v9 = v29;
      if ( v29 >= 0 )
        goto LABEL_12;
    }
    v37 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v37 + 24) = v9;
    WdLogEvent5_WdError(v37);
  }
LABEL_12:
  if ( (_DWORD)v9 == -1073741772 )
  {
    LODWORD(v9) = 0;
    *(_DWORD *)&a4->Length = v56;
  }
LABEL_14:
  if ( a3 && (int)v9 >= 0 && SessionDataForSpecifiedSession && SessionDataForSpecifiedSession[1169].Buffer )
  {
    RtlInitUnicodeString(&v42, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&DestinationString, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    LODWORD(v38) = *(_DWORD *)&a4->Length;
    DpiPersistence::WriteDwordToParticularRegValue(&v42, &DestinationString, &v43, v24, (const unsigned __int16 *)v38);
  }
  operator delete[](v43.Buffer);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v40 )
    ZwClose(v40);
  return (unsigned int)v9;
}
