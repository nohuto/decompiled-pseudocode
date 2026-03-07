void __fastcall VIDMM_SEGMENT::TrimAllMarkedForEvictionAllocations(VIDMM_SEGMENT *this, __int64 a2, __int64 a3)
{
  _QWORD *i; // rbx
  int v5; // [rsp+20h] [rbp-28h]

  for ( i = (_QWORD *)((char *)this + 176);
        (_QWORD *)*i != i;
        (*(void (__fastcall **)(VIDMM_SEGMENT *, __int64, __int64, _QWORD, int, _QWORD))(*(_QWORD *)this + 48LL))(
          this,
          *i - 408LL,
          a3,
          0LL,
          v5,
          0LL) )
  {
    LOBYTE(a3) = 1;
    LOBYTE(v5) = 0;
  }
}
