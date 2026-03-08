/*
 * XREFs of IoGetEnvironmentVariableEx @ 0x14075D3B0
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x1403AB95C (IopInitializeOfflineCrashDump.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x14075D2DC (ExpGetFirmwareEnvironmentVariable.c)
 *     NtQueryBootEntryOrder @ 0x14083E080 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x14083E280 (NtQueryBootOptions.c)
 *     NtGetEnvironmentVariableEx @ 0x14085E820 (NtGetEnvironmentVariableEx.c)
 *     ExpSetBootEntry @ 0x1409FA390 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1409FAB20 (ExpSetDriverEntry.c)
 *     NtDeleteBootEntry @ 0x1409FBA50 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1409FBBE0 (NtDeleteDriverEntry.c)
 *     IopCachePreviousBootData @ 0x140B90728 (IopCachePreviousBootData.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x140244050 (_tlgCreate1Sz_wchar_t.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     IopOpenSystemVariableDevice @ 0x14075D4AC (IopOpenSystemVariableDevice.c)
 */

__int64 __fastcall IoGetEnvironmentVariableEx(const size_t *a1, __int64 a2, __int64 a3, int *a4, int *a5)
{
  int v9; // edi
  PVOID v10; // rbx
  int v12; // eax
  __int64 v13; // [rsp+20h] [rbp-A1h]
  int v14; // [rsp+40h] [rbp-81h] BYREF
  PVOID Object; // [rsp+48h] [rbp-79h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-71h] BYREF
  __int64 (__fastcall **v17)(PVOID, PDEVICE_OBJECT, const size_t *, __int64, __int64, int *, int *); // [rsp+58h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+60h] [rbp-61h] BYREF
  char v19[16]; // [rsp+80h] [rbp-41h] BYREF
  __int64 v20; // [rsp+90h] [rbp-31h]
  int v21; // [rsp+98h] [rbp-29h]
  int v22; // [rsp+9Ch] [rbp-25h]
  PVOID *p_Object; // [rsp+A0h] [rbp-21h]
  int v24; // [rsp+A8h] [rbp-19h]
  int v25; // [rsp+ACh] [rbp-15h]
  PDEVICE_OBJECT *p_DeviceObject; // [rsp+B0h] [rbp-11h]
  int v27; // [rsp+B8h] [rbp-9h]
  int v28; // [rsp+BCh] [rbp-5h]
  __int64 (__fastcall ***v29)(PVOID, PDEVICE_OBJECT, const size_t *, __int64, __int64, int *, int *); // [rsp+C0h] [rbp-1h]
  int v30; // [rsp+C8h] [rbp+7h]
  int v31; // [rsp+CCh] [rbp+Bh]

  DeviceObject = 0LL;
  Object = 0LL;
  v17 = 0LL;
  v14 = -559038737;
  v9 = IopOpenSystemVariableDevice((PFILE_OBJECT *)&Object, &DeviceObject);
  if ( v9 >= 0 )
  {
    v13 = a3;
    v10 = Object;
    v9 = (*v17)(Object, DeviceObject, a1, a2, v13, a4, &v14);
    if ( a5 )
      *a5 = v14;
    if ( v10 )
      ObfDereferenceObject(v10);
  }
  if ( (unsigned int)dword_140C03880 > 5 && tlgKeywordOn((__int64)&dword_140C03880, 0x200000000000LL) )
  {
    tlgCreate1Sz_wchar_t((__int64)v19, a1);
    v12 = *a4;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v31 = 0;
    LODWORD(Object) = v12;
    p_Object = &Object;
    LODWORD(DeviceObject) = v14;
    p_DeviceObject = &DeviceObject;
    v29 = &v17;
    v24 = 4;
    v27 = 4;
    v30 = 4;
    v20 = a2;
    v21 = 16;
    LODWORD(v17) = v9;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03880, (unsigned __int8 *)byte_14002C31D, 0LL, 0LL, 7u, &v18);
  }
  return (unsigned int)v9;
}
