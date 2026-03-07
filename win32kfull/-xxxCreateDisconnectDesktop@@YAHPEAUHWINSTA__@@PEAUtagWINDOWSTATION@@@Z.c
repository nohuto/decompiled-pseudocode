__int64 __fastcall xxxCreateDisconnectDesktop(HWINSTA a1, struct tagWINDOWSTATION *a2, __int64 a3, __int64 a4)
{
  __int64 EmptyRgnPublic; // rbx
  NTSTATUS v7; // eax
  NTSTATUS v8; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  union _LARGE_INTEGER v11[3]; // [rsp+50h] [rbp-30h] BYREF
  int v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+6Ch] [rbp-14h]
  __int128 v14; // [rsp+70h] [rbp-10h]
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+38h] BYREF

  v11[0].HighPart = 0;
  v13 = 0;
  Handle = 0LL;
  DestinationString = 0LL;
  EmptyRgnPublic = CreateEmptyRgnPublic(a1, a2, a3, a4);
  if ( EmptyRgnPublic )
  {
    RtlInitUnicodeString(&DestinationString, L"Disconnect");
    v11[1].QuadPart = (LONGLONG)a1;
    v11[2].QuadPart = (LONGLONG)&DestinationString;
    v11[0].LowPart = 48;
    v12 = 192;
    v14 = 0LL;
    if ( (int)xxxCreateDesktopEx(v11, 0, 0x2000000, 0, &Handle, 1) < 0 )
    {
      GreDeleteObject(EmptyRgnPublic);
    }
    else if ( (int)SetDisconnectDesktopSecurity((HDESK)Handle) < 0
           || (Object = 0LL,
               v7 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, 0LL),
               gspdeskDisconnect = Object,
               v7 < 0) )
    {
      GreDeleteObject(EmptyRgnPublic);
      CloseDesktop((unsigned __int64)Handle, 1);
      gspdeskDisconnect = 0LL;
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)Object + 1) + 24LL) + 40LL) + 168LL) = EmptyRgnPublic;
      KeAttachProcess(gpepCSRSS);
      v8 = ObOpenObjectByPointer(gspdeskDisconnect, 0x200u, 0LL, 0x1F0003u, 0LL, 0, &WPP_MAIN_CB.Dpc.DpcData);
      if ( v8 >= 0 )
        v8 = ObOpenObjectByPointer(a2, 0, 0LL, 0x1F0003u, 0LL, 0, &WPP_MAIN_CB.Dpc.SystemArgument2);
      KeDetachProcess();
      if ( v8 >= 0 )
        return 1LL;
      tagWND::ClearClipRgnOrMaxClip(*(tagWND **)(*((_QWORD *)gspdeskDisconnect + 1) + 24LL));
      if ( WPP_MAIN_CB.Dpc.DpcData )
      {
        ObCloseHandle(WPP_MAIN_CB.Dpc.DpcData, 0);
        WPP_MAIN_CB.Dpc.DpcData = 0LL;
      }
      CloseDesktop((unsigned __int64)Handle, 1);
    }
  }
  return 0LL;
}
