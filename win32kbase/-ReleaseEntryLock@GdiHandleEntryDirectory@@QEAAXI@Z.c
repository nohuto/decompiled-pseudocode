void __fastcall GdiHandleEntryDirectory::ReleaseEntryLock(GdiHandleEntryDirectory *this, unsigned int a2)
{
  unsigned int v2; // r9d
  unsigned __int64 v3; // r8
  __int64 v4; // r10
  __int64 v5; // rdx

  v2 = *((_DWORD *)this + 514);
  v3 = a2;
  if ( a2 < v2 + ((*((unsigned __int16 *)this + 1) + 0xFFFF) << 16) )
  {
    if ( a2 >= v2 )
    {
      v5 = ((a2 - v2) >> 16) + 1;
      v4 = *((_QWORD *)this + v5 + 1);
      v3 = ((1 - (_DWORD)v5) << 16) - v2 + (unsigned int)v3;
    }
    else
    {
      v4 = *((_QWORD *)this + 1);
    }
    *(_DWORD *)(*(_QWORD *)v4 + 24 * v3 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(*(_QWORD *)(**(_QWORD **)(v4 + 24) + 8 * (v3 >> 8)) + 16LL * (unsigned __int8)v3, 0LL);
    KeLeaveCriticalRegion();
  }
}
