/*
 * XREFs of HvlpSlowFlushPasidAddressList @ 0x1404F74C8
 * Callers:
 *     HvlSvmFlushPasid @ 0x1404F6B50 (HvlSvmFlushPasid.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 *     HvlpFlushPasidAddressSpace @ 0x1404F73C4 (HvlpFlushPasidAddressSpace.c)
 */

char __fastcall HvlpSlowFlushPasidAddressList(int a1, int a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r9
  __int64 *v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // r8
  __int128 v14; // [rsp+28h] [rbp-30h] BYREF
  __int128 v15; // [rsp+38h] [rbp-20h]

  v4 = a3;
  v14 = 0LL;
  v15 = 0LL;
  v8 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v14, 5, 0LL, 0LL);
  if ( !v8 )
    return HvlpFlushPasidAddressSpace(a1, a2);
  v8[1] = 0LL;
  v11 = v8 + 2;
  *((_DWORD *)v8 + 1) = a1;
  *(_DWORD *)v8 = a2;
  if ( (_DWORD)v4 )
  {
    v12 = a4 - (_QWORD)v11;
    v13 = v4;
    do
    {
      *v11 = *(__int64 *)((char *)v11 + v12) & 0x800 | (*(__int64 *)((char *)v11 + v12)
                                                      + (*(__int64 *)((char *)v11 + v12) & 0xC00));
      ++v11;
      --v13;
    }
    while ( v13 );
  }
  HvcallInitiateHypercall(161, *((__int64 *)&v15 + 1), 0LL, v9);
  return HvlpReleaseHypercallPage((__int64)&v14);
}
