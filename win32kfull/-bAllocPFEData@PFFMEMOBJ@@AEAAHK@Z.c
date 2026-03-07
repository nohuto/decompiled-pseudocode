__int64 __fastcall PFFMEMOBJ::bAllocPFEData(PFFMEMOBJ *this, unsigned int a2)
{
  unsigned int v4; // ecx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rax

  *(_DWORD *)(*(_QWORD *)this + 212LL) = *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 32) + 19496LL) + 140;
  *(_DWORD *)(*(_QWORD *)this + 212LL) = (*(_DWORD *)(*(_QWORD *)this + 212LL) + 7) & 0xFFFFFFF8;
  v4 = *(_DWORD *)(*(_QWORD *)this + 212LL);
  if ( a2 > 0xFFFFFFFF / v4 )
  {
    v6 = 0;
    *(_QWORD *)(*(_QWORD *)this + 216LL) = 0LL;
  }
  else
  {
    v5 = a2 * v4;
    v6 = 0;
    if ( (_DWORD)v5 )
      v7 = Win32AllocPoolZInit(v5, 1701212231LL);
    else
      v7 = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 216LL) = v7;
  }
  LOBYTE(v6) = *(_QWORD *)(*(_QWORD *)this + 216LL) != 0LL;
  return v6;
}
