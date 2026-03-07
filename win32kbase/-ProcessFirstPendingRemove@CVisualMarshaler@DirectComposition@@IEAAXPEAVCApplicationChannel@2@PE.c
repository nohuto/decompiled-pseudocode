void __fastcall DirectComposition::CVisualMarshaler::ProcessFirstPendingRemove(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        _QWORD *a3)
{
  __int64 v4; // rdx

  v4 = *((_QWORD *)this + 25);
  *((_QWORD *)this + 25) = *(_QWORD *)(v4 + 208);
  *(_QWORD *)(v4 + 208) = 0LL;
  if ( a3 )
  {
    *(_DWORD *)a3 = 16;
    a3[1] = 0LL;
    *((_DWORD *)a3 + 1) = 393;
    *((_DWORD *)a3 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)a3 + 3) = *(_DWORD *)(v4 + 32);
  }
  *(_DWORD *)(v4 + 16) &= ~8u;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, (struct DirectComposition::CResourceMarshaler *)v4);
}
