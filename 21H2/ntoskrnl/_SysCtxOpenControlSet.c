/*
 * XREFs of _SysCtxOpenControlSet @ 0x1407A4D24
 * Callers:
 *     _SysCtxOpenMachine @ 0x1407A4AF4 (_SysCtxOpenMachine.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14026D570 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _RegRtlCreateKeyTransacted @ 0x14063336C (_RegRtlCreateKeyTransacted.c)
 *     _RegRtlQueryValue @ 0x140637128 (_RegRtlQueryValue.c)
 *     _RegRtlOpenKeyTransacted @ 0x14063750C (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlSetValue @ 0x140768CB4 (_RegRtlSetValue.c)
 */

__int64 __fastcall SysCtxOpenControlSet(__int64 a1, char *a2, __int64 a3, HANDLE *a4)
{
  char v7; // r15
  unsigned int KeyTransacted; // ebx
  unsigned int v10; // eax
  _DWORD v11[4]; // [rsp+50h] [rbp-29h] BYREF
  int v12; // [rsp+60h] [rbp-19h] BYREF
  unsigned int KeyHandle[3]; // [rsp+64h] [rbp-15h] BYREF
  wchar_t pszDest[16]; // [rsp+70h] [rbp-9h] BYREF

  *a4 = 0LL;
  v11[0] = 0;
  *(_QWORD *)&KeyHandle[1] = 0LL;
  v12 = 0;
  v7 = 0;
  KeyTransacted = RegRtlOpenKeyTransacted(a2, L"CurrentControlSet", 0, 0x2000000u, a4, a3);
  if ( KeyTransacted == -1073741772 )
  {
    KeyTransacted = RegRtlOpenKeyTransacted(a2, L"Select", 0, 1u, (PHANDLE)&KeyHandle[1], a3);
    if ( KeyTransacted == -1073741772 )
      KeyTransacted = RegRtlCreateKeyTransacted(a2, L"Select", 0, 3u, 0LL, 0, (PHANDLE)&KeyHandle[1], 0LL, a3);
    if ( !KeyTransacted )
    {
      KeyHandle[0] = 4;
      v10 = RegRtlQueryValue(*(HANDLE *)&KeyHandle[1], L"Current", &v12, v11, KeyHandle);
      KeyTransacted = v10;
      if ( v10 == -1073741772 )
      {
        v11[0] = 1;
        v7 = 1;
        KeyTransacted = RegRtlSetValue(*(HANDLE *)&KeyHandle[1], L"Current", 4u, v11, 4u);
        if ( KeyTransacted )
          goto LABEL_2;
      }
      else
      {
        if ( v10 )
          goto LABEL_2;
        if ( v12 != 4 || KeyHandle[0] != 4 )
          goto LABEL_19;
      }
      if ( v11[0] <= 0x3E7u && RtlStringCchPrintfW(pszDest, 0xEuLL, L"ControlSet%03d") >= 0 )
      {
        KeyTransacted = RegRtlOpenKeyTransacted(a2, pszDest, 0, 0x2000000u, a4, a3);
        if ( KeyTransacted == -1073741772 && v7 )
          KeyTransacted = RegRtlCreateKeyTransacted(a2, pszDest, 0, 0x2000000u, 0LL, 0, a4, 0LL, a3);
        goto LABEL_2;
      }
LABEL_19:
      KeyTransacted = -1073741811;
    }
  }
LABEL_2:
  if ( *(_QWORD *)&KeyHandle[1] )
    ZwClose(*(HANDLE *)&KeyHandle[1]);
  return KeyTransacted;
}
