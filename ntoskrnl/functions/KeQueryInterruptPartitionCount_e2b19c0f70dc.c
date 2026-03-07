__int64 __fastcall KeQueryInterruptPartitionCount(__int16 a1, _DWORD *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( KiIntPartInitialized )
  {
    if ( !KiInterruptPartitions || a1 )
      return (unsigned int)-1073741637;
    else
      *a2 = *(unsigned __int8 *)(KiInterruptPartitions + 2);
  }
  else
  {
    *a2 = 0;
    return 259;
  }
  return v2;
}
