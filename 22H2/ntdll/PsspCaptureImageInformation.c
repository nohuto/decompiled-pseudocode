/*
 * XREFs of PsspCaptureImageInformation @ 0x180115194
 * Callers:
 *     PsspCaptureVaSpaceInformation2 @ 0x18011538C (PsspCaptureVaSpaceInformation2.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     ZwReadVirtualMemory @ 0x18009DCC0 (ZwReadVirtualMemory.c)
 */

__int64 __fastcall PsspCaptureImageInformation(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int16 v4; // [rsp+30h] [rbp-168h]
  int v5; // [rsp+70h] [rbp-128h]
  int v6; // [rsp+78h] [rbp-120h]
  __int16 v7; // [rsp+88h] [rbp-110h]
  __int64 v8; // [rsp+A0h] [rbp-F8h]
  int v9; // [rsp+C0h] [rbp-D8h]
  int v10; // [rsp+C8h] [rbp-D0h]

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  result = ZwReadVirtualMemory();
  if ( (int)result >= 0 )
  {
    if ( v4 != 23117 )
      return 3221225775LL;
    result = ZwReadVirtualMemory();
    if ( (int)result >= 0 )
    {
      if ( v5 == 17744 )
      {
        if ( v7 == 267 )
        {
          v3 = HIDWORD(v8);
          goto LABEL_10;
        }
        if ( v7 == 523 )
        {
          v3 = v8;
LABEL_10:
          *(_QWORD *)(a1 + 8) = v3;
          *(_DWORD *)a1 = v6;
          *(_DWORD *)(a1 + 4) = v9;
          *(_DWORD *)(a1 + 16) = v10;
          return 0LL;
        }
      }
      return 3221225595LL;
    }
  }
  return result;
}
