__int64 __fastcall CGestureTargetingManager::ProcessHandledInteractionsWalk(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  int v5; // ebx
  __int64 i; // rax
  int v11; // eax
  __int64 v12; // rsi

  v5 = 0;
  if ( a2 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 184LL))(a2, a3, 0LL);
    for ( i = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a2);
          ;
          i = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, v12) )
    {
      v12 = i;
      if ( !i )
        break;
      v11 = CGestureTargetingManager::ProcessHandledInteractionsWalk(a1, i, a3, a4, a5);
      if ( v5 >= 0 )
        v5 = v11;
    }
  }
  return (unsigned int)v5;
}
