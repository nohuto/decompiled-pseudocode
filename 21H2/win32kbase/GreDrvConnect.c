/*
 * XREFs of GreDrvConnect @ 0x1C016C570
 * Callers:
 *     xxxRemoteConnect @ 0x1C007EDC0 (xxxRemoteConnect.c)
 * Callees:
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C00D4AB4 (--1SEMOBJEX@@QEAA@XZ.c)
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C00D4C28 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreDrvConnect(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  int v5; // r8d
  struct _LDEV *v6; // rbx
  unsigned int v7; // edi
  unsigned int (__fastcall *v8)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  unsigned int v10; // [rsp+20h] [rbp-D8h]
  unsigned int v11; // [rsp+30h] [rbp-C8h]
  _BYTE v12[96]; // [rsp+90h] [rbp-68h] BYREF

  SEMOBJEX::SEMOBJEX(
    (SEMOBJEX *)v12,
    (HSEMAPHORE)ghsemDynamicModeChange,
    a3,
    (HSEMAPHORE)ghsemGreLock,
    v10,
    (HSEMAPHORE)ghsemDCVisRgn,
    v11,
    (HSEMAPHORE)ghsemSprite,
    5u,
    ghsemHT,
    6u,
    ghsemDriverMgmt,
    0xDu);
  v6 = gpldevDrivers;
  v7 = 0;
  while ( v6 )
  {
    if ( *((_QWORD *)v6 + 2) )
    {
      if ( *((_DWORD *)v6 + 6) == 1 )
      {
        v8 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)v6 + 112) + 616LL);
        if ( v8 )
        {
          if ( !v8(a1[3], a1[2], a1[1], a1[4]) )
          {
            *((_DWORD *)v6 + 15) = 4;
            v7 = -2143354875;
            break;
          }
          *((_DWORD *)v6 + 15) = 1;
        }
      }
    }
    v6 = *(struct _LDEV **)v6;
  }
  SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v12, v4, v5);
  return v7;
}
