void __fastcall VIDMM_GLOBAL::EvictFromFaultedList(VIDMM_GLOBAL *this, struct VIDMM_DEVICE *a2, __int64 a3)
{
  char *v3; // rdi
  __int64 i; // rbx
  __int64 v5; // rsi
  int v6; // [rsp+20h] [rbp-28h]

  v3 = (char *)a2 + 144;
  for ( i = *((_QWORD *)a2 + 19); (char *)i != v3; i = *(_QWORD *)(i + 8) )
  {
    v5 = **(_QWORD **)(i - 56);
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = i - 56;
    if ( *(_DWORD *)(v5 + 112) == 1 )
    {
      LOBYTE(a3) = 1;
      LOBYTE(v6) = 0;
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int, _QWORD))(**(_QWORD **)(v5 + 120) + 48LL))(
        *(_QWORD *)(v5 + 120),
        v5,
        a3,
        0LL,
        v6,
        0LL);
      if ( bTracingEnabled )
      {
        if ( (byte_1C00769C1 & 1) != 0 )
          McTemplateK0p_EtwWriteTransfer((__int64)this, &EventEvictAllocation, a3, v5);
      }
    }
  }
}
