void __fastcall VIDMM_GLOBAL::ReturnPinnedBackingStore(VIDMM_GLOBAL *this, __int64 a2)
{
  char *v2; // rdi

  v2 = (char *)this + 7096;
  ExAcquirePushLockExclusiveEx((char *)this + 7096, 0LL);
  *((_QWORD *)this + 892) -= a2;
  ExReleasePushLockExclusiveEx(v2, 0LL);
}
