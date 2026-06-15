/*
 * XREFs of sub_180011010 @ 0x180011010
 * Callers:
 *     sub_18000F930 @ 0x18000F930 (sub_18000F930.c)
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800C249C @ 0x1800C249C (sub_1800C249C.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180011010(DWORD dwProcessId, __int64 a2)
{
  unsigned int v4; // edi
  int v5; // esi
  int v6; // r12d
  RPC_STATUS v7; // eax
  signed int v8; // ebx
  unsigned int v9; // eax
  DWORD pSessionId; // [rsp+30h] [rbp-59h] BYREF
  __int64 v12; // [rsp+38h] [rbp-51h] BYREF
  __int64 v13; // [rsp+40h] [rbp-49h] BYREF
  __int64 v14; // [rsp+48h] [rbp-41h] BYREF
  __int64 v15; // [rsp+50h] [rbp-39h] BYREF
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v17; // [rsp+68h] [rbp-21h]
  PROPVARIANT v18[2]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v19; // [rsp+80h] [rbp-9h]
  __int128 v20; // [rsp+88h] [rbp-1h] BYREF
  int v21; // [rsp+98h] [rbp+Fh]

  v4 = 0;
  v5 = 0;
  v15 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v6 = 0;
  pSessionId = 0;
  *(_OWORD *)pvar = 0LL;
  v17 = 0LL;
  *(_OWORD *)v18 = 0LL;
  v19 = 0LL;
  v7 = RpcImpersonateClient(0LL);
  v8 = v7;
  if ( v7 )
  {
    if ( v7 > 0 )
      v8 = (unsigned __int16)v7 | 0x80070000;
    if ( v8 < 0 )
    {
      sub_18005E8F8("IsProcessAllowed", 558LL, (unsigned int)v8);
      goto LABEL_16;
    }
  }
  v5 = 1;
  if ( !ProcessIdToSessionId(dwProcessId, &pSessionId) )
    pSessionId = 0;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)&dwCreationFlags + 40LL))(
         *(_QWORD *)&dwCreationFlags,
         a2,
         &v15);
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v15 + 32LL))(v15, 0LL, &v14);
    if ( v8 >= 0 )
    {
      if ( !(*(unsigned int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v14 + 40LL))(
              v14,
              &unk_18015B358,
              pvar) )
      {
        if ( LOWORD(pvar[0]) == 31 )
        {
          v8 = (*(__int64 (__fastcall **)(_QWORD, PROPVARIANT, __int64 *))(**(_QWORD **)&dwCreationFlags + 40LL))(
                 *(_QWORD *)&dwCreationFlags,
                 pvar[1],
                 &v12);
          if ( v8 < 0 )
            goto LABEL_16;
          v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, 0LL, &v13);
          if ( v8 < 0 )
            goto LABEL_16;
          v20 = xmmword_1801601A8;
          v21 = 6;
          if ( (*(int (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v13 + 40LL))(v13, &v20, v18) >= 0
            && LOWORD(v18[0]) == 19 )
          {
            v6 = (int)v18[1];
          }
        }
        else
        {
          v6 = 0;
        }
      }
      if ( pSessionId && v6 && pSessionId != v6 )
      {
        if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
          && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
          && *((_BYTE *)off_18019C348 + 25) >= 2u )
        {
          sub_1800C249C(*((_QWORD *)off_18019C348 + 2), 10LL, &unk_18015E3E8);
        }
      }
      else
      {
        v4 = 1;
      }
    }
  }
LABEL_16:
  PropVariantClear(pvar);
  PropVariantClear(v18);
  if ( v5 )
  {
    v9 = RpcRevertToSelf();
    if ( v9 )
    {
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 2u )
      {
        sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 11LL, &unk_18015E3E8, v9);
      }
    }
  }
  if ( v8 < 0 )
    sub_18005E8F8("IsProcessAllowed", 640LL, (unsigned int)v8);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return v4;
}
