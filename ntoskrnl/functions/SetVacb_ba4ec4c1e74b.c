char __fastcall SetVacb(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char v4; // r8

  v4 = 1;
  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
  {
    v4 = CcSetVacbLargeOffset(a1, a2, a3);
  }
  else if ( a3 < 0xFFFFFFFFFFFFFFFEuLL )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)a2 >> 18)) = a3;
LABEL_7:
    if ( a3 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 548));
    else
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 548));
    return v4;
  }
  if ( a3 != -1LL && a3 != -2LL )
    goto LABEL_7;
  return v4;
}
