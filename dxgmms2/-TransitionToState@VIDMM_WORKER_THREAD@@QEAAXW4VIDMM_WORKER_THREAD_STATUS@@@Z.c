NTSTATUS __fastcall VIDMM_WORKER_THREAD::TransitionToState(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 28) = a2;
  KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 176) + 24LL), 0, 0);
  return KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 176) + 48LL), Executive, 0, 0, 0LL);
}
