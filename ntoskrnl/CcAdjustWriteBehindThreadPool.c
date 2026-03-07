void __fastcall CcAdjustWriteBehindThreadPool(__int64 a1)
{
  __int64 CurrentNumaNode; // rax
  __int64 v2; // rcx
  char v3; // r10
  char v4; // r9

  if ( (unsigned int)CcNumberNumaNodes <= 1 && !CcEnablePerVolumeLazyWriter )
  {
    CurrentNumaNode = CcGetCurrentNumaNode(a1, 0LL);
    if ( v4 )
    {
      *(_DWORD *)(v2 + 1288) = 1;
      if ( *(_BYTE *)(CurrentNumaNode + 224) != v3 )
        *(_BYTE *)(CurrentNumaNode + 224) = v3;
    }
    else
    {
      *(_DWORD *)(v2 + 1288) = -1;
      if ( *(_QWORD *)(CurrentNumaNode + 104) != CurrentNumaNode + 104 && *(_BYTE *)(CurrentNumaNode + 196) == v3 )
        CcReEngageWorkerThreads(v2, CurrentNumaNode, *(_DWORD *)(v2 + 840), 0);
    }
  }
}
