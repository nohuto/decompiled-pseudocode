void __fastcall RGNMEMOBJ::vPopThreadGuardedObject(RGNMEMOBJ *this)
{
  _QWORD *v1; // rbx
  __int64 v2; // rax
  _QWORD *v3; // rcx

  if ( *(_QWORD *)this )
  {
    v1 = (_QWORD *)(*(_QWORD *)this + 88LL);
    if ( *(_QWORD *)this != -88LL )
    {
      KeEnterCriticalRegion();
      v2 = *v1;
      if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v3 = (_QWORD *)v1[1], (_QWORD *)*v3 != v1) )
        __fastfail(3u);
      *v3 = v2;
      *(_QWORD *)(v2 + 8) = v3;
      v1[1] = v1;
      *v1 = v1;
      KeLeaveCriticalRegion();
    }
  }
}
