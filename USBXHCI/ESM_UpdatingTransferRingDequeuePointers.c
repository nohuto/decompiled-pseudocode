__int64 __fastcall ESM_UpdatingTransferRingDequeuePointers(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  unsigned int i; // edi

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_BYTE *)(v1 + 37) )
  {
    v3 = *(_QWORD *)(v1 + 136);
    *(_DWORD *)(v3 + 20) = 0;
    if ( (int)XilEndpoint_FetchStreamContextArray(v3) >= 0 )
    {
      for ( i = 1; i <= *(_DWORD *)(*(_QWORD *)(v1 + 136) + 8LL); ++i )
        Endpoint_OnCancelSetDequeuePointer(v1, i);
    }
    else
    {
      _m_prefetchw((const void *)(v1 + 32));
      if ( (_InterlockedOr((volatile signed __int32 *)(v1 + 32), 2u) & 2) == 0 )
        ESM_AddEvent((KSPIN_LOCK *)(v1 + 296), 12);
    }
  }
  else
  {
    Endpoint_OnCancelSetDequeuePointer(*(_QWORD *)(a1 + 960), 0);
  }
  return 1000LL;
}
