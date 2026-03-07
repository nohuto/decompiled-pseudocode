void __fastcall DXGDEVICE::ReportAllocationState(DXGDEVICE *this, struct DXGALLOCATION *a2, int a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  __int64 v7; // r8
  int v8; // r10d
  __int64 v9; // r11
  char v10; // dl
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // [rsp+40h] [rbp-C8h]
  int v15; // [rsp+48h] [rbp-C0h]
  int v16; // [rsp+50h] [rbp-B8h]
  int v17; // [rsp+60h] [rbp-A8h]
  int v18; // [rsp+68h] [rbp-A0h]
  int v19; // [rsp+70h] [rbp-98h]
  int v20; // [rsp+78h] [rbp-90h]
  int v21; // [rsp+88h] [rbp-80h]
  int v22; // [rsp+E0h] [rbp-28h]
  int v23; // [rsp+E8h] [rbp-20h]

  v3 = 0LL;
  if ( (*((_BYTE *)this + 1901) & 1) != 0 )
  {
    if ( a3 )
    {
      if ( !bTracingEnabled )
        return;
      v7 = *((_QWORD *)a2 + 6);
      v8 = *((_DWORD *)a2 + 30);
      v9 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v10 = (*((_DWORD *)a2 + 18) >> 12) & 0x3F;
      v11 = *(_QWORD *)(*((_QWORD *)this + 5) + 64LL);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
        McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
          v11,
          &EventReportAdapterAllocation,
          v7,
          *(_QWORD *)(v11 + 80),
          (char)this,
          v9,
          0,
          v8,
          v14,
          v15,
          v16,
          0,
          v17,
          v18,
          v19,
          v20,
          v7,
          v21,
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
          v22,
          v23,
          v10,
          0);
    }
    if ( bTracingEnabled )
    {
      v12 = *((_QWORD *)a2 + 5);
      v13 = v12 ? *(unsigned int *)(v12 + 16) : 0LL;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
        McTemplateK0ppppppppppppq_EtwWriteTransfer(
          *(_QWORD *)(*((_QWORD *)this + 5) + 64LL),
          &EventReportDeviceAllocation,
          v13,
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 64LL) + 80LL),
          this,
          *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
          a2);
    }
  }
  else
  {
    if ( a3 )
    {
      v6 = *((_QWORD *)a2 + 5);
      if ( v6 )
        v3 = *(_QWORD *)(v6 + 56);
      (*(void (__fastcall **)(DXGDEVICE *, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                           + 584LL))(
        this,
        *((_QWORD *)a2 + 6),
        v3);
    }
    (*(void (__fastcall **)(DXGDEVICE *, struct DXGALLOCATION *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                            + 8LL)
                                                                + 592LL))(
      this,
      a2);
  }
}
