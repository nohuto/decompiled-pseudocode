void __fastcall VIDMM_MAPPED_VA_RANGE::~VIDMM_MAPPED_VA_RANGE(VIDMM_MAPPED_VA_RANGE *this)
{
  _QWORD *v1; // rax
  __int64 v2; // rdx
  _QWORD *v3; // rax
  __int64 v4; // rdx
  int v5; // eax
  _QWORD *v6; // rdi
  _QWORD *v7; // r8
  _QWORD *v8; // r8
  __int64 VidMmGlobalAllocFromOwner; // rbx
  __int64 v10; // rdx
  _QWORD *v11; // rax

  v1 = (_QWORD *)((char *)this + 24);
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    if ( *(_QWORD **)(v2 + 8) != v1 )
      goto LABEL_15;
    v7 = (_QWORD *)*((_QWORD *)this + 4);
    if ( (_QWORD *)*v7 != v1 )
      goto LABEL_15;
    *v7 = v2;
    *(_QWORD *)(v2 + 8) = v7;
    *v1 = 0LL;
  }
  v3 = (_QWORD *)((char *)this + 8);
  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    if ( *(_QWORD **)(v4 + 8) != v3 )
      goto LABEL_15;
    v8 = (_QWORD *)*((_QWORD *)this + 2);
    if ( (_QWORD *)*v8 != v3 )
      goto LABEL_15;
    *v8 = v4;
    *(_QWORD *)(v4 + 8) = v8;
    *v3 = 0LL;
  }
  v5 = *((_DWORD *)this + 16);
  if ( (v5 & 0x2000) == 0 )
  {
    v6 = (_QWORD *)((char *)this + 40);
    if ( *((_QWORD *)this + 5) )
    {
      VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner((unsigned int)(v5 << 28 >> 28), *((_QWORD *)this + 7));
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 368, 0LL);
      v10 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) == v6 )
      {
        v11 = (_QWORD *)v6[1];
        if ( (_QWORD *)*v11 == v6 )
        {
          *v11 = v10;
          *(_QWORD *)(v10 + 8) = v11;
          *v6 = 0LL;
          ExReleasePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 368, 0LL);
          KeLeaveCriticalRegion();
          return;
        }
      }
LABEL_15:
      __fastfail(3u);
    }
  }
}
