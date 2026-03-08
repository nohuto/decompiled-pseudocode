/*
 * XREFs of DrvOpenLocalGraphicsDevices @ 0x1C0126480
 * Callers:
 *     xxxRemoteReconnect @ 0x1C01267DC (xxxRemoteReconnect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvOpenLocalGraphicsDevices(Gre::Base *a1)
{
  __int64 v1; // rdi
  int v2; // ebp
  struct Gre::Base::SESSION_GLOBALS *v3; // rbx
  __int64 v4; // rbx
  PVOID *v5; // rsi
  __int64 *v6; // r14
  __int64 v7; // rcx
  int v8; // eax
  NTSTATUS DeviceObjectPointer; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v12[2]; // [rsp+50h] [rbp-58h] BYREF
  __int128 v13; // [rsp+60h] [rbp-48h]
  __int64 v14; // [rsp+70h] [rbp-38h]
  int v15; // [rsp+B0h] [rbp+8h] BYREF

  DestinationString = 0LL;
  LODWORD(v1) = 0;
  v2 = 0;
  v3 = Gre::Base::Globals(a1);
  if ( !(unsigned int)DrvUpdateGraphicsDeviceList(1LL) )
    return 3221225473LL;
  v4 = *((_QWORD *)v3 + 169);
  if ( !v4 )
    return 0LL;
  do
  {
    v5 = (PVOID *)(v4 + 224);
    v6 = (__int64 *)(v4 + 136);
    if ( *(_QWORD *)(v4 + 224) )
      goto LABEL_4;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)v4);
    DeviceObjectPointer = IoGetDeviceObjectPointer(
                            &DestinationString,
                            0,
                            (PFILE_OBJECT *)(v4 + 224),
                            (PDEVICE_OBJECT *)(v4 + 136));
    v1 = DeviceObjectPointer;
    if ( DeviceObjectPointer < 0 )
      goto LABEL_12;
    if ( (unsigned int)bSetDeviceSessionUsage(v4, 1LL) )
    {
LABEL_4:
      v2 = 1;
      if ( (*(_DWORD *)(v4 + 160) & 8) == 0 )
      {
        if ( *v5 )
        {
          v7 = *v6;
          v12[1] = VideoPortCallout;
          v13 = 0LL;
          v14 = 0LL;
          v15 = 0;
          v12[0] = v4;
          v8 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, __int64, _QWORD *, int, int *, int, _QWORD, PWSTR))GreGdoDeviceIoControlEx)(
                 v7,
                 2301983LL,
                 v12,
                 40LL,
                 v12,
                 40,
                 &v15,
                 1,
                 *(_QWORD *)&DestinationString.Length,
                 DestinationString.Buffer);
          v1 = v8;
          if ( v8 < 0 )
LABEL_12:
            WdLogSingleEntry1(4LL, v1);
        }
      }
    }
    else
    {
      ObfDereferenceObject(*v5);
      *v6 = 0LL;
      LODWORD(v1) = -1073741790;
      *v5 = 0LL;
      WdLogSingleEntry0(4LL);
    }
    v4 = *(_QWORD *)(v4 + 128);
  }
  while ( v4 );
  if ( v2 )
    LODWORD(v1) = 0;
  return (unsigned int)v1;
}
