/*
 * XREFs of sub_180116450 @ 0x180116450
 * Callers:
 *     sub_180116EE8 @ 0x180116EE8 (sub_180116EE8.c)
 * Callees:
 *     sub_180048714 @ 0x180048714 (sub_180048714.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006C4AC @ 0x18006C4AC (sub_18006C4AC.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180119B6C @ 0x180119B6C (sub_180119B6C.c)
 */

__int64 __fastcall sub_180116450(__int64 a1, _WORD *a2, _QWORD *a3)
{
  _WORD *v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  unsigned __int16 *v10; // r13
  char *v11; // rax
  bool v12; // bl
  bool v13; // di
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  bool v17; // bl
  __int64 v18; // rsi
  _DWORD *v19; // r15
  unsigned __int16 *v20; // r12
  int v21; // r14d
  __int16 v22; // dx
  int v23; // r8d
  unsigned __int16 v24; // cx
  int v25; // eax
  int v26; // edi
  bool v27; // al
  char v29; // [rsp+30h] [rbp-49h] BYREF
  bool v30; // [rsp+31h] [rbp-48h]
  void *Src; // [rsp+38h] [rbp-41h]
  int v32; // [rsp+40h] [rbp-39h] BYREF
  int v33; // [rsp+44h] [rbp-35h]
  _QWORD *v34; // [rsp+48h] [rbp-31h]
  LPCOLESTR lpsz[2]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v36; // [rsp+60h] [rbp-19h]
  GUID iid; // [rsp+68h] [rbp-11h] BYREF
  _DWORD v38[4]; // [rsp+78h] [rbp-1h] BYREF
  _DWORD v39[4]; // [rsp+88h] [rbp+Fh] BYREF

  v34 = a3;
  v3 = a2;
  Src = a2;
  v39[0] = 2097184;
  v39[1] = 1572896;
  v39[2] = 1572888;
  v39[3] = 1048592;
  v38[0] = 2097184;
  v38[1] = 1572888;
  v38[2] = 1048592;
  v9 = 4LL;
  if ( sub_18006C4AC() && (unsigned int)IsDolbyMatSupportedByAudioDriver(v6, v5, v7, v8) )
  {
    v10 = (unsigned __int16 *)v39;
    v33 = 4;
  }
  else
  {
    v10 = (unsigned __int16 *)v38;
    v33 = 3;
  }
  if ( *(_DWORD *)(a1 + 188) )
  {
    v12 = 0;
    v13 = 0;
    *(_OWORD *)lpsz = 0LL;
    v36 = 0LL;
    v14 = (*(__int64 (__fastcall **)(_QWORD, void *, LPCOLESTR *))(**(_QWORD **)(a1 + 40) + 40LL))(
            *(_QWORD *)(a1 + 40),
            &unk_180172B80,
            lpsz);
    iid = (GUID)xmmword_18015B730;
    if ( v14 >= 0 && LOWORD(lpsz[0]) == 31 && IIDFromString(lpsz[1], &iid) >= 0 )
    {
      v15 = *(_QWORD *)&iid.Data1 - 0x11D0F70FDFF21BE5LL;
      if ( *(_QWORD *)&iid.Data1 == 0x11D0F70FDFF21BE5LL )
        v15 = *(_QWORD *)iid.Data4 + 0x69CEDD365FFFE847LL;
      v12 = v15 == 0;
      v16 = *(_QWORD *)&iid.Data1 - 0x11D0F70FDFF21FE3LL;
      if ( *(_QWORD *)&iid.Data1 == 0x11D0F70FDFF21FE3LL )
        v16 = *(_QWORD *)iid.Data4 + 0x69CEDD365FFFE847LL;
      v13 = v16 == 0;
    }
    PropVariantClear((PROPVARIANT *)lpsz);
    if ( v12 )
      return 0LL;
    if ( v13 )
    {
      v11 = (char *)&unk_180173640;
    }
    else
    {
      *(_OWORD *)lpsz = 0LL;
      v36 = 0LL;
      v17 = (*(int (__fastcall **)(_QWORD, void *, LPCOLESTR *))(**(_QWORD **)(a1 + 40) + 40LL))(
              *(_QWORD *)(a1 + 40),
              &unk_180172C10,
              lpsz) >= 0
         && LOWORD(lpsz[0]) == 11
         && LOWORD(lpsz[1]) == 0xFFFF;
      PropVariantClear((PROPVARIANT *)lpsz);
      v11 = (char *)&unk_180173580;
      if ( !v17 )
        v11 = (char *)&unk_1801735E0;
    }
    v3 = Src;
    v9 = 8LL;
  }
  else
  {
    v11 = (char *)&unk_1801736A0;
  }
  v18 = 0LL;
  v19 = v11 + 8;
  while ( 2 )
  {
    v20 = v10;
    v21 = 0;
    do
    {
      v22 = *((_WORD *)v19 - 2);
      v3[1] = v22;
      v23 = *(v19 - 2);
      *((_DWORD *)v3 + 1) = v23;
      v24 = *v20;
      v3[7] = *v20;
      v3[9] = v20[1];
      *((_DWORD *)v3 + 5) = *v19;
      v25 = (unsigned __int16)(v22 * (v24 >> 3));
      v3[6] = v25;
      *((_DWORD *)v3 + 2) = v23 * v25;
      v3[8] = 22;
      v30 = 0;
      v32 = 0;
      v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *))(*(_QWORD *)*v34 + 24LL))(
              *v34,
              v34[1],
              *(unsigned int *)v34[1],
              &v32);
      if ( v26 < 0 )
        return (unsigned int)v26;
      if ( v32 && (v29 = 0, sub_180119B6C(v34 + 3, Src, &v29), v29) )
      {
        v26 = sub_180048714((unsigned __int16 *)Src, (_QWORD *)v34[2]);
        v27 = v26 >= 0;
      }
      else
      {
        v27 = v30;
      }
      if ( v26 < 0 )
        return (unsigned int)v26;
      if ( v27 )
        return 0LL;
      v20 += 2;
      ++v21;
      v3 = Src;
    }
    while ( v21 < v33 );
    ++v18;
    v19 += 3;
    if ( v18 < v9 )
      continue;
    break;
  }
  return 0LL;
}
