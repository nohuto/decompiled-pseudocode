/*
 * XREFs of ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C001FDC8
 * Callers:
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C016D024 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N@Z @ 0x1C02086D0 (-UnpinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@_N.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C03AB064 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C03B2968 (-UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::UnpinMode(DMMVIDPNTARGETMODESET *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v8; // [rsp+30h] [rbp+8h]

  if ( *((_BYTE *)this + 136) )
  {
    v5 = *((_QWORD *)this + 18);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 92);
      if ( ((*(_DWORD *)(v5 + 120) >> 3) & 0x3F) != 0 )
      {
        LODWORD(v8) = *(_QWORD *)(v5 + 92);
        HIDWORD(v8) = ((*(_DWORD *)(v5 + 120) >> 3) & 0x3F) * HIDWORD(v6);
        v6 = v8;
      }
      *(_QWORD *)(v5 + 152) = v6;
      *(_DWORD *)(v5 + 160) = 1;
      *((_QWORD *)this + 18) = 0LL;
      return 0LL;
    }
    else
    {
      WdLogNewEntry5_WdTrace(0LL, this, a3, a4);
      return 1075708679LL;
    }
  }
  else
  {
    WdLogSingleEntry1(7LL, this);
    return 3223192352LL;
  }
}
