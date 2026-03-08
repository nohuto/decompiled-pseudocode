/*
 * XREFs of MiLargePagePromote @ 0x14034EC80
 * Callers:
 *     MiCoalesceFreeLargePages @ 0x1402C89C0 (MiCoalesceFreeLargePages.c)
 *     MiCoalesceActivePagesIntoFree @ 0x14065AF0C (MiCoalesceActivePagesIntoFree.c)
 * Callees:
 *     MiDetermineCoalescedLargePageHeatState @ 0x1402DD078 (MiDetermineCoalescedLargePageHeatState.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MiInsertLargePageInNodeList @ 0x14031C970 (MiInsertLargePageInNodeList.c)
 *     MiUpdatePageFileHighInPte @ 0x14032F49C (MiUpdatePageFileHighInPte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkNodeLargePageHelper @ 0x14034FE70 (MiUnlinkNodeLargePageHelper.c)
 *     MiPageToChannel @ 0x140370C10 (MiPageToChannel.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall MiLargePagePromote(__int64 a1, int a2, __int64 a3, int a4, _DWORD *a5)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r13
  int v9; // esi
  unsigned int v10; // ebp
  unsigned __int64 v11; // r15
  __int64 v12; // rdi
  __int64 v13; // r12
  __int64 v14; // rax
  unsigned __int64 v15; // r8
  unsigned int v16; // edi
  unsigned __int64 v17; // r12
  __int64 v18; // r15
  int v19; // eax
  unsigned __int64 v20; // rax
  char v21; // cl
  char v22; // al
  unsigned __int64 v23; // rbx
  int v24; // ebp
  __int64 v25; // rdx
  __int64 v26; // r11
  char v28; // [rsp+30h] [rbp-98h]
  __int64 v29; // [rsp+38h] [rbp-90h]
  unsigned __int64 v30; // [rsp+40h] [rbp-88h]
  __int64 v32; // [rsp+60h] [rbp-68h] BYREF
  int v33; // [rsp+68h] [rbp-60h]
  int v34; // [rsp+6Ch] [rbp-5Ch]
  __int16 v35; // [rsp+70h] [rbp-58h]
  __int64 v36; // [rsp+72h] [rbp-56h]
  int v37; // [rsp+7Ah] [rbp-4Eh]
  __int16 v38; // [rsp+7Eh] [rbp-4Ah]

  v28 = a2;
  *a5 = 0;
  v6 = 48 * a1;
  v7 = v6 - 0x220000000000LL;
  v8 = 3 - (*(_BYTE *)(v6 - 0x220000000000LL + 36) & 3u);
  v9 = 0;
  v10 = 0;
  v11 = MiLargePageSizes[v8];
  v30 = MiLargePageSizes[a2];
  v12 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v6 - 0x220000000000LL + 40) >> 43) & 0x3FFLL));
  v13 = 25408LL * *((unsigned int *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * (v6 >> 4)) + 2);
  v29 = v13 + *(_QWORD *)(v12 + 16);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v29 + 23104));
  if ( !*(_QWORD *)(v29 + 23136) )
  {
    v14 = *(_QWORD *)(v12 + 16);
    v15 = v30;
    v16 = 0;
    ++*(_DWORD *)(v13 + v14 + 23004);
    v17 = v30 / v11;
    if ( v30 / v11 )
    {
      v18 = 48 * v11;
      do
      {
        if ( !a4 )
        {
          if ( qword_140C65750 )
            v19 = MiPageToChannel(0xAAAAAAAAAAAAAAABuLL * ((v7 + 0x220000000000LL) >> 4));
          else
            v19 = 0;
          MiUnlinkNodeLargePageHelper(v29, v7, v8, v19, 66);
        }
        v20 = *(_QWORD *)(v7 + 16);
        v10 |= ((v20 & 0x3E0) != 0) + 1;
        if ( qword_140C657C0 && (v20 & 0x10) == 0 )
          v20 &= ~qword_140C657C0;
        if ( HIDWORD(v20) == 4294967293 )
          v9 |= 1u;
        else
          v9 |= 2u;
        v21 = *(_BYTE *)(v7 + 36) & 0xFC;
        if ( v16 )
        {
          v22 = *(_BYTE *)(v7 + 34);
          *(_QWORD *)(v7 + 8) = 0LL;
          *(_BYTE *)(v7 + 36) = v21;
          *(_BYTE *)(v7 + 34) = v22 & 0xF8 | 6;
        }
        else
        {
          *(_BYTE *)(v7 + 36) = v21 | ~v28 & 3;
        }
        ++v16;
        v7 += v18;
      }
      while ( v16 < v17 );
      v15 = v30;
    }
    v23 = -48LL * v15 + v7;
    v24 = (v10 >> 1) & 1;
    if ( a4 )
    {
      v24 = 1;
    }
    else if ( !MiDetermineCoalescedLargePageHeatState() )
    {
      v25 = 4294967293LL;
      goto LABEL_20;
    }
    v25 = 0LL;
LABEL_20:
    *(_QWORD *)(v23 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v23 + 16), v25);
    v32 = a1;
    v36 = v26;
    v37 = v26;
    v38 = v26;
    v33 = v24;
    v34 = 6;
    v35 = 258;
    MiInsertLargePageInNodeList((__int64)&v32);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v29 + 23104));
    return 1LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v29 + 23104));
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 0LL;
}
