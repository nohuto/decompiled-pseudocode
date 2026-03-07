char __fastcall KiCommitRescheduleContext(unsigned __int8 *a1, struct _KPRCB *a2, char a3, _QWORD *a4)
{
  char v4; // di
  char v5; // si
  unsigned int v9; // ebp

  v4 = 0;
  v5 = a3 | 2;
  v9 = 0;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
    v5 = a3;
  if ( *a1 )
  {
    do
    {
      v4 |= KiCommitRescheduleContextEntry((__int64)&a1[32 * v9 + 16 + 8 * v9], a2, v5, a4);
      ++v9;
    }
    while ( v9 < *a1 );
  }
  if ( *((_DWORD *)a1 + 2) == 1 )
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 34904LL) + 1LL) = (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 34904LL)
                                                                                              + 1LL)
                                                                                   + 1) < **(_BYTE **)(*((_QWORD *)a1 + 2) + 34904LL)
                                                                 ? *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 34904LL)
                                                                            + 1LL)
                                                                 + 1
                                                                 : 0;
  return v4;
}
