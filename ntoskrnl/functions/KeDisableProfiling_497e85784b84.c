__int64 __fastcall KeDisableProfiling(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  void *v5; // rcx

  result = 3221226242LL;
  v4 = *(_QWORD *)(a1 + 360);
  if ( v4 )
  {
    if ( *(_QWORD *)(v4 + 8) == a2 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)a1, 0x11u);
      _interlockedbittestandreset((volatile signed __int32 *)a1, 0x10u);
      v5 = *(void **)(a1 + 360);
      *(_QWORD *)(a1 + 360) = 0LL;
      ExFreePoolWithTag(v5, 0);
      return 0LL;
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}
