ULONG_PTR __fastcall PnpInitializeTriageBlock(_DWORD *a1)
{
  ULONG_PTR result; // rax

  memset(a1, 0, 0x50uLL);
  *a1 = 1347309655;
  a1[1] = 1;
  *((_QWORD *)a1 + 2) = *(_QWORD *)&PnpDeviceEventThread;
  *((_QWORD *)a1 + 3) = PnpDeviceActionThread;
  *((_QWORD *)a1 + 4) = *(_QWORD *)&PnpDelayedRemoveWorkerThread;
  *((_QWORD *)a1 + 5) = &PnpDeviceCompletionQueue;
  result = ExWorkerQueue;
  *((_QWORD *)a1 + 6) = ExWorkerQueue;
  return result;
}
