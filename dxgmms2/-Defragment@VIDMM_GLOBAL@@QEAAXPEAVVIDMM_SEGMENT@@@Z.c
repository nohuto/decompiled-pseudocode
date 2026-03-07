void __fastcall VIDMM_GLOBAL::Defragment(VIDMM_GLOBAL *this, struct VIDMM_SEGMENT *a2)
{
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // r8
  unsigned __int64 ActiveVprEnd; // rbx
  struct VIDMM_SEGMENT *v8; // r14
  char *v9; // rbx
  _QWORD *v10; // r15
  _QWORD *v11; // rbx
  VIDMM_DEVICE *v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // r8

  v4 = *(_QWORD *)(*(_QWORD *)this + 256LL);
  *((_QWORD *)a2 + 62) = v4;
  if ( (*((_DWORD *)this + 1764) & 0x4000) != 0 )
  {
    WdLogSingleEntry1(4LL, a2);
  }
  else
  {
    v5 = *((unsigned int *)a2 + 95);
    if ( (byte_1C00769C2 & 0x40) != 0 )
      McTemplateK0p_EtwWriteTransfer((__int64)this, &EventVidMmStartDefragment, v4, this);
    VIDMM_GLOBAL::StartPreparation((__int64)this, 0xFFFFFFFF, 0LL, 0LL, 1002);
    v6 = *((_QWORD *)this + 3);
    if ( (*(_DWORD *)(344 * v5 + *(_QWORD *)(v6 + 2808) + 16) & 4) != 0
      && (*(_BYTE *)(v6 + 2276) & 8) != 0
      && (*((_DWORD *)this + 1764) & 0x20000) == 0 )
    {
      WdLogSingleEntry1(4LL, a2);
      VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(this);
      VIDMM_SEGMENT::TrimAllMarkedForEvictionAllocations(a2);
      if ( (*((_BYTE *)a2 + 82) & 1) != 0 )
      {
        ActiveVprEnd = VIDMM_SEGMENT::GetActiveVprEnd(a2);
        (*(void (__fastcall **)(struct VIDMM_SEGMENT *, _QWORD))(*(_QWORD *)a2 + 128LL))(a2, 0LL);
        (*(void (__fastcall **)(struct VIDMM_SEGMENT *, unsigned __int64, _QWORD))(*(_QWORD *)a2 + 128LL))(
          a2,
          ActiveVprEnd,
          *((_QWORD *)a2 + 6));
      }
      else
      {
        (*(void (__fastcall **)(struct VIDMM_SEGMENT *, _QWORD, _QWORD))(*(_QWORD *)a2 + 128LL))(
          a2,
          0LL,
          *((_QWORD *)a2 + 6));
      }
    }
    else
    {
      WdLogSingleEntry1(4LL, a2);
      v8 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 17);
      while ( v8 != (struct VIDMM_SEGMENT *)((char *)a2 + 136) )
      {
        v9 = (char *)v8 - 24;
        v8 = *(struct VIDMM_SEGMENT **)v8;
        if ( !(unsigned __int8)PsIsSystemProcess(**(_QWORD **)v9)
          && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v9 + 32LL) + 424LL) & 1) == 0 )
        {
          v10 = v9 + 40;
          v11 = (_QWORD *)*((_QWORD *)v9 + 5);
          while ( v11 != v10 )
          {
            v12 = (VIDMM_DEVICE *)v11[4];
            v11 = (_QWORD *)*v11;
            if ( *((_QWORD *)v12 + 3) )
            {
              if ( !*((_QWORD *)v12 + 24) )
                VIDMM_DEVICE::PartiallySuspend(v12);
              VIDMM_DEVICE::FaultAllAllocations(v12);
            }
          }
        }
      }
      VIDMM_SEGMENT::OldDefragment(a2);
    }
    VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
    if ( (byte_1C00769C2 & 0x40) != 0 )
      McTemplateK0p_EtwWriteTransfer(v13, &EventVidMmEndDefragment, v14, this);
  }
}
