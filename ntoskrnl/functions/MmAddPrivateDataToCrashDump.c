__int64 __fastcall MmAddPrivateDataToCrashDump(__int64 (__fastcall **a1)(_QWORD, _QWORD, __int64), char a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 *v6; // rsi
  __int64 v7; // rbp
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 *v11; // rsi
  int v12; // eax
  int v13; // eax

  v2 = 0;
  if ( (a2 & 1) != 0 )
  {
    v5 = MmAddRangeToCrashDump(a1, MmPfnDatabase, 48 * (qword_140C65820 + 1));
    if ( v5 < 0 )
      v2 = v5;
  }
  if ( (a2 & 2) != 0 && (_DWORD)KeNumberProcessors_0 )
  {
    v6 = KiProcessorBlock;
    v7 = (unsigned int)KeNumberProcessors_0;
    do
    {
      v8 = (*a1)(a1, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v6++ + 8) + 184LL) + 40LL) >> 12, 1LL);
      if ( v8 < 0 )
        v2 = v8;
      --v7;
    }
    while ( v7 );
  }
  if ( (a2 & 4) != 0 )
  {
    v9 = MmAddRangeToCrashDump(a1, PsNtosImageBase, PsNtosImageEnd - PsNtosImageBase);
    if ( v9 < 0 )
      v2 = v9;
  }
  if ( (a2 & 8) != 0 )
  {
    v10 = MmAddRangeToCrashDump(a1, PsHalImageBase, PsHalImageEnd - PsHalImageBase);
    if ( v10 < 0 )
      v2 = v10;
  }
  if ( (a2 & 0x10) != 0 )
  {
    v11 = (__int64 *)qword_140C69580;
    while ( v11 != &qword_140C69580 )
    {
      v12 = MmAddRangeToCrashDump(a1, v11 - 15, 832LL);
      v11 = (__int64 *)*v11;
      if ( v12 < 0 )
        v2 = v12;
    }
  }
  if ( (a2 & 0x20) != 0 )
  {
    v13 = MiAddPartitionDataToCrashDump((__int64)a1);
    if ( v13 < 0 )
      return (unsigned int)v13;
  }
  return v2;
}
