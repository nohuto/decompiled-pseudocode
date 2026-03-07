void __fastcall VIDMM_SEGMENT::TrimMarkedForEvictionAllocations(VIDMM_SEGMENT *this, unsigned __int64 *a2, __int64 a3)
{
  _QWORD *v4; // rsi
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rcx
  int v8; // [rsp+20h] [rbp-28h]

  v4 = (_QWORD *)((char *)this + 176);
  while ( 1 )
  {
    v6 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
      break;
    LOBYTE(a3) = 1;
    LOBYTE(v8) = 0;
    (*(void (__fastcall **)(VIDMM_SEGMENT *, _QWORD *, __int64, _QWORD, int, _QWORD))(*(_QWORD *)this + 48LL))(
      this,
      v6 - 51,
      a3,
      0LL,
      v8,
      0LL);
    v7 = *(v6 - 49);
    if ( v7 >= *a2 )
    {
      *a2 = 0LL;
      return;
    }
    *a2 -= v7;
  }
}
