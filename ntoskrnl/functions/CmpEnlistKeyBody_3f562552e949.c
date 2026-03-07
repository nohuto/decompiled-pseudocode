__int64 __fastcall CmpEnlistKeyBody(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  unsigned int v5; // ebx

  v5 = 0;
  if ( (*(_DWORD *)(a2 + 184) & 0x400000) == 0 )
  {
    while ( (int)EnlistKeyBodyWithKCB(a1, (unsigned int)(a4 != 0) + 1) < 0 )
    {
      if ( (unsigned __int8)CmpTryConvertKcbLockSharedToExclusive(*(_QWORD *)(a1 + 8)) )
      {
        a4 = 1;
      }
      else
      {
        CmpUnlockKcb(*(_QWORD *)(a1 + 8));
        CmpLockKcbExclusive(*(_QWORD *)(a1 + 8));
        a4 = 1;
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) & 0x20000) != 0 || CmpIsKeyStackDeleted(a5) )
          return (unsigned int)-1073741444;
      }
    }
  }
  return v5;
}
