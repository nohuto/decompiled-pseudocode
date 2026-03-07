void __fastcall VIDMM_DMA_POOL::ReleaseBuffer(VIDMM_DMA_POOL *this, struct _VIDMM_DMA_BUFFER *a2, char a3)
{
  int v6; // eax
  bool v7; // zf
  int v8; // eax
  __int64 v9; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    v9 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v9 + 24) = a2;
    *(_QWORD *)(v9 + 32) = *((_QWORD *)this + 2);
  }
  if ( a3 )
  {
    v7 = _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 8, 0xFFFFFFFF) == 1;
  }
  else
  {
    v6 = *((_DWORD *)a2 + 8);
    v7 = v6 == 0;
    if ( v6 > 0 )
    {
      v8 = v6 - 1;
      *((_DWORD *)a2 + 8) = v8;
      v7 = v8 == 0;
    }
  }
  if ( v7 )
    *((_BYTE *)a2 + 24) = 0;
}
