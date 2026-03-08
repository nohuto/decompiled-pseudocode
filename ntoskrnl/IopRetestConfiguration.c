/*
 * XREFs of IopRetestConfiguration @ 0x1408035A0
 * Callers:
 *     PnpFindBestConfigurationWorker @ 0x14080375C (PnpFindBestConfigurationWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PnpLookupArbitersNewResources @ 0x1408039D4 (PnpLookupArbitersNewResources.c)
 */

__int64 __fastcall IopRetestConfiguration(int a1, int a2, _QWORD **a3)
{
  _QWORD *v3; // rdi
  __int64 result; // rax
  _QWORD *v8; // r8
  __int64 v9; // rbx
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int128 v11; // [rsp+40h] [rbp-18h] BYREF

  v3 = *a3;
  v10 = 0LL;
  v11 = 0LL;
  result = 0LL;
  while ( v3 != a3 )
  {
    v8 = v3;
    v3 = (_QWORD *)*v3;
    if ( *((_BYTE *)v8 + 17) )
    {
      v9 = *(v8 - 8);
      DWORD2(v10) = 0;
      *(_QWORD *)&v11 = 0LL;
      *(_QWORD *)&v10 = v8 - 6;
      PnpLookupArbitersNewResources(a1, a2, *(v8 - 7), *((_BYTE *)v8 - 72), (__int64)&v11, (__int64)&v10 + 8);
      result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *))(v9 + 32))(*(_QWORD *)(v9 + 8), 1LL, &v10);
      if ( (int)result < 0 )
        break;
    }
  }
  return result;
}
