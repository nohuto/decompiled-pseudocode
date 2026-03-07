__int64 __fastcall OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::DestroyHandleInternal(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        struct OPM::CMutex *a4)
{
  __int64 v5; // rdi
  int v8; // ebp
  char v10; // [rsp+40h] [rbp+8h] BYREF

  v5 = a3;
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v10, a4);
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = 0LL;
  --*(_DWORD *)(a1 + 8);
  (**(void (__fastcall ***)(__int64, __int64))a2)(a2, 1LL);
  if ( v8 >= 0 )
    v8 = 0;
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v10);
  return (unsigned int)v8;
}
