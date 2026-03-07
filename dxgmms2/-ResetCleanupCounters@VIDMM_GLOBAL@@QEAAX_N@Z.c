void __fastcall VIDMM_GLOBAL::ResetCleanupCounters(VIDMM_GLOBAL *this, char a2)
{
  __int64 v2; // rax

  if ( a2 || *((_QWORD *)this + 579) - *((_QWORD *)this + 897) > qword_1C0076450 )
  {
    *((_QWORD *)this + 895) = 0LL;
    v2 = *((_QWORD *)this + 579);
    *((_DWORD *)this + 1792) = 0;
    *((_QWORD *)this + 897) = v2;
  }
}
