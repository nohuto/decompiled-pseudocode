bool __fastcall CInteraction::HasInputSink(CInteraction *this)
{
  __int64 v1; // rdx
  __int64 v2; // rax

  v1 = *((_QWORD *)this + 13);
  v2 = 0LL;
  if ( v1 )
    v2 = *(_QWORD *)(v1 + 64);
  return v2 != 0;
}
