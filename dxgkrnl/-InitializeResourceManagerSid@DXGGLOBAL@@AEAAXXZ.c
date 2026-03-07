void __fastcall DXGGLOBAL::InitializeResourceManagerSid(DXGGLOBAL *this)
{
  ULONG v2; // eax
  void *v3; // rax
  NTSTATUS v4; // eax
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-18h] BYREF

  v2 = RtlLengthRequiredSid(6u);
  v3 = (void *)operator new[](v2, 0x4B677844u, 256LL);
  *((_QWORD *)this + 38059) = v3;
  if ( v3 )
  {
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
    v4 = RtlInitializeSid(v3, &IdentifierAuthority, 6u);
    if ( v4 < 0 )
    {
      WdLogSingleEntry1(3LL, v4);
      operator delete(*((void **)this + 38059));
      *((_QWORD *)this + 38059) = 0LL;
    }
    else
    {
      *RtlSubAuthoritySid(*((PSID *)this + 38059), 0) = 80;
      *RtlSubAuthoritySid(*((PSID *)this + 38059), 1u) = 1988685059;
      *RtlSubAuthoritySid(*((PSID *)this + 38059), 2u) = 1921232356;
      *RtlSubAuthoritySid(*((PSID *)this + 38059), 3u) = 378231328;
      *RtlSubAuthoritySid(*((PSID *)this + 38059), 4u) = -1590824699;
      *RtlSubAuthoritySid(*((PSID *)this + 38059), 5u) = 890457928;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, 7011LL);
  }
}
