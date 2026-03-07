void __fastcall CD2DContext::PopLayer(CD2DContext *this, const struct ID2DContextOwner *a2)
{
  int v3; // eax
  __int64 v4; // rbx

  CD2DContext::FlushDrawList(this);
  v3 = *((_DWORD *)this + 88);
  v4 = 0LL;
  if ( v3 )
    v4 = *(_QWORD *)(*((_QWORD *)this + 41) + 8LL * (unsigned int)(v3 - 1));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v4 + 16) + 200LL) + 328LL))(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 200LL));
  CD2DTarget::ApplyCurrentClip((CD2DTarget *)v4);
  --*(_DWORD *)(v4 + 48);
}
