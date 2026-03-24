/*
 * XREFs of ?Create@CSharedWriteRemoteAppRenderTargetMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C01F90D4
 * Callers:
 *     CreateSharedWriteRemoteAppRenderTargetMarshaler @ 0x1C01F9240 (CreateSharedWriteRemoteAppRenderTargetMarshaler.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C002A9C0 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 */

__int64 __fastcall DirectComposition::CSharedWriteRemoteAppRenderTargetMarshaler::Create(
        const struct DirectComposition::CSharedSystemResource *a1,
        struct DirectComposition::CSharedWriteRemoteAppRenderTargetMarshaler **a2)
{
  struct DirectComposition::CSharedWriteRemoteAppRenderTargetMarshaler *v4; // rax
  struct DirectComposition::CSharedWriteRemoteAppRenderTargetMarshaler *v5; // rbx
  NTSTATUS v6; // edi
  __int64 result; // rax

  v4 = (struct DirectComposition::CSharedWriteRemoteAppRenderTargetMarshaler *)Win32AllocPoolWithQuotaZInit(
                                                                                 0x68uLL,
                                                                                 0x6F644344u);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x68uLL);
    *((_DWORD *)v5 + 5) = 1;
    *(_QWORD *)v5 = &DirectComposition::CSharedWriteRemoteAppRenderTargetMarshaler::`vftable';
    *((_DWORD *)v5 + 10) = 142;
    *((_DWORD *)v5 + 14) = 3;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = ObReferenceObjectByPointer((char *)a1 - 24, 3u, ExCompositionObjectType, 0);
    if ( v6 < 0 )
    {
      (*(void (__fastcall **)(struct DirectComposition::CSharedWriteRemoteAppRenderTargetMarshaler *, __int64))(*(_QWORD *)v5 + 80LL))(
        v5,
        1LL);
      v5 = 0LL;
    }
    else
    {
      *((_QWORD *)v5 + 12) = a1;
    }
  }
  else
  {
    v6 = -1073741801;
  }
  result = (unsigned int)v6;
  *a2 = v5;
  return result;
}
