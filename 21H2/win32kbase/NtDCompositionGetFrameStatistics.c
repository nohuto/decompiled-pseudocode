/*
 * XREFs of NtDCompositionGetFrameStatistics @ 0x1C00162B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00163FC (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetFrameStatistics@CConnection@DirectComposition@@QEAAJPEAUDCOMPOSITION_FRAME_STATISTICS@@PEAUCOMPOSITION_CAPABILITY_INFO@@@Z @ 0x1C0016424 (-GetFrameStatistics@CConnection@DirectComposition@@QEAAJPEAUDCOMPOSITION_FRAME_STATISTICS@@PEAUC.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00164EC (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 */

__int64 __fastcall NtDCompositionGetFrameStatistics(unsigned __int64 a1, _OWORD *a2)
{
  signed int FrameStatistics; // ebx
  DirectComposition::CConnection *DefaultConnection; // r14
  __int128 v6; // xmm8
  __int128 v7; // xmm7
  __int128 v8; // xmm6
  __int128 v10; // [rsp+20h] [rbp-78h] BYREF
  __int128 v11; // [rsp+30h] [rbp-68h] BYREF
  __int128 v12; // [rsp+40h] [rbp-58h]
  __int64 v13; // [rsp+50h] [rbp-48h]

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v10 = 0LL;
  FrameStatistics = a1 == 0 ? 0xC000000D : 0;
  if ( a1 )
  {
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
    if ( !DefaultConnection )
      FrameStatistics = -1073741790;
    if ( FrameStatistics >= 0 )
    {
      FrameStatistics = DirectComposition::CConnection::GetFrameStatistics(
                          DefaultConnection,
                          (struct DCOMPOSITION_FRAME_STATISTICS *)&v11,
                          (struct COMPOSITION_CAPABILITY_INFO *)&v10);
      DirectComposition::CConnection::Release(DefaultConnection);
      v6 = v12;
      v7 = v11;
      v8 = v10;
      if ( FrameStatistics >= 0 )
      {
        if ( a1 + 40 < a1 || a1 + 40 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *(_OWORD *)a1 = v7;
        *(_OWORD *)(a1 + 16) = v6;
        *(_QWORD *)(a1 + 32) = v13;
        if ( a2 )
        {
          if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          *a2 = v8;
        }
      }
    }
  }
  return (unsigned int)FrameStatistics;
}
