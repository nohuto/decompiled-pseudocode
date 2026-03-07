void __fastcall CInteractionTracker::NotifyRequestIgnored(CInteractionTracker *this)
{
  unsigned __int8 ShouldNotify; // al
  __int64 v2; // rcx
  int v3; // r11d
  unsigned int v4; // r9d
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // [rsp+30h] [rbp-28h]
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF

  ShouldNotify = CInteractionTracker::ShouldNotify(this);
  v4 = 0;
  if ( ShouldNotify )
  {
    v5 = *(_QWORD *)(v2 + 48);
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 1240LL) + 40LL);
    if ( v5 )
      v4 = *(_DWORD *)(v5 + 76);
    v8[0] = v4;
    LODWORD(v7) = v3;
    v8[1] = *(unsigned int *)(v2 + 64);
    CoreUICallSend(v6, v8, 2LL, 11LL, 2, &unk_180339439, v7);
  }
}
