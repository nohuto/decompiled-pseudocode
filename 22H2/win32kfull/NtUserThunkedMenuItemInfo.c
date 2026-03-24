/*
 * XREFs of NtUserThunkedMenuItemInfo @ 0x1C0043140
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetMenuItemInfo @ 0x1C00457B8 (xxxSetMenuItemInfo.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0078AA0 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxInsertMenuItem @ 0x1C007929C (xxxInsertMenuItem.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C008A934 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010104C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0166CF4 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall NtUserThunkedMenuItemInfo(__int64 a1, int a2, int a3, int a4, ULONG64 a5, PCWSTR SourceString)
{
  _OWORD *v10; // rcx
  PCWSTR v11; // rdx
  int v12; // ebx
  int v13; // ecx
  WCHAR *v14; // rdx
  ULONG64 v15; // r8
  _BYTE **v16; // rax
  char v17; // al
  bool v18; // zf
  __int64 v19; // rdi
  __int64 ThreadWin32Thread; // rax
  int inserted; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v25; // [rsp+30h] [rbp-A8h]
  _QWORD v26[2]; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+48h] [rbp-90h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-88h] BYREF
  __int128 v29; // [rsp+60h] [rbp-78h] BYREF
  __int64 v30; // [rsp+70h] [rbp-68h]
  _OWORD v31[5]; // [rsp+80h] [rbp-58h] BYREF

  memset(v31, 0, sizeof(v31));
  DestinationString = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  EnterCrit(0LL, 1LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v26);
  v10 = (_OWORD *)a5;
  if ( a5 >= MmUserProbeAddress )
    v10 = (_OWORD *)MmUserProbeAddress;
  v31[0] = *v10;
  v31[1] = v10[1];
  v31[2] = v10[2];
  v31[3] = v10[3];
  v31[4] = v10[4];
  v11 = SourceString;
  v12 = 0;
  if ( !SourceString )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    goto LABEL_16;
  }
  if ( (unsigned __int64)SourceString >= MmUserProbeAddress )
    v11 = (PCWSTR)MmUserProbeAddress;
  v13 = *(_DWORD *)v11;
  v25 = *(_DWORD *)v11;
  *(_DWORD *)&DestinationString.Length = *(_DWORD *)v11;
  v14 = (WCHAR *)*((_QWORD *)v11 + 1);
  DestinationString.Buffer = v14;
  if ( ((unsigned __int8)v14 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = (ULONG64)v14 + (unsigned __int16)v13 + 2;
  v16 = (_BYTE **)MmUserProbeAddress;
  if ( v15 >= MmUserProbeAddress || (unsigned __int16)v13 > HIWORD(v25) )
    goto LABEL_12;
  if ( (v13 & 1) != 0 )
    goto LABEL_13;
  if ( v15 <= (unsigned __int64)v14 )
  {
LABEL_12:
    if ( (v13 & 1) == 0 )
    {
LABEL_14:
      **v16 = 0;
      goto LABEL_16;
    }
LABEL_13:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4797LL);
    v16 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_14;
  }
LABEL_16:
  if ( (BYTE4(v31[0]) & 1) == 0 || (HIDWORD(v31[0]) & 0xFFFFEF74) == 0 )
  {
    ValidateHmenu(a1);
    v27 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v26);
    v17 = SmartObjStackRef<tagMENU>::operator==(v26);
    if ( a4 )
    {
      if ( v17 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v26[0] + 40LL) + 40LL) & 0x40) != 0 )
        goto LABEL_18;
      v18 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v26[0] + 40LL) + 40LL) & 0x200) == 0;
    }
    else
    {
      if ( v17 )
        goto LABEL_18;
      v18 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v26[0] + 40LL) + 40LL) & 0x40) == 0;
    }
    if ( v18 )
    {
      v19 = v27;
      if ( !v27 )
        v19 = *(_QWORD *)v26[0];
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v29 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v29;
      *((_QWORD *)&v29 + 1) = v19;
      if ( v19 )
        HMLockObject(v19);
      if ( a4 )
        inserted = xxxInsertMenuItem((unsigned int)v26, a2, a3, (unsigned int)v31, (__int64)&DestinationString);
      else
        inserted = xxxSetMenuItemInfo((unsigned int)v26, a2, a3, (unsigned int)v31, (__int64)&DestinationString);
      v12 = inserted;
      ThreadUnlock1(v22);
    }
  }
LABEL_18:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v26);
  UserSessionSwitchLeaveCrit(v23);
  return v12;
}
