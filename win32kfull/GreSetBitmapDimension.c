__int64 __fastcall GreSetBitmapDimension(__int64 a1, unsigned int a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rax
  _BYTE v12[8]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-10h]

  v8 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v12);
  LOBYTE(v9) = 5;
  v10 = HmgShareLockCheck(a1, v9);
  if ( v10 )
  {
    if ( (*(_DWORD *)(v10 + 112) & 0x4000000) != 0 )
    {
      if ( a4 )
        *a4 = *(_QWORD *)(v10 + 152);
      v13 = __PAIR64__(a3, a2);
      v8 = 1;
      *(_QWORD *)(v10 + 152) = __PAIR64__(a3, a2);
    }
    DEC_SHARE_REF_CNT(v10);
  }
  else
  {
    EngSetLastError(6u);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v12);
  return v8;
}
