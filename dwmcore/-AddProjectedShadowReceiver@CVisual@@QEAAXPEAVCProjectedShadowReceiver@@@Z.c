void __fastcall CVisual::AddProjectedShadowReceiver(CVisual *this, struct CProjectedShadowReceiver *a2)
{
  _QWORD *v4; // rax
  __int64 ProjectedShadowReceivers; // rdi
  char v6; // al
  _QWORD *v7; // rdx
  bool v8; // bp
  struct CProjectedShadowReceiver *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  if ( (**((_DWORD **)this + 29) & 0x20000) == 0 )
  {
    v4 = operator new(0x18uLL);
    if ( v4 )
    {
      *v4 = 0LL;
      v4[1] = 0LL;
      v4[2] = 0LL;
    }
    CVisual::SetProjectedShadowReceivers(this, v4);
  }
  ProjectedShadowReceivers = CVisual::GetProjectedShadowReceivers(this);
  v6 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 256LL))(this);
  v7 = *(_QWORD **)(ProjectedShadowReceivers + 8);
  v8 = v6 == 0;
  if ( v7 == *(_QWORD **)(ProjectedShadowReceivers + 16) )
  {
    std::vector<CProjectedShadowReceiver *>::_Emplace_reallocate<CProjectedShadowReceiver * const &>(
      ProjectedShadowReceivers,
      v7,
      &v9);
  }
  else
  {
    *v7 = a2;
    *(_QWORD *)(ProjectedShadowReceivers + 8) += 8LL;
  }
  if ( v8 )
    CVisual::PropagateFlags(this, 5LL);
}
