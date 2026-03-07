__int64 __fastcall VIDMM_GLOBAL::ChargePinnedBackingStore(VIDMM_GLOBAL *this, __int64 a2)
{
  char *v2; // rdi
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax

  v2 = (char *)this + 7096;
  ExAcquirePushLockExclusiveEx((char *)this + 7096, 0LL);
  v5 = *((_QWORD *)this + 892);
  v6 = v5 + a2;
  if ( v5 + a2 > qword_1C00762A0 || v6 < v5 )
  {
    ExReleasePushLockExclusiveEx(v2, 0LL);
    return 3221225473LL;
  }
  else
  {
    *((_QWORD *)this + 892) = v6;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    return 0LL;
  }
}
