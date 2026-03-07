void __fastcall XEBRUSHOBJ::RestoreAttributes(XEBRUSHOBJ *this)
{
  _DWORD *v2; // r8
  __int64 v3; // rcx

  v2 = (_DWORD *)((char *)this + 8);
  if ( *((_DWORD *)this + 2) )
  {
    v3 = *(_QWORD *)this;
    if ( *(_QWORD *)(v3 + 48) == v3 + 64 )
    {
      **(_QWORD **)(v3 + 56) = *(_QWORD *)(v3 + 64);
      *(_QWORD *)(*(_QWORD *)this + 48LL) = *(_QWORD *)(*(_QWORD *)this + 56LL);
    }
  }
  *v2 = 0;
}
