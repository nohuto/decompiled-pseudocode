/*
 * XREFs of GreDrvDisconnect @ 0x1C0128FB4
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C0078068 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxRemoteDisconnect @ 0x1C00F7034 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C01267DC (xxxRemoteReconnect.c)
 *     xxxRemotePassthruEnable @ 0x1C0206C6C (xxxRemotePassthruEnable.c)
 * Callees:
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C0129084 (--1SEMOBJEX@@QEAA@XZ.c)
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C0129160 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreDrvDisconnect(Gre::Base *a1)
{
  int v2; // esi
  struct Gre::Base::SESSION_GLOBALS *v3; // rdi
  __int64 *v4; // rbx
  int v5; // r12d
  _QWORD *v7; // r14
  _QWORD *v8; // r15
  int v9; // eax
  HSEMAPHORE v10; // [rsp+68h] [rbp-A8h]
  HSEMAPHORE v11; // [rsp+68h] [rbp-A8h]
  unsigned int v12; // [rsp+70h] [rbp-A0h]
  unsigned int v13; // [rsp+70h] [rbp-A0h]
  HSEMAPHORE v14; // [rsp+78h] [rbp-98h]
  HSEMAPHORE v15; // [rsp+78h] [rbp-98h]
  unsigned int v16; // [rsp+80h] [rbp-90h]
  unsigned int v17; // [rsp+80h] [rbp-90h]
  _BYTE v18[96]; // [rsp+90h] [rbp-80h] BYREF
  _BYTE v19[144]; // [rsp+F0h] [rbp-20h] BYREF
  _QWORD *v20; // [rsp+198h] [rbp+88h] BYREF
  _QWORD *v21; // [rsp+1A0h] [rbp+90h] BYREF

  v2 = 0;
  v3 = Gre::Base::Globals(a1);
  SEMOBJEX::SEMOBJEX(
    (SEMOBJEX *)v19,
    *((HSEMAPHORE *)v3 + 10),
    1u,
    *((HSEMAPHORE *)v3 + 15),
    2u,
    *((HSEMAPHORE *)v3 + 11),
    3u,
    0LL,
    0,
    0LL,
    0,
    0LL,
    0,
    v10,
    v12,
    v14,
    v16);
  v4 = (__int64 *)*((_QWORD *)v3 + 236);
  do
  {
    if ( !v4 )
      break;
    v5 = 0;
    if ( v4[2] && *((_DWORD *)v4 + 6) == 1 && *(_QWORD *)(v4[112] + 624) )
    {
      GreAcquireSemaphore(*((_QWORD *)v3 + 1));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDriverMgmt", *((_QWORD *)v3 + 1), 16LL);
      v7 = 0LL;
      v8 = (_QWORD *)*((_QWORD *)v3 + 760);
      do
      {
        if ( !v8 || (__int64 *)v8[220] != v4 )
          break;
        v20 = v8;
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v20);
        EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt");
        GreReleaseSemaphoreInternal(*((_QWORD *)v3 + 1));
        if ( v7 )
        {
          v21 = v7;
          PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v21);
        }
        if ( v20 && (v20[5] & 1) != 0 )
        {
          SEMOBJEX::SEMOBJEX(
            (SEMOBJEX *)v18,
            (HSEMAPHORE)v20[7],
            4u,
            *((HSEMAPHORE *)v3 + 14),
            5u,
            *((HSEMAPHORE *)v3 + 17),
            6u,
            (HSEMAPHORE)v20[6],
            0xBu,
            0LL,
            0,
            0LL,
            0,
            v11,
            v13,
            v15,
            v17);
          PDEVOBJ::vSync((PDEVOBJ *)&v20, (struct _SURFOBJ *)((v20[316] + 24LL) & -(__int64)(v20[316] != 0LL)), 0LL, 0);
          if ( !v5 )
          {
            v5 = 1;
            if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(v4[112] + 624))(
                   *((_QWORD *)a1 + 3),
                   *((_QWORD *)a1 + 2)) )
            {
              *((_DWORD *)v4 + 15) = 3;
            }
            else
            {
              *((_DWORD *)v4 + 15) = 6;
              v2 = -2143354873;
            }
          }
          SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v18);
        }
        GreAcquireSemaphore(*((_QWORD *)v3 + 1));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDriverMgmt", *((_QWORD *)v3 + 1), 16LL);
        v7 = v8;
        v8 = (_QWORD *)*v8;
      }
      while ( v2 >= 0 );
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt");
      GreReleaseSemaphoreInternal(*((_QWORD *)v3 + 1));
      if ( v7 )
      {
        v21 = v7;
        PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v21);
      }
      if ( !v5 && v2 >= 0 )
      {
        SEMOBJEX::SEMOBJEX(
          (SEMOBJEX *)v18,
          *((HSEMAPHORE *)v3 + 14),
          5u,
          *((HSEMAPHORE *)v3 + 17),
          6u,
          *((HSEMAPHORE *)v3 + 1),
          0x10u,
          0LL,
          0,
          0LL,
          0,
          0LL,
          0,
          v11,
          v13,
          v15,
          v17);
        if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(v4[112] + 624))(*((_QWORD *)a1 + 3), *((_QWORD *)a1 + 2)) )
        {
          v9 = 3;
        }
        else
        {
          v2 = -2143354873;
          v9 = 6;
        }
        *((_DWORD *)v4 + 15) = v9;
        SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v18);
      }
    }
    v4 = (__int64 *)*v4;
  }
  while ( v2 >= 0 );
  SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v19);
  return (unsigned int)v2;
}
