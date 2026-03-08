/*
 * XREFs of PiDevCfgParsePropertyKeyName @ 0x14055FD1C
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x140877A34 (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     RtlStringCchCopyNW @ 0x140303EF8 (RtlStringCchCopyNW.c)
 *     PnpStringToDwordValue @ 0x1403C2438 (PnpStringToDwordValue.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     wcschr @ 0x1403D5D90 (wcschr.c)
 *     RtlGUIDFromString @ 0x1406D1AA0 (RtlGUIDFromString.c)
 */

bool __fastcall PiDevCfgParsePropertyKeyName(unsigned __int16 *a1, GUID *a2, unsigned int *a3)
{
  bool v4; // cf
  NTSTATUS v7; // ebx
  const wchar_t *v8; // rdi
  __int64 v9; // rbx
  wchar_t *v10; // rax
  __int64 v11; // rsi
  char v12; // al
  int v13; // ecx
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-68h] BYREF
  wchar_t pszDest[12]; // [rsp+30h] [rbp-58h] BYREF

  v4 = *a1 < 0x50u;
  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
  if ( v4 )
    goto LABEL_2;
  GuidString.Buffer = (wchar_t *)*((_QWORD *)a1 + 1);
  GuidString.MaximumLength = a1[1];
  GuidString.Length = 76;
  v7 = RtlGUIDFromString(&GuidString, a2);
  if ( v7 < 0 )
    return v7 >= 0;
  if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 76LL) != 44 )
    goto LABEL_2;
  v8 = (const wchar_t *)(*((_QWORD *)a1 + 1) + 78LL);
  v9 = (*a1 >> 1) - 39;
  if ( v8[v9] )
    goto LABEL_2;
  v10 = wcschr(v8, 0x2Cu);
  v11 = (__int64)v10;
  if ( v10 )
  {
    v9 = v10 - v8;
    v11 = (__int64)(v10 + 1);
  }
  v7 = RtlStringCchCopyNW(pszDest, 0xBuLL, v8, (unsigned int)v9);
  if ( v7 >= 0 )
  {
    if ( PnpStringToDwordValue((__int64)pszDest, &a2[1].Data1) )
    {
      if ( a3 )
      {
        *a3 = 1;
        if ( v11 )
        {
          v12 = PnpStringToDwordValue(v11, a3);
          v13 = v7;
          if ( !v12 )
            v13 = -1073741823;
          v7 = v13;
        }
      }
      return v7 >= 0;
    }
LABEL_2:
    v7 = -1073741823;
  }
  return v7 >= 0;
}
