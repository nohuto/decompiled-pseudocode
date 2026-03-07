void __fastcall KiFlushReadyLists(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // esi
  unsigned int v9; // eax
  _QWORD *v10; // rcx
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  _QWORD *v13; // r15
  __int64 v14; // rdx

  if ( a4 )
    KiAcquireSoftParkElectionLock(a4);
  v8 = *a2;
  if ( *a2 )
  {
    do
    {
      _BitScanForward(&v9, v8);
      v10 = (_QWORD *)(a1 + 16LL * v9);
      v8 &= v8 - 1;
      v11 = (_QWORD *)*v10;
      if ( *(_QWORD **)(*v10 + 8LL) != v10 || (v12 = (_QWORD *)v10[1], (_QWORD *)*v12 != v10) )
        __fastfail(3u);
      *v12 = v11;
      v13 = v11;
      v11[1] = v12;
      v10[1] = v10;
      *v10 = v10;
      do
      {
        if ( a4 )
          KiUpdateSoftParkElectionStatisticsOnRemoval(a4, (__int64)(v11 - 27), 1);
        *((_DWORD *)v11 - 25) |= 2u;
        v14 = (__int64)(v11 - 27);
        v11 = (_QWORD *)*v11;
        KiInsertDeferredReadyList(a3, v14);
      }
      while ( v11 != v13 );
    }
    while ( v8 );
    *a2 = 0;
  }
  if ( a4 )
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 688), 0LL);
}
