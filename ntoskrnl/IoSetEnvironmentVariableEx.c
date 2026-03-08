/*
 * XREFs of IoSetEnvironmentVariableEx @ 0x14094D504
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x1403AB95C (IopInitializeOfflineCrashDump.c)
 *     IopInitializeInMemoryDumpData @ 0x140550F70 (IopInitializeInMemoryDumpData.c)
 *     ExpSetBootEntry @ 0x1409FA390 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1409FAB20 (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1409FB114 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x1409FBA50 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1409FBBE0 (NtDeleteDriverEntry.c)
 *     NtSetBootEntryOrder @ 0x1409FCAF0 (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x1409FCD00 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x1409FCF20 (NtSetDriverEntryOrder.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x140244050 (_tlgCreate1Sz_wchar_t.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     IopOpenSystemVariableDevice @ 0x14075D4AC (IopOpenSystemVariableDevice.c)
 */

__int64 __fastcall IoSetEnvironmentVariableEx(const size_t *a1, __int64 a2, __int64 a3, int a4, int a5)
{
  int v9; // ebx
  PVOID v10; // rdi
  __int64 v12; // [rsp+20h] [rbp-A1h]
  PVOID Object; // [rsp+40h] [rbp-81h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-79h] BYREF
  __int64 (__fastcall **v15[2])(int, int, int, int, __int64, __int64, __int64); // [rsp+50h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+60h] [rbp-61h] BYREF
  _BYTE v17[16]; // [rsp+80h] [rbp-41h] BYREF
  __int64 v18; // [rsp+90h] [rbp-31h]
  int v19; // [rsp+98h] [rbp-29h]
  int v20; // [rsp+9Ch] [rbp-25h]
  PVOID *p_Object; // [rsp+A0h] [rbp-21h]
  int v22; // [rsp+A8h] [rbp-19h]
  int v23; // [rsp+ACh] [rbp-15h]
  PDEVICE_OBJECT *p_DeviceObject; // [rsp+B0h] [rbp-11h]
  int v25; // [rsp+B8h] [rbp-9h]
  int v26; // [rsp+BCh] [rbp-5h]
  __int64 (__fastcall ***v27)(int, int, int, int, __int64, __int64, __int64); // [rsp+C0h] [rbp-1h]
  int v28; // [rsp+C8h] [rbp+7h]
  int v29; // [rsp+CCh] [rbp+Bh]

  DeviceObject = 0LL;
  Object = 0LL;
  v15[0] = 0LL;
  v9 = IopOpenSystemVariableDevice((PFILE_OBJECT *)&Object, &DeviceObject, v15);
  if ( v9 >= 0 )
  {
    v12 = a3;
    v10 = Object;
    v9 = v15[0][1]((int)Object, (int)DeviceObject, (int)a1, a2, v12, a4, a5);
    if ( v10 )
      ObfDereferenceObject(v10);
  }
  if ( (unsigned int)dword_140C03880 > 5 && tlgKeywordOn((__int64)&dword_140C03880, 0x200000000000LL) )
  {
    tlgCreate1Sz_wchar_t((__int64)v17, a1);
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    p_Object = &Object;
    v22 = 4;
    p_DeviceObject = &DeviceObject;
    v27 = v15;
    v25 = 4;
    v28 = 4;
    v18 = a2;
    v19 = 16;
    LODWORD(Object) = a4;
    LODWORD(DeviceObject) = a5;
    LODWORD(v15[0]) = v9;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03880, (unsigned __int8 *)byte_14002C2C5, 0LL, 0LL, 7u, &v16);
  }
  return (unsigned int)v9;
}
