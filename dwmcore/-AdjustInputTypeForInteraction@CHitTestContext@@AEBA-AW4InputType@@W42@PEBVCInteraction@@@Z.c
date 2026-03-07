__int64 __fastcall CHitTestContext::AdjustInputTypeForInteraction(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx

  v3 = a2;
  if ( a2 == 6
    && !(*(unsigned int (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)(a3 + 64) + 88LL))(
          a3 + 64,
          6LL,
          *(unsigned int *)(a1 + 100),
          0LL) )
  {
    return 5;
  }
  return v3;
}
