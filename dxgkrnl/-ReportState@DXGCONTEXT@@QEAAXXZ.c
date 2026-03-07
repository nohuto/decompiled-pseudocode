void __fastcall DXGCONTEXT::ReportState(DXGCONTEXT *this, __int64 a2, __int64 a3)
{
  __int128 v4; // xmm0
  __int64 v5; // rcx
  __int64 v6; // rcx
  DXGHWQUEUE *i; // rbx
  DXGDEVICESYNCOBJECT *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8

  if ( bTracingEnabled )
  {
    v4 = *(_OWORD *)((char *)this + 200);
    v5 = *((unsigned int *)this + 6);
    a2 = *((unsigned int *)this + 99);
    a3 = *((unsigned int *)this + 98);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
        v5,
        &EventReportContext,
        a3,
        *((_QWORD *)this + 2),
        a3,
        a2,
        (_DWORD)v4,
        DWORD1(v4),
        DWORD2(v4),
        HIDWORD(v4),
        (unsigned int)*(_OWORD *)((char *)this + 216),
        0,
        this,
        v5,
        0LL);
  }
  if ( *((_QWORD *)this + 29) )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL) + 456LL))();
  if ( (*((_DWORD *)this + 101) & 0x10) != 0 )
  {
    v6 = *((_QWORD *)this + 35);
    if ( v6 && (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      McTemplateK0pppp_EtwWriteTransfer(v6, a2, a3, this, v6, *((_QWORD *)this + 23), *((_QWORD *)this + 24));
    if ( *((_QWORD *)this + 36) )
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL) + 288LL))();
    for ( i = (DXGHWQUEUE *)*((_QWORD *)this + 51); i != (DXGCONTEXT *)((char *)this + 408) && i; i = *(DXGHWQUEUE **)i )
      DXGHWQUEUE::ReportState(i);
    v8 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
    if ( v8 )
      DXGDEVICESYNCOBJECT::ReportState(v8);
  }
  else if ( *((_QWORD *)this + 32) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL) + 8LL) + 280LL))();
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      McTemplateK0pppp_EtwWriteTransfer(
        v10,
        v9,
        v11,
        this,
        *((_QWORD *)this + 32),
        *((_QWORD *)this + 23),
        *((_QWORD *)this + 24));
  }
  if ( !*((_BYTE *)this + 442) )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGCONTEXT *)((char *)this + 304));
    (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL)
                                                       + 8LL)
                                           + 712LL))(
      *((_QWORD *)this + 2),
      (char *)this + 336);
    *((_QWORD *)this + 39) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 304, 0LL);
    KeLeaveCriticalRegion();
  }
}
