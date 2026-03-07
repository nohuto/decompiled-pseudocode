__int64 __fastcall CMouseProcessor::CMouseEvent::GetHitTestContext(CMouseProcessor::CMouseEvent *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 1);
  if ( *(_DWORD *)(v1 + 148) == 2 )
    return *(unsigned int *)(v1 + 152);
  else
    return 0LL;
}
