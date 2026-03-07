__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::ResetUndo(VIDMM_RECYCLE_MULTIRANGE *this)
{
  int v1; // esi
  unsigned __int64 v2; // r8
  int v3; // edi
  VIDMM_RECYCLE_MULTIRANGE *v4; // rbx
  int v5; // ebp
  int v6; // edx
  int v7; // eax
  int v8; // eax
  void *v10; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v1 = 0;
  v2 = *((_QWORD *)this + 5) - *((_QWORD *)this + 6);
  v3 = 0;
  v4 = this;
  v10 = 0LL;
  v11 = v2;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
    v2 = v11;
  }
  if ( !*((_BYTE *)v4 + 153) )
  {
    v5 = 1028;
    v6 = **(_DWORD **)(*((_QWORD *)v4 + 10) + 32LL);
    if ( (unsigned int)(v6 - 3) > 3 )
    {
      v10 = (void *)*((_QWORD *)v4 + 6);
      v7 = 4;
      if ( v6 != 2 )
        v7 = 1028;
      v5 = v7;
    }
    else
    {
      if ( v6 != 3 )
        v5 = 4;
      VIDMM_RECYCLE_MULTIRANGE::Map(v4, 0LL, v2, 1u);
      if ( *((_BYTE *)v4 + 152) && (this = (VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v4 + 20)) != 0LL )
      {
        this = (VIDMM_RECYCLE_MULTIRANGE *)((char *)this + *((_QWORD *)v4 + 21));
        v1 = 1;
        v10 = this;
      }
      else
      {
        v3 = -1071775472;
      }
      if ( v3 < 0 )
      {
LABEL_19:
        if ( v3 != -1071775472 )
          goto LABEL_23;
        goto LABEL_20;
      }
    }
    v8 = VidMmAllocateVirtualMemory(&v10, &v11, 0x1000000, v5);
    v3 = v8;
    if ( v8 < 0 )
      WdLogSingleEntry1(4LL, v8);
    goto LABEL_19;
  }
  v3 = -1071775472;
LABEL_20:
  if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)this, &EventPerformanceWarning, v2, 18);
LABEL_23:
  if ( v1 )
    VIDMM_RECYCLE_MULTIRANGE::Unmap(v4);
  return (unsigned int)v3;
}
