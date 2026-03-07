__int64 __fastcall GreGetBitmapDimension(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx
  char v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v9);
  LOBYTE(v5) = 5;
  v6 = HmgShareLockCheck(a1, v5);
  v7 = v6;
  if ( v6 )
  {
    if ( (*(_DWORD *)(v6 + 112) & 0x4000000) != 0 )
    {
      if ( a2 )
      {
        v4 = 1;
        *a2 = *(_QWORD *)(v6 + 152);
      }
      else
      {
        EngSetLastError(0x57u);
      }
    }
    DEC_SHARE_REF_CNT(v7);
  }
  else
  {
    EngSetLastError(6u);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v9);
  return v4;
}
