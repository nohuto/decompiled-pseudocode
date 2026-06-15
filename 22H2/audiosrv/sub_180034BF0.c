/*
 * XREFs of sub_180034BF0 @ 0x180034BF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_180034BF0(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4, int a5, int a6, __int64 a7)
{
  void *v7; // rbx
  __int64 v11; // rbp
  BOOL v12; // ebx
  int v13; // edi
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(__int64, LPVOID, __int64, __int64 *, int, int, BOOL, __int64); // rax
  __int64 v17; // [rsp+50h] [rbp-38h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-30h] BYREF
  __int64 v19[2]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v20; // [rsp+98h] [rbp+10h] BYREF

  v7 = 0LL;
  pv = 0LL;
  if ( a2 && *(_QWORD *)(a1 + 56) )
  {
    v11 = a7;
    v12 = a7 != 0;
    v13 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)a2 + 40LL))(a2, &pv);
    if ( v13 < 0 )
      goto LABEL_10;
    v14 = *(_QWORD *)(a1 + 56);
    v15 = *(__int64 (__fastcall **)(__int64, LPVOID, __int64, __int64 *, int, int, BOOL, __int64))(*(_QWORD *)v14 + 32LL);
    *(_OWORD *)v19 = *a4;
    v13 = v15(v14, pv, a3, v19, a5, a6, v12, a1 + 72);
    if ( v13 < 0 )
      goto LABEL_10;
    if ( v11 )
      v13 = (**(__int64 (__fastcall ***)(__int64, __int64 *, __int64))a1)(a1, &qword_18015B840, v11);
    if ( v13 < 0 )
    {
LABEL_10:
      if ( (unsigned int)dword_18019C4B8 > 2 )
      {
        LODWORD(v20) = v13;
        v19[0] = (__int64)"CAPOWrapperClient::InitializeSystemEffectsInterfaceOOP";
        LODWORD(v17) = 117;
        sub_180109778((int)&dword_18019C4B8, (__int64)v19, (__int64)&v17, (__int64)&v20);
      }
    }
    v7 = pv;
  }
  else
  {
    v13 = -2147024809;
  }
  CoTaskMemFree(v7);
  return (unsigned int)v13;
}
