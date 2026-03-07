void __fastcall ViPtLogStackCallout(_DWORD *Parameter)
{
  __int64 *v2; // rbx
  PVOID *v3; // rcx
  __int64 v4; // rdx
  _OWORD *v5; // rax
  __int128 v6; // xmm1
  _QWORD *v7; // rax
  ULONG BackTraceHash[4]; // [rsp+30h] [rbp-1B8h] BYREF
  PVOID BackTrace[50]; // [rsp+40h] [rbp-1A8h] BYREF

  BackTraceHash[0] = 0;
  memset(BackTrace, 0, sizeof(BackTrace));
  v2 = *(__int64 **)Parameter;
  if ( RtlCaptureStackBackTrace(2u, 0x32u, BackTrace, BackTraceHash) )
  {
    if ( VfPoolTraces )
    {
      v3 = BackTrace;
      v4 = 3LL;
      v5 = (_OWORD *)(*(_QWORD *)Parameter + 24LL);
      do
      {
        *v5 = *(_OWORD *)v3;
        v5[1] = *((_OWORD *)v3 + 1);
        v5[2] = *((_OWORD *)v3 + 2);
        v5[3] = *((_OWORD *)v3 + 3);
        v5[4] = *((_OWORD *)v3 + 4);
        v5[5] = *((_OWORD *)v3 + 5);
        v5[6] = *((_OWORD *)v3 + 6);
        v5 += 8;
        v6 = *((_OWORD *)v3 + 7);
        v3 += 16;
        *(v5 - 1) = v6;
        --v4;
      }
      while ( v4 );
      *v5 = *(_OWORD *)v3;
    }
    if ( (VfOptionFlags & 0x1000) != 0 )
    {
      if ( *((_BYTE *)Parameter + 12) )
      {
        VfPtProcessFreePoolInfo(v2);
      }
      else
      {
        v7 = VfPtAddStackInfoIfNotExist(BackTrace, BackTraceHash[0], *v2, Parameter[2], v2[1]);
        if ( v7 )
          VfPtProcessAllocPoolInfo(v2, (__int64)v7);
      }
    }
  }
  else if ( VfPoolTraces )
  {
    _InterlockedDecrement(&VfPoolTracesIndex);
  }
}
