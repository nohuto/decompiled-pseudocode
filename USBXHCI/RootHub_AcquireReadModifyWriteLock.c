__int64 __fastcall RootHub_AcquireReadModifyWriteLock(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  char v4; // di
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rcx

  v2 = a2;
  v4 = 0;
  if ( KeGetCurrentIrql() == 2 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)(v7 + 601) )
    {
      Controller_LowerAndTrackIrql((_QWORD *)v7);
      v4 = 1;
    }
  }
  v5 = *(_QWORD *)(a1 + 48) + 120 * v2;
  result = DynamicLock_Acquire(*(_QWORD *)(v5 + 24));
  *(_BYTE *)(v5 + 32) = v4;
  return result;
}
