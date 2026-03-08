/*
 * XREFs of HalpConstructScatterGatherListDmarThin @ 0x140511AA4
 * Callers:
 *     HalpDmaReturnEmergencyLogicalAddressResources @ 0x1404FE8AC (HalpDmaReturnEmergencyLogicalAddressResources.c)
 *     HalpBuildScatterGatherListDmarThin @ 0x140511900 (HalpBuildScatterGatherListDmarThin.c)
 *     HalpConstructScatterGatherListDmarThin @ 0x140511AA4 (HalpConstructScatterGatherListDmarThin.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpDmaUseEmergencyLogicalAddressResources @ 0x1404FEAEC (HalpDmaUseEmergencyLogicalAddressResources.c)
 *     HalpConstructScatterGatherListDmarThin @ 0x140511AA4 (HalpConstructScatterGatherListDmarThin.c)
 *     HalpPutScatterGatherListDmarThin @ 0x140511D50 (HalpPutScatterGatherListDmarThin.c)
 */

__int64 __fastcall HalpConstructScatterGatherListDmarThin(__int64 a1)
{
  __int64 v1; // r11
  void *v2; // rsi
  __int64 v3; // r10
  void (__fastcall *v4)(_QWORD, _QWORD, _QWORD, _QWORD); // r12
  int v5; // edi
  __int64 *v6; // r15
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r14
  unsigned int v11; // ecx
  unsigned int v12; // r13d
  unsigned int v13; // eax
  unsigned int v14; // edx
  unsigned __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v20; // [rsp+40h] [rbp-49h]
  void (__fastcall *v21)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+48h] [rbp-41h]
  __int128 v22; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int64 v23; // [rsp+60h] [rbp-29h]
  __int64 v24; // [rsp+68h] [rbp-21h]
  __int64 v25; // [rsp+70h] [rbp-19h]
  __int64 v26; // [rsp+78h] [rbp-11h]
  __int128 v27; // [rsp+80h] [rbp-9h] BYREF
  __int64 v28; // [rsp+90h] [rbp+7h]
  char v29; // [rsp+F0h] [rbp+67h]
  unsigned int v30; // [rsp+F8h] [rbp+6Fh]
  __int64 v31; // [rsp+100h] [rbp+77h]
  __int64 v32; // [rsp+108h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 24);
  v31 = 0LL;
  v2 = *(void **)(a1 + 88);
  v3 = 0LL;
  v4 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(a1 + 64);
  v5 = 0;
  v6 = *(__int64 **)(a1 + 48);
  v8 = *(unsigned int *)(a1 + 56);
  v9 = *(unsigned int *)(a1 + 60);
  v10 = *(_QWORD *)(a1 + 80);
  v28 = 0LL;
  LODWORD(v23) = 0;
  v20 = v1;
  v21 = v4;
  v32 = 0LL;
  v27 = 0LL;
  v22 = 0LL;
  v24 = *(_QWORD *)(v1 + 512);
  v29 = *(_BYTE *)(a1 + 96);
  if ( v2 )
  {
    _m_prefetchw(v2);
    if ( (_InterlockedOr((volatile signed __int32 *)v2, 4u) & 2) != 0 )
      goto LABEL_3;
  }
  *(_DWORD *)v10 = 0;
  *(_QWORD *)(v10 + 8) = a1;
  if ( v6 )
  {
    v11 = 0;
    do
    {
      if ( !(_DWORD)v8 )
        break;
      v12 = v8;
      v13 = *((_DWORD *)v6 + 10) - v9;
      v26 = 3LL * v11;
      if ( v13 <= (unsigned int)v8 )
        v12 = v13;
      v14 = v9 + *((_DWORD *)v6 + 11);
      v8 = (unsigned int)v8 - v12;
      v30 = v8;
      if ( v12 )
      {
        v25 = v14 & 0xFFF;
        LODWORD(v22) = 2;
        v15 = (v25 + (unsigned __int64)v12 + 4095) >> 12;
        v23 = v15;
        *((_QWORD *)&v22 + 1) = &v6[((unsigned __int64)v14 >> 12) + 6];
        if ( *(_BYTE *)(a1 + 98) )
        {
          v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int128 *, __int128 *))(HalpDmaIommuInterfaceFcnTable
                                                                                           + 144))(
                 *(_QWORD *)(v1 + 560),
                 v3,
                 3LL,
                 &v22,
                 &v27);
          if ( v5 < 0 )
            goto LABEL_23;
          v1 = v20;
          v16 = v32 + **(_QWORD **)(v20 + 560);
          v3 = v15 + v32;
          v31 = v16;
          v32 += v15;
        }
        else
        {
          v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *))(HalpDmaIommuInterfaceFcnTable + 56))(
                 *(_QWORD *)(v24 + 40),
                 3LL,
                 &v22);
          if ( v5 < 0 )
            goto LABEL_23;
          v16 = v31;
          v3 = v32;
          v1 = v20;
        }
        v17 = v26;
        v18 = v25 + v16;
        v8 = v30;
        *(_QWORD *)(v10 + 8 * v26 + 32) = 0LL;
        *(_QWORD *)(v10 + 8 * v17 + 16) = v18;
        *(_DWORD *)(v10 + 8 * v17 + 24) = v12;
        v11 = ++*(_DWORD *)v10;
      }
      v6 = (__int64 *)*v6;
      v9 = 0LL;
    }
    while ( v6 );
    v4 = v21;
  }
  if ( v2 && (_m_prefetchw(v2), (_InterlockedOr((volatile signed __int32 *)v2, 1u) & 2) != 0) )
  {
LABEL_3:
    v5 = -1073741536;
LABEL_23:
    if ( *(_DWORD *)v10 )
      HalpPutScatterGatherListDmarThin(*(_QWORD *)(a1 + 24), v10, v9, v8);
    if ( v5 != -1073741536 && !*(_BYTE *)(a1 + 98) )
    {
      *(_BYTE *)(a1 + 98) = 1;
      if ( HalpDmaUseEmergencyLogicalAddressResources(v20, (_QWORD *)a1, v29 == 0) )
        return (unsigned int)HalpConstructScatterGatherListDmarThin(a1);
      else
        return v29 != 0 ? (unsigned int)v5 : 0;
    }
  }
  else if ( v4 )
  {
    v4(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), v10, *(_QWORD *)(a1 + 72));
  }
  return (unsigned int)v5;
}
