/*
 * XREFs of sub_1800D9B20 @ 0x1800D9B20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_1800512F4 @ 0x1800512F4 (sub_1800512F4.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800D46EC @ 0x1800D46EC (sub_1800D46EC.c)
 */

__int64 __fastcall sub_1800D9B20(__int64 a1, void *a2, unsigned __int16 *a3)
{
  __int64 *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // eax
  _DWORD *v10; // rbx
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  _DWORD *v14; // rbx
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // ebx
  __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int16 v22[2]; // [rsp+60h] [rbp-39h] BYREF
  int v23; // [rsp+64h] [rbp-35h] BYREF
  __int64 v24; // [rsp+68h] [rbp-31h] BYREF
  int v25; // [rsp+70h] [rbp-29h] BYREF
  int v26; // [rsp+74h] [rbp-25h] BYREF
  void *v27; // [rsp+78h] [rbp-21h] BYREF
  __int128 *v28; // [rsp+80h] [rbp-19h] BYREF
  const wchar_t *v29; // [rsp+88h] [rbp-11h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+90h] [rbp-9h] BYREF
  __int128 v31; // [rsp+C8h] [rbp+2Fh] BYREF

  v6 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v6[1], v7, (struct _TP_TIMER *)L"PolicyConfigSetDeviceFormat");
  v24 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)qword_18019E618 + 32LL))(
         qword_18019E618,
         a1,
         &v24) >= 0 )
  {
    if ( a3 )
    {
      v9 = *a3;
      v31 = xmmword_18015B740;
      LODWORD(v31) = v9;
      v10 = (_DWORD *)sub_180008448(v8, sub_1800B6240)[1];
      if ( *v10 > 4u )
      {
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 40LL))(v24);
        v27 = a2;
        v23 = v11;
        v28 = &v31;
        v25 = *((_DWORD *)a3 + 2);
        v26 = *((_DWORD *)a3 + 1);
        v22[0] = a3[1];
        v29 = L"WFEX";
        sub_1800D46EC(
          (__int64)v10,
          byte_18016707C,
          v12,
          v13,
          &v27,
          (__int64)&v23,
          (void **)&v29,
          (__int64)v22,
          (__int64)&v26,
          (__int64)&v25,
          (__int64 *)&v28);
      }
    }
    else
    {
      v14 = (_DWORD *)sub_180008448(v8, sub_1800B6240)[1];
      if ( *v14 > 4u )
      {
        v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 40LL))(v24);
        v27 = a2;
        v23 = v15;
        sub_1800512F4((__int64)v14, byte_180167040, v16, v17, &v27, (__int64)&v23);
      }
    }
  }
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  v18 = (*(__int64 (__fastcall **)(__int64, void *, unsigned __int16 *, _QWORD))(*(_QWORD *)qword_18019EED0 + 48LL))(
          qword_18019EED0,
          a2,
          a3,
          0LL);
  sub_18000F690((__int64)pv, v19, v20);
  return v18;
}
