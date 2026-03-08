/*
 * XREFs of PostDeviceNotification @ 0x1C00D6230
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C00D53F0 (EditionDevicePnpNotification.c)
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C00D604C (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01A7C60 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     ?InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z @ 0x1C00D5A40 (-InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z.c)
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C00D6620 (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     _PostMessage @ 0x1C00EF0A0 (_PostMessage.c)
 *     PostPointerEventMessage @ 0x1C01C4440 (PostPointerEventMessage.c)
 *     ?OnDeviceRemoval@Edgy@@YAXPEAX@Z @ 0x1C01E8948 (-OnDeviceRemoval@Edgy@@YAXPEAX@Z.c)
 */

void __fastcall PostDeviceNotification(
        struct tagPROCESS_HID_REQUEST *a1,
        struct DEVICEINFO *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  __int64 v8; // rax
  unsigned int v9; // r8d
  __int64 v10; // rcx
  unsigned __int16 v11; // si
  unsigned __int16 v12; // bp
  struct tagPROCESS_HID_TABLE *v13; // r14
  unsigned int v14; // r15d
  __int64 i; // rax
  struct tagPROCESS_HID_REQUEST *v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // r8d
  __int64 v19; // rax

  v8 = SGDGetUserSessionState(a1);
  v9 = *((unsigned __int8 *)a2 + 48);
  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  v13 = *(struct tagPROCESS_HID_TABLE **)(v8 + 408);
  if ( *((_BYTE *)a2 + 48) )
  {
    if ( --v9 )
    {
      if ( v9 == 1 )
      {
        v19 = *((_QWORD *)a2 + 57);
        v11 = *(_WORD *)(v19 + 42);
        v12 = *(_WORD *)(v19 + 40);
      }
    }
    else
    {
      v11 = 1;
      v12 = 6;
    }
  }
  else
  {
    v11 = 1;
    v12 = 2;
  }
  v14 = 0;
  if ( (*((_DWORD *)a2 + 50) & 0x80u) != 0 )
  {
    if ( a4 == 2 )
    {
      Edgy::OnDeviceRemoval(*(Edgy **)a2, (void *)1);
      v10 = 0LL;
    }
    if ( a5 )
    {
      PostPointerEventMessage(*((_QWORD *)a2 + 59), 568LL, a4, 1LL);
      if ( a4 == 1 )
      {
        v14 = 712;
      }
      else if ( a4 == 2 )
      {
        v14 = 713;
      }
      PostMessage(-1LL, v14, a5, 0LL);
    }
  }
  if ( a1 )
  {
    if ( *((_WORD *)a1 + 9) == v12 && *((_WORD *)a1 + 8) == v11 )
      PostHidNotification(a1, a2, v9, a4);
  }
  else
  {
    for ( i = SGDGetUserSessionState(v10); v13 != (struct tagPROCESS_HID_TABLE *)(i + 408); i = SGDGetUserSessionState(v17) )
    {
      v16 = InProcessDeviceTypeRequestTable(v13, v11, v12);
      if ( v16 )
        PostHidNotification(v16, a2, v18, a4);
      v13 = *(struct tagPROCESS_HID_TABLE **)v13;
    }
  }
}
