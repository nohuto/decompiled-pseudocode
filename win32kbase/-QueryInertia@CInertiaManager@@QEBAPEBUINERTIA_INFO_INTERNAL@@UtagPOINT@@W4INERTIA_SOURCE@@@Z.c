__int64 __fastcall CInertiaManager::QueryInertia(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // edi
  unsigned __int64 v7; // rdx
  CInertiaManager *v8; // rcx
  int v9; // ebp
  __int64 v10; // rsi
  __int64 v12[16]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = *(_DWORD *)(a1 + 192);
  if ( (v3 & 1) != 0 && (v7 = *(_QWORD *)(a1 + 128)) != 0 )
  {
    CInputDest::CInputDest(v12, v7, 2 - ((v3 & 0x20) != 0), 1);
    LOBYTE(v3) = CInertiaManager::ValidateInertiaDest(v8, (const struct CInputDest *)v12);
    if ( (_BYTE)v3 && (*(_DWORD *)(a1 + 192) & 2) != 0 )
      LOBYTE(v3) = CInputDest::HasDelegationThread((CInputDest *)v12);
    CInputDest::SetEmpty((CInputDest *)v12);
  }
  else
  {
    v3 = (*(_DWORD *)(a1 + 192) & 0x10u) >> 4;
  }
  if ( (_BYTE)v3 && (v9 = *(_DWORD *)(a1 + 32) & a3, LOBYTE(v3) = v9 != 0, v9) )
  {
    v10 = a1 + 8;
    LOBYTE(v3) = (unsigned int)ApiSetEditionQueryInertiaWorker(a2, v10) != 0;
  }
  else
  {
    v10 = a1 + 8;
  }
  return v10 & -(__int64)((_BYTE)v3 != 0);
}
