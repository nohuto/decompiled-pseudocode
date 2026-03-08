/*
 * XREFs of IopTestConfiguration @ 0x1408038E0
 * Callers:
 *     PnpFindBestConfigurationWorker @ 0x14080375C (PnpFindBestConfigurationWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PnpLogDeviceConflictingResource @ 0x140801FA0 (PnpLogDeviceConflictingResource.c)
 *     PnpLookupArbitersNewResources @ 0x1408039D4 (PnpLookupArbitersNewResources.c)
 */

__int64 __fastcall IopTestConfiguration(int a1, int a2, __int64 **a3)
{
  __int64 *v3; // rdi
  int v4; // esi
  __int64 v8; // rbp
  char v9; // cl
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  __int128 i; // [rsp+40h] [rbp-28h] BYREF

  v3 = *a3;
  v4 = 0;
  v11 = 0LL;
  for ( i = 0LL; v3 != (__int64 *)a3; v3 = (__int64 *)*v3 )
  {
    if ( *((_BYTE *)v3 + 17) )
    {
      v8 = *(v3 - 8);
      DWORD2(v11) = 0;
      *(_QWORD *)&i = 0LL;
      *(_QWORD *)&v11 = v3 - 6;
      PnpLookupArbitersNewResources(a1, a2, *(v3 - 7), *((_BYTE *)v3 - 72), (__int64)&i, (__int64)&v11 + 8);
      v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *))(v8 + 32))(*(_QWORD *)(v8 + 8), 0LL, &v11);
      if ( v4 < 0 )
      {
        PnpLogDeviceConflictingResource((__int64)(v3 - 11), *(_QWORD *)(v8 + 8));
        *((_BYTE *)v3 + 16) |= 2u;
        return (unsigned int)v4;
      }
      v9 = v3[2] & 0xFD;
      *((_BYTE *)v3 + 17) = 0;
      *((_BYTE *)v3 + 16) = v9 | 1;
    }
    else if ( (v3[2] & 2) != 0 )
    {
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)v4;
}
