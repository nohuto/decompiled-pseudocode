/*
 * XREFs of _PnpUpdateInterfacesCallback @ 0x14079BC90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     _PnpNotifyDerivedKeys @ 0x14068799C (_PnpNotifyDerivedKeys.c)
 */

char __fastcall PnpUpdateInterfacesCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  void (__fastcall *v8)(__int64, __int64, __int64); // rax
  __int64 v9; // r9
  __int64 v11; // [rsp+20h] [rbp-48h]
  unsigned int v12; // [rsp+28h] [rbp-40h]
  void (__fastcall *v13)(__int64, __int64, __int64); // [rsp+38h] [rbp-30h]
  _OWORD v14[2]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *(_BYTE *)(a4 + 28) == 0;
  *(_OWORD *)((char *)v14 + 8) = 0LL;
  if ( !v4 )
  {
    v8 = *(void (__fastcall **)(__int64, __int64, __int64))a4;
    *(_QWORD *)&v14[0] = 0LL;
    v8(a1, a2, 3LL);
  }
  v9 = *(_QWORD *)(a4 + 8);
  if ( v9 )
  {
    v13 = *(void (__fastcall **)(__int64, __int64, __int64))a4;
    v12 = *(_DWORD *)(a4 + 24);
    v11 = *(_QWORD *)(a4 + 16);
    v14[0] = 0LL;
    PnpNotifyDerivedKeys(
      a1,
      a2,
      3u,
      v9,
      v11,
      v12,
      (__int64)v14,
      (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, __int64))v13);
  }
  return 0;
}
