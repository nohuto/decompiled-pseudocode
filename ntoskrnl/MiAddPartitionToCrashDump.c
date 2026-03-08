/*
 * XREFs of MiAddPartitionToCrashDump @ 0x14062D1FC
 * Callers:
 *     MiAddPartitionDataToCrashDump @ 0x14062CFF0 (MiAddPartitionDataToCrashDump.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1403471E0 (MmIsAddressValidEx.c)
 *     MiAddUnicodeStringToCrashDump @ 0x14062D4C4 (MiAddUnicodeStringToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x14062DD30 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall MiAddPartitionToCrashDump(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int16 *v2; // rbx
  __int64 v4; // r8
  __int64 result; // rax
  int v6; // r14d
  unsigned int v7; // ecx
  unsigned int v8; // edx
  __int64 *v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  if ( a2 == MiSystemPartition )
  {
    result = MmAddRangeToCrashDump(a1, a2, 22016LL);
    if ( (int)result < 0 )
      return result;
    a2 = (unsigned __int16 *)*((_QWORD *)v2 + 2);
    v4 = 25408LL * (unsigned __int16)KeNumberNodes;
  }
  else
  {
    v4 = qword_140C67A58;
    if ( !qword_140C67A58 )
      return 0LL;
  }
  v6 = MmAddRangeToCrashDump(a1, a2, v4);
  if ( v6 >= 0 )
  {
    v7 = *((_DWORD *)v2 + 4262);
    v8 = 16;
    if ( v7 > 0x10 || (v8 = *((_DWORD *)v2 + 4262), v7) )
    {
      v9 = (__int64 *)(v2 + 8528);
      v10 = v8;
      do
      {
        v11 = *v9;
        if ( *v9 )
        {
          if ( MmIsAddressValidEx(*v9) )
          {
            MmAddRangeToCrashDump(a1, v11, 288LL);
            MmAddRangeToCrashDump(a1, *(_QWORD *)(v11 + 56), 216LL);
            v12 = *(_OWORD *)(v11 + 96);
            MiAddUnicodeStringToCrashDump(a1, &v12);
          }
        }
        ++v9;
        --v10;
      }
      while ( v10 );
    }
  }
  return (unsigned int)v6;
}
