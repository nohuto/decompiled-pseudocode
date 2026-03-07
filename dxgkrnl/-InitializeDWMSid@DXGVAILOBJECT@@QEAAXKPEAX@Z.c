void __fastcall DXGVAILOBJECT::InitializeDWMSid(DXGVAILOBJECT *this, ULONG a2, void *a3)
{
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  RtlInitializeSid(a3, &IdentifierAuthority, 3u);
  *RtlSubAuthoritySid(a3, 0) = 90;
  *RtlSubAuthoritySid(a3, 1u) = 0;
  *RtlSubAuthoritySid(a3, 2u) = a2;
}
