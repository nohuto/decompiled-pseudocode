void __fastcall EFSMEMOBJ::~EFSMEMOBJ(EFSMEMOBJ *this, __int64 a2, __int64 a3)
{
  ULONG v4; // ecx

  if ( *(_QWORD *)this )
  {
    **((_DWORD **)this + 1) = *(_DWORD *)(*(_QWORD *)this + 64LL);
    v4 = *(_DWORD *)(*(_QWORD *)this + 28LL);
    if ( v4 )
      EngSetLastError(v4);
    FreeTmpBuffer(*(_QWORD *)this, a2, a3);
  }
  else
  {
    **((_DWORD **)this + 1) = 0;
    EngSetLastError(0xEu);
  }
}
