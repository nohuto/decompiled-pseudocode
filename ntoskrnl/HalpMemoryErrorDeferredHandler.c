__int64 (*__fastcall HalpMemoryErrorDeferredHandler(_QWORD *a1, __int64 a2, __int64 a3))(void)
{
  __int64 (*result)(void); // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // r8
  char v10; // al

  *((_BYTE *)a1 + 13) &= 0xFu;
  if ( *((_BYTE *)a1 + 14) )
  {
    result = (__int64 (*)(void))WheaAttemptClearPoison(*a1);
    v7 = (int)result;
  }
  else
  {
    v8 = *a1 >> 12;
    LOBYTE(a3) = 1;
    v7 = WheaAttemptPhysicalPageOffline(v8, 0LL, a3, 0LL);
    result = (__int64 (*)(void))WheaExecuteRowFailureCheck(v8, *a1, v9, 0LL);
  }
  if ( HalpHvWheaEnlightenedCpuManager )
  {
    v10 = 0;
    if ( v7 || WheapPolicyNotifyAllOfflines )
    {
      if ( WheapPolicyNotifyAllOfflines )
      {
        v10 = 64;
        if ( !v7 )
          v10 = -64;
      }
      if ( qword_140C621B8 )
      {
        LOBYTE(v5) = v10;
        LOBYTE(v6) = 1;
        ((void (__fastcall *)(_QWORD *, __int64, __int64))qword_140C621B8)(a1, v5, v6);
      }
    }
    if ( a1[2] )
    {
      result = qword_140C621A8;
      if ( qword_140C621A8 )
        return (__int64 (*)(void))qword_140C621A8();
    }
    else
    {
      return (__int64 (*)(void))HalpHvSetMachineCheckRecoveryState(2);
    }
  }
  return result;
}
