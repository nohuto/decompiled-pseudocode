/*
 * XREFs of NtGdiGetUFIPathname @ 0x1C02AED80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 *     GreGetUFIPathname @ 0x1C027C548 (GreGetUFIPathname.c)
 */

__int64 __fastcall NtGdiGetUFIPathname(
        ULONG64 a1,
        ULONG64 a2,
        void *a3,
        _DWORD *a4,
        char a5,
        ULONG64 a6,
        ULONG64 a7,
        volatile void *a8,
        ULONG64 a9,
        ULONG64 a10)
{
  _QWORD *v11; // r9
  _DWORD *v12; // r12
  _DWORD *v13; // r15
  char *v14; // rdi
  bool v15; // cf
  unsigned int UFIPathname; // esi
  unsigned int v17; // r14d
  _DWORD *v18; // rdx
  void *v19; // rcx
  size_t v20; // r8
  _DWORD *v21; // rdx
  _DWORD *v22; // rdx
  int v24; // [rsp+60h] [rbp-2E8h] BYREF
  __int64 v25; // [rsp+64h] [rbp-2E4h] BYREF
  int v26; // [rsp+6Ch] [rbp-2DCh] BYREF
  int v27; // [rsp+70h] [rbp-2D8h] BYREF
  _DWORD v28[3]; // [rsp+74h] [rbp-2D4h] BYREF
  ULONG64 v29; // [rsp+80h] [rbp-2C8h]
  ULONG64 v30; // [rsp+88h] [rbp-2C0h]
  int v31[2]; // [rsp+90h] [rbp-2B8h] BYREF
  volatile void *Address; // [rsp+98h] [rbp-2B0h]
  ULONG64 v33; // [rsp+A0h] [rbp-2A8h]
  void *v34; // [rsp+A8h] [rbp-2A0h]
  ULONG64 v35; // [rsp+B0h] [rbp-298h]
  void *v36; // [rsp+B8h] [rbp-290h]
  _DWORD *v37; // [rsp+C0h] [rbp-288h]
  ULONG64 v38; // [rsp+C8h] [rbp-280h]
  ULONG64 v39; // [rsp+D0h] [rbp-278h]
  _BYTE v40[528]; // [rsp+F0h] [rbp-258h] BYREF

  v34 = a3;
  v33 = a2;
  v11 = (_QWORD *)a1;
  v35 = a2;
  v36 = a3;
  v37 = a4;
  v12 = (_DWORD *)a6;
  v38 = a6;
  Address = a8;
  v13 = (_DWORD *)a9;
  v39 = a9;
  v30 = a9;
  v29 = a9;
  *(_QWORD *)v31 = 0LL;
  v14 = 0LL;
  v24 = 0;
  v25 = 0LL;
  memset(v28, 0, sizeof(v28));
  v26 = 0;
  v27 = 0;
  if ( a1 >= MmUserProbeAddress )
    v11 = (_QWORD *)MmUserProbeAddress;
  *(_QWORD *)v31 = *v11;
  GreAcquireSemaphore(ghsemPublicPFT);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
  v15 = v29 != 0;
  v29 = -(__int64)v29;
  UFIPathname = GreGetUFIPathname(
                  (struct _UNIVERSAL_FONT_ID *)v31,
                  &v24,
                  0LL,
                  0,
                  &v25,
                  a5,
                  (int *)&v25 + 1,
                  v28,
                  Address,
                  (_DWORD *)((unsigned __int64)&v26 & -(__int64)v15),
                  (unsigned int *)((unsigned __int64)&v27 & -(__int64)(a10 != 0)));
  v17 = v24;
  if ( UFIPathname )
  {
    if ( (unsigned int)v24 > 0x104 )
    {
      if ( (unsigned int)v24 <= 0x1388000 )
      {
        v14 = (char *)AllocFreeTmpBuffer((unsigned int)(2 * v24));
        *(_QWORD *)&v28[1] = v14;
      }
      UFIPathname &= -(v14 != 0LL);
    }
    else
    {
      v14 = v40;
      *(_QWORD *)&v28[1] = v40;
    }
  }
  if ( UFIPathname && !HIDWORD(v25) && v14 )
  {
    v15 = v30 != 0;
    v30 = -(__int64)v30;
    UFIPathname = GreGetUFIPathname(
                    (struct _UNIVERSAL_FONT_ID *)v31,
                    0LL,
                    v14,
                    v17,
                    &v25,
                    a5,
                    0LL,
                    0LL,
                    0LL,
                    (_DWORD *)((unsigned __int64)&v26 & -(__int64)v15),
                    (unsigned int *)((unsigned __int64)&v27 & -(__int64)(a10 != 0)));
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
  GreReleaseSemaphoreInternal(ghsemPublicPFT);
  if ( UFIPathname )
  {
    if ( v17 > 0x30C )
      UFIPathname = 0;
    if ( UFIPathname )
    {
      v18 = (_DWORD *)v33;
      if ( v33 )
      {
        if ( v33 >= MmUserProbeAddress )
          v18 = (_DWORD *)MmUserProbeAddress;
        *v18 = v17;
      }
      v19 = v34;
      if ( v34 )
      {
        v20 = 2LL * v17;
        if ( (unsigned __int64)v34 + v20 > MmUserProbeAddress || (char *)v34 + v20 <= v34 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v19, v14, v20);
      }
      if ( a4 )
      {
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          a4 = (_DWORD *)MmUserProbeAddress;
        *a4 = v25;
      }
      if ( HIDWORD(v25) )
      {
        if ( a6 )
        {
          if ( a6 >= MmUserProbeAddress )
            v12 = (_DWORD *)MmUserProbeAddress;
          *v12 = HIDWORD(v25);
        }
        v21 = (_DWORD *)a7;
        if ( a7 )
        {
          if ( a7 >= MmUserProbeAddress )
            v21 = (_DWORD *)MmUserProbeAddress;
          *v21 = v28[0];
        }
      }
      if ( a9 )
      {
        if ( a9 >= MmUserProbeAddress )
          v13 = (_DWORD *)MmUserProbeAddress;
        *v13 = v26;
      }
      v22 = (_DWORD *)a10;
      if ( a10 )
      {
        if ( a10 >= MmUserProbeAddress )
          v22 = (_DWORD *)MmUserProbeAddress;
        *v22 = v27;
      }
    }
  }
  if ( v14 && v14 != v40 )
    FreeTmpBuffer(v14);
  return UFIPathname;
}
