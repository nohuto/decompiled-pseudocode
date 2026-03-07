__int64 __fastcall CLegacyRenderTarget::GetSyncLockGroupId(CLegacyRenderTarget *this)
{
  __int64 result; // rax

  result = *((_QWORD *)this + 2303);
  if ( result )
    return *(unsigned int *)(result + 8);
  return result;
}
