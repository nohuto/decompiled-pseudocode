/*
 * XREFs of MiCreateForkWsle @ 0x140661588
 * Callers:
 *     MiCreateForkWsle @ 0x140661588 (MiCreateForkWsle.c)
 *     MiCreateForkWsles @ 0x140661690 (MiCreateForkWsles.c)
 * Callees:
 *     MiAllocateWsle @ 0x14026D1B0 (MiAllocateWsle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCreateForkWsle @ 0x140661588 (MiCreateForkWsle.c)
 */

void __fastcall MiCreateForkWsle(__int64 a1, char a2, unsigned __int64 a3, unsigned __int64 a4, int a5)
{
  int v5; // esi
  unsigned __int64 v7; // rbx
  __int64 v10; // rax
  int v11; // edx
  _QWORD *v12; // r8
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  if ( a3 <= a4 )
  {
    v5 = a5;
    v7 = a3;
    do
    {
      v10 = MI_READ_PTE_LOCK_FREE(v7);
      v13 = v10;
      if ( (v10 & 1) != 0 && (v10 & 0x80u) == 0LL )
      {
        if ( v5 > 1 )
        {
          LOBYTE(v11) = a2;
          MiCreateForkWsle(a1, v11, (__int64)(v7 << 25) >> 16, ((__int64)(v7 << 25) >> 16) + 4088, v5 - 1);
        }
        v12 = (_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v13) >> 12) & 0xFFFFFFFFFFLL)
                       - 0x220000000000LL);
        if ( (*(_BYTE *)v12 & 1) == 0 )
          MiAllocateWsle(a1, (unsigned __int64 *)v7, v12, 0, ZeroPte, 0, 0LL);
      }
      v7 += 8LL;
    }
    while ( v7 <= a4 );
  }
}
