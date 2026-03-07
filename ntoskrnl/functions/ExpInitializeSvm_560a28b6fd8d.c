__int64 *ExpInitializeSvm()
{
  unsigned int v0; // r8d
  bool v1; // zf
  __int64 Pool2; // rax
  char *v3; // rdx
  unsigned int v4; // r9d
  __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 *result; // rax
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0;
  (*(void (__fastcall **)(_QWORD, unsigned int *, int *, __int64 *))(HalIommuDispatch + 8))(
    0LL,
    &v9,
    &ExpSvmAgents,
    &ExpSvmIommuSystemContext);
  v0 = v9;
  v1 = v9 == 1;
  if ( v9 > 1 )
  {
    Pool2 = ExAllocatePool2(64LL, 104LL * v9, 0x76537845u);
    v0 = v9;
    v1 = v9 == 1;
    ExpSvmWorkQueues = Pool2;
  }
  if ( v1 || (v3 = (char *)ExpSvmWorkQueues) == 0LL )
  {
    v3 = (char *)&ExpSvmStaticWorkQueue;
    v0 = 1;
    ExpSvmWorkQueues = (__int64)&ExpSvmStaticWorkQueue;
    v4 = 0;
    ExpSvmNumberOfWorkQueues = 1;
  }
  else
  {
    ExpSvmNumberOfWorkQueues = v0;
    v4 = 0;
    if ( !v0 )
      goto LABEL_7;
  }
  do
  {
    v5 = v4;
    v6 = 104LL * v4++;
    *(_QWORD *)&v3[v6 + 16] = ExpSvmWorkerThread;
    *(_QWORD *)&v3[v6 + 24] = v5;
    *(_QWORD *)&v3[v6] = 0LL;
    *(_QWORD *)&v3[v6 + 56] = ExpSvmDpcRoutine;
    *(_DWORD *)&v3[v6 + 32] = 275;
    *(_QWORD *)&v3[v6 + 64] = v5;
    *(_QWORD *)&v3[v6 + 88] = 0LL;
    *(_QWORD *)&v3[v6 + 48] = 0LL;
    *(_DWORD *)&v3[v6 + 96] = 0;
  }
  while ( v4 < v0 );
LABEL_7:
  v7 = (_QWORD *)HalIommuDispatch;
  *(_QWORD *)(HalIommuDispatch + 96) = ExpSvmFaultRoutine;
  v7[13] = ExpSvmReferenceAsid;
  v7[14] = ExpSvmDereferenceAsid;
  v7[15] = ExpSvmServicePageFault;
  result = &ExpAtsSvmDevices;
  qword_140C2D068 = (__int64)&ExpAtsSvmDevices;
  ExpAtsSvmDevices = (__int64)&ExpAtsSvmDevices;
  qword_140C2CFD8 = 0LL;
  ExpAtsSvmDeviceListLock = 0LL;
  return result;
}
