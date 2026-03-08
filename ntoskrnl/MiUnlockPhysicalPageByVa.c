/*
 * XREFs of MiUnlockPhysicalPageByVa @ 0x14061A990
 * Callers:
 *     <none>
 * Callees:
 *     MiProbeUnlockPage @ 0x14027C720 (MiProbeUnlockPage.c)
 *     MiReleaseWalkLocks @ 0x1402D45CC (MiReleaseWalkLocks.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTableCharges @ 0x140345720 (MiUnlockPageTableCharges.c)
 *     MiGetLeafVa @ 0x140346C50 (MiGetLeafVa.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlockPhysicalPageByVa(_QWORD *a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  char v8; // di
  __int64 v9; // rsi
  unsigned __int64 v10; // r9
  unsigned __int64 LeafVa; // r10
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  unsigned __int64 v18; // r9
  int v19; // edi
  __int64 v20; // rbx
  __int64 v21; // r15
  __int64 v22; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v23; // [rsp+88h] [rbp+10h]
  ULONG_PTR BugCheckParameter4; // [rsp+98h] [rbp+20h] BYREF

  v23 = a2;
  v6 = a1[21];
  v7 = MI_READ_PTE_LOCK_FREE(a2);
  v8 = v7;
  v22 = v7;
  v9 = 1LL;
  if ( (v7 & 1) == 0 )
  {
    if ( (v7 & 0x400) != 0 )
    {
      MiReleaseWalkLocks((__int64)a1);
      v22 = (__int64)(a2 << 25) >> 16;
      return 2LL;
    }
    v18 = v7;
    if ( qword_140C657C0 )
    {
      if ( (v7 & 0x10) != 0 )
        v18 = v7 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v18 = v7 & ~qword_140C657C0;
    }
    v10 = (v18 >> 12) & 0xFFFFFFFFFFLL;
    goto LABEL_18;
  }
  v10 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v22) >> 12) & 0xFFFFFFFFFFLL;
  if ( a3 < 1 )
  {
LABEL_18:
    v19 = *(_DWORD *)v6 != 0 ? 0x80 : 0;
    if ( v9 )
    {
      v20 = 48 * v10 - 0x220000000000LL;
      v21 = v9;
      do
      {
        LODWORD(v22) = 1;
        BugCheckParameter4 = 0x3FFFFFFFFFLL;
        MiProbeUnlockPage(v20, v19 + 256, (__int64 *)&BugCheckParameter4, (int *)&v22);
        if ( BugCheckParameter4 != 0x3FFFFFFFFFLL )
          MiUnlockPageTableCharges(48 * BugCheckParameter4 - 0x220000000000LL, v22);
        v20 += 48LL;
        --v21;
      }
      while ( v21 );
    }
    *(_QWORD *)(v6 + 8) += v9;
    return 0LL;
  }
  if ( v8 < 0 )
  {
    LeafVa = MiGetLeafVa(a2);
    v12 = LeafVa;
    if ( a1[4] > LeafVa )
      v12 = a1[4];
    v13 = 1LL;
    v14 = v12 >> 12;
    do
    {
      v10 += v13 * (v14 & 0x1FF);
      v14 >>= 9;
      v13 <<= 9;
      --a3;
    }
    while ( a3 );
    v15 = LeafVa + (v13 << 12);
    v16 = a1[5] + 1LL - v12;
    if ( a1[5] + 1LL >= v15 )
      v16 = v15 - v12;
    v9 = v16 >> 12;
    goto LABEL_18;
  }
  return 0LL;
}
