__int64 __fastcall RtlpCtInitializeWorkItem(_QWORD *a1, __int64 a2)
{
  _QWORD *Pool2; // rax

  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 32LL, 1735672676LL);
  *a1 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *Pool2 = 0LL;
  Pool2[2] = RtlpRtlpCtWaitForWnfQuiescentWorker;
  Pool2[3] = a2;
  return 0LL;
}
