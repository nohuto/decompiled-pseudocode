int __fastcall CLegacyRotationMgr::QueryAutoRotationState(CLegacyRotationMgr *a1)
{
  int result; // eax

  if ( dword_1C035D5EC )
    CLegacyRotationMgr::CacheRotationInfo(a1);
  result = gProtocolType != 0 ? 4 : 0;
  if ( !dword_1C035D5D8 )
    result |= 1u;
  if ( dword_1C035D5F4 || dword_1C035D5F0 )
    result |= 8u;
  if ( !dword_1C035D5DC )
    result |= 0x10u;
  if ( dword_1C035D5E0 )
    result |= 0x40u;
  if ( dword_1C035D5E4 )
    result |= 0x80u;
  if ( dword_1C035D5EC )
    return result | 0x20;
  return result;
}
