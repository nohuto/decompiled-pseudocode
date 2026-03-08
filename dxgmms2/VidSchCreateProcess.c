/*
 * XREFs of VidSchCreateProcess @ 0x1C00940D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0001AD8 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0001AFC (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VidSchCreateProcess(__int64 a1)
{
  __int64 Pool2; // rax
  __int64 v3; // rbx
  DXGGLOBAL *Global; // rax
  unsigned int MaximumGlobalAdapterCount; // ebp
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // rcx

  if ( a1 )
  {
    Pool2 = ExAllocatePool2(64LL, 2896LL, 845244758LL);
    v3 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 845244758;
      *(_QWORD *)(Pool2 + 2664) = 0LL;
      *(_QWORD *)(Pool2 + 8) = a1;
      *(_QWORD *)(Pool2 + 16) = *(_QWORD *)(a1 + 64);
      *(_DWORD *)(Pool2 + 24) = (*(_DWORD *)(a1 + 424) & 2) != 0 ? 5 : 2;
      TdrHistoryInit((struct _TDR_HISTORY *)(Pool2 + 40));
      Global = DXGGLOBAL::GetGlobal();
      MaximumGlobalAdapterCount = DXGGLOBAL::GetMaximumGlobalAdapterCount(Global);
      v6 = ExAllocatePool2(256LL, 4 * ((unsigned __int64)(MaximumGlobalAdapterCount + 31) >> 5), 845244758LL);
      *(_QWORD *)(v3 + 2624) = v6;
      if ( v6 )
      {
        v7 = ExAllocatePool2(64LL, 8LL * MaximumGlobalAdapterCount, 845244758LL);
        *(_QWORD *)(v3 + 32) = v7;
        if ( v7 )
        {
          v8 = *(_QWORD *)(a1 + 64);
          *(_QWORD *)(v3 + 2640) = *(_QWORD *)(v8 + 80);
          *(_QWORD *)(v3 + 2656) = *(_QWORD *)(a1 + 56);
          if ( v8 )
            v9 = *(_QWORD *)(v8 + 96);
          else
            v9 = 0LL;
          *(_QWORD *)(v3 + 2648) = v9;
          if ( (*(_DWORD *)(a1 + 424) & 2) != 0 )
            g_pVidSchSystemProcess = v3;
          *(_WORD *)(v3 + 2882) = 260;
          v10 = ExAllocatePool2(64LL, 260LL, 845244758LL);
          *(_QWORD *)(v3 + 2888) = v10;
          *(_WORD *)(v3 + 2880) = 0;
          if ( v10 )
            return v3;
          WdLogSingleEntry0(3LL);
          ExFreePoolWithTag(*(PVOID *)(v3 + 32), 0);
        }
        else
        {
          WdLogSingleEntry0(3LL);
        }
        ExFreePoolWithTag(*(PVOID *)(v3 + 2624), 0);
      }
      else
      {
        WdLogSingleEntry0(3LL);
      }
      ExFreePoolWithTag((PVOID)v3, 0);
    }
    else
    {
      WdLogSingleEntry0(3LL);
    }
  }
  else
  {
    WdLogSingleEntry0(1LL);
    DxgkLogInternalTriageEvent(v12, 0x40000LL);
  }
  return 0LL;
}
