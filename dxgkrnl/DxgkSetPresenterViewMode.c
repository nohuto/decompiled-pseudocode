bool __fastcall DxgkSetPresenterViewMode(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // edi
  int v3; // esi
  __int64 v4; // rcx
  __int64 v5; // r8
  bool v6; // zf
  bool v7; // bl
  __int64 v9; // [rsp+20h] [rbp-18h]

  v2 = a2;
  v3 = a1;
  if ( a2 )
  {
    v6 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 338) == 0;
  }
  else
  {
    v5 = (unsigned int)_InterlockedExchange((volatile __int32 *)DXGGLOBAL::GetGlobal() + 338, a1 != 0);
    v6 = (_DWORD)v5 == 0;
  }
  v7 = !v6;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v9) = v2;
    McTemplateK0tt_EtwWriteTransfer(v4, &EventDxgkSetPresenterViewMode, v5, v3, v9);
  }
  return v7;
}
