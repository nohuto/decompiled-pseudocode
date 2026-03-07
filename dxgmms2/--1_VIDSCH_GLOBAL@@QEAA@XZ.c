void __fastcall _VIDSCH_GLOBAL::~_VIDSCH_GLOBAL(_VIDSCH_GLOBAL *this)
{
  char *v2; // rcx
  char *v3; // rcx
  char *v4; // rcx
  char *v5; // rcx
  char *v6; // rcx
  char *v7; // rcx
  char *v8; // rcx

  v2 = (char *)*((_QWORD *)this + 416);
  if ( v2 != (char *)this + 3336 && v2 )
    ExFreePoolWithTag(v2, 0);
  *((_QWORD *)this + 416) = 0LL;
  *((_DWORD *)this + 874) = 0;
  v3 = (char *)*((_QWORD *)this + 321);
  if ( v3 != (char *)this + 2576 && v3 )
    ExFreePoolWithTag(v3, 0);
  *((_QWORD *)this + 321) = 0LL;
  *((_DWORD *)this + 652) = 0;
  v4 = (char *)*((_QWORD *)this + 79);
  if ( v4 != (char *)this + 640 && v4 )
    ExFreePoolWithTag(v4, 0);
  *((_QWORD *)this + 79) = 0LL;
  *((_DWORD *)this + 176) = 0;
  v5 = (char *)*((_QWORD *)this + 75);
  if ( v5 != (char *)this + 608 && v5 )
    ExFreePoolWithTag(v5, 0);
  *((_QWORD *)this + 75) = 0LL;
  *((_DWORD *)this + 156) = 0;
  v6 = (char *)*((_QWORD *)this + 69);
  if ( v6 != (char *)this + 560 && v6 )
    ExFreePoolWithTag(v6, 0);
  *((_QWORD *)this + 69) = 0LL;
  *((_DWORD *)this + 144) = 0;
  v7 = (char *)*((_QWORD *)this + 63);
  if ( v7 != (char *)this + 512 && v7 )
    ExFreePoolWithTag(v7, 0);
  *((_QWORD *)this + 63) = 0LL;
  *((_DWORD *)this + 132) = 0;
  v8 = (char *)*((_QWORD *)this + 57);
  if ( v8 != (char *)this + 464 && v8 )
    ExFreePoolWithTag(v8, 0);
  *((_QWORD *)this + 57) = 0LL;
  *((_DWORD *)this + 120) = 0;
}
