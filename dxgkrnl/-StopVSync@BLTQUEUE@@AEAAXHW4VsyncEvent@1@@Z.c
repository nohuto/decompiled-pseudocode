void __fastcall BLTQUEUE::StopVSync(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  struct _KTHREAD **v5; // rdx
  __int64 v6; // [rsp+20h] [rbp-38h]
  _BYTE v7[8]; // [rsp+30h] [rbp-28h] BYREF
  DXGPUSHLOCK *v8; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+40h] [rbp-18h]

  v3 = a2;
  if ( (*(_DWORD *)(a1 + 952) & 2) != 0 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v6) = a3;
      McTemplateK0qq_EtwWriteTransfer(a1, a2, a3, *(_DWORD *)(a1 + 136), v6);
    }
    v5 = 0LL;
    if ( !v3 )
      v5 = (struct _KTHREAD **)(a1 + 408);
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7, v5, 0);
    if ( !v3 )
    {
      DXGPUSHLOCK::AcquireExclusive(v8);
      v9 = 2;
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 128) + 40LL))(*(_QWORD *)(a1 + 128));
    *(_DWORD *)(a1 + 952) &= ~2u;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
  }
}
