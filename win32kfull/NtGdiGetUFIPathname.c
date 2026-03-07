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
  __int64 v19; // r8
  _DWORD *v20; // rdx
  void *v21; // rcx
  size_t v22; // r8
  _DWORD *v23; // rdx
  int v25; // [rsp+60h] [rbp-2E8h] BYREF
  __int64 v26; // [rsp+64h] [rbp-2E4h] BYREF
  int v27; // [rsp+6Ch] [rbp-2DCh] BYREF
  int v28; // [rsp+70h] [rbp-2D8h] BYREF
  _DWORD v29[3]; // [rsp+74h] [rbp-2D4h] BYREF
  char *v30; // [rsp+80h] [rbp-2C8h]
  ULONG64 v31; // [rsp+88h] [rbp-2C0h]
  ULONG64 v32; // [rsp+90h] [rbp-2B8h]
  int v33[2]; // [rsp+98h] [rbp-2B0h] BYREF
  volatile void *Address; // [rsp+A0h] [rbp-2A8h]
  ULONG64 v35; // [rsp+A8h] [rbp-2A0h]
  void *v36; // [rsp+B0h] [rbp-298h]
  void *v37; // [rsp+B8h] [rbp-290h]
  _DWORD *v38; // [rsp+C0h] [rbp-288h]
  ULONG64 v39; // [rsp+C8h] [rbp-280h]
  ULONG64 v40; // [rsp+D0h] [rbp-278h]
  _BYTE v41[528]; // [rsp+F0h] [rbp-258h] BYREF

  v36 = a3;
  v35 = a2;
  v11 = (_QWORD *)a1;
  *(_QWORD *)&v29[1] = a2;
  v37 = a3;
  v38 = a4;
  v12 = (_DWORD *)a6;
  v39 = a6;
  Address = a8;
  v13 = (_DWORD *)a9;
  v40 = a9;
  v32 = a9;
  v31 = a9;
  *(_QWORD *)v33 = 0LL;
  v14 = 0LL;
  v30 = 0LL;
  v25 = 0;
  v26 = 0LL;
  v29[0] = 0;
  v27 = 0;
  v28 = 0;
  if ( a1 >= MmUserProbeAddress )
    v11 = (_QWORD *)MmUserProbeAddress;
  *(_QWORD *)v33 = *v11;
  *(_QWORD *)&v29[1] = Gre::Base::Globals((Gre::Base *)MmUserProbeAddress);
  GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)&v29[1] + 48LL));
  EtwTraceGreLockAcquireSemaphoreExclusive(
    L"GreBaseGlobals.hsemPublicPFT",
    *(_QWORD *)(*(_QWORD *)&v29[1] + 48LL),
    14LL);
  v15 = v31 != 0;
  v31 = -(__int64)v31;
  UFIPathname = GreGetUFIPathname(
                  (struct _UNIVERSAL_FONT_ID *)v33,
                  &v25,
                  0LL,
                  0,
                  &v26,
                  a5,
                  (int *)&v26 + 1,
                  v29,
                  Address,
                  (_DWORD *)((unsigned __int64)&v27 & -(__int64)v15),
                  (unsigned int *)((unsigned __int64)&v28 & -(__int64)(a10 != 0)));
  v17 = v25;
  if ( UFIPathname )
  {
    if ( (unsigned int)v25 > 0x104 )
    {
      if ( (unsigned int)v25 <= 0x1388000 )
      {
        v14 = (char *)AllocFreeTmpBuffer((unsigned int)(2 * v25));
        v30 = v14;
      }
      UFIPathname &= -(v14 != 0LL);
    }
    else
    {
      v14 = v41;
      v30 = v41;
    }
  }
  if ( UFIPathname && !HIDWORD(v26) && v14 )
  {
    v15 = v32 != 0;
    v32 = -(__int64)v32;
    UFIPathname = GreGetUFIPathname(
                    (struct _UNIVERSAL_FONT_ID *)v33,
                    0LL,
                    v14,
                    v17,
                    &v26,
                    a5,
                    0LL,
                    0LL,
                    0LL,
                    (_DWORD *)((unsigned __int64)&v27 & -(__int64)v15),
                    (unsigned int *)((unsigned __int64)&v28 & -(__int64)(a10 != 0)));
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemPublicPFT");
  GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)&v29[1] + 48LL));
  if ( UFIPathname )
  {
    if ( v17 > 0x30C )
      UFIPathname = 0;
    if ( UFIPathname )
    {
      v20 = (_DWORD *)v35;
      if ( v35 )
      {
        if ( v35 >= MmUserProbeAddress )
          v20 = (_DWORD *)MmUserProbeAddress;
        *v20 = v17;
      }
      v21 = v36;
      if ( v36 )
      {
        v22 = 2LL * v17;
        if ( (unsigned __int64)v36 + v22 > MmUserProbeAddress || (char *)v36 + v22 <= v36 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v21, v14, v22);
      }
      if ( a4 )
      {
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          a4 = (_DWORD *)MmUserProbeAddress;
        *a4 = v26;
      }
      if ( HIDWORD(v26) )
      {
        if ( a6 )
        {
          if ( a6 >= MmUserProbeAddress )
            v12 = (_DWORD *)MmUserProbeAddress;
          *v12 = HIDWORD(v26);
        }
        v23 = (_DWORD *)a7;
        if ( a7 )
        {
          if ( a7 >= MmUserProbeAddress )
            v23 = (_DWORD *)MmUserProbeAddress;
          *v23 = v29[0];
        }
      }
      if ( a9 )
      {
        if ( a9 >= MmUserProbeAddress )
          v13 = (_DWORD *)MmUserProbeAddress;
        *v13 = v27;
      }
      v18 = (_DWORD *)a10;
      if ( a10 )
      {
        if ( a10 >= MmUserProbeAddress )
          v18 = (_DWORD *)MmUserProbeAddress;
        *v18 = v28;
      }
    }
  }
  if ( v14 && v14 != v41 )
    FreeTmpBuffer(v14, v18, v19);
  return UFIPathname;
}
