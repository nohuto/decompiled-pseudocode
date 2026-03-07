void __fastcall VIDMM_GLOBAL::EvictOneAllocation(VIDMM_GLOBAL *this, __int64 **a2, __int64 a3)
{
  bool v3; // si
  VIDMM_GLOBAL *v5; // rbp
  __int64 v6; // rdi
  int v7; // eax
  _QWORD *v8; // rax
  __int64 *v9; // rdx
  int v10; // [rsp+20h] [rbp-28h]

  v3 = a3;
  v5 = this;
  v6 = **a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  v7 = *((_DWORD *)a2 + 7) & 3;
  if ( v7 == 2 )
  {
    VIDMM_GLOBAL::NotifyAllocationEviction(v5, (struct VIDMM_ALLOC *)a2, v3, 0LL, 0LL);
  }
  else if ( v7 == 1 )
  {
    v8 = a2 + 7;
    v9 = a2[7];
    if ( (__int64 **)v9[1] != a2 + 7 || (this = (VIDMM_GLOBAL *)a2[8], *(_QWORD **)this != v8) )
      __fastfail(3u);
    *(_QWORD *)this = v9;
    v9[1] = (__int64)this;
    *((_DWORD *)a2 + 7) &= 0xFFFFFFFC;
    a2[8] = 0LL;
    *v8 = 0LL;
  }
  if ( !v3 || (this = (VIDMM_GLOBAL *)a2[1][1], (*((_DWORD *)this + 28) & 2) != 0) )
  {
    if ( *(_DWORD *)(v6 + 112) == 1 )
    {
      LOBYTE(a3) = 1;
      LOBYTE(v10) = 0;
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int, _QWORD))(**(_QWORD **)(v6 + 120) + 48LL))(
        *(_QWORD *)(v6 + 120),
        v6,
        a3,
        0LL,
        v10,
        0LL);
    }
  }
  if ( bTracingEnabled )
  {
    if ( (byte_1C00769C1 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer((__int64)this, &EventEvictAllocation, a3, v6);
  }
}
