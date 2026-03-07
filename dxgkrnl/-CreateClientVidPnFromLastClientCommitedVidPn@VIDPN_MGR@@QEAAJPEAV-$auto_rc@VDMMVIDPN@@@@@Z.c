__int64 __fastcall VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(VIDPN_MGR *this, __int64 *a2)
{
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  struct VIDPN_MGR *v5; // rcx
  const struct DMMVIDPN *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  int ClientVidPn; // eax
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF
  const struct DMMVIDPN *v13; // [rsp+40h] [rbp+18h] BYREF

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  auto_rc<DMMVIDPN>::reset(a2, 0LL);
  ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(this);
  v12 = 0LL;
  v6 = ClientCommittedVidPnRef;
  v13 = ClientCommittedVidPnRef;
  if ( ClientCommittedVidPnRef )
  {
    v7 = VIDPN_MGR::CreateVidPnCopyForClient(v5, ClientCommittedVidPnRef, &v12);
    v8 = v7;
    if ( v7 < 0 )
    {
      WdLogSingleEntry2(2LL, v6, v7);
      goto LABEL_6;
    }
  }
  else
  {
    ClientVidPn = VIDPN_MGR::CreateClientVidPn(v5);
    v8 = ClientVidPn;
    if ( ClientVidPn < 0 )
    {
      WdLogSingleEntry1(2LL, ClientVidPn);
      goto LABEL_6;
    }
  }
  v9 = v12;
  v12 = 0LL;
  auto_rc<DMMVIDPN>::reset(a2, v9);
  v8 = 0;
LABEL_6:
  auto_rc<DMMVIDPN>::reset(&v12, 0LL);
  auto_rc<DMMVIDPN const>::reset((__int64 *)&v13, 0LL);
  return v8;
}
