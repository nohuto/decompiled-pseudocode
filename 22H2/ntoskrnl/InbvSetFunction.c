/*
 * XREFs of InbvSetFunction @ 0x1403C8298
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14039B440 (BgkNotifyDisplayOwnershipChange.c)
 *     InbvDriverInitialize @ 0x140A6B590 (InbvDriverInitialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 __fastcall InbvSetFunction(int a1)
{
  __int64 result; // rax
  void (__fastcall *v3)(_QWORD); // rax
  __int64 (__fastcall **v4)(); // rcx

  result = (unsigned int)dword_140C50B64;
  if ( (unsigned int)(dword_140C50B64 - 3) <= 1 )
  {
    if ( qword_140C50B78 )
    {
      v3 = *(void (__fastcall **)(_QWORD))(qword_140C50B78 + 136);
      if ( v3 )
        v3(0LL);
    }
    v4 = off_140C02F60;
    result = 4 - (unsigned int)(a1 != 4);
    dword_140C50B64 = 4 - (a1 != 4);
    if ( a1 != 4 )
      v4 = off_140C03020;
    qword_140C50B78 = (__int64)v4;
  }
  return result;
}
