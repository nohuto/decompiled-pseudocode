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
  __int64 *v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r8
  PHYSICAL_ADDRESS v13[6]; // [rsp+28h] [rbp-30h] BYREF

  v4 = a3;
  memset(v13, 0, 32);
  v8 = HvlpAcquireHypercallPage(v13, 5, 0LL, 0LL);
  if ( !v8 )
    return HvlpFlushPasidAddressSpace(a1, a2);
  v8[1] = 0LL;
  v10 = v8 + 2;
  *((_DWORD *)v8 + 1) = a1;
  *(_DWORD *)v8 = a2;
  if ( (_DWORD)v4 )
  {
    v11 = a4 - (_QWORD)v10;
    v12 = v4;
    do
    {
      *v10 = *(__int64 *)((char *)v10 + v11) & 0x800 | (*(__int64 *)((char *)v10 + v11)
                                                      + (*(__int64 *)((char *)v10 + v11) & 0xC00));
      ++v10;
      --v12;
    }
    while ( v12 );
  }
  HvcallInitiateHypercall(161);
  return HvlpReleaseHypercallPage((__int64)v13);
}
