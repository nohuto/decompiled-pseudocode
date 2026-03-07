char __fastcall CComposeTop::HasNewContent(CComposeTop *this)
{
  char v1; // bl
  unsigned __int64 CurrentFrameId; // rax
  _QWORD *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax

  v1 = 0;
  CurrentFrameId = GetCurrentFrameId();
  if ( *v3 == CurrentFrameId )
    return 1;
  v5 = v3[2];
  v3[2] = 0LL;
  if ( v5 )
    std::default_delete<CShape>::operator()(v4, v5);
  return v1;
}
