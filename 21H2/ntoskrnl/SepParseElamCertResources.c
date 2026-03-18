/*
 * XREFs of SepParseElamCertResources @ 0x14082E2BC
 * Callers:
 *     SeRegisterElamCertResources @ 0x14082E228 (SeRegisterElamCertResources.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x1402E0AC4 (RtlStringCchLengthW.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     __report_rangecheckfailure @ 0x140502A3C (__report_rangecheckfailure.c)
 */

NTSTATUS __fastcall SepParseElamCertResources(unsigned __int16 *a1, __int64 a2)
{
  int v2; // r8d
  unsigned int v3; // eax
  unsigned __int64 v4; // r12
  const wchar_t *v5; // rbx
  NTSTATUS result; // eax
  const wchar_t *v7; // r11
  const wchar_t *v8; // rdi
  unsigned int v9; // r13d
  bool v10; // dl
  char v11; // r8
  wchar_t v12; // ax
  char v13; // al
  unsigned int v14; // eax
  wchar_t v15; // ax
  unsigned __int16 *v16; // r11
  size_t v17; // r15
  unsigned int v18; // esi
  wchar_t *v19; // r14
  wchar_t *v20; // r8
  unsigned int v21; // edx
  wchar_t v22; // ax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int16 v25; // dx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r15
  const wchar_t *v29; // r8
  __int64 v30; // rax
  int v31; // [rsp+28h] [rbp-D8h]
  int v32; // [rsp+40h] [rbp-C0h]
  const wchar_t *v33; // [rsp+48h] [rbp-B8h]
  unsigned int v34; // [rsp+50h] [rbp-B0h]
  size_t pcchLength; // [rsp+58h] [rbp-A8h] BYREF
  size_t v36; // [rsp+60h] [rbp-A0h] BYREF
  char *v37; // [rsp+68h] [rbp-98h]
  _WORD v38[24]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v39[448]; // [rsp+A0h] [rbp-60h] BYREF

  pcchLength = 0LL;
  v2 = 0;
  v36 = 0LL;
  if ( (unsigned __int64)(a2 - 2) > 0xFFFD )
    return -1073741811;
  v3 = *a1;
  v4 = (unsigned __int64)a1 + a2;
  v37 = (char *)a1 + a2;
  v5 = a1 + 1;
  v34 = v3;
  v32 = 0;
  if ( !v3 )
    return v2;
  while ( 1 )
  {
    if ( (unsigned __int64)(v5 + 1) > v4 )
      return -1073741811;
    result = RtlStringCchLengthW(v5, (v4 - (unsigned __int64)v5) >> 1, &pcchLength);
    if ( result < 0 )
      return result;
    v7 = &v5[pcchLength + 1];
    v8 = v7 + 1;
    v33 = v7;
    if ( (unsigned __int64)(v7 + 1) >= v4 )
      return -1073741811;
    v9 = 0;
    v10 = 1;
    if ( *v5 )
    {
      do
      {
        if ( v9 >= 0x40 )
          return -1073741811;
        if ( v10 )
        {
          if ( v9 >= 0x40uLL )
            _report_rangecheckfailure();
          v39[v9] = 0;
          v11 = 0;
        }
        else
        {
          v39[v9] *= 16;
          v11 = v39[v9];
        }
        v12 = *v5;
        if ( *v5 == 32 )
        {
          if ( !v10 )
            return -1073741811;
        }
        else
        {
          if ( v12 <= 0x2Fu )
            return -1073741811;
          if ( v12 > 0x39u )
          {
            if ( v12 <= 0x40u )
              return -1073741811;
            if ( v12 <= 0x46u )
            {
              v13 = v12 - 55;
            }
            else
            {
              if ( v12 <= 0x60u || v12 > 0x66u )
                return -1073741811;
              v13 = v12 - 87;
            }
          }
          else
          {
            v13 = v12 - 48;
          }
          v39[v9] = v11 + v13;
        }
        v14 = v9 + 1;
        if ( v10 )
          v14 = v9;
        v9 = v14;
        if ( *v5 != 32 )
          v10 = !v10;
        ++v5;
      }
      while ( *v5 );
      if ( !v10 )
        return -1073741811;
    }
    v15 = *v7;
    if ( *v7 != 0x8004 && (v15 <= 0x800Bu || v15 > 0x800Eu) )
      return -1073741811;
    result = RtlStringCchLengthW(v7 + 1, (v4 - (unsigned __int64)v8) >> 1, &v36);
    if ( result < 0 )
      return result;
    v17 = v36;
    v18 = 0;
    v19 = (wchar_t *)&v8[v36];
    v5 = v19 + 1;
    if ( v36 )
    {
      v20 = wcschr(v8, 0x3Bu);
      if ( !v20 )
      {
        v20 = v19;
        goto LABEL_51;
      }
      while ( 1 )
      {
        v21 = 0;
        if ( v8 != v20 )
        {
          do
          {
            v22 = *v8++;
            v23 = v21++;
            *(_WORD *)&v39[128 * (unsigned __int64)v18 + 64 + 2 * v23] = v22;
          }
          while ( v8 != v20 );
          v4 = (unsigned __int64)v37;
        }
        v24 = v21;
        v25 = 2 * v21;
        *(_WORD *)&v39[128 * (unsigned __int64)v18 + 64 + 2 * v24] = 0;
        v26 = 2LL * v18;
        v38[4 * v26] = v25;
        v38[4 * v26 + 1] = v25 + 2;
        *(_QWORD *)&v38[4 * v26 + 4] = &v39[128 * (unsigned __int64)v18 + 64];
        if ( !*v20 )
          break;
        v29 = v20 + 1;
        if ( !*v29 )
          break;
        v8 = v29;
        v20 = wcschr(v29, 0x3Bu);
        if ( !v20 )
        {
          v30 = -1LL;
          do
            ++v30;
          while ( v8[v30] );
          v20 = (wchar_t *)&v8[v30];
        }
        if ( ++v18 >= 3 )
          goto LABEL_32;
LABEL_51:
        if ( !v20 )
          goto LABEL_32;
      }
      ++v18;
LABEL_32:
      v16 = (unsigned __int16 *)v33;
    }
    v27 = v17 != 0 ? v18 : 0;
    v28 = -(__int64)v17;
    if ( !qword_140C1B8F0 )
      return -1073741637;
    v31 = v27;
    LOBYTE(v27) = 7;
    v2 = qword_140C1B8F0(v27, v39, v9, *v16, (unsigned __int64)v38 & -(__int64)(v28 != 0), v31, 0LL);
    if ( v2 >= 0 && ++v32 < v34 )
      continue;
    return v2;
  }
}
