/*
 * XREFs of ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C00D31F8
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C00CFDF4 (xxxCreateDesktopEx.c)
 * Callees:
 *     ?ClearClipRgnOrMaxClip@tagWND@@QEAAXXZ @ 0x1C0061020 (-ClearClipRgnOrMaxClip@tagWND@@QEAAXXZ.c)
 *     _CloseDesktop @ 0x1C00A2C38 (_CloseDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00CFDF4 (xxxCreateDesktopEx.c)
 *     ?SetDisconnectDesktopSecurity@@YAJPEAUHDESK__@@@Z @ 0x1C00D33C8 (-SetDisconnectDesktopSecurity@@YAJPEAUHDESK__@@@Z.c)
 */

__int64 __fastcall xxxCreateDisconnectDesktop(HWINSTA a1, struct tagWINDOWSTATION *a2)
{
  __int64 EmptyRgnPublic; // rbx
  NTSTATUS v5; // eax
  NTSTATUS v6; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  union _LARGE_INTEGER v9[3]; // [rsp+50h] [rbp-30h] BYREF
  int v10; // [rsp+68h] [rbp-18h]
  int v11; // [rsp+6Ch] [rbp-14h]
  __int128 v12; // [rsp+70h] [rbp-10h]
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+38h] BYREF

  v9[0].HighPart = 0;
  v11 = 0;
  Handle = 0LL;
  DestinationString = 0LL;
  EmptyRgnPublic = CreateEmptyRgnPublic();
  if ( EmptyRgnPublic )
  {
    RtlInitUnicodeString(&DestinationString, L"Disconnect");
    v9[1].QuadPart = (LONGLONG)a1;
    v9[2].QuadPart = (LONGLONG)&DestinationString;
    v9[0].LowPart = 48;
    v10 = 192;
    v12 = 0LL;
    if ( (int)xxxCreateDesktopEx(v9, 0, 0x2000000LL, 0, &Handle, 1) < 0 )
    {
      GreDeleteObject(EmptyRgnPublic);
    }
    else if ( (int)SetDisconnectDesktopSecurity((HDESK)Handle) < 0
           || (Object = 0LL,
               v5 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, 0LL),
               gspdeskDisconnect = Object,
               v5 < 0) )
    {
      GreDeleteObject(EmptyRgnPublic);
      CloseDesktop((unsigned __int64)Handle, 1);
      gspdeskDisconnect = 0LL;
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)Object + 1) + 24LL) + 40LL) + 168LL) = EmptyRgnPublic;
      KeAttachProcess(gpepCSRSS);
      v6 = ObOpenObjectByPointer(gspdeskDisconnect, 0x200u, 0LL, 0x1F0003u, 0LL, 0, &ghDisconnectDesk);
      if ( v6 >= 0 )
        v6 = ObOpenObjectByPointer(a2, 0, 0LL, 0x1F0003u, 0LL, 0, &ghDisconnectWinSta);
      KeDetachProcess();
      if ( v6 >= 0 )
        return 1LL;
      tagWND::ClearClipRgnOrMaxClip(*(tagWND **)(*((_QWORD *)gspdeskDisconnect + 1) + 24LL));
      if ( ghDisconnectDesk )
      {
        ObCloseHandle(ghDisconnectDesk, 0);
        ghDisconnectDesk = 0LL;
      }
      CloseDesktop((unsigned __int64)Handle, 1);
    }
  }
  return 0LL;
}
