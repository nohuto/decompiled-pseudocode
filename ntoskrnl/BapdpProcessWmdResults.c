/*
 * XREFs of BapdpProcessWmdResults @ 0x140B42B54
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140B44538 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     BapdpQueryData @ 0x140B44D10 (BapdpQueryData.c)
 *     BapdpRegisterWmdResult @ 0x140B94A14 (BapdpRegisterWmdResult.c)
 */

void BapdpProcessWmdResults()
{
  unsigned __int64 v0; // rcx
  __int64 Pool2; // rdi
  unsigned int v2; // ebx
  unsigned int v3; // r15d
  char v4; // r12
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // xmm0_8
  _DWORD v10[4]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v11; // [rsp+40h] [rbp-30h]
  _DWORD v12[4]; // [rsp+50h] [rbp-20h] BYREF

  v12[0] = 1421354843;
  v12[1] = 1195365425;
  v12[2] = 921041836;
  v12[3] = -1550547808;
  v11 = 0LL;
  Pool2 = ExAllocatePool2(64LL, 0x10000uLL, 0x64506142u);
  if ( Pool2 )
  {
    v2 = 0;
    v10[0] = 0x10000;
    v3 = 0;
    v4 = 0;
LABEL_3:
    v6 = *((_QWORD *)&v11 + 1);
    v5 = v11;
    while ( (int)BapdpQueryData(v0, v12, v2, Pool2, v10) >= 0 )
    {
      if ( !v4 )
      {
        v4 = 1;
        v11 = *(_OWORD *)(Pool2 + 28);
LABEL_11:
        v3 = v2++;
        goto LABEL_3;
      }
      v7 = *(_QWORD *)(Pool2 + 28);
      if ( (__int16)v7 > (__int16)v5
        || (__int16)v7 >= (__int16)v5
        && ((v0 = v7 >> 16, SWORD1(v7) > SWORD1(v5))
         || SWORD1(v7) >= SWORD1(v5)
         && ((v0 = HIDWORD(v7), SWORD2(v7) > SWORD2(v5))
          || SWORD2(v7) >= SWORD2(v5)
          && ((v8 = HIWORD(v7), v0 = HIWORD(v5), (__int16)v8 > SHIWORD(v5))
           || (__int16)v8 >= SHIWORD(v5)
           && ((v9 = _mm_srli_si128(*(__m128i *)(Pool2 + 28), 8).m128i_u64[0], (__int16)v9 > (__int16)v6)
            || (__int16)v9 >= (__int16)v6
            && ((v0 = v9 >> 16, SWORD1(v9) > SWORD1(v6))
             || SWORD1(v9) >= SWORD1(v6) && (v0 = HIDWORD(v6), SWORD2(v9) > SWORD2(v6))))))) )
      {
        v11 = *(_OWORD *)(Pool2 + 28);
        goto LABEL_11;
      }
      ++v2;
    }
    if ( v4 == 1 && (v3 == v2 || (int)BapdpQueryData(v0, v12, v3, Pool2, v10) >= 0) )
      BapdpRegisterWmdResult((PVOID)Pool2);
    ExFreePoolWithTag((PVOID)Pool2, 0);
  }
}
