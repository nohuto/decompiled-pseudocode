/*
 * XREFs of ?Create@CSharedReadRemoteAppRenderTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C01F9020
 * Callers:
 *     CreateSharedReadRemoteAppRenderTargetMarshaler @ 0x1C01F9200 (CreateSharedReadRemoteAppRenderTargetMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C002A9C0 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 */

__int64 __fastcall DirectComposition::CSharedReadRemoteAppRenderTargetMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedReadRemoteAppRenderTargetMarshaler **a2)
{
  struct DirectComposition::CSharedReadRemoteAppRenderTargetMarshaler *v4; // rax
  struct DirectComposition::CSharedReadRemoteAppRenderTargetMarshaler *v5; // rbx
  int v6; // edi

  v4 = (struct DirectComposition::CSharedReadRemoteAppRenderTargetMarshaler *)Win32AllocPoolWithQuotaZInit(
                                                                                0x48uLL,
                                                                                0x6E644344u);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x48uLL);
    *((_DWORD *)v5 + 5) = 1;
    *(_QWORD *)v5 = &DirectComposition::CSharedReadInteractionMarshaler::`vftable';
    *((_DWORD *)v5 + 10) = 205;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(struct DirectComposition::CSharedReadRemoteAppRenderTargetMarshaler *, const struct DirectComposition::CSharedSystemResource *))(*(_QWORD *)v5 + 224LL))(
           v5,
           a1);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(struct DirectComposition::CSharedReadRemoteAppRenderTargetMarshaler *, __int64))(*(_QWORD *)v5 + 80LL))(
        v5,
        1LL);
      v5 = 0LL;
    }
  }
  else
  {
    v6 = -1073741801;
  }
  *a2 = v5;
  return (unsigned int)v6;
}
