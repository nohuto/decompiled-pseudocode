/*
 * XREFs of _anonymous_namespace_::NotifyPartExit @ 0x1C0018EE0
 * Callers:
 *     ?HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x1C0018DD4 (-HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C021D458 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

__int64 __fastcall anonymous_namespace_::NotifyPartExit(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 320) & 1) != 0 )
  {
    result = anonymous_namespace_::NotifyShellSimplePayload(
               0,
               11,
               *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 200LL) << 16,
               0,
               0);
    *(_DWORD *)(a1 + 320) &= ~1u;
  }
  return result;
}
