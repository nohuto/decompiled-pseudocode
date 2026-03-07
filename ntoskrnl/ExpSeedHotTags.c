__int64 ExpSeedHotTags()
{
  __int64 v0; // r10
  unsigned int *v1; // r8
  __int64 v2; // r9
  __int64 v3; // rbx
  unsigned int v4; // edx
  __int64 result; // rax
  _DWORD v6[64]; // [rsp+8h] [rbp-100h] BYREF

  v0 = PoolTrackTable;
  v1 = v6;
  qmemcpy(
    v6,
    "Io  Hal MdlPPooLObStIrp NDdbIrpLIoOpMdl FileCMVaSeSdNtFCPoolTCPrCMNbSeTdNtFsTCPTTCPCKey ObSqIoNmIoEaTCPcNtFaNtf0Sect"
    "IrpSTokeSe  ObClCcScNtFLSeAcFSfmCcWkFSimAfdCAfdEFSroNtfnUIRPNpFrNpFRSePaSeUsAcpFAcpMSeScObNmNpFsSeLuScPDEvenRqrvVadl"
    "Pp  VadSVad VadLVadFMmdi",
    sizeof(v6));
  v2 = 64LL;
  do
  {
    v3 = *v1;
    v4 = PoolTrackTableMask & ((40543 * v3) ^ ((unsigned __int64)(40543 * v3) >> 32));
    while ( 1 )
    {
      if ( !*(_DWORD *)(v0 + 80LL * v4) )
      {
        result = PoolTrackTableSize - 1;
        if ( v4 != PoolTrackTableSize - 1 )
          break;
      }
      result = (unsigned int)PoolTrackTableMask & (v4 + 1);
      v4 = result;
      if ( (_DWORD)result == ((unsigned int)PoolTrackTableMask & ((40543 * (int)v3) ^ ((unsigned __int64)(40543 * v3) >> 32))) )
        goto LABEL_6;
    }
    *(_DWORD *)(v0 + 80LL * v4) = v3;
LABEL_6:
    ++v1;
    --v2;
  }
  while ( v2 );
  return result;
}
