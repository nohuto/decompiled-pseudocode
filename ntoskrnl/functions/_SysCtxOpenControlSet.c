__int64 __fastcall SysCtxOpenControlSet(unsigned int a1, void *a2, __int64 a3, HANDLE *a4)
{
  char v4; // r15
  unsigned int KeyTransacted; // ebx
  unsigned int v10; // eax
  int v11; // [rsp+50h] [rbp-19h] BYREF
  int v12; // [rsp+58h] [rbp-11h] BYREF
  unsigned int KeyHandle[3]; // [rsp+5Ch] [rbp-Dh] BYREF
  wchar_t pszDest[16]; // [rsp+68h] [rbp-1h] BYREF

  *(_QWORD *)&KeyHandle[1] = 0LL;
  v4 = 0;
  v12 = 0;
  *a4 = 0LL;
  v11 = a1;
  if ( a1 )
    goto LABEL_16;
  KeyTransacted = RegRtlOpenKeyTransacted(a2, L"CurrentControlSet", 0, 0x2000000u, a4, a3);
  if ( KeyTransacted == -1073741772 )
  {
    KeyTransacted = RegRtlOpenKeyTransacted(a2, L"Select", 0, 1u, (HANDLE *)&KeyHandle[1], a3);
    if ( KeyTransacted == -1073741772 )
      KeyTransacted = RegRtlCreateKeyTransacted(a2, L"Select", 0, 3u, 0LL, 0, (HANDLE *)&KeyHandle[1], 0LL, a3);
    if ( !KeyTransacted )
    {
      KeyHandle[0] = 4;
      v10 = RegRtlQueryValue(*(HANDLE *)&KeyHandle[1], L"Current", &v12, &v11, KeyHandle);
      KeyTransacted = v10;
      if ( v10 == -1073741772 )
      {
        v11 = 1;
        v4 = 1;
        KeyTransacted = RegRtlSetValue(*(HANDLE *)&KeyHandle[1], L"Current", 4u, &v11, 4u);
        if ( KeyTransacted )
          goto LABEL_3;
      }
      else
      {
        if ( v10 )
          goto LABEL_3;
        if ( v12 != 4 || KeyHandle[0] != 4 )
          goto LABEL_21;
      }
      a1 = v11;
LABEL_16:
      if ( a1 <= 0x3E7 && RtlStringCchPrintfW(pszDest, 0xEuLL, L"ControlSet%03d", a1) >= 0 )
      {
        KeyTransacted = RegRtlOpenKeyTransacted(a2, pszDest, 0, 0x2000000u, a4, a3);
        if ( KeyTransacted == -1073741772 && v4 )
          KeyTransacted = RegRtlCreateKeyTransacted(a2, pszDest, 0, 0x2000000u, 0LL, 0, a4, 0LL, a3);
        goto LABEL_3;
      }
LABEL_21:
      KeyTransacted = -1073741811;
    }
  }
LABEL_3:
  if ( *(_QWORD *)&KeyHandle[1] )
    ZwClose(*(HANDLE *)&KeyHandle[1]);
  return KeyTransacted;
}
