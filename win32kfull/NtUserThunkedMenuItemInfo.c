/*
 * XREFs of NtUserThunkedMenuItemInfo @ 0x1C00A7020
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetMenuItemInfo @ 0x1C00A2218 (xxxSetMenuItemInfo.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4F34 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxInsertMenuItem @ 0x1C00A7ADC (xxxInsertMenuItem.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00D3DA0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C012D81C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C012D890 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall NtUserThunkedMenuItemInfo(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        ULONG64 a5,
        ULONG64 a6)
{
  _OWORD *v10; // rcx
  ULONG64 v11; // rdx
  int v12; // ebx
  int v13; // ecx
  WCHAR *v14; // rdx
  ULONG64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdi
  bool v18; // zf
  __int64 v19; // rcx
  int inserted; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  _QWORD *v26[2]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+40h] [rbp-98h]
  int v28; // [rsp+48h] [rbp-90h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-88h] BYREF
  __int128 v30; // [rsp+68h] [rbp-70h] BYREF
  __int64 v31; // [rsp+78h] [rbp-60h]
  _OWORD v32[5]; // [rsp+80h] [rbp-58h] BYREF

  memset_0(v32, 0, sizeof(v32));
  DestinationString = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  EnterCrit(0LL, 0LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v26);
  v10 = (_OWORD *)a5;
  if ( a5 >= MmUserProbeAddress )
    v10 = (_OWORD *)MmUserProbeAddress;
  v32[0] = *v10;
  v32[1] = v10[1];
  v32[2] = v10[2];
  v32[3] = v10[3];
  v32[4] = v10[4];
  v11 = a6;
  v12 = 0;
  if ( a6 )
  {
    if ( a6 >= MmUserProbeAddress )
      v11 = MmUserProbeAddress;
    v13 = *(_DWORD *)v11;
    v28 = v13;
    *(_DWORD *)&DestinationString.Length = v13;
    v14 = *(WCHAR **)(v11 + 8);
    DestinationString.Buffer = v14;
    if ( ((unsigned __int8)v14 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v15 = (ULONG64)v14 + (unsigned __int16)v13 + 2;
    if ( v15 <= (unsigned __int64)v14 || v15 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v13 > HIWORD(v28) || (v13 & 1) != 0 )
    {
      if ( (v13 & 1) != 0 )
      {
        v28 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4864LL);
      }
      ExRaiseAccessViolation();
    }
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  if ( (BYTE4(v32[0]) & 1) == 0 || (HIDWORD(v32[0]) & 0xFFFFEF74) == 0 )
  {
    v16 = ValidateHmenu(a1);
    v27 = 0LL;
    if ( !a4 )
    {
      SmartObjStackRefBase<tagMENU>::operator=(v26, v16);
      if ( SmartObjStackRef<tagMENU>::operator==((__int64)v26) )
        goto LABEL_34;
      v18 = (*(_DWORD *)(*(_QWORD *)(*v26[0] + 40LL) + 40LL) & 0x40) == 0;
      goto LABEL_28;
    }
    v17 = v16;
    if ( v16 != *v26[0] )
    {
      if ( v26[0] != (_QWORD *)gSmartObjNullRef && !--*((_DWORD *)v26[0] + 2) )
      {
        if ( *((_BYTE *)v26[0] + 12) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v26[0]);
      }
      if ( v17 )
      {
        v26[0] = *(_QWORD **)(v17 + 152);
        ++*((_DWORD *)v26[0] + 2);
      }
      else
      {
        v26[0] = (_QWORD *)gSmartObjNullRef;
      }
    }
    if ( (v27 || *v26[0]) && (*(_DWORD *)(*(_QWORD *)(*v26[0] + 40LL) + 40LL) & 0x40) == 0 )
    {
      v18 = (*(_DWORD *)(*(_QWORD *)(*v26[0] + 40LL) + 40LL) & 0x200) == 0;
LABEL_28:
      if ( v18 )
      {
        v19 = v27;
        if ( !v27 )
          v19 = *v26[0];
        ThreadLock(v19, &v30);
        if ( a4 )
          inserted = xxxInsertMenuItem((unsigned int)v26, a2, a3, (unsigned int)v32, (__int64)&DestinationString);
        else
          inserted = xxxSetMenuItemInfo(v26, a2, a3, (__int64)v32, (__int64)&DestinationString);
        v12 = inserted;
        ThreadUnlock1(v22, v21, v23);
      }
    }
  }
LABEL_34:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v26);
  UserSessionSwitchLeaveCrit(v24);
  return v12;
}
