__int64 __fastcall MiSplitPfnBitMapsForPartitionHierarchy(__int64 a1)
{
  __int64 result; // rax

  while ( 1 )
  {
    result = MiSplitPfnBitMaps();
    if ( !(_DWORD)result )
      break;
    if ( (unsigned __int16 *)a1 == MiSystemPartition )
      return 1LL;
    a1 = **(_QWORD **)(*(_QWORD *)(a1 + 200) + 64LL);
  }
  return result;
}
