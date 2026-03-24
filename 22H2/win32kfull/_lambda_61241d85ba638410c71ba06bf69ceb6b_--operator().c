/*
 * XREFs of _lambda_61241d85ba638410c71ba06bf69ceb6b_::operator() @ 0x1C023F548
 * Callers:
 *     NtUserDeleteWindowGroup @ 0x1C01F74A0 (NtUserDeleteWindowGroup.c)
 * Callees:
 *     ??_GCWindowGroup@@QEAAPEAXI@Z @ 0x1C023F758 (--_GCWindowGroup@@QEAAPEAXI@Z.c)
 *     ?RemoveAll@CWindowGroup@@QEAAXXZ @ 0x1C0240254 (-RemoveAll@CWindowGroup@@QEAAXXZ.c)
 */

__int64 __fastcall lambda_61241d85ba638410c71ba06bf69ceb6b_::operator()(__int64 *a1, CWindowGroup *a2)
{
  __int64 v2; // r10
  CWindowGroup *i; // rdx
  unsigned int v5; // edx
  __int64 v7; // [rsp+30h] [rbp+8h]

  v2 = *a1;
  v7 = *((_QWORD *)a2 + 1) & (-1LL << (*(_DWORD *)(*a1 + 20) & 0x1F));
  for ( i = (CWindowGroup *)(*(_QWORD *)(*a1 + 24)
                           + 8LL
                           * ((37
                             * (BYTE6(v7)
                              + 37
                              * (BYTE5(v7)
                               + 37
                               * (BYTE4(v7)
                                + 37
                                * (BYTE3(v7)
                                 + 37 * (BYTE2(v7) + 37 * (BYTE1(v7) + 37 * ((unsigned __int8)v7 + 11623883)))))))
                             + HIBYTE(v7)) & (unsigned int)((*(_DWORD *)(*a1 + 20) >> 5) - 1)));
        (*(_QWORD *)i & 1) == 0;
        i = *(CWindowGroup **)i )
  {
    if ( *(CWindowGroup **)i == a2 )
    {
      *(_QWORD *)i = *(_QWORD *)a2;
      --*(_DWORD *)(v2 + 16);
      *(_QWORD *)a2 |= 0x8000000000000002uLL;
      break;
    }
  }
  CWindowGroup::RemoveAll(a2);
  CWindowGroup::`scalar deleting destructor'(a2, v5);
  return 0LL;
}
