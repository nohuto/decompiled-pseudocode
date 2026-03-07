void __fastcall VIDMM_GLOBAL::GetOrGeneratePendingPagingBufferFence(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned __int64 *a3)
{
  if ( !*((_DWORD *)this + a2 + 1177) )
  {
    *((_DWORD *)this + a2 + 1177) = 1;
    ++*((_QWORD *)this + a2 + 621);
  }
  *a3 = *((_QWORD *)this + a2 + 621);
}
