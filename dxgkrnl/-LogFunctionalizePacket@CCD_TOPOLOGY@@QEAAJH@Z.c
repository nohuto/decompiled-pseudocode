__int64 __fastcall CCD_TOPOLOGY::LogFunctionalizePacket(CCD_TOPOLOGY *this, int a2)
{
  unsigned int v4; // esi
  struct _DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET3 *v5; // rax
  unsigned int v6; // edi
  struct _DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET3 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int CurrentProcessSessionId; // eax

  v4 = (*(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) << 6) + 56;
  v5 = (struct _DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET3 *)operator new[](v4, 0x63644356u, 256LL);
  v6 = 0;
  v7 = v5;
  if ( v5 )
  {
    CCD_TOPOLOGY::FillFunctionalizePacket(this, v5, v4);
    *((_DWORD *)v7 + 13) = a2;
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9, v8, v10, v11);
    DxgkWriteDiagEntry(v7, CurrentProcessSessionId);
    operator delete(v7);
  }
  else
  {
    WdLogSingleEntry1(6LL, *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL));
    return (unsigned int)-1073741801;
  }
  return v6;
}
