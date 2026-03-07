void __fastcall VIDMM_WORKER_THREAD::SuspendAccessToAllocation(VIDMM_GLOBAL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  struct _KTHREAD **v2; // r14
  _QWORD **v4; // r15
  _QWORD *i; // rbx
  VIDMM_DEVICE **j; // rdi

  v2 = (struct _KTHREAD **)((char *)a2 + 296);
  v4 = (_QWORD **)((char *)a2 + 272);
  DXGFASTMUTEX::Acquire((struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296));
  for ( i = *v4; i != v4; i = (_QWORD *)*i )
  {
    for ( j = (VIDMM_DEVICE **)*(i - 2); j != i - 2; j = (VIDMM_DEVICE **)*j )
    {
      if ( (*((_DWORD *)j - 3) & 3) == 2 )
      {
        if ( !*((_QWORD *)*(j - 4) + 24) )
        {
          DXGFASTMUTEX::Release(v2);
          VIDMM_DEVICE::PartiallySuspend((VIDMM_GLOBAL **)*(j - 4));
          DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)v2);
        }
        VIDMM_GLOBAL::FaultOneAllocation(*this, j - 5);
      }
    }
  }
  DXGFASTMUTEX::Release(v2);
}
