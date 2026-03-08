/*
 * XREFs of ?GetAllocationsForAllPlanes@ADAPTER_DISPLAY@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C019C040
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C019A6A0 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C019C1C0 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::GetAllocationsForAllPlanes(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        struct _EX_RUNDOWN_REF **a3,
        unsigned int a4)
{
  __int64 v7; // rdi
  __int64 v8; // r15
  unsigned int v9; // edi
  struct _EX_RUNDOWN_REF *v10; // rbp
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  struct _EX_RUNDOWN_REF *v12; // rbx
  DXGFASTMUTEX *v13; // [rsp+50h] [rbp-38h]
  char v14; // [rsp+58h] [rbp-30h]
  struct _EX_RUNDOWN_REF *v15; // [rsp+90h] [rbp+8h] BYREF

  v13 = (ADAPTER_DISPLAY *)((char *)this + 608);
  v7 = a2;
  v14 = 0;
  if ( this == (ADAPTER_DISPLAY *)-608LL )
  {
    WdLogSingleEntry1(1LL, 592LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 592LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((struct _KTHREAD **)v13 + 3) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 599LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 599LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::Acquire(v13);
  v14 = 1;
  v8 = *((_QWORD *)this + 16) + 4000 * v7;
  if ( *(struct _KTHREAD **)(*(_QWORD *)(v8 + 8) + 632LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 9494LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9494LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = 0;
  if ( *(_DWORD *)(v8 + 3760) < a4 )
    a4 = *(_DWORD *)(v8 + 3760);
  if ( a4 )
  {
    v15 = 0LL;
    do
    {
      v10 = 0LL;
      LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal((DISPLAY_SOURCE *)v8, v9);
      if ( LatestPlaneConfigInternal )
      {
        if ( (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) != 0 )
        {
          v12 = *(struct _EX_RUNDOWN_REF **)LatestPlaneConfigInternal;
          v10 = *(struct _EX_RUNDOWN_REF **)LatestPlaneConfigInternal;
          if ( *(_QWORD *)LatestPlaneConfigInternal )
          {
            if ( !ExAcquireRundownProtection(v12 + 11) )
              WdLogSingleEntry5(0LL, 275LL, 38LL, v12, 0LL, 0LL);
          }
        }
      }
      if ( *a3 )
        ExReleaseRundownProtection(*a3 + 11);
      *a3 = v10;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v15);
      ++v9;
      ++a3;
    }
    while ( v9 < a4 );
  }
  if ( v14 )
  {
    v14 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v13);
  }
}
