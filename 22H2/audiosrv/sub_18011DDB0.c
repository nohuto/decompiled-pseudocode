/*
 * XREFs of sub_18011DDB0 @ 0x18011DDB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_18011DDB0(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  LPCOLESTR lpsz[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v7; // [rsp+30h] [rbp-40h]
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v9; // [rsp+48h] [rbp-28h]
  GUID iid; // [rsp+50h] [rbp-20h] BYREF

  if ( !*(_BYTE *)(a1 + 8733) )
  {
    *(_BYTE *)(a1 + 8732) = 0;
    v2 = *(_QWORD *)(a1 + 40);
    v9 = 0LL;
    v7 = 0LL;
    *(_OWORD *)pvar = 0LL;
    *(_OWORD *)lpsz = 0LL;
    if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v2 + 40LL))(v2, &unk_18015C640, pvar) >= 0 )
    {
      *(_QWORD *)iid.Data4 = -1LL;
      *(_QWORD *)&iid.Data1 = 0LL;
      if ( LOWORD(pvar[0]) == 72 )
      {
        v3 = -*(_QWORD *)pvar[1];
        if ( !*(_QWORD *)pvar[1] )
          v3 = *(_QWORD *)iid.Data4 - *((_QWORD *)pvar[1] + 1);
        if ( !v3
          && (*(int (__fastcall **)(_QWORD, void *, LPCOLESTR *))(**(_QWORD **)(a1 + 40) + 40LL))(
               *(_QWORD *)(a1 + 40),
               &unk_180172B80,
               lpsz) >= 0
          && LOWORD(lpsz[0]) == 31
          && IIDFromString(lpsz[1], &iid) >= 0 )
        {
          v4 = *(_QWORD *)&iid.Data1 - 0x11D0F70FDFF21CE1LL;
          if ( *(_QWORD *)&iid.Data1 == 0x11D0F70FDFF21CE1LL )
            v4 = *(_QWORD *)iid.Data4 + 0x69CEDD365FFFE847LL;
          if ( !v4 )
            *(_BYTE *)(a1 + 8732) = 1;
        }
      }
    }
    *(_BYTE *)(a1 + 8733) = 1;
    PropVariantClear((PROPVARIANT *)lpsz);
    PropVariantClear(pvar);
  }
  return *(_BYTE *)(a1 + 8732);
}
