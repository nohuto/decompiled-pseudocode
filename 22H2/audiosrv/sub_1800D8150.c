/*
 * XREFs of sub_1800D8150 @ 0x1800D8150
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800D85F0 @ 0x1800D85F0 (sub_1800D85F0.c)
 */

__int64 __fastcall sub_1800D8150(__int64 a1, __int64 a2, unsigned int a3)
{
  HRESULT v5; // ebx
  __int64 v6; // rdx
  HRESULT v7; // eax
  LPVOID ppv; // [rsp+30h] [rbp-30h] BYREF
  __int64 v10; // [rsp+38h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+48h] [rbp-18h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h] BYREF
  LPVOID v14; // [rsp+88h] [rbp+28h] BYREF
  __int64 v15; // [rsp+98h] [rbp+38h] BYREF

  ppv = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  v15 = 0LL;
  v10 = 0LL;
  if ( !a2 )
  {
    v5 = -2147467261;
LABEL_16:
    sub_18005E8F8((__int64)"CPolicyConfig::SetEndpointAbilityToBeDefault", 2592, v5);
    v6 = v15;
    goto LABEL_17;
  }
  v5 = CoCreateInstance(&stru_18015E170, 0LL, 0x17u, &stru_18015E160, &ppv);
  if ( v5 < 0 )
    goto LABEL_16;
  v5 = CoCreateInstance(&rclsid, 0LL, 0x17u, &stru_18015B0C0, &v14);
  if ( v5 < 0 )
    goto LABEL_16;
  v5 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)v14 + 32LL))(v14, 0LL, 2LL, &v13);
  if ( v5 < 0 )
    goto LABEL_16;
  v5 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v14 + 32LL))(v14, 0LL, 0LL, &v12);
  if ( v5 < 0 )
    goto LABEL_16;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)&dwCreationFlags + 40LL))(
         *(_QWORD *)&dwCreationFlags,
         a2,
         &v10);
  if ( v5 < 0 )
    goto LABEL_16;
  v5 = sub_1800D85F0(v10, a3);
  if ( v5 < 0 )
    goto LABEL_16;
  v5 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)v14 + 32LL))(v14, 0LL, 2LL, &v11);
  if ( v5 < 0 )
    goto LABEL_16;
  v5 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v14 + 32LL))(v14, 0LL, 0LL, &v15);
  if ( v5 < 0 )
    goto LABEL_16;
  if ( v13 != v11 )
  {
    v5 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64))(*(_QWORD *)ppv + 88LL))(ppv, v11, 2LL);
    if ( v5 < 0 )
      goto LABEL_16;
  }
  v6 = v15;
  if ( v12 != v15 )
  {
    v7 = (*(__int64 (__fastcall **)(LPVOID, __int64, _QWORD, _QWORD))(*(_QWORD *)ppv + 88LL))(ppv, v15, 0LL, 0LL);
    v6 = v15;
    v5 = v7;
  }
  if ( v5 < 0 )
    goto LABEL_16;
LABEL_17:
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v6 = v15;
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v14 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v14 + 16LL))(v14);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v5;
}
