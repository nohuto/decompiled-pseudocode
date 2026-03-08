/*
 * XREFs of IopReferenceDriverObjectByName @ 0x1406C3670
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1406C3364 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PiGetDefaultMessageString @ 0x140847760 (PiGetDefaultMessageString.c)
 *     IopInitializeSystemDrivers @ 0x140B57B44 (IopInitializeSystemDrivers.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ObOpenObjectByName @ 0x1406C39E0 (ObOpenObjectByName.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

PVOID __fastcall IopReferenceDriverObjectByName(_WORD *a1)
{
  NTSTATUS v2; // ebx
  _DWORD v3[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v4; // [rsp+48h] [rbp-28h]
  _WORD *v5; // [rsp+50h] [rbp-20h]
  int v6; // [rsp+58h] [rbp-18h]
  int v7; // [rsp+5Ch] [rbp-14h]
  __int128 v8; // [rsp+60h] [rbp-10h]
  HANDLE Handle; // [rsp+80h] [rbp+10h] BYREF
  PVOID Object; // [rsp+88h] [rbp+18h] BYREF

  v3[1] = 0;
  v7 = 0;
  Handle = 0LL;
  if ( !*a1 )
    return 0LL;
  v5 = a1;
  v3[0] = 48;
  v4 = 0LL;
  v6 = 576;
  v8 = 0LL;
  if ( (int)ObOpenObjectByName((unsigned int)v3, (_DWORD)IoDriverObjectType, 0, 0, 128, 0LL, (__int64)&Handle) < 0 )
    return 0LL;
  Object = 0LL;
  v2 = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &Object, 0LL);
  ZwClose(Handle);
  if ( v2 >= 0 )
    return Object;
  else
    return 0LL;
}
