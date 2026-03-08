/*
 * XREFs of DrvSampleDisplayState @ 0x1C0022700
 * Callers:
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___ @ 0x1C001064C (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___.c)
 *     NtUserQueryDisplayConfig @ 0x1C0021A60 (NtUserQueryDisplayConfig.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C0021D40 (NtUserDisplayConfigGetDeviceInfo.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_3__lambda_2ffaef142a06e39d44c296ad8819dbf0___ @ 0x1C0156590 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_3__lambda_2ffaef142a06e39d44c296ad8819dbf0___.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_5__lambda_080e8f3c9a2b96fa8c06ab1b08e75502___ @ 0x1C015662C (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_5__lambda_080e8f3c9a2b96fa8c06ab1b08e75502___.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_6__lambda_12383f500c067e992563f3aceebe145e___ @ 0x1C01566C8 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_6__lambda_12383f500c067e992563f3aceebe145e___.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_38c6dc7437b728cc1d00ec4d9055c622__&DrvSampleDisplayState_ @ 0x1C015678C (InitDisplayBrokerMessage_DispBroker--AlpcRequest_8___lambda_38c6dc7437b728cc1d00ec4d9055c622__-D.c)
 *     ?xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z @ 0x1C0156F40 (-xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvSampleDisplayState(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  if ( !a1 )
    return 3221225485LL;
  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  *a1 = *(_DWORD *)(*(_QWORD *)(v2 + 1928) + 1573008LL);
  a1[1] = *(_DWORD *)(*(_QWORD *)(v2 + 1928) + 1573032LL);
  result = 0LL;
  a1[2] = *(_DWORD *)(*(_QWORD *)(v2 + 1928) + 1573024LL);
  return result;
}
