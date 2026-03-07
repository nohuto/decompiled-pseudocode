void __fastcall OUTPUTDUPL_CONTEXT::ReleaseSessionReference(OUTPUTDUPL_MGR **this, struct DXGSESSIONDATA *a2)
{
  struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *v2; // rbx
  __int64 v4; // rdi
  const wchar_t *v5; // r9
  OUTPUTDUPL_SESSION_MGR *v6; // rsi
  __int64 v7; // rdx
  __int128 v8; // [rsp+50h] [rbp-28h] BYREF
  __int64 v9; // [rsp+60h] [rbp-18h]
  char v10; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( !a2 )
  {
    v4 = 2538LL;
    WdLogSingleEntry1(2LL, 2538LL);
    v5 = L"DXGSESSIONDATA is NULL";
LABEL_5:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v5, v4, 0LL, 0LL, 0LL, 0LL);
    return;
  }
  v6 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)a2 + 1);
  if ( !v6 )
  {
    v4 = 2545LL;
    WdLogSingleEntry1(2LL, 2545LL);
    v5 = L"OUTPUTDUPL_SESSION_MGR is NULL";
    goto LABEL_5;
  }
  v8 = 0LL;
  v9 = 0LL;
  if ( *((_DWORD *)this + 81) )
  {
    if ( !*((_DWORD *)this + 82) )
    {
      v2 = (struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *)&v8;
      v7 = **(_QWORD **)&OUTPUTDUPL_MGR::GetAdapterLuid(this[37], (__int64)&v10);
      LODWORD(v9) = *((_DWORD *)this + 4);
      *(_QWORD *)&v8 = this[4];
      *((_QWORD *)&v8 + 1) = v7;
    }
  }
  OUTPUTDUPL_SESSION_MGR::Release(v6, this[3], v2);
}
