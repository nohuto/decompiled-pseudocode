/*
 * XREFs of ?vHorizontalLineCallback@@YAXPEAEJJK@Z @ 0x1C02FE410
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vHorizontalLineCallback(unsigned __int8 *a1, int a2, int a3, unsigned int a4)
{
  int v4; // eax
  __int64 v5; // rcx
  _DWORD v6[4]; // [rsp+20h] [rbp-28h] BYREF

  if ( a3 != a2 )
  {
    v4 = *(_DWORD *)a1;
    v5 = *((_QWORD *)a1 + 1);
    v6[1] = v4;
    v6[0] = a2;
    v6[2] = a3;
    v6[3] = v4 + 1;
    (*(void (__fastcall **)(__int64, _QWORD, _DWORD *))(v5 + 8))(v5, a4, v6);
  }
}
