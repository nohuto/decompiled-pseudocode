void __fastcall VIDMM_CPU_HOST_APERTURE::OfferRange(VIDMM_CPU_HOST_APERTURE *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  _QWORD *v2; // rdx
  __int64 v3; // r8
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rcx

  v2 = (_QWORD *)((char *)a2 + 480);
  v3 = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2
    || (v4 = (_QWORD *)v2[1], (_QWORD *)*v4 != v2)
    || (*v4 = v3,
        *(_QWORD *)(v3 + 8) = v4,
        v5 = (_QWORD *)((char *)this + 16),
        v6 = *((_QWORD *)this + 2),
        *(_QWORD **)(v6 + 8) != v5) )
  {
    __fastfail(3u);
  }
  *v2 = v6;
  v2[1] = v5;
  *(_QWORD *)(v6 + 8) = v2;
  *v5 = v2;
}
