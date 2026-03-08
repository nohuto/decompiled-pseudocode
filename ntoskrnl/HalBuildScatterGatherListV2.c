/*
 * XREFs of HalBuildScatterGatherListV2 @ 0x1403C7C60
 * Callers:
 *     HalGetScatterGatherList @ 0x1403CB200 (HalGetScatterGatherList.c)
 * Callees:
 *     HalpCalculateScatterGatherListSize @ 0x1403B4390 (HalpCalculateScatterGatherListSize.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalAllocateAdapterChannelV2 @ 0x140454AE8 (HalAllocateAdapterChannelV2.c)
 *     HalpDmaFlushBuffer @ 0x14050E7A0 (HalpDmaFlushBuffer.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalBuildScatterGatherListV2(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned int a5,
        void (__fastcall *a6)(__int64, _QWORD, char *, __int64),
        __int64 a7,
        char a8,
        _DWORD *P,
        unsigned int a10)
{
  __int64 v10; // rsi
  unsigned int v14; // r15d
  __int64 result; // rax
  _DWORD *v16; // r13
  char *Pool2; // r14
  char *v18; // r9
  __int64 v19; // rcx
  unsigned int v20; // ebp
  char *v21; // rbx
  int v22; // edx
  unsigned int v23; // edx
  __int64 *v24; // r10
  unsigned __int64 v25; // rcx
  __int64 *v26; // rsi
  unsigned int v27; // edi
  unsigned int v28; // eax
  unsigned int v29; // edx
  __int64 v30; // r8
  char v31; // r14
  unsigned int v32; // esi
  __int64 v33; // r8
  _QWORD *v34; // rbx
  bool v35; // zf
  int AdapterChannelV2; // edi
  _DWORD *v37; // rax
  int v38; // [rsp+20h] [rbp-68h]
  int v39; // [rsp+28h] [rbp-60h]
  unsigned int v40; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v41; // [rsp+44h] [rbp-44h] BYREF
  __int64 *v42; // [rsp+48h] [rbp-40h] BYREF

  v10 = a4;
  LODWORD(v42) = 0;
  v41 = 0;
  v40 = 0;
  if ( !a3 )
    return 3221225485LL;
  v14 = a5;
  result = HalpCalculateScatterGatherListSize(a1, a3, a4, a5, &v40, &v42, (int *)&v41);
  if ( (int)result >= 0 )
  {
    if ( *(_BYTE *)(a1 + 440) )
    {
      v32 = v41;
      v31 = a8;
    }
    else
    {
      if ( *(_BYTE *)(a1 + 445) )
        goto LABEL_5;
      v31 = a8;
      if ( a8 )
        goto LABEL_5;
      v32 = v41;
      if ( !v41 )
      {
        v10 = a4;
LABEL_5:
        v16 = P;
        if ( P )
        {
          if ( a10 >= v40 )
          {
            Pool2 = (char *)P;
LABEL_8:
            v18 = Pool2 + 16;
            v19 = a3[4] + *((unsigned int *)a3 + 11);
            *((_QWORD *)Pool2 + 1) = 0LL;
            v20 = v10 & 0xFFF;
            v21 = Pool2 + 16;
            v22 = *((_DWORD *)a3 + 10) - v10;
            v42 = a3;
            v23 = v19 + v22;
            v24 = a3;
            v25 = v19 & 0xFFFFFFFFFFFFF000uLL;
            v26 = &a3[((v10 - v25) >> 12) + 6];
            if ( a5 )
            {
              do
              {
                v27 = v14;
                v28 = v14;
                if ( v23 <= v14 )
                  v27 = v23;
                v14 -= v27;
                if ( !*v24 )
                {
                  v27 = v28;
                  v14 = 0;
                }
                if ( !*(_BYTE *)(a1 + 445) )
                {
                  if ( v24 == a3 )
                    v33 = a4;
                  else
                    v33 = v24[4] + v20;
                  LOBYTE(v39) = 0;
                  LOBYTE(v38) = a8;
                  HalpDmaFlushBuffer(v25, v24, v33, v27, v38, v39);
                  v24 = v42;
                  v18 = Pool2 + 16;
                }
                if ( v27 )
                {
                  do
                  {
                    v29 = 4096 - v20;
                    v30 = v20 + (*v26 << 12);
                    *((_DWORD *)v21 + 2) = 4096 - v20;
                    *(_QWORD *)v21 = v30;
                    if ( 4096 - v20 > v27 )
                    {
                      *((_DWORD *)v21 + 2) = v27;
                      v29 = v27;
                    }
                    v27 -= v29;
                    if ( v21 != v18 )
                    {
                      if ( v30 == *((_QWORD *)v21 - 3) + *((unsigned int *)v21 - 4) )
                      {
                        v25 = *v26 ^ (*v26 - 1);
                        if ( (v25 & 0xFFFFFFFFFFF00000uLL) == 0 )
                        {
                          *((_DWORD *)v21 - 4) += v29;
                          v21 -= 24;
                        }
                      }
                      v18 = Pool2 + 16;
                    }
                    v20 = 0;
                    v21 += 24;
                    ++v26;
                  }
                  while ( v27 );
                  v24 = v42;
                }
                v24 = (__int64 *)*v24;
                v42 = v24;
                if ( !v24 )
                  break;
                v20 = *((_DWORD *)v24 + 11);
                v26 = v24 + 6;
                v23 = *((_DWORD *)v24 + 10);
              }
              while ( v14 );
              v16 = P;
            }
            *(_DWORD *)Pool2 = (v21 - Pool2 - 16) / 24;
            if ( v16 )
              *((_QWORD *)Pool2 + 1) = 1LL;
            a6(a2, *(_QWORD *)(a2 + 32), Pool2, a7);
            return 0LL;
          }
          return 3221225507LL;
        }
        Pool2 = (char *)ExAllocatePool2(66LL, v40, 1147953480LL);
        if ( Pool2 )
          goto LABEL_8;
        return 3221225626LL;
      }
    }
    v34 = P;
    if ( P )
    {
      if ( a10 < v40 )
        return 3221225507LL;
      *P |= 1u;
    }
    else
    {
      v37 = (_DWORD *)ExAllocatePool2(66LL, v40, 1147953480LL);
      v34 = v37;
      if ( !v37 )
        return 3221225626LL;
      *v37 = 0;
    }
    v34[4] = a4;
    v34[15] = a6;
    v34[16] = a7;
    v34[1] = a3;
    v34[2] = 0LL;
    *((_DWORD *)v34 + 10) = a5;
    v34[18] = a1;
    *((_BYTE *)v34 + 152) = v31;
    v35 = *(_BYTE *)(a1 + 440) == 0;
    v34[10] = v34;
    if ( !v35 )
      v32 = (unsigned int)v42;
    *((_DWORD *)v34 + 11) = v32;
    v34[12] = a2;
    v34[13] = *(_QWORD *)(a2 + 32);
    AdapterChannelV2 = HalAllocateAdapterChannelV2(a1, v34 + 6, v32, HalpAllocateAdapterCallbackV2);
    if ( AdapterChannelV2 < 0 )
      ExFreePoolWithTag(v34, 0);
    return (unsigned int)AdapterChannelV2;
  }
  return result;
}
