__int64 __fastcall DpiDxgkDdiRestoreMemoryForHotUpdate(
        struct _FDO_CONTEXT *a1,
        const struct _DXGKARG_RESTOREMEMORYFORHOTUPDATE *a2,
        __int64 a3)
{
  unsigned int v5; // eax
  __int64 v6; // r8
  unsigned int v7; // edi
  __int64 v9; // [rsp+20h] [rbp-18h]
  int v10; // [rsp+20h] [rbp-18h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v10 = 0;
    McTemplateK0pt_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &EventEnterDdiRestoreMemoryForHotUpdate,
      a3,
      *((_QWORD *)a1 + 6),
      v10);
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_RESTOREMEMORYFORHOTUPDATE *))(*((_QWORD *)a1 + 5)
                                                                                            + 1336LL))(
         *((_QWORD *)a1 + 6),
         a2);
  v7 = v5;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v9) = v5;
    McTemplateK0pt_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &EventExitDdiRestoreMemoryForHotUpdate,
      v6,
      *((_QWORD *)a1 + 6),
      v9);
  }
  return v7;
}
