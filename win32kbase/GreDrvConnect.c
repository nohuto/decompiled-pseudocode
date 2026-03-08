/*
 * XREFs of GreDrvConnect @ 0x1C01998F0
 * Callers:
 *     xxxRemoteConnect @ 0x1C000F480 (xxxRemoteConnect.c)
 * Callees:
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C00D90AC (--1SEMOBJEX@@QEAA@XZ.c)
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C00D9220 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreDrvConnect(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 *v4; // rbx
  unsigned int v5; // edi
  unsigned int (__fastcall *v6)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  unsigned int v8; // [rsp+20h] [rbp-D8h]
  unsigned int v9; // [rsp+30h] [rbp-C8h]
  _BYTE v10[96]; // [rsp+90h] [rbp-68h] BYREF

  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  SEMOBJEX::SEMOBJEX(
    (SEMOBJEX *)v10,
    *(HSEMAPHORE *)(v2 + 80),
    v3,
    *(HSEMAPHORE *)(v2 + 120),
    v8,
    *(HSEMAPHORE *)(v2 + 88),
    v9,
    *(HSEMAPHORE *)(v2 + 112),
    5u,
    *(HSEMAPHORE *)(v2 + 136),
    6u,
    *(HSEMAPHORE *)(v2 + 8),
    0x10u);
  v4 = *(__int64 **)(v2 + 1888);
  v5 = 0;
  while ( v4 )
  {
    if ( v4[2] )
    {
      if ( *((_DWORD *)v4 + 6) == 1 )
      {
        v6 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v4[112] + 616);
        if ( v6 )
        {
          if ( !v6(a1[3], a1[2], a1[1], a1[4]) )
          {
            *((_DWORD *)v4 + 15) = 4;
            v5 = -2143354875;
            break;
          }
          *((_DWORD *)v4 + 15) = 1;
        }
      }
    }
    v4 = (__int64 *)*v4;
  }
  SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v10);
  return v5;
}
