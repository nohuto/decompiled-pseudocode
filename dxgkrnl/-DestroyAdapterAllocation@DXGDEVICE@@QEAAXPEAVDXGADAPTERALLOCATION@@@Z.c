void __fastcall DXGDEVICE::DestroyAdapterAllocation(DXGDEVICE *this, struct DXGADAPTERALLOCATION *a2)
{
  char v3; // r9
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r10
  char v7; // dl
  __int64 v8; // rcx
  int v9; // [rsp+40h] [rbp-C8h]
  int v10; // [rsp+48h] [rbp-C0h]
  int v11; // [rsp+50h] [rbp-B8h]
  int v12; // [rsp+60h] [rbp-A8h]
  int v13; // [rsp+68h] [rbp-A0h]
  int v14; // [rsp+70h] [rbp-98h]
  int v15; // [rsp+78h] [rbp-90h]
  int v16; // [rsp+88h] [rbp-80h]
  int v17; // [rsp+E0h] [rbp-28h]
  int v18; // [rsp+E8h] [rbp-20h]

  v3 = (char)this;
  if ( (*((_BYTE *)this + 1901) & 1) != 0 )
  {
    if ( bTracingEnabled )
    {
      v5 = *((_QWORD *)a2 + 14);
      v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v7 = (*((_DWORD *)a2 + 1) >> 21) & 0x3F;
      v8 = *(_QWORD *)(*((_QWORD *)this + 5) + 64LL);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
        McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
          v8,
          &EventDestroyAdapterAllocation,
          v5,
          *(_QWORD *)(v8 + 80),
          v3,
          v6,
          0,
          v5,
          v9,
          v10,
          v11,
          0,
          v12,
          v13,
          v14,
          v15,
          (char)a2,
          v16,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          0,
          v17,
          v18,
          v7,
          0);
    }
  }
  else
  {
    v4 = *((_QWORD *)a2 + 1);
    if ( v4 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, DXGDEVICE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                           + 760LL)
                                                                               + 8LL)
                                                                   + 120LL))(
        *((_QWORD *)this + 99),
        0LL,
        v4,
        this);
      *((_QWORD *)a2 + 1) = 0LL;
    }
  }
}
