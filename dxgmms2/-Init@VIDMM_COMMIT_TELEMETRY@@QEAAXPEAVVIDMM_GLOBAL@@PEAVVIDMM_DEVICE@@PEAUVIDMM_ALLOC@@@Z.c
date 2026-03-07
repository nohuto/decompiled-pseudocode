void __fastcall VIDMM_COMMIT_TELEMETRY::Init(
        VIDMM_COMMIT_TELEMETRY *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_DEVICE *a3,
        struct VIDMM_ALLOC *a4)
{
  if ( !*((_BYTE *)this + 24) && a2 )
  {
    if ( a3 )
    {
      *((_QWORD *)this + 1) = a3;
      *((_QWORD *)this + 2) = a4;
      *(_QWORD *)this = a2;
      *((_BYTE *)this + 24) = 1;
    }
  }
}
