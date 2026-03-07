void __fastcall VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(VIDMM_PROCESS_ADAPTER_INFO *this)
{
  unsigned int v1; // edx
  __int64 v3; // rax
  _QWORD *v4; // rcx

  v1 = 0;
  if ( bTracingEnabled && *(_DWORD *)(*(_QWORD *)this + 7016LL) )
  {
    do
    {
      v3 = v1++;
      v4 = (_QWORD *)(*((_QWORD *)this + 6) + 296 * v3);
      v4[20] = v4[17];
      v4[21] = v4[18];
      v4[22] = v4[19];
    }
    while ( v1 < *(_DWORD *)(*(_QWORD *)this + 7016LL) );
  }
}
