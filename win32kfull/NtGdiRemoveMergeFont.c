__int64 __fastcall NtGdiRemoveMergeFont(HDC a1, char a2)
{
  unsigned int v4; // ebx
  _QWORD v5[4]; // [rsp+28h] [rbp-20h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v5, a1);
  if ( v5[0] )
  {
    if ( (*(_DWORD *)(v5[0] + 36LL) & 1) != 0 )
    {
      v4 = 0;
    }
    else
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v4 = XDCOBJ::bRemoveMergeFont(v5);
    }
    DCOBJ::~DCOBJ((DCOBJ *)v5);
    return v4;
  }
  else
  {
    DCOBJ::~DCOBJ((DCOBJ *)v5);
    return 0LL;
  }
}
