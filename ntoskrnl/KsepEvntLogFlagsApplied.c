/*
 * XREFs of KsepEvntLogFlagsApplied @ 0x14036F7E8
 * Callers:
 *     KseQueryDeviceFlags @ 0x1408014E0 (KseQueryDeviceFlags.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char KsepEvntLogFlagsApplied(unsigned __int16 *a1, unsigned __int16 *a2, int a3, ...)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v4; // rbx
  ULONGLONG v7; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-9h] BYREF
  __int64 v10; // [rsp+58h] [rbp+7h]
  int v11; // [rsp+60h] [rbp+Fh]
  int v12; // [rsp+64h] [rbp+13h]
  int *v13; // [rsp+68h] [rbp+17h]
  int v14; // [rsp+70h] [rbp+1Fh]
  int v15; // [rsp+74h] [rbp+23h]
  va_list v16; // [rsp+78h] [rbp+27h]
  int v17; // [rsp+80h] [rbp+2Fh]
  int v18; // [rsp+84h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF
  int v20; // [rsp+C8h] [rbp+77h] BYREF
  va_list va; // [rsp+D0h] [rbp+7Fh] BYREF

  va_start(va, a3);
  v3 = &retaddr;
  v20 = a3;
  v4 = KseEtwHandle;
  if ( KseEtwHandle )
  {
    LOBYTE(v3) = EtwEventEnabled(KseEtwHandle, &KseFlagsApplied);
    if ( (_BYTE)v3 )
    {
      if ( a1 && a2 )
      {
        v7 = *((_QWORD *)a1 + 1);
        UserData.Reserved = 0;
        v12 = 0;
        v15 = 0;
        v18 = 0;
        UserData.Ptr = v7;
        LODWORD(v7) = *a1 + 2;
        v14 = 4;
        UserData.Size = v7;
        v10 = *((_QWORD *)a2 + 1);
        LODWORD(v7) = *a2 + 2;
        v17 = 8;
        v11 = v7;
        v13 = &v20;
        va_copy(v16, va);
        LOBYTE(v3) = EtwWriteEx(v4, &KseFlagsApplied, 0LL, 0, 0LL, 0LL, 4u, &UserData);
      }
    }
  }
  return (char)v3;
}
