/*
 * XREFs of _PnpValidateObjectName @ 0x140747528
 * Callers:
 *     PiDqOpenUserObjectRegKey @ 0x140747298 (PiDqOpenUserObjectRegKey.c)
 *     PiDmObjectCreate @ 0x140868FFC (PiDmObjectCreate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     _PnpValidateObjectNameDispatch @ 0x1407475E8 (_PnpValidateObjectNameDispatch.c)
 */

__int64 __fastcall PnpValidateObjectName(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 (__fastcall *v6)(__int64, __int64, _QWORD, __int64, int, _DWORD *); // rdi
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  _DWORD v14[20]; // [rsp+40h] [rbp-58h] BYREF

  v3 = *(_QWORD *)&PiPnpRtlCtx;
  memset(v14, 0, sizeof(v14));
  v6 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _DWORD *))(*(_QWORD *)&PiPnpRtlCtx + 488LL);
  if ( v6 )
  {
    v7 = v6(*(_QWORD *)&PiPnpRtlCtx, a2, a3, 1LL, 1, v14);
    if ( v7 == -1073741822 )
    {
      v6 = 0LL;
    }
    else
    {
      if ( v7 == -1073741536 )
        return v14[0];
      if ( v7 )
        return (unsigned int)-1073741595;
    }
  }
  v8 = PnpValidateObjectNameDispatch(v3, a2, a3, v14[4]);
  v9 = v8;
  if ( !v6 )
    return v9;
  v14[0] = v8;
  v11 = v6(v3, a2, a3, 1LL, 2, v14);
  v12 = v11;
  if ( v11 == -1073741822 )
    return v9;
  if ( v11 == -1073741536 )
    return v14[0];
  v13 = v9;
  if ( v12 )
    return (unsigned int)-1073741595;
  return v13;
}
