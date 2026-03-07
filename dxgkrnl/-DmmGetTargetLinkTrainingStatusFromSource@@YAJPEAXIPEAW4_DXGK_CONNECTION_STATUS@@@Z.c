__int64 __fastcall DmmGetTargetLinkTrainingStatusFromSource(
        _QWORD *a1,
        unsigned int a2,
        enum _DXGK_CONNECTION_STATUS *a3)
{
  __int64 v4; // rbp
  VIDPN_MGR *v6; // rbx
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  DMMVIDPNTOPOLOGY *v8; // rsi
  int v9; // eax
  unsigned int v10; // ebx
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF
  const struct DMMVIDPN *v15; // [rsp+68h] [rbp+20h] BYREF

  v4 = a2;
  v6 = *(VIDPN_MGR **)(a1[365] + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v13, (__int64)v6);
  ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v6);
  v15 = ClientCommittedVidPnRef;
  if ( ClientCommittedVidPnRef )
  {
    v14 = 0;
    v8 = (const struct DMMVIDPN *)((char *)ClientCommittedVidPnRef + 96);
    v9 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(
           (const struct DMMVIDPN *)((char *)ClientCommittedVidPnRef + 96),
           (char *)(unsigned int)v4,
           0LL,
           &v14);
    v10 = v9;
    if ( v9 < 0 )
    {
      WdLogSingleEntry3(2LL, v4, a1, v9);
    }
    else
    {
      PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v8, v14);
      if ( PathFromTarget )
      {
        *(_DWORD *)a3 = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(
                          *(_QWORD *)(*((_QWORD *)PathFromTarget + 12) + 96LL),
                          0LL);
        v10 = 0;
      }
      else
      {
        WdLogSingleEntry1(2LL, v14);
        v10 = -1071774971;
      }
    }
  }
  else
  {
    v10 = -1071774884;
    WdLogSingleEntry2(2LL, a1, -1071774884LL);
  }
  auto_rc<DMMVIDPN const>::reset((__int64 *)&v15, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v13[0] + 40LL));
  return v10;
}
