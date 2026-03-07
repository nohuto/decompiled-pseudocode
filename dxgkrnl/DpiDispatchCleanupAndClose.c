__int64 __fastcall DpiDispatchCleanupAndClose(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v6; // rbp
  char v7; // r14
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  __int64 v9; // r8
  __int64 v11; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventEnterDpiDispatchClose, a3, a1, 0);
  v6 = *(_QWORD *)(a1 + 64);
  v7 = **(_BYTE **)(a2 + 184);
  v8 = *(__int64 (__fastcall **)(__int64, __int64))(v6 + 96);
  if ( v8 )
  {
    v3 = v8(a1, a2);
  }
  else
  {
    *(_DWORD *)(a2 + 48) = 0;
    IofCompleteRequest((PIRP)a2, 0);
  }
  if ( v7 == 2 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 64), 0LL, 0x20u);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v11) = v3;
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventExitDpiDispatchClose, v9, a1, v11);
  }
  return v3;
}
