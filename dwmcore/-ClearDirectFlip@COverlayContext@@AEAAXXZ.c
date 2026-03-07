void __fastcall COverlayContext::ClearDirectFlip(COverlayContext *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  CDirectFlipInfo *v4; // rcx
  __int64 (__fastcall ***v5)(_QWORD, _BYTE *); // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 1396);
  if ( v2 )
  {
    v3 = 1;
    if ( *(_DWORD *)(v2 + 52) != 1 )
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v2 + 16) + 408LL))(*(_QWORD *)(v2 + 16), 1LL, 0LL);
    v4 = (CDirectFlipInfo *)*((_QWORD *)this + 1396);
    if ( v4 )
      CDirectFlipInfo::`scalar deleting destructor'(v4, v3);
    *((_QWORD *)this + 1396) = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    {
      v5 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*(_QWORD *)this
                                                     + 8LL
                                                     + *(int *)(*(_QWORD *)(*(_QWORD *)this + 8LL) + 12LL));
      v6 = (**v5)(v5, v8);
      McTemplateU0xq_EventWriteTransfer(v7, &EVTDESC_ETWGUID_DIRECTFLIP_TRANSITIONEVENT, *(unsigned int *)(v6 + 8), 0LL);
    }
  }
}
