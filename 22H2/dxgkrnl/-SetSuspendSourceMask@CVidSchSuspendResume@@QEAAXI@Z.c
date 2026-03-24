/*
 * XREFs of ?SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z @ 0x1C003AFE8
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E767C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00EA8F4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVidSchSuspendResume::SetSuspendSourceMask(CVidSchSuspendResume *this, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v5; // rax

  v2 = *((_QWORD *)this + 1);
  v3 = a2;
  if ( v2 )
  {
    if ( ((unsigned int)a2 & *(_DWORD *)(v2 + 636)) != (_DWORD)a2 )
    {
      v5 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v5 + 24) = 7979LL;
      WdLogEvent5_WdAssertion(v5);
    }
    *(_DWORD *)this = v3;
  }
}
