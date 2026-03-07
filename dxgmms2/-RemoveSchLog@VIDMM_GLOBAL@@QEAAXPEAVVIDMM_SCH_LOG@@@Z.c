void __fastcall VIDMM_GLOBAL::RemoveSchLog(VIDMM_GLOBAL *this, struct VIDMM_SCH_LOG *a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // r8
  _QWORD *v6; // rax
  struct _MDL *v7; // rbx
  unsigned __int64 LogicalAddress; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v9,
    (VIDMM_GLOBAL *)((char *)this + 3832));
  v4 = (_QWORD *)((char *)a2 + 8);
  v5 = *((_QWORD *)a2 + 1);
  if ( *(struct VIDMM_SCH_LOG **)(v5 + 8) != (struct VIDMM_SCH_LOG *)((char *)a2 + 8)
    || (v6 = (_QWORD *)*((_QWORD *)a2 + 2), (_QWORD *)*v6 != v4) )
  {
    __fastfail(3u);
  }
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  if ( *((_BYTE *)this + 40181) )
  {
    v7 = (struct _MDL *)*((_QWORD *)a2 + 9);
    LogicalAddress = VidMmiGetLogicalAddress(*((void **)a2 + 10), 0LL);
    SysMmUnmapIommuRange(*(struct SYSMM_ADAPTER **)(*((_QWORD *)this + 3) + 224LL), LogicalAddress, v7, 0);
  }
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v9);
  *v4 = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
}
