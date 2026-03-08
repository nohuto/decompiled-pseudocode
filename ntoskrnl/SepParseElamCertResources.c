/*
 * XREFs of SepParseElamCertResources @ 0x14081AB7C
 * Callers:
 *     SeRegisterElamCertResources @ 0x14081B8D0 (SeRegisterElamCertResources.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x140247080 (RtlStringCchLengthW.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     wcschr @ 0x1403D5D90 (wcschr.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     __report_rangecheckfailure @ 0x1404FBCCC (__report_rangecheckfailure.c)
 */

NTSTATUS __fastcall SepParseElamCertResources(_WORD *a1, __int64 a2)
{
  int v2; // r8d
  unsigned __int64 v3; // r12
  const wchar_t *v4; // rbx
  NTSTATUS result; // eax
  __int64 v6; // r11
  const wchar_t *v7; // r10
  const wchar_t *v8; // rdi
  unsigned int v9; // r13d
  bool v10; // r9
  char v11; // dl
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  bool v14; // zf
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  char v17; // dl
  unsigned int v18; // eax
  size_t v19; // r15
  unsigned int v20; // esi
  wchar_t *v21; // r14
  wchar_t *v22; // r8
  unsigned int i; // edx
  wchar_t v24; // ax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int16 v27; // dx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r15
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  const wchar_t *v35; // r8
  __int64 v36; // rax
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  int v40; // [rsp+28h] [rbp-D8h]
  int v41; // [rsp+40h] [rbp-C0h]
  unsigned int v42; // [rsp+44h] [rbp-BCh]
  size_t pcchLength; // [rsp+48h] [rbp-B8h] BYREF
  size_t v44; // [rsp+50h] [rbp-B0h] BYREF
  const wchar_t *v45; // [rsp+58h] [rbp-A8h]
  _WORD v46[24]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v47[448]; // [rsp+90h] [rbp-70h] BYREF

  pcchLength = 0LL;
  v2 = 0;
  v44 = 0LL;
  if ( (unsigned __int64)(a2 - 2) > 0xFFFD )
    return -1073741811;
  v3 = (unsigned __int64)a1 + a2;
  v42 = (unsigned __int16)*a1;
  v4 = a1 + 1;
  v41 = 0;
  if ( !*a1 )
    return v2;
  while ( 1 )
  {
    if ( (unsigned __int64)(v4 + 1) > v3 )
      return -1073741811;
    result = RtlStringCchLengthW(v4, (v3 - (unsigned __int64)v4) >> 1, &pcchLength);
    if ( result < 0 )
      return result;
    v7 = &v4[pcchLength + 1];
    v8 = v7 + 1;
    v45 = v7;
    if ( (unsigned __int64)(v7 + 1) >= v3 )
      return -1073741811;
    v9 = 0;
    v10 = 1;
    if ( *v4 )
    {
      while ( 1 )
      {
        if ( v9 >= 0x40 )
          return -1073741811;
        if ( v10 )
        {
          if ( v9 >= 0x40uLL )
            _report_rangecheckfailure();
          v47[v9] = 0;
          v11 = 0;
        }
        else
        {
          v11 = 16 * v47[v9];
          v47[v9] = v11;
        }
        v12 = *v4;
        if ( v12 <= 0x41 )
          break;
        if ( v12 <= 0x61 )
        {
          if ( v12 != 97 )
          {
            v37 = v12 - 66;
            if ( v37 )
            {
              v38 = v37 - 1;
              if ( v38 )
              {
                v39 = v38 - 1;
                if ( v39 )
                {
                  if ( v39 - 1 > 1 )
                    return -1073741811;
                }
              }
            }
LABEL_71:
            v17 = v11 - 55;
            goto LABEL_20;
          }
        }
        else
        {
          v31 = v12 - 98;
          if ( v31 )
          {
            v32 = v31 - 1;
            if ( v32 )
            {
              v33 = v32 - 1;
              if ( v33 )
              {
                if ( v33 - 1 > 1 )
                  return -1073741811;
              }
            }
          }
        }
        v17 = v11 - 87;
LABEL_20:
        v47[v9] = *(_BYTE *)v4 + v17;
LABEL_21:
        v18 = v9 + 1;
        if ( v10 )
          v18 = v9;
        v9 = v18;
        if ( *v4 != 32 )
          v10 = !v10;
        v4 = (const wchar_t *)((char *)v4 + v6);
        if ( !*v4 )
        {
          if ( !v10 )
            return -1073741811;
          goto LABEL_27;
        }
      }
      if ( v12 == 65 )
        goto LABEL_71;
      if ( v12 > 0x34 )
      {
        v34 = v12 - 53;
        if ( v34 )
        {
          v15 = v34 - 1;
          v14 = v15 == 0;
LABEL_16:
          if ( !v14 )
          {
            v16 = v15 - 1;
            if ( v16 )
            {
              if ( v16 - 1 > 1 )
                return -1073741811;
            }
          }
        }
      }
      else if ( v12 != 52 )
      {
        v13 = v12 - 32;
        if ( !v13 )
        {
          if ( !v10 )
            return -1073741811;
          goto LABEL_21;
        }
        v15 = v13 - 16;
        v14 = v15 == 0;
        goto LABEL_16;
      }
      v17 = v11 - 48;
      goto LABEL_20;
    }
LABEL_27:
    if ( *v7 != 32772 && *v7 != 32780 && (unsigned int)*v7 - 32781 > 1 )
      return -1073741811;
    result = RtlStringCchLengthW(v7 + 1, (v3 - (unsigned __int64)v8) >> 1, &v44);
    if ( result < 0 )
      return result;
    v19 = v44;
    v20 = 0;
    v21 = (wchar_t *)&v8[v44];
    v4 = v21 + 1;
    if ( v44 )
    {
      v22 = wcschr(v8, 0x3Bu);
      if ( v22 )
        break;
      v22 = v21;
      if ( v21 )
        break;
    }
LABEL_37:
    v29 = v19 != 0 ? v20 : 0;
    v30 = -(__int64)v19;
    if ( !qword_140C37610 )
      return -1073741637;
    v40 = v29;
    LOBYTE(v29) = 7;
    v2 = qword_140C37610(v29, v47, v9, *v45, (unsigned __int64)v46 & -(__int64)(v30 != 0), v40, 0LL);
    if ( v2 >= 0 && ++v41 < v42 )
      continue;
    return v2;
  }
  while ( (unsigned __int64)(v22 - v8) < 0x40 )
  {
    for ( i = 0; v8 != v22; *(_WORD *)&v47[128 * (unsigned __int64)v20 + 64 + 2 * v25] = v24 )
    {
      v24 = *v8++;
      v25 = i++;
    }
    v26 = i;
    v27 = 2 * i;
    *(_WORD *)&v47[128 * (unsigned __int64)v20 + 64 + 2 * v26] = 0;
    v28 = 2LL * v20;
    v46[4 * v28] = v27;
    v46[4 * v28 + 1] = v27 + 2;
    *(_QWORD *)&v46[4 * v28 + 4] = &v47[128 * (unsigned __int64)v20 + 64];
    if ( !*v22 || (v35 = v22 + 1, !*v35) )
    {
      ++v20;
      goto LABEL_37;
    }
    v8 = v35;
    v22 = wcschr(v35, 0x3Bu);
    if ( !v22 )
    {
      v36 = -1LL;
      do
        ++v36;
      while ( v8[v36] );
      v22 = (wchar_t *)&v8[v36];
    }
    if ( ++v20 >= 3 || !v22 )
      goto LABEL_37;
  }
  return -1073741811;
}
