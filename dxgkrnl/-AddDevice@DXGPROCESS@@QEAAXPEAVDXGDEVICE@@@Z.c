void __fastcall DXGPROCESS::AddDevice(DXGPROCESS *this, struct DXGDEVICE *a2)
{
  int v3; // edx
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rdx

  v3 = *((_DWORD *)a2 + 116);
  if ( (*((_DWORD *)this + 106) & 1) != 0 )
  {
    if ( v3 == 2 )
      goto LABEL_3;
  }
  else if ( v3 != 2 )
  {
    goto LABEL_3;
  }
  WdLogSingleEntry1(1LL, 6334LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262146,
    -1,
    (__int64)L"(m_bCsrssProcess && pDevice->IsCddDevice()) || (!m_bCsrssProcess && !pDevice->IsCddDevice())",
    6334LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_3:
  v5 = (_QWORD *)(((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
  v6 = (_QWORD *)((char *)this + 320);
  v7 = *((_QWORD *)this + 40);
  if ( *(DXGPROCESS **)(v7 + 8) != (DXGPROCESS *)((char *)this + 320) )
    __fastfail(3u);
  *v5 = v7;
  *(_QWORD *)((((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL)) + 8) = v6;
  *(_QWORD *)(v7 + 8) = v5;
  *v6 = v5;
  *((_BYTE *)this + 336) = 1;
}
