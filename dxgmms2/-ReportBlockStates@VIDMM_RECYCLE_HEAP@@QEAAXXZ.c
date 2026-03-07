void __fastcall VIDMM_RECYCLE_HEAP::ReportBlockStates(VIDMM_RECYCLE_HEAP *this, __int64 a2, __int64 a3)
{
  char *v3; // rdi
  char *i; // rbx
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+38h] [rbp-10h]

  v3 = (char *)this + 32;
  for ( i = (char *)*((_QWORD *)this + 4); i != v3; i = *(char **)i )
  {
    if ( bTracingEnabled )
    {
      v6 = *((_QWORD *)i + 3);
      v7 = *((_QWORD *)i + 4) - v6;
      a3 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) + 8LL);
      a2 = *(unsigned int *)this;
      if ( (unsigned int)(a2 - 3) <= 3 )
        v6 = *((_QWORD *)i + 5);
      if ( (byte_1C00769C2 & 2) != 0 )
      {
        LODWORD(v10) = 1;
        LODWORD(v9) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) + 8LL);
        LODWORD(v8) = *(_DWORD *)this;
        McTemplateK0pxqqt_EtwWriteTransfer(v7, &EventCreateProcessAllocation, a3, v6, v7, v8, v9, v10);
      }
    }
    VIDMM_RECYCLE_BLOCK::ReportStates((VIDMM_RECYCLE_BLOCK *)(i - 16), a2, a3);
  }
}
