void __fastcall CSubDrawingContext::EndFrame(CSubDrawingContext *this, char a2)
{
  __int64 v4; // rdx
  _BYTE *v5; // rcx
  _BYTE *v6; // rdx
  __int64 v7; // r8
  __int64 i; // rdx
  _BYTE v9[16]; // [rsp+30h] [rbp-28h] BYREF

  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    CScopedClipStack::RestoreScopeFromClipStack(
      (CScopedClipStack *)(*(_QWORD *)this + 896LL),
      (const struct CScopedClipStack *)(v4 + 896));
    v5 = (_BYTE *)*((_QWORD *)this + 1);
    v6 = (_BYTE *)(*(_QWORD *)this + 8092LL);
    *v6 |= v5[8092];
    v6[1] |= v5[8093];
    v6[2] |= v5[8094];
    v6[3] |= v5[8095];
    *(_QWORD *)(*((_QWORD *)this + 1) + 216LL) = 0LL;
    CDrawingContext::PopAllStacks(*((CDrawingContext **)this + 1));
    if ( a2 )
    {
      *(_BYTE *)(*(_QWORD *)this + 8169LL) = 1;
      *(_BYTE *)(*(_QWORD *)this + 8170LL) = 0;
    }
    else
    {
      for ( i = 0LL; i < 2; ++i )
        *(_BYTE *)(*(_QWORD *)this + i + 8169) = *(_BYTE *)(*((_QWORD *)this + 1) + i + 8169);
    }
    if ( *((_BYTE *)this + 96) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
        McGenEventWrite_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_DRAWING_CONTEXT_FRAME_Stop,
          v7,
          1LL,
          v9);
      *((_BYTE *)this + 96) = 0;
    }
  }
}
