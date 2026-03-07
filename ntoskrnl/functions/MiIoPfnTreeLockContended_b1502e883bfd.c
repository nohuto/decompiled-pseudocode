__int64 __fastcall MiIoPfnTreeLockContended(char a1)
{
  int v1; // eax
  __int64 i; // rdx

  v1 = 0;
  if ( !a1 )
    return (*(_DWORD *)(*((_QWORD *)KeGetCurrentPrcb()->MmInternal + 1577) + 384LL) >> 30) & 1;
  if ( !KeNumberNodes )
    return 0LL;
  for ( i = qword_140C65720 + 368; (*(_DWORD *)(*(_QWORD *)i + 384LL) & 0x40000000) == 0; i += 376LL )
  {
    if ( ++v1 >= (unsigned int)(unsigned __int16)KeNumberNodes )
      return 0LL;
  }
  return 1LL;
}
