__int64 __fastcall anonymous_namespace_::NotifyPartExit(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 320) & 1) != 0 )
  {
    result = anonymous_namespace_::NotifyShellSimplePayload(
               0,
               11,
               *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 192LL) << 16,
               0,
               0);
    *(_DWORD *)(a1 + 320) &= ~1u;
  }
  return result;
}
