__int64 __fastcall DpiDxgkDdiSaveMemoryForHotUpdate(
        struct _FDO_CONTEXT *a1,
        const struct _DXGKARG_SAVEMEMORYFORHOTUPDATE *a2,
        __int64 a3)
{
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // edi
  __int64 v10; // [rsp+20h] [rbp-18h]
  int v11; // [rsp+20h] [rbp-18h]
  __int64 v12; // [rsp+28h] [rbp-10h]
  int v13; // [rsp+28h] [rbp-10h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v13 = 0;
    v11 = *(_DWORD *)a2;
    McTemplateK0pqq_EtwWriteTransfer(
      (__int64)a1,
      &EventEnterDdiSaveMemoryForHotUpdate,
      a3,
      *((_QWORD *)a1 + 6),
      v11,
      v13);
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SAVEMEMORYFORHOTUPDATE *))(*((_QWORD *)a1 + 5) + 1328LL))(
         *((_QWORD *)a1 + 6),
         a2);
  v8 = v5;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v12) = v5;
    LODWORD(v10) = 0;
    McTemplateK0pqq_EtwWriteTransfer(v6, &EventExitDdiSaveMemoryForHotUpdate, v7, *((_QWORD *)a1 + 6), v10, v12);
  }
  return v8;
}
