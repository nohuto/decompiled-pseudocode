/*
 * XREFs of HalpTimerQueryAndResetRtcErrors @ 0x1404FCE00
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1402FC390 (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

bool __fastcall HalpTimerQueryAndResetRtcErrors(char a1)
{
  __int32 v1; // ebx
  __int64 v2; // r8
  int v3; // eax
  __int64 v4; // r8
  int v6; // [rsp+20h] [rbp-60h]
  int v7; // [rsp+28h] [rbp-58h]
  __int32 v8; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9[2]; // [rsp+48h] [rbp-38h] BYREF
  __int32 *v10; // [rsp+68h] [rbp-18h]
  int v11; // [rsp+70h] [rbp-10h]
  int v12; // [rsp+74h] [rbp-Ch]

  v1 = _InterlockedExchange(&HalpTimerRtcErrorCode, 0);
  if ( a1 )
  {
    if ( (unsigned int)dword_140C04B50 > 5 && tlgKeywordOn((__int64)&dword_140C04B50, 0x400000000000LL) )
    {
      v12 = 0;
      v10 = &v8;
      v8 = v1;
      v11 = 4;
      tlgWriteEx_EtwWriteEx((__int64)&dword_140C04B50, (unsigned __int8 *)&byte_1400290B1, v2, 1u, v6, v7, 3u, v9);
    }
    v3 = 9;
  }
  else
  {
    if ( (unsigned int)dword_140C04B50 > 5 && tlgKeywordOn((__int64)&dword_140C04B50, 0x400000000000LL) )
    {
      v12 = 0;
      v10 = &v8;
      v8 = v1;
      v11 = 4;
      tlgWriteEx_EtwWriteEx((__int64)&dword_140C04B50, (unsigned __int8 *)&word_140029076, v4, 1u, v6, v7, 3u, v9);
    }
    v3 = 31;
  }
  return (v3 & v1) != 0;
}
