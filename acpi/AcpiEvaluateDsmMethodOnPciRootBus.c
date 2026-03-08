/*
 * XREFs of AcpiEvaluateDsmMethodOnPciRootBus @ 0x1C0089CBC
 * Callers:
 *     PciGetRootBusCapability @ 0x1C008A1F0 (PciGetRootBusCapability.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     AMLIFreeDataBuffs @ 0x1C00482C4 (AMLIFreeDataBuffs.c)
 *     ACPIAmliEvaluateDsm @ 0x1C007C65C (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall AcpiEvaluateDsmMethodOnPciRootBus(__int64 a1, _BYTE *a2)
{
  _QWORD *v5; // rcx
  int v6; // ebx
  PVOID v7; // rdi
  _QWORD *v8; // rcx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  PVOID P[2]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v13; // [rsp+40h] [rbp-29h] BYREF
  __int128 v14; // [rsp+50h] [rbp-19h] BYREF
  __int128 v15; // [rsp+60h] [rbp-9h]
  __int128 v16; // [rsp+70h] [rbp+7h]

  DWORD1(v14) = 0;
  P[0] = 0LL;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 184), 0, 0) & 4) != 0 )
  {
    *a2 = *(_BYTE *)(a1 + 224);
    return 0LL;
  }
  v5 = *(_QWORD **)(a1 + 760);
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v13 = PCI_ROOT_BUS_DSM_UUID;
  v6 = ACPIAmliEvaluateDsm(v5, (__int64)&v13, 1u, 0, &v14, P);
  _InterlockedOr((volatile signed __int32 *)(a1 + 184), 4u);
  v7 = P[0];
  if ( v6 >= 0 )
  {
    if ( *((_WORD *)P[0] + 1) == 3 && *((_DWORD *)P[0] + 6) && (**((_BYTE **)P[0] + 4) & 0x10) != 0 )
    {
      v8 = *(_QWORD **)(a1 + 760);
      v14 = 0LL;
      v15 = 0LL;
      v16 = 0LL;
      v13 = PCI_ROOT_BUS_DSM_UUID;
      v9 = ACPIAmliEvaluateDsm(v8, (__int64)&v13, 1u, 4u, &v14, P);
      v7 = P[0];
      v6 = v9;
      if ( v9 < 0 )
      {
LABEL_23:
        AMLIFreeDataBuffs((__int64)v7);
        goto LABEL_24;
      }
      if ( *((_WORD *)P[0] + 1) == 4 && *((_DWORD *)P[0] + 6) >= 0x58u )
      {
        v10 = *((_QWORD *)P[0] + 4);
        if ( *(_DWORD *)v10 == 2
          && *(_WORD *)(v10 + 10) == 1
          && *(_QWORD *)(v10 + 24) == 1LL
          && *(_WORD *)(v10 + 50) == 3
          && *(_DWORD *)(v10 + 72) >= 0x18u )
        {
          v11 = *(_QWORD *)(v10 + 80);
          if ( v11 )
          {
            if ( *(_WORD *)v11 == 1
              && !*(_WORD *)(v11 + 2)
              && *(_DWORD *)(v11 + 4) >= 0x18u
              && *(_WORD *)(v11 + 8) == 1
              && *(_WORD *)(v11 + 10) >= 0x10u )
            {
              *(_BYTE *)(a1 + 224) = 1;
              v6 = 0;
              *(_OWORD *)(a1 + 226) = *(_OWORD *)(v11 + 8);
              *a2 = 1;
              goto LABEL_23;
            }
          }
        }
      }
    }
    v6 = -1073741823;
    goto LABEL_23;
  }
LABEL_24:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x52706341u);
  return (unsigned int)v6;
}
