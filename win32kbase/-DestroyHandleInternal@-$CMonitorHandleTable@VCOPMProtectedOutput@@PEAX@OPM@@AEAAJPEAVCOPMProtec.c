__int64 __fastcall OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyHandleInternal(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void **a4)
{
  __int64 v5; // rbx
  int v8; // esi
  struct _KMUTANT *v9; // rcx
  unsigned int v10; // ebx

  v5 = a3;
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  OPM::CMutex::Lock(a4);
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = 0LL;
  --*(_DWORD *)(a1 + 8);
  (**(void (__fastcall ***)(__int64, __int64))a2)(a2, 1LL);
  v9 = (struct _KMUTANT *)*a4;
  v10 = 0;
  if ( v8 < 0 )
    v10 = v8;
  if ( v9 )
    KeReleaseMutex(v9, 0);
  return v10;
}
