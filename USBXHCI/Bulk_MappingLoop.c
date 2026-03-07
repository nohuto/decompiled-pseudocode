void __fastcall Bulk_MappingLoop(__int64 a1)
{
  char i; // di
  int v3; // eax
  int v4; // eax
  int v5; // edx
  __int64 v6; // rdx
  __int64 v7; // rcx

  for ( i = 0; ; ++i )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v5 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      LOBYTE(v5) = 5;
      WPP_RECORDER_SF_DDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v5,
        14,
        36,
        (__int64)&WPP_92c598da33ef340e00f5370896d293ba_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        i);
    }
    *(_DWORD *)(a1 + 340) = 0;
    if ( !(unsigned __int8)Bulk_RetrieveNextStage(a1) )
      break;
    v3 = Bulk_PrepareStage(a1);
    if ( v3 != 1 )
    {
      if ( v3 == 3 )
        return;
      if ( v3 == 4 )
        break;
      v4 = Bulk_MapStage(a1);
      if ( v4 != 3 )
      {
        if ( v4 == 2 )
          return;
        if ( v4 == 1 )
          break;
        if ( (unsigned int)TR_AttemptStateChange(a1, 3, 3) != 3 )
          return;
      }
    }
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), 2, 3) != 3
    && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), 0, 1) == 1 )
  {
    v6 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v6 + 37)
      || (v7 = *(_QWORD *)(v6 + 136), _InterlockedIncrement((volatile signed __int32 *)(v7 + 20)) == *(_DWORD *)(v7 + 8)) )
    {
      ESM_AddEvent((KSPIN_LOCK *)(v6 + 296), 20);
    }
  }
}
