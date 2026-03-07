bool __fastcall COcclusionContext::IsCurrent(COcclusionContext *this)
{
  __int64 v1; // rax

  v1 = 0LL;
  if ( g_pComposition )
    v1 = *((_QWORD *)g_pComposition + 62);
  return *((_QWORD *)this + 3) == v1;
}
