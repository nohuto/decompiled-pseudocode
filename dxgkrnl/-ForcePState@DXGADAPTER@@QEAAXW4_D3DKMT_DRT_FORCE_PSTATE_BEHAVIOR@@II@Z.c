void __fastcall DXGADAPTER::ForcePState(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rcx
  int v5; // edx
  int v6; // edx

  v4 = *(_QWORD *)(520LL * a3 + *(_QWORD *)(a1 + 3024) + 512);
  if ( v4 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 == 1 )
          DXGPOWERSTATISTICSTRANSITIONENGINE::ForcePStateFloor((KSPIN_LOCK *)(v4 + 136), a4);
      }
      else
      {
        DXGPOWERSTATISTICSTRANSITIONENGINE::ForcePStateCeiling((KSPIN_LOCK *)(v4 + 136), a4);
      }
    }
    else
    {
      DXGPOWERSTATISTICSTRANSITIONENGINE::ForcePState((KSPIN_LOCK *)(v4 + 136), a4);
    }
  }
}
