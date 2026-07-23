/*
 * XREFs of VfNotifyVerifierExtensions @ 0x1409C9A88
 * Callers:
 *     VfNotifyVerifierOfEvent @ 0x1409C7050 (VfNotifyVerifierOfEvent.c)
 *     VfSuspectDriversLoadCallback @ 0x1409DAB98 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversUnloadCallback @ 0x1409DAFBC (VfSuspectDriversUnloadCallback.c)
 *     ViLogAndLoadXdv @ 0x140A948F4 (ViLogAndLoadXdv.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VfNotifyVerifierExtensions(int a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-38h] BYREF
  __int128 v4; // [rsp+30h] [rbp-28h]
  __int64 v5; // [rsp+40h] [rbp-18h]

  result = 0LL;
  v5 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  if ( ViFnXdvNotifyExtensions )
  {
    if ( a1 )
    {
      result = (unsigned int)(a1 - 1);
      if ( (unsigned int)result > 1 )
        return result;
      LODWORD(v3) = a1;
      *((_QWORD *)&v3 + 1) = a2 + 88;
      *(_QWORD *)&v4 = *(_QWORD *)(a2 + 48);
      DWORD2(v4) = *(_DWORD *)(a2 + 64);
      HIDWORD(v4) = *(_DWORD *)(a2 + 156);
      LODWORD(v5) = *(_DWORD *)(a2 + 120);
    }
    else
    {
      DWORD2(v3) = a2;
    }
    return ((__int64 (__fastcall *)(__int128 *))ViFnXdvNotifyExtensions)(&v3);
  }
  return result;
}
