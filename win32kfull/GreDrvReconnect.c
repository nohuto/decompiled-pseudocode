/*
 * XREFs of GreDrvReconnect @ 0x1C02DEC3C
 * Callers:
 *     xxxRemoteReconnect @ 0x1C01267DC (xxxRemoteReconnect.c)
 * Callees:
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C0129084 (--1SEMOBJEX@@QEAA@XZ.c)
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C0129160 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreDrvReconnect(Gre::Base *a1)
{
  int v1; // esi
  int v2; // r12d
  struct Gre::Base::SESSION_GLOBALS *v3; // r15
  __int64 *v4; // rbx
  int v5; // r13d
  Gre::Base *v6; // rcx
  struct Gre::Base::SESSION_GLOBALS *v7; // r14
  __int64 *v8; // rdi
  __int64 v9; // rdx
  void (__fastcall *v10)(__int64, __int64 *, _QWORD, _QWORD, _DWORD); // rax
  int v11; // eax
  struct Gre::Base::SESSION_GLOBALS *v13; // [rsp+90h] [rbp-80h]
  _BYTE v14[96]; // [rsp+A0h] [rbp-70h] BYREF
  _BYTE v15[144]; // [rsp+100h] [rbp-10h] BYREF
  __int64 *v17; // [rsp+1B0h] [rbp+A0h] BYREF
  __int64 v18; // [rsp+1B8h] [rbp+A8h] BYREF

  v1 = 0;
  v2 = 1;
  v3 = Gre::Base::Globals(a1);
  v13 = v3;
  SEMOBJEX::SEMOBJEX(
    (SEMOBJEX *)v15,
    *((HSEMAPHORE *)v3 + 10),
    1,
    *((HSEMAPHORE *)v3 + 15),
    2u,
    *((HSEMAPHORE *)v3 + 11),
    3u,
    0LL,
    0,
    0LL,
    0,
    0LL,
    0);
  v4 = (__int64 *)*((_QWORD *)v3 + 236);
  do
  {
    if ( !v4 )
      break;
    v5 = 0;
    if ( v4[2] && *((_DWORD *)v4 + 6) == 1 && *(_QWORD *)(v4[112] + 632) )
    {
      GreAcquireSemaphore(*((_QWORD *)v3 + 1));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDriverMgmt", *((_QWORD *)v3 + 1), 16LL);
      v7 = Gre::Base::Globals(v6);
      v8 = (__int64 *)*((_QWORD *)v7 + 760);
      do
      {
        if ( !v8 || (__int64 *)v8[220] != v4 )
          break;
        v17 = v8;
        if ( (v8[5] & 1) != 0 )
        {
          EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt");
          GreReleaseSemaphoreInternal(*((_QWORD *)v7 + 1));
          SEMOBJEX::SEMOBJEX(
            (SEMOBJEX *)v14,
            (HSEMAPHORE)v17[7],
            4,
            *((HSEMAPHORE *)v7 + 14),
            5u,
            *((HSEMAPHORE *)v7 + 17),
            6u,
            (HSEMAPHORE)v17[6],
            0xBu,
            0LL,
            0,
            0LL,
            0);
          PDEVOBJ::vSync((PDEVOBJ *)&v17, (struct _SURFOBJ *)((v17[316] + 24) & -(__int64)(v17[316] != 0)), 0LL, 0);
          if ( !v5 )
          {
            v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v4[112] + 632))(*((_QWORD *)a1 + 3), *((_QWORD *)a1 + 2));
            v5 = 1;
            if ( v2 )
            {
              *((_DWORD *)v4 + 15) = 2;
            }
            else
            {
              *((_DWORD *)v4 + 15) = 5;
              v1 = -2143354874;
            }
          }
          v9 = v17[222];
          v18 = v9;
          if ( v2 == 1 && (*(_DWORD *)(v9 + 24) & 0x800) != 0 )
          {
            v10 = (void (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD, _DWORD))v17[355];
            if ( v10 )
              v10(v17[221], &v18, 0LL, 0LL, *(_DWORD *)(v9 + 28));
          }
          SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v14);
          GreAcquireSemaphore(*((_QWORD *)v7 + 1));
          EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDriverMgmt", *((_QWORD *)v7 + 1), 16LL);
        }
        v8 = (__int64 *)*v8;
      }
      while ( v1 >= 0 );
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt");
      GreReleaseSemaphoreInternal(*((_QWORD *)v7 + 1));
      v3 = v13;
      if ( !v5 && v1 >= 0 )
      {
        SEMOBJEX::SEMOBJEX(
          (SEMOBJEX *)v14,
          *((HSEMAPHORE *)v7 + 14),
          5,
          *((HSEMAPHORE *)v7 + 17),
          6u,
          *((HSEMAPHORE *)v7 + 1),
          0x10u,
          0LL,
          0,
          0LL,
          0,
          0LL,
          0);
        v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v4[112] + 632))(*((_QWORD *)a1 + 3), *((_QWORD *)a1 + 2));
        if ( v2 )
        {
          v11 = 2;
        }
        else
        {
          v1 = -2143354873;
          v11 = 5;
        }
        *((_DWORD *)v4 + 15) = v11;
        SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v14);
      }
    }
    v4 = (__int64 *)*v4;
  }
  while ( v1 >= 0 );
  SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v15);
  return (unsigned int)v1;
}
