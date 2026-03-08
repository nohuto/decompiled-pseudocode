/*
 * XREFs of PiDqDeleteUserObjectFromLoadedHives @ 0x1409593D4
 * Callers:
 *     PiDqObjectManagerHandleObjectEvent @ 0x140778E48 (PiDqObjectManagerHandleObjectEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x1406D4350 (_SysCtxRegOpenKey.c)
 *     _RegRtlEnumKey @ 0x140868D44 (_RegRtlEnumKey.c)
 *     PiDqDeleteUserObject @ 0x1409592CC (PiDqDeleteUserObject.c)
 */

NTSTATUS __fastcall PiDqDeleteUserObjectFromLoadedHives(const WCHAR *a1, int a2)
{
  __int64 v4; // rcx
  NTSTATUS result; // eax
  ULONG i; // ebx
  __int64 v7; // rcx
  HANDLE KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE Handle[2]; // [rsp+48h] [rbp-C0h] BYREF
  char v11[512]; // [rsp+58h] [rbp-B0h] BYREF

  KeyHandle = 0LL;
  Handle[0] = 0LL;
  if ( *(_QWORD *)&PiPnpRtlCtx )
    v4 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
  else
    v4 = 0LL;
  result = SysCtxRegOpenKey(v4, 0LL, (__int64)L"\\REGISTRY\\USER", 0, 8u, (__int64)&KeyHandle);
  if ( result >= 0 )
  {
    for ( i = 0; ; ++i )
    {
      LODWORD(v9) = 256;
      result = RegRtlEnumKey(KeyHandle, i, v11, (unsigned int *)&v9);
      if ( result < 0 )
        break;
      if ( *(_QWORD *)&PiPnpRtlCtx )
        v7 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
      else
        v7 = 0LL;
      if ( (int)SysCtxRegOpenKey(v7, (__int64)KeyHandle, (__int64)v11, 0, 1u, (__int64)Handle) >= 0 )
      {
        PiDqDeleteUserObject(Handle[0], a1, a2);
        ZwClose(Handle[0]);
      }
    }
  }
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
