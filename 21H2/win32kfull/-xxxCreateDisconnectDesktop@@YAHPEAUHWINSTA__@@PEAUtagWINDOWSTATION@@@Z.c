/*
 * XREFs of ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C000DB68
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C00101D4 (xxxCreateDesktopEx.c)
 * Callees:
 *     ?SetDisconnectDesktopSecurity@@YAJPEAUHDESK__@@@Z @ 0x1C000DD44 (-SetDisconnectDesktopSecurity@@YAJPEAUHDESK__@@@Z.c)
 *     xxxCreateDesktopEx @ 0x1C00101D4 (xxxCreateDesktopEx.c)
 *     _CloseDesktop @ 0x1C00D92C8 (_CloseDesktop.c)
 */

__int64 __fastcall xxxCreateDisconnectDesktop(HWINSTA a1, struct tagWINDOWSTATION *a2)
{
  __int64 EmptyRgnPublic; // rbx
  NTSTATUS v5; // eax
  NTSTATUS v6; // edi
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v9[2]; // [rsp+50h] [rbp-30h] BYREF
  HWINSTA v10; // [rsp+58h] [rbp-28h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+6Ch] [rbp-14h]
  __int128 v14; // [rsp+70h] [rbp-10h]
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+38h] BYREF

  DestinationString = 0LL;
  v9[1] = 0;
  v13 = 0;
  Handle = 0LL;
  EmptyRgnPublic = CreateEmptyRgnPublic();
  if ( EmptyRgnPublic )
  {
    RtlInitUnicodeString(&DestinationString, L"Disconnect");
    p_DestinationString = &DestinationString;
    v9[0] = 48;
    v10 = a1;
    v12 = 192;
    v14 = 0LL;
    if ( (int)xxxCreateDesktopEx((unsigned int)v9, 0, 0x2000000, 0, (__int64)&Handle, 1) < 0 )
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
      CloseDesktop(Handle);
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
      GreDeleteObject(EmptyRgnPublic);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)gspdeskDisconnect + 1) + 24LL) + 40LL) + 168LL) = 0LL;
      if ( ghDisconnectDesk )
      {
        ObCloseHandle(ghDisconnectDesk, 0);
        ghDisconnectDesk = 0LL;
      }
      CloseDesktop(Handle);
    }
  }
  return 0LL;
}
