__int64 __fastcall ADAPTER_DISPLAY::QueryLastCompletedPresentId(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        struct _D3DKMT_PRESENT_STATS *a3)
{
  __int64 v3; // r9
  __int64 v6; // rdi

  v3 = *((_QWORD *)this + 56);
  if ( !v3 )
    return 3221225485LL;
  v6 = *(_QWORD *)(v3 + 8) + 2920LL * a2;
  KeWaitForSingleObject((PVOID)(v6 + 264), Executive, 0, 0, 0LL);
  *(_OWORD *)&a3->PresentCount = *(_OWORD *)(v6 + 320);
  *(_OWORD *)&a3->SyncQPCTime.LowPart = *(_OWORD *)(v6 + 336);
  KeReleaseMutex((PRKMUTEX)(v6 + 264), 0);
  return 0LL;
}
