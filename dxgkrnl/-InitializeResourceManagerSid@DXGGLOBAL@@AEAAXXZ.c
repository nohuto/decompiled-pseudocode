/*
 * XREFs of ?InitializeResourceManagerSid@DXGGLOBAL@@AEAAXXZ @ 0x1C0219970
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0205878 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

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
