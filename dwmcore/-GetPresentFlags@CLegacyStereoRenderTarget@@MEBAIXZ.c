__int64 __fastcall CLegacyStereoRenderTarget::GetPresentFlags(CLegacyStereoRenderTarget *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_BYTE *)this + 18712) )
  {
    if ( !*(_DWORD *)(*((_QWORD *)this + 2) + 436LL) )
      return 32LL;
  }
  return result;
}
