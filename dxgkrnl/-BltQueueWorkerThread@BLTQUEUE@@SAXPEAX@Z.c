void __fastcall BLTQUEUE::BltQueueWorkerThread(BLTQUEUE *StartContext)
{
  unsigned int v2; // eax

  v2 = (*(__int64 (__fastcall **)(_QWORD *))(**((_QWORD **)StartContext + 16) + 8LL))(*((_QWORD **)StartContext + 16));
  KeSetActualBasePriorityThread(KeGetCurrentThread(), v2);
  BLTQUEUE::BltQueueWorker(StartContext);
}
