__int64 __fastcall XEBRUSHOBJ::bSaveAttributes(XEBRUSHOBJ *this)
{
  __int64 v2; // rdx
  _QWORD *v3; // rcx
  _QWORD *v5; // rdx

  v2 = *(_QWORD *)this;
  v3 = *(_QWORD **)(*(_QWORD *)this + 48LL);
  if ( v3 != (_QWORD *)(v2 + 72) )
  {
    v5 = (_QWORD *)(v2 + 64);
    if ( v3 != v5 )
    {
      *v5 = *v3;
      *(_QWORD *)(*(_QWORD *)this + 56LL) = *(_QWORD *)(*(_QWORD *)this + 48LL);
      *(_QWORD *)(*(_QWORD *)this + 48LL) = *(_QWORD *)this + 64LL;
      *((_DWORD *)this + 2) = 1;
    }
  }
  return 1LL;
}
