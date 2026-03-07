char __fastcall VIDMM_SEGMENT::CleanupMarkedForEvictionAllocations(VIDMM_GLOBAL **this)
{
  _QWORD *v2; // r14
  char v3; // di
  _QWORD *v4; // rbx
  __int64 v5; // r8
  VIDMM_GLOBAL *v6; // rcx
  int v8; // [rsp+20h] [rbp-28h]

  v2 = this + 22;
  v3 = 1;
  while ( 1 )
  {
    v4 = (_QWORD *)*v2;
    if ( (_QWORD *)*v2 == v2 )
      break;
    if ( !VIDMM_GLOBAL::UnderCleanupLimit(this[1]) )
      return v3;
    LOBYTE(v5) = 1;
    LOBYTE(v8) = 0;
    (*((void (__fastcall **)(VIDMM_GLOBAL **, _QWORD *, __int64, _QWORD, int, _QWORD))*this + 6))(
      this,
      v4 - 51,
      v5,
      0LL,
      v8,
      0LL);
    v6 = this[1];
    *((_QWORD *)v6 + 895) += *(v4 - 50);
    ++*((_DWORD *)v6 + 1792);
  }
  return 0;
}
