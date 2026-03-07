void __fastcall CComputeScribbleRenderer::PostRender(CComputeScribbleRenderer *this)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  if ( *((_BYTE *)this + 48) )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 248LL)
                               + 8LL
                               * (unsigned int)(*(_DWORD *)(*((_QWORD *)this + 2) + 272LL)
                                              % *(_DWORD *)(*((_QWORD *)this + 2) + 316LL)))
                   + 96LL);
    if ( v2 )
    {
      CComputeScribbleSynchronizer::EndRenderOperation(
        *(CComputeScribbleSynchronizer **)(v2 + 48),
        *(struct CD3DDevice **)(v2 + 16),
        *(_QWORD *)(v2 + 56));
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
        McTemplateU0xq_EventWriteTransfer(
          v3,
          (__int64)&EVTDESC_COMPUTESCRIBBLE_POSTRENDER,
          *((_QWORD *)this + 3),
          *(_DWORD *)(v2 + 244));
    }
  }
}
