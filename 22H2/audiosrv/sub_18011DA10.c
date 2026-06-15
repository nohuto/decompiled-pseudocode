/*
 * XREFs of sub_18011DA10 @ 0x18011DA10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18011DA10(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax
  LPVOID *ppv; // [rsp+20h] [rbp-39h]
  __int64 v8; // [rsp+40h] [rbp-19h] BYREF
  __int64 v9; // [rsp+48h] [rbp-11h] BYREF
  __int64 v10; // [rsp+50h] [rbp-9h] BYREF
  __int64 v11; // [rsp+58h] [rbp-1h] BYREF
  __int64 v12; // [rsp+60h] [rbp+7h] BYREF
  __int64 v13; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v14; // [rsp+70h] [rbp+17h] BYREF
  LPVOID v15; // [rsp+78h] [rbp+1Fh] BYREF
  _BYTE v16[20]; // [rsp+80h] [rbp+27h] BYREF
  __int64 v17; // [rsp+94h] [rbp+3Bh]
  int v18; // [rsp+9Ch] [rbp+43h]
  unsigned __int16 v19; // [rsp+C0h] [rbp+67h] BYREF
  int v20; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned int v21; // [rsp+D0h] [rbp+77h] BYREF
  LPVOID pv; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( *(_DWORD *)(a1 + 212) )
    return *(unsigned int *)(a1 + 208);
  *(_DWORD *)(a1 + 208) = 0;
  v2 = *(_QWORD *)(a1 + 16);
  v17 = 0LL;
  v18 = 0;
  v15 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  *(_OWORD *)&v16[4] = 0LL;
  v20 = 0;
  pv = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  v8 = 0LL;
  if ( (*(int (__fastcall **)(__int64, void *, __int64, _QWORD, __int64 *))(*(_QWORD *)v2 + 24LL))(
         v2,
         &unk_18015B078,
         1LL,
         0LL,
         &v10) < 0
    || (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v10 + 32LL))(v10, 0LL, &v9) < 0
    || (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 64LL))(v9, &v11) < 0 )
  {
    goto LABEL_3;
  }
  v4 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v11)(v11, &unk_18015AFA0, &v8);
  v3 = v8;
  if ( v4 < 0 )
    goto LABEL_4;
  v5 = (*(__int64 (__fastcall **)(__int64, unsigned __int16 *))(*(_QWORD *)v8 + 32LL))(v8, &v19);
  v3 = v8;
  if ( v5 < 0 )
    goto LABEL_4;
  if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 96LL))(v8, &v12) < 0 )
  {
LABEL_3:
    v3 = v8;
LABEL_4:
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    CoTaskMemFree(pv);
    goto LABEL_38;
  }
  if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v12 + 64LL))(v12, &pv) >= 0
    && CoCreateInstance(&rclsid, 0LL, 0x17u, &stru_18015B0C0, &v15) >= 0
    && (*(int (__fastcall **)(LPVOID, LPVOID, __int64 *))(*(_QWORD *)v15 + 40LL))(v15, pv, &v14) >= 0 )
  {
    ppv = (LPVOID *)&v13;
    if ( (*(int (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v14 + 24LL))(v14, &unk_1801737C0, 1LL) >= 0 )
    {
      HIDWORD(v17) = v19;
      *(_OWORD *)v16 = xmmword_180173710;
      v18 = 0;
      *(_DWORD *)&v16[16] = 57;
      LODWORD(v17) = 512;
      LODWORD(ppv) = 4;
      if ( (*(int (__fastcall **)(__int64, _BYTE *, __int64, unsigned int *, LPVOID *, int *))(*(_QWORD *)v13 + 24LL))(
             v13,
             v16,
             32LL,
             &v21,
             ppv,
             &v20) >= 0 )
        *(_DWORD *)(a1 + 208) = (v21 >> 1) & 1;
      *(_DWORD *)(a1 + 212) = 1;
    }
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  CoTaskMemFree(pv);
  pv = 0LL;
LABEL_38:
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v15 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v15 + 16LL))(v15);
  return *(unsigned int *)(a1 + 208);
}
