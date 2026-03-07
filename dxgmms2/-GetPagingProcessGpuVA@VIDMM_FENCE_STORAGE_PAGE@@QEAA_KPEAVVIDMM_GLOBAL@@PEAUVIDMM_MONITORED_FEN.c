__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::GetPagingProcessGpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3,
        char a4)
{
  __int64 **i; // rax
  __int64 v10; // rbx
  __int64 *v11; // rdx
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (*((_BYTE *)a2 + 40936) & 4) == 0 )
    return 0LL;
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v12,
    (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 72));
  for ( i = (__int64 **)*((_QWORD *)this + 7); ; i = (__int64 **)*i )
  {
    if ( i == (__int64 **)((char *)this + 56) )
      goto LABEL_7;
    if ( a2 == (struct VIDMM_GLOBAL *)i[6] )
      break;
  }
  v11 = i[4];
  if ( v11 == (__int64 *)(i + 4) )
  {
LABEL_7:
    v10 = 0LL;
    goto LABEL_8;
  }
  while ( *((_QWORD *)a2 + 5048) != *(v11 - 1) || *((_DWORD *)v11 + 5) != 1 << a4 )
  {
    v11 = (__int64 *)*v11;
    if ( v11 == (__int64 *)(i + 4) )
      goto LABEL_7;
  }
  v10 = *(v11 - 5) + *((unsigned int *)a3 + 4);
LABEL_8:
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v12);
  return v10;
}
