struct _LUID __fastcall CInteraction::GetInputLuid(CInteraction *this, _QWORD *a2)
{
  __int64 v2; // rax

  *a2 = 0LL;
  v2 = *((_QWORD *)this + 13);
  if ( v2 )
    *a2 = *(_QWORD *)(v2 + 96);
  return (struct _LUID)a2;
}
