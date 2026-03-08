/*
 * XREFs of MiFreeListPageContentsChanged @ 0x14064B138
 * Callers:
 *     MiZeroPage @ 0x140275060 (MiZeroPage.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetPfnChannel @ 0x140334470 (MiGetPfnChannel.c)
 */

void __fastcall MiFreeListPageContentsChanged(unsigned __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  int v4; // edi
  unsigned int v5; // edi
  int v6; // eax
  unsigned __int64 v7; // rdi
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  volatile signed __int32 *v10; // r8
  int v11; // esi
  unsigned __int64 v12; // rcx

  v2 = 48 * a1;
  v3 = v2 - 0x220000000000LL;
  v4 = *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * (v2 >> 4)) + 2);
  v5 = ((unsigned int)MiGetPfnChannel(v3) << byte_140C6570E) | dword_140C65778 & a1 | (v4 << byte_140C6570D);
  v6 = *(unsigned __int8 *)(v3 + 34) >> 6;
  if ( v6 == 3 )
    v6 = 1;
  v7 = *(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v3 + 40) >> 43) & 0x3FFLL)) + 2504LL)
     + 88 * (v5 + (unsigned __int64)(unsigned int)(dword_140C6577C * v6));
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v7 + 32));
  if ( dword_140C67ACC == 1 )
  {
    v8 = a1 & 0x1F;
    LOBYTE(v9) = 1;
    v10 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140C67B20 + 1) + 4 * (a1 >> 5));
    if ( (unsigned __int64)(v8 + 1) > 0x20 )
    {
      if ( (a1 & 0x1F) == 0 )
        goto LABEL_11;
      v11 = a1 & 0x1F;
      _InterlockedOr(v10++, ((1 << (32 - v11)) - 1) << v8);
      v9 = 1LL - (unsigned int)(32 - v11);
      if ( v9 >= 0x20 )
      {
        v12 = v9 >> 5;
        v9 += -32LL * (v9 >> 5);
        do
        {
          *v10++ = -1;
          --v12;
        }
        while ( v12 );
      }
      if ( v9 )
LABEL_11:
        _InterlockedOr(v10, (1 << v9) - 1);
    }
    else
    {
      _InterlockedOr(v10, 1 << v8);
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 32));
}
