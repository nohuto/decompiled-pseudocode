__int64 __fastcall DmmIsWaitingForPowerOn(_QWORD *a1, unsigned int a2, unsigned __int8 *a3)
{
  __int64 v7; // rax
  VIDPN_MGR *v8; // rbx
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  ADAPTER_DISPLAY *v10; // rcx
  const struct DMMVIDPN *v11; // rbx
  struct DMMVIDPNPRESENTPATH *MostImportantPathFromSource; // rax
  const struct DMMVIDPN *v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225473LL;
  }
  if ( !a1[365] )
    WdLogSingleEntry0(1LL);
  if ( a1[366] )
  {
    v7 = a1[365];
    v8 = *(VIDPN_MGR **)(v7 + 104);
    if ( !v8 )
    {
      WdLogSingleEntry1(2LL, a1);
      return 3221225473LL;
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v14, *(_QWORD *)(v7 + 104));
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v8);
    v10 = (ADAPTER_DISPLAY *)a1[365];
    v11 = ClientCommittedVidPnRef;
    v13 = ClientCommittedVidPnRef;
    if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(v10, a2) )
    {
      if ( v11 )
      {
        if ( DMMVIDPNTOPOLOGY::IsSourceInTopology((const struct DMMVIDPN *)((char *)v11 + 96), a2) )
        {
          MostImportantPathFromSource = DMMVIDPNTOPOLOGY::GetMostImportantPathFromSource(
                                          (const struct DMMVIDPN *)((char *)v11 + 96),
                                          a2);
          if ( MostImportantPathFromSource )
          {
            if ( (unsigned int)DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(
                                 *(_QWORD *)(*((_QWORD *)MostImportantPathFromSource + 12) + 96LL),
                                 0LL) == 14
              && !DMMVIDPN::IsPathFromSourcePoweredOff(v11, a2) )
            {
              *a3 = 1;
            }
          }
        }
      }
    }
    auto_rc<DMMVIDPN const>::reset((__int64 *)&v13, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v14 + 40));
  }
  return 0LL;
}
