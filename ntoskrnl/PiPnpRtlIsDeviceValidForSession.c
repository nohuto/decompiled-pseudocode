/*
 * XREFs of PiPnpRtlIsDeviceValidForSession @ 0x1406CDAF0
 * Callers:
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1406CDA80 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 * Callees:
 *     SeQuerySessionIdTokenEx @ 0x1406CDD00 (SeQuerySessionIdTokenEx.c)
 *     _PnpGetObjectProperty @ 0x1406D0FB4 (_PnpGetObjectProperty.c)
 */

__int64 __fastcall PiPnpRtlIsDeviceValidForSession(int a1, int a2, int a3, __int64 a4, _BYTE *a5)
{
  _BYTE *v5; // rbx
  void *v9; // rcx
  NTSTATUS v10; // ecx
  int ObjectProperty; // eax
  int v13; // [rsp+60h] [rbp-10h] BYREF
  ULONG SessionId; // [rsp+64h] [rbp-Ch] BYREF
  int v15; // [rsp+68h] [rbp-8h] BYREF
  int v16; // [rsp+6Ch] [rbp-4h] BYREF
  BOOLEAN IsServiceSession; // [rsp+A8h] [rbp+38h] BYREF

  v5 = a5;
  v15 = 0;
  SessionId = 0;
  v16 = 0;
  v13 = 0;
  *a5 = 0;
  v9 = *(void **)a4;
  IsServiceSession = 0;
  if ( !v9 )
    v9 = *(void **)(a4 + 16);
  v10 = SeQuerySessionIdTokenEx(v9, &SessionId, &IsServiceSession);
  if ( v10 >= 0 )
  {
    if ( IsServiceSession )
    {
LABEL_7:
      *v5 = 1;
      return (unsigned int)v10;
    }
    ObjectProperty = PnpGetObjectProperty(
                       a1,
                       a2,
                       1,
                       a3,
                       0LL,
                       (__int64)&DEVPKEY_Device_SessionId,
                       (__int64)&v13,
                       (__int64)&v15,
                       4,
                       (__int64)&v16,
                       0);
    v10 = ObjectProperty;
    if ( ObjectProperty == -1073741275 )
    {
      v10 = 0;
      goto LABEL_7;
    }
    if ( ObjectProperty >= 0 && (v13 != 7 || v15 == SessionId) )
      goto LABEL_7;
  }
  return (unsigned int)v10;
}
