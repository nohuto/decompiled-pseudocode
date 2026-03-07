__int64 __fastcall DpiFdoHandleQueryIndirectDispInterface(__int64 a1, __int16 a2, __int16 a3, _OWORD *a4)
{
  __int64 v8; // rdi
  int MiniportInterface; // ebx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // [rsp+20h] [rbp-98h]
  _OWORD v18[7]; // [rsp+30h] [rbp-88h] BYREF

  memset(v18, 0, sizeof(v18));
  v8 = *(_QWORD *)(a1 + 64);
  if ( a3 == 3 )
  {
    if ( (unsigned __int16)a2 >= 0x70u )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v8 + 484) )
        DpiCheckForOutstandingD3Requests(v8);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v8 + 168), 1u);
      MiniportInterface = DpiQueryMiniportInterface(
                            a1,
                            (__int64)&GUID_DEVINTERFACE_INDIRECT_DISP_KMD,
                            a2,
                            3,
                            v17,
                            (__int64)v18);
      if ( MiniportInterface >= 0 )
      {
        v11 = v18[1];
        *a4 = v18[0];
        v12 = v18[2];
        a4[1] = v11;
        v13 = v18[3];
        a4[2] = v12;
        v14 = v18[4];
        a4[3] = v13;
        v15 = v18[5];
        a4[4] = v14;
        v16 = v18[6];
        a4[5] = v15;
        a4[6] = v16;
      }
      if ( *(_BYTE *)(v8 + 484) )
        DpiEnableD3Requests(*(_QWORD *)(v8 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v8 + 168));
      KeLeaveCriticalRegion();
    }
    else
    {
      MiniportInterface = -1073741789;
      WdLogSingleEntry1(2LL, -1073741789LL);
    }
    return (unsigned int)MiniportInterface;
  }
  else
  {
    WdLogSingleEntry1(3LL, 0LL);
    return 3221225659LL;
  }
}
