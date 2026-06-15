/*
 * XREFs of sub_1800184B0 @ 0x1800184B0
 * Callers:
 *     sub_180016E30 @ 0x180016E30 (sub_180016E30.c)
 *     sub_18001C620 @ 0x18001C620 (sub_18001C620.c)
 *     sub_1800D31D4 @ 0x1800D31D4 (sub_1800D31D4.c)
 *     sub_1800D32F4 @ 0x1800D32F4 (sub_1800D32F4.c)
 * Callees:
 *     sub_180018FA0 @ 0x180018FA0 (sub_180018FA0.c)
 *     sub_18001B4A0 @ 0x18001B4A0 (sub_18001B4A0.c)
 *     sub_18001B550 @ 0x18001B550 (sub_18001B550.c)
 *     sub_18001B750 @ 0x18001B750 (sub_18001B750.c)
 *     sub_18002C26C @ 0x18002C26C (sub_18002C26C.c)
 *     sub_18003447C @ 0x18003447C (sub_18003447C.c)
 *     sub_1800448E4 @ 0x1800448E4 (sub_1800448E4.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     memmove @ 0x18007444B (memmove.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800BABDC @ 0x1800BABDC (sub_1800BABDC.c)
 *     sub_1800C6894 @ 0x1800C6894 (sub_1800C6894.c)
 *     sub_1800C8E8C @ 0x1800C8E8C (sub_1800C8E8C.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800184B0(const GUID *a1)
{
  __int64 v2; // rbx
  volatile signed __int32 *v3; // rdi
  __int64 (__fastcall ***v4)(_QWORD, _QWORD, __int64); // rax
  _QWORD *v5; // rdi
  BSTR v6; // rbx
  __int64 v7; // rax
  wchar_t *v8; // r9
  __int64 v9; // rsi
  unsigned __int64 v10; // r14
  __int64 v11; // rcx
  size_t v12; // r8
  wchar_t *v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rsi
  wchar_t *v16; // rcx
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rbx
  __int64 v20; // rsi
  wchar_t *v21; // rdx
  wchar_t *v22; // rcx
  __int64 v23; // rax
  int v24; // ecx
  __int64 *v25; // rcx
  wchar_t *v26; // rdx
  _QWORD *v27; // rdx
  _DWORD *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  wchar_t *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  wchar_t *v35; // r9
  __int64 v36; // r14
  __int64 v37; // rdx
  wchar_t *v38; // rax
  const wchar_t *v39; // r14
  wchar_t *v40; // rax
  wchar_t *v41; // r9
  __int64 v42; // rcx
  wchar_t *v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r12
  wchar_t *v46; // r8
  __int64 v47; // r14
  __int64 v48; // rdx
  wchar_t *v49; // rax
  const wchar_t *v50; // r14
  wchar_t *v51; // rax
  wchar_t *v52; // r12
  __int64 v53; // rcx
  wchar_t *v54; // rdx
  __int64 v55; // rcx
  unsigned int v56; // [rsp+20h] [rbp-118h]
  int v57; // [rsp+20h] [rbp-118h]
  int v58; // [rsp+20h] [rbp-118h]
  int v59; // [rsp+20h] [rbp-118h]
  int v60; // [rsp+20h] [rbp-118h]
  wchar_t *Str; // [rsp+28h] [rbp-110h] BYREF
  int v62; // [rsp+30h] [rbp-108h]
  wchar_t *v63; // [rsp+38h] [rbp-100h]
  unsigned __int64 v64; // [rsp+40h] [rbp-F8h]
  _QWORD *v65; // [rsp+48h] [rbp-F0h] BYREF
  wchar_t *v66; // [rsp+50h] [rbp-E8h]
  wchar_t *v67; // [rsp+58h] [rbp-E0h]
  const GUID *v68; // [rsp+60h] [rbp-D8h]
  BSTR v69; // [rsp+68h] [rbp-D0h]
  OLECHAR sz[64]; // [rsp+80h] [rbp-B8h] BYREF

  v68 = a1;
  v2 = *(_QWORD *)&a1->Data1;
  v3 = (volatile signed __int32 *)(*(_QWORD *)&a1->Data1 - 24LL);
  v4 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v3 + 32LL))(*(_QWORD *)v3);
  if ( *((int *)v3 + 4) >= 0 && v4 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v3 )
  {
    _InterlockedIncrement(v3 + 4);
  }
  else
  {
    v29 = v3 + 2;
    v30 = (**v4)(v4, *((unsigned int *)v3 + 2), 2LL);
    v3 = (volatile signed __int32 *)v30;
    if ( !v30 )
      sub_1800BABDC();
    *(_DWORD *)(v30 + 8) = *v29;
    sub_18003447C(v30 + 24, 2LL * (*v29 + 1), v2, 2LL * (*v29 + 1));
  }
  v5 = v3 + 6;
  v65 = v5;
  if ( !*(_DWORD *)a1[2].Data4 )
  {
    sub_180018FA0(&v65, L"%", L"%%");
    sub_180018FA0(&v65, L"|", L"%b");
    v5 = v65;
  }
  StringFromGUID2(a1 + 1, sz, 64);
  v6 = SysAllocString(sz);
  v69 = v6;
  if ( !v6 )
    sub_1800B8610(2147942414LL);
  v7 = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818);
  v8 = (wchar_t *)(v7 + 24);
  Str = (wchar_t *)(v7 + 24);
  if ( (unsigned __int64)v6 < 0x10000 )
  {
    v31 = sub_1800C6894((unsigned __int16)v6);
    if ( v31 )
    {
      sub_1800C8E8C(&Str, v31, (unsigned __int16)v6);
      v13 = Str;
      goto LABEL_20;
    }
LABEL_61:
    v13 = Str;
    goto LABEL_20;
  }
  v9 = -1LL;
  do
    ++v9;
  while ( v6[v9] );
  if ( !(_DWORD)v9 )
  {
    sub_18002C26C(&Str);
    goto LABEL_61;
  }
  v56 = *(_DWORD *)(v7 + 8);
  v10 = v6 - v8;
  v11 = (unsigned int)(1 - *(_DWORD *)(v7 + 16));
  if ( (int)(v11 | (*(_DWORD *)(v7 + 12) - v9)) < 0 )
  {
    sub_18001B550(&Str, (unsigned int)v9);
    v8 = Str;
  }
  v12 = 2LL * (int)v9;
  if ( v10 <= v56 )
  {
    v32 = &v8[v10];
    if ( !v12 )
      goto LABEL_17;
    if ( v8 && v32 )
    {
      memmove(v8, v32, v12);
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v12 )
      goto LABEL_17;
    if ( v8 )
    {
      memcpy(v8, v6, v12);
      goto LABEL_17;
    }
  }
  *(_DWORD *)o__errno(v11) = 22;
  o__invalid_parameter_noinfo(v33);
LABEL_17:
  if ( (int)v9 < 0 || (v13 = Str, (int)v9 > *((_DWORD *)Str - 3)) )
    sub_1800B8610(2147942487LL);
  *((_DWORD *)Str - 4) = v9;
  v13[(int)v9] = 0;
LABEL_20:
  SysFreeString(v6);
  v14 = -1LL;
  do
    ++v14;
  while ( SubStr[v14] );
  if ( (_DWORD)v14 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( asc_18015B5A8[v15] );
    v57 = 0;
    v63 = &v13[*((int *)Str - 4)];
    if ( v13 < v63 )
    {
      do
      {
        v16 = wcsstr(v13, L"%");
        if ( v16 )
        {
          v34 = 2LL * (int)v14;
          v66 = (wchar_t *)v34;
          do
          {
            ++v57;
            v13 = (wchar_t *)((char *)v16 + v34);
            v16 = wcsstr((wchar_t *)((char *)v16 + v34), L"%");
            v34 = (__int64)v66;
          }
          while ( v16 );
        }
        if ( v13 )
        {
          v17 = -1LL;
          do
            ++v17;
          while ( v13[v17] );
        }
        else
        {
          LODWORD(v17) = 0;
        }
        v13 += (int)v17 + 1;
      }
      while ( v13 < v63 );
      v18 = v57;
      if ( v57 > 0 )
      {
        v35 = Str;
        v36 = *((int *)Str - 4);
        v59 = v36;
        LODWORD(v63) = v36 + v18 * (v15 - v14);
        v37 = (unsigned int)v63;
        if ( (int)v63 <= (int)v36 )
          v37 = (unsigned int)v36;
        if ( ((1 - *((_DWORD *)Str - 2)) | (*((_DWORD *)Str - 3) - (int)v37)) < 0 )
        {
          sub_18001B550(&Str, v37);
          v35 = Str;
        }
        v38 = &v35[v36];
        v64 = (unsigned __int64)v38;
        v39 = v35;
        while ( v39 < v38 )
        {
          v67 = (wchar_t *)(int)v15;
          while ( 1 )
          {
            v40 = wcsstr(v39, L"%");
            v41 = v40;
            v66 = v40;
            if ( !v40 )
              break;
            v42 = v40 - Str;
            v62 = v59 - v42 - v14;
            v43 = &v40[(int)v14];
            v39 = &v40[(_QWORD)v67];
            if ( 2LL * v62 )
            {
              if ( !v39 || !v43 )
              {
                *(_DWORD *)o__errno(v42) = 22;
                o__invalid_parameter_noinfo(v44);
                sub_1800B8610(2147942487LL);
              }
              memmove(&v40[(_QWORD)v67], v43, 2LL * v62);
              v41 = v66;
            }
            if ( 2LL * (int)v15 )
            {
              memcpy(v41, L"%%", 2LL * (int)v15);
              v41 = v66;
            }
            v41[(int)v15 + v62] = 0;
            v59 += v15 - v14;
          }
          v39 += (int)(sub_18001B750(v39) + 1);
          v38 = (wchar_t *)v64;
        }
        sub_1800448E4(&Str, (unsigned int)v63);
      }
    }
    v13 = Str;
  }
  v19 = -1LL;
  do
    ++v19;
  while ( Control[v19] );
  if ( (_DWORD)v19 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( aB[v20] );
    v58 = 0;
    v21 = Str;
    v64 = (unsigned __int64)&v13[*((int *)Str - 4)];
    if ( (unsigned __int64)v13 >= v64 )
      goto LABEL_46;
    do
    {
      v22 = wcsstr(v13, L"|");
      if ( v22 )
      {
        v45 = (int)v19;
        do
        {
          ++v58;
          v13 = &v22[v45];
          v22 = wcsstr(&v22[v45], L"|");
        }
        while ( v22 );
      }
      if ( v13 )
      {
        v23 = -1LL;
        do
          ++v23;
        while ( v13[v23] );
      }
      else
      {
        LODWORD(v23) = 0;
      }
      v13 += (int)v23 + 1;
    }
    while ( (unsigned __int64)v13 < v64 );
    v24 = v58;
    if ( v58 > 0 )
    {
      v46 = Str;
      v47 = *((int *)Str - 4);
      v60 = v47;
      v62 = v47 + (v20 - v19) * v24;
      v48 = (unsigned int)v62;
      if ( v62 <= (int)v47 )
        v48 = (unsigned int)v47;
      if ( ((1 - *((_DWORD *)Str - 2)) | (*((_DWORD *)Str - 3) - (int)v48)) < 0 )
      {
        sub_18001B550(&Str, v48);
        v46 = Str;
      }
      v49 = &v46[v47];
      v67 = v49;
      v50 = v46;
      while ( v50 < v49 )
      {
        v64 = (int)v20;
        while ( 1 )
        {
          v51 = wcsstr(v50, L"|");
          v52 = v51;
          if ( !v51 )
            break;
          v53 = v51 - Str;
          LODWORD(v63) = v60 - v53 - v19;
          v54 = &v51[(int)v19];
          v50 = &v51[v64];
          if ( 2LL * (int)v63 )
          {
            if ( !v50 || !v54 )
            {
              *(_DWORD *)o__errno(v53) = 22;
              o__invalid_parameter_noinfo(v55);
              sub_1800B8610(2147942487LL);
            }
            memmove(&v51[v64], v54, 2LL * (int)v63);
          }
          if ( 2LL * (int)v20 )
            memcpy(v52, L"%b", 2LL * (int)v20);
          v52[(int)v20 + (int)v63] = 0;
          v60 += v20 - v19;
        }
        v50 += (int)(sub_18001B750(v50) + 1);
        v49 = v67;
      }
      sub_1800448E4(&Str, (unsigned int)v62);
    }
  }
  v21 = Str;
LABEL_46:
  v25 = (__int64 *)&v68[2];
  if ( *(_DWORD *)v68[2].Data4 )
    sub_18001B4A0(v25, L"#|%s", v21);
  else
    sub_18001B4A0(v25, L"%s|%s", v5, v21);
  v26 = Str - 12;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Str - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v26 + 8LL))(*(_QWORD *)v26);
  v27 = v65 - 3;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v65 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v27 + 8LL))(*v27);
  return 0LL;
}
