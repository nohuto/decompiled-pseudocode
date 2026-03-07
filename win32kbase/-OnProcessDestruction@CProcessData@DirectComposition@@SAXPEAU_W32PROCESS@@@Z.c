void __fastcall DirectComposition::CProcessData::OnProcessDestruction(struct _W32PROCESS *a1)
{
  void *v1; // rbx

  v1 = (void *)*((_QWORD *)a1 + 32);
  if ( v1 )
  {
    DirectComposition::CProcessData::~CProcessData(*((DirectComposition::CProcessData **)a1 + 32));
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v1);
    *((_QWORD *)a1 + 32) = 0LL;
  }
}
