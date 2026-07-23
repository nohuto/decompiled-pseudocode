/*
 * XREFs of PpmCheckComputeEnergy @ 0x1402CFCD0
 * Callers:
 *     <none>
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

char PpmCheckComputeEnergy()
{
  unsigned __int64 v0; // r8
  unsigned __int16 v1; // r10
  unsigned __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ecx
  unsigned int v11; // edx
  unsigned int v12; // ebx
  __int64 v13; // rdi
  __int64 v14; // rsi
  unsigned int v15; // r14d
  REGHANDLE v16; // r15
  __int64 Prcb; // rax
  unsigned int v19; // [rsp+48h] [rbp-39h] BYREF
  _DWORD v20[2]; // [rsp+50h] [rbp-31h]
  _QWORD v21[3]; // [rsp+58h] [rbp-29h] BYREF
  __int64 v22; // [rsp+70h] [rbp-11h] BYREF
  __int128 v23; // [rsp+78h] [rbp-9h]
  __int128 v24; // [rsp+88h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp+17h] BYREF
  __int64 *v26; // [rsp+A8h] [rbp+27h]
  __int64 v27; // [rsp+B0h] [rbp+2Fh]

  v21[0] = 0LL;
  if ( PopComputeEnergy )
  {
    v0 = qword_140CFC848[0];
    v1 = 0;
    v20[0] = 64;
    v20[1] = 64;
    v24 = 0LL;
    v23 = 0LL;
    while ( v0 )
    {
LABEL_4:
      _BitScanForward64(&v2, v0);
      v0 &= ~(1LL << v2);
      v3 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v1 + (unsigned __int8)v2];
      if ( (unsigned int)v3 >= (unsigned int)KeNumberProcessors_0 )
      {
        v4 = 0LL;
      }
      else
      {
        _mm_lfence();
        v4 = KiProcessorBlock[v3];
      }
      v5 = *(unsigned __int8 *)(v4 + 33208);
      v6 = 4 * v5;
      v20[v5] = v3;
      v7 = 8 * v5;
      *(_QWORD *)((char *)&v24 + v7) += *(_QWORD *)(v4 + 33224);
      *(_QWORD *)((char *)&v23 + v7) += *(_QWORD *)(v4 + 33232);
      v8 = *(_QWORD *)(v4 + 33128);
      v9 = *(_QWORD *)(v4 + 33136);
      if ( v8 && v9 )
      {
        if ( *(_BYTE *)(v9 + 100) )
        {
          v10 = *(_DWORD *)(v9 + 116);
        }
        else
        {
          v10 = *(_DWORD *)(v9 + 72);
          v11 = *(_DWORD *)(v8 + 368);
          if ( v10 >= v11 )
            v10 = v11;
        }
      }
      else
      {
        v10 = 100;
      }
      *(_DWORD *)((char *)&v21[2] + v6) = v10;
      *(_QWORD *)(v4 + 33224) = 0LL;
      *(_QWORD *)(v4 + 33232) = 0LL;
    }
    while ( ++v1 < (unsigned int)(unsigned __int16)KeActiveProcessors[0] )
    {
      v0 = qword_140CFC848[v1];
      if ( v0 )
        goto LABEL_4;
    }
    v12 = 0;
    v13 = 0LL;
    v14 = 0LL;
    do
    {
      v15 = v20[v13];
      if ( v15 != 64 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD *))PopComputeEnergy)(
          v12,
          *(_QWORD *)((char *)&v24 + v14),
          *(_QWORD *)((char *)&v23 + v14),
          *(unsigned int *)((char *)&v21[2] + v13 * 4),
          v21);
        v22 = v21[0];
        v19 = v12;
        if ( PpmEtwRegistered )
        {
          v16 = PpmEtwHandle;
          if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_COMPUTE_ENERGY) )
          {
            *(_QWORD *)&UserData.Size = 4LL;
            UserData.Ptr = (ULONGLONG)&v19;
            v27 = 8LL;
            v26 = &v22;
            EtwWriteEx(v16, &PPM_ETW_COMPUTE_ENERGY, 0LL, 0, 0LL, 0LL, 2u, &UserData);
          }
        }
        Prcb = KeGetPrcb(v15);
        *(_QWORD *)(Prcb + 33216) += v21[0];
      }
      ++v12;
      ++v13;
      v14 += 8LL;
    }
    while ( v12 < 2 );
  }
  return 1;
}
