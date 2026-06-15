/*
 * XREFs of sub_1800D9D10 @ 0x1800D9D10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800D481C @ 0x1800D481C (sub_1800D481C.c)
 *     sub_1800D48F8 @ 0x1800D48F8 (sub_1800D48F8.c)
 */

__int64 __fastcall sub_1800D9D10(__int64 a1, void *a2, char *a3, unsigned __int16 *a4)
{
  __int64 *v8; // rax
  __int64 v9; // r8
  unsigned int v10; // ebx
  int v11; // edx
  int v12; // r9d
  __int64 v13; // rcx
  int v14; // eax
  _DWORD *v15; // r15
  __int16 v16; // bx
  char v17; // di
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  _DWORD *v21; // r15
  __int16 v22; // bx
  char v23; // di
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  __int64 v28; // rdx
  unsigned __int64 v29; // r8
  _BYTE v31[2]; // [rsp+70h] [rbp-69h] BYREF
  __int16 v32; // [rsp+72h] [rbp-67h] BYREF
  unsigned __int16 v33; // [rsp+74h] [rbp-65h] BYREF
  int v34; // [rsp+78h] [rbp-61h] BYREF
  __int64 v35; // [rsp+80h] [rbp-59h] BYREF
  int v36; // [rsp+88h] [rbp-51h] BYREF
  int v37; // [rsp+8Ch] [rbp-4Dh] BYREF
  void *v38; // [rsp+90h] [rbp-49h] BYREF
  void *v39; // [rsp+98h] [rbp-41h] BYREF
  __int128 *v40; // [rsp+A0h] [rbp-39h] BYREF
  const wchar_t *v41; // [rsp+A8h] [rbp-31h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+B0h] [rbp-29h] BYREF
  __int128 v43; // [rsp+E8h] [rbp+Fh] BYREF
  _UNKNOWN *retaddr; // [rsp+138h] [rbp+5Fh]

  v8 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v8[1], v9, (struct _TP_TIMER *)L"PolicyConfigSetDeviceSpatialSettings");
  if ( a3 )
  {
    v35 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)qword_18019E618 + 32LL))(
           qword_18019E618,
           a1,
           &v35) >= 0 )
    {
      if ( a4 )
      {
        v14 = *a4;
        v43 = xmmword_18015B740;
        LODWORD(v43) = v14;
        v15 = (_DWORD *)sub_180008448(v13, sub_1800B6240)[1];
        if ( *v15 > 4u )
        {
          v16 = *((_WORD *)a3 + 34);
          v17 = *a3;
          v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 40LL))(v35);
          v32 = v16;
          v34 = v18;
          v40 = &v43;
          v36 = *((_DWORD *)a4 + 2);
          v37 = *((_DWORD *)a4 + 1);
          v33 = a4[1];
          v41 = L"WFEX";
          v38 = a3 + 12;
          v31[0] = v17;
          v39 = a2;
          sub_1800D48F8(
            (__int64)v15,
            byte_180166F62,
            v19,
            v20,
            &v39,
            (__int64)&v34,
            (__int64)v31,
            (__int64 *)&v38,
            (__int64)&v32,
            (void **)&v41,
            (__int64)&v33,
            (__int64)&v37,
            (__int64)&v36,
            (__int64 *)&v40);
        }
      }
      else
      {
        v21 = (_DWORD *)sub_180008448(v13, sub_1800B6240)[1];
        if ( *v21 > 4u )
        {
          v22 = *((_WORD *)a3 + 34);
          v23 = *a3;
          v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 40LL))(v35);
          v32 = v22;
          v34 = v24;
          v39 = a3 + 12;
          v31[0] = v23;
          v38 = a2;
          sub_1800D481C(
            (__int64)v21,
            byte_180166EF2,
            v25,
            v26,
            &v38,
            (__int64)&v34,
            (__int64)v31,
            (__int64 *)&v39,
            (__int64)&v32);
        }
      }
    }
    if ( v35 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    v27 = (*(__int64 (__fastcall **)(__int64, void *, char *, unsigned __int16 *))(*(_QWORD *)qword_18019EED0 + 280LL))(
            qword_18019EED0,
            a2,
            a3,
            a4);
    v10 = v27;
    if ( v27 >= 0 )
    {
      v10 = 0;
      goto LABEL_15;
    }
    v12 = v27;
    v11 = 4539;
  }
  else
  {
    v10 = -2147467261;
    v11 = 4505;
    v12 = -2147467261;
  }
  sub_18004BD84((int)retaddr, v11, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v12);
LABEL_15:
  sub_18000F690((__int64)pv, v28, v29);
  return v10;
}
