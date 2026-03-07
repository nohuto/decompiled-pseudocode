void __fastcall auto_rc<DMMVIDPNTARGETMODESET>::reset(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rsi
  int v8; // edx
  int v9; // ecx
  int v10; // r8d

  v4 = *a1;
  if ( v4 && a2 != v4 )
  {
    v5 = v4 + 88;
    v6 = _InterlockedDecrement((volatile signed __int32 *)(v5 + 8));
    if ( v6 )
    {
      if ( v6 < 0 )
      {
        v7 = v6;
        WdLogSingleEntry1(2LL, v6);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v9,
              v8,
              v10,
              0,
              0,
              -1,
              (__int64)L"Client is trying to release a destroyed object (ref count = %I64d)!",
              v7,
              0LL,
              0LL,
              0LL,
              0LL);
        }
      }
    }
    else if ( v5 )
    {
      (**(void (__fastcall ***)(__int64, __int64))v5)(v5, 1LL);
    }
  }
  *a1 = a2;
}
