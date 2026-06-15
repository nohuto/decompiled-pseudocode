/*
 * XREFs of sub_1800464D0 @ 0x1800464D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_1800B8CCC @ 0x1800B8CCC (sub_1800B8CCC.c)
 *     sub_1800B91A0 @ 0x1800B91A0 (sub_1800B91A0.c)
 *     sub_1800BA5C8 @ 0x1800BA5C8 (sub_1800BA5C8.c)
 *     sub_18013CB58 @ 0x18013CB58 (sub_18013CB58.c)
 */

// Hidden C++ exception states: #wind=1
void sub_1800464D0()
{
  int v0; // ebx
  __int64 v1; // rcx
  __int64 v2; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v3; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v4[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v5[2048]; // [rsp+60h] [rbp-A0h] BYREF

  EnterCriticalSection(&stru_18019EF60);
  v4[1] = &stru_18019EF60;
  if ( qword_18019D9C0 )
  {
    v3 = v5;
    v2 = 1024LL;
    v0 = sub_1800BA5C8(
           (unsigned int)v5,
           1024,
           (unsigned int)&v3,
           (unsigned int)&v2,
           2048,
           (__int64)L"AudioSrv active Stream on AudioDG terminating: ");
    if ( v0 >= 0 )
    {
      v1 = qword_18019D9B0;
      for ( v4[0] = qword_18019D9B0; v1; v1 = v4[0] )
      {
        sub_1800B8CCC(v1, v1);
        v0 = sub_1800BA5C8((_DWORD)v3, v2, (unsigned int)&v3, (unsigned int)&v2, 2048, (__int64)L"%p ");
        if ( v0 )
          break;
        sub_1800B91A0(v1, v4);
      }
      if ( v0 >= 0 )
        sub_18013CB58(v1, (unsigned int)v0, 0LL);
      if ( v0 == -2147024774 )
        sub_18013CB58(v1, 2147942522LL, 0LL);
    }
  }
  LeaveCriticalSection(&stru_18019EF60);
}
