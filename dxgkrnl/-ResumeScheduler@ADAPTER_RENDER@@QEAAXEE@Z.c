void __fastcall ADAPTER_RENDER::ResumeScheduler(ADAPTER_RENDER *this, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // rcx
  unsigned __int8 v6; // si
  int v7; // eax

  *((_DWORD *)this + 189) = 0;
  v4 = *((_QWORD *)this + 93);
  v6 = a2;
  if ( v4 )
  {
    LOBYTE(a2) = a3;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(*((_QWORD *)this + 92) + 8LL) + 768LL))(v4, a2);
    if ( v7 < 0 )
      WdLogSingleEntry5(0LL, 275LL, 19LL, *((_QWORD *)this + 2), v7, 0LL);
    ADAPTER_RENDER::ResumeVidMmWorkerThread(this, v6, a3);
  }
}
