__int64 __fastcall ReferenceCounted::Release(ReferenceCounted *this)
{
  __int64 result; // rax
  __int64 v2; // rdi
  int v3; // edx
  int v4; // ecx
  int v5; // r8d

  LODWORD(result) = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( (_DWORD)result )
  {
    if ( (int)result < 0 )
    {
      v2 = (int)result;
      WdLogSingleEntry1(2LL, (int)result);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v4,
            v3,
            v5,
            0,
            0,
            -1,
            (__int64)L"Client is trying to release a destroyed object (ref count = %I64d)!",
            v2,
            0LL,
            0LL,
            0LL,
            0LL);
      }
      return v2;
    }
    else
    {
      return (int)result;
    }
  }
  else
  {
    if ( this )
      (**(void (__fastcall ***)(ReferenceCounted *, __int64))this)(this, 1LL);
    return 0LL;
  }
}
