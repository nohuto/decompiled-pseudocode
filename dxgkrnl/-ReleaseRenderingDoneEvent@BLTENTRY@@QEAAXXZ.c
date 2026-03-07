void __fastcall BLTENTRY::ReleaseRenderingDoneEvent(BLTENTRY *this, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  int v5; // [rsp+20h] [rbp-18h]
  int v6; // [rsp+28h] [rbp-10h]

  v3 = *((_QWORD *)this + 3);
  if ( v3 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v6 = *((_DWORD *)this + 15);
    v5 = *(_DWORD *)(v3 + 260);
    McTemplateK0pqq_EtwWriteTransfer(
      (__int64)this,
      &BltQueueDisplayOnlyWarpRenderComplete,
      a3,
      *(_QWORD *)(v3 + 248),
      v5,
      v6);
  }
  ObfDereferenceObject(*((PVOID *)this + 5));
  *((_QWORD *)this + 5) = 0LL;
}
