bool __fastcall DirectComposition::CConnection::QueryStats(
        DirectComposition::CConnection *this,
        unsigned __int64 a2,
        struct tagCOMPOSITION_FRAME_STATS *a3,
        unsigned int a4,
        struct tagCOMPOSITION_TARGET_ID *a5,
        unsigned int *a6)
{
  DirectComposition::CPushLockCriticalSection *v6; // r15
  unsigned int v11; // edi
  unsigned __int64 v12; // r14
  unsigned int v13; // eax
  struct tagCOMPOSITION_TARGET_ID *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int128 v18; // xmm0

  v6 = (DirectComposition::CConnection *)((char *)this + 344);
  v11 = 0;
  ExAcquirePushLockSharedEx((char *)this + 344, 0LL);
  *((_BYTE *)v6 + 8) = 0;
  v12 = 464 * (a2 % 0x12C);
  if ( *(_QWORD *)((char *)this + v12 + 400) == a2 )
  {
    *(_OWORD *)a3 = *(_OWORD *)((char *)this + v12 + 408);
    *((_QWORD *)a3 + 2) = *(_QWORD *)((char *)this + v12 + 424);
    v13 = *(_DWORD *)((char *)this + v12 + 396);
    if ( a4 < v13 )
      v13 = a4;
    if ( v13 )
    {
      v14 = a5;
      v15 = 0LL;
      v11 = v13;
      v16 = v13;
      do
      {
        v17 = *(_QWORD *)((char *)this + v12 + 432);
        v18 = *(_OWORD *)(v15 + v17);
        v15 += 104LL;
        *(_OWORD *)v14 = v18;
        v14 = (struct tagCOMPOSITION_TARGET_ID *)((char *)v14 + 28);
        *(_QWORD *)((char *)v14 - 12) = *(_QWORD *)(v15 + v17 - 88);
        *((_DWORD *)v14 - 1) = *(_DWORD *)(v15 + v17 - 80);
        --v16;
      }
      while ( v16 );
    }
    if ( v11 < a4 )
      memset((char *)a5 + 28 * v11, 0, 28LL * (a4 - v11));
    LOBYTE(v11) = 1;
    *a6 = *(_DWORD *)((char *)this + v12 + 396);
  }
  DirectComposition::CPushLockCriticalSection::Release(v6);
  return v11;
}
