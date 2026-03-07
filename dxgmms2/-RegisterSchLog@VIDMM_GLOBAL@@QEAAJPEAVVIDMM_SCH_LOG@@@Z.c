__int64 __fastcall VIDMM_GLOBAL::RegisterSchLog(VIDMM_GLOBAL *this, struct VIDMM_SCH_LOG *a2)
{
  struct _MDL *v4; // rbx
  unsigned __int64 LogicalAddress; // rax
  int v6; // eax
  unsigned int v7; // ebx
  VIDMM_GLOBAL **v9; // rdx
  VIDMM_GLOBAL *v10; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v11,
    (VIDMM_GLOBAL *)((char *)this + 3832));
  if ( *((_BYTE *)this + 40181)
    && (v4 = (struct _MDL *)*((_QWORD *)a2 + 9),
        LogicalAddress = VidMmiGetLogicalAddress(*((void **)a2 + 10), 0LL),
        v6 = SysMmMapIommuRange(*(struct SYSMM_ADAPTER **)(*((_QWORD *)this + 3) + 224LL), LogicalAddress, v4, 0),
        v7 = v6,
        v6 < 0) )
  {
    WdLogSingleEntry1(3LL, v6);
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v11);
    return v7;
  }
  else
  {
    v9 = (VIDMM_GLOBAL **)*((_QWORD *)this + 478);
    v10 = (struct VIDMM_SCH_LOG *)((char *)a2 + 8);
    if ( *v9 != (VIDMM_GLOBAL *)((char *)this + 3816) )
      __fastfail(3u);
    *(_QWORD *)v10 = (char *)this + 3816;
    *((_QWORD *)a2 + 2) = v9;
    *v9 = v10;
    *((_QWORD *)this + 478) = v10;
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v11);
    return 0LL;
  }
}
