char __fastcall VIDMM_CPU_HOST_APERTURE::ReclaimRange(VIDMM_CPU_HOST_APERTURE *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  char result; // al
  _QWORD *v3; // rax
  __int64 v4; // r8
  _QWORD *v5; // rdx
  __int64 v6; // rdx

  result = 0;
  if ( *((_QWORD *)a2 + 59) )
  {
    v3 = (_QWORD *)((char *)a2 + 480);
    v4 = *((_QWORD *)a2 + 60);
    if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v4 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 480)
      || (v5 = (_QWORD *)*((_QWORD *)a2 + 61), (_QWORD *)*v5 != v3)
      || (*v5 = v4,
          *(_QWORD *)(v4 + 8) = v5,
          v6 = *(_QWORD *)this,
          *(VIDMM_CPU_HOST_APERTURE **)(*(_QWORD *)this + 8LL) != this) )
    {
      __fastfail(3u);
    }
    *v3 = v6;
    v3[1] = this;
    *(_QWORD *)(v6 + 8) = v3;
    *(_QWORD *)this = v3;
    return 1;
  }
  return result;
}
