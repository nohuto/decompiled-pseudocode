void __fastcall RFONTOBJ::vLockSystemTTGlyphCache(RFONTOBJ *this)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  v3 = *(_QWORD *)(*(_QWORD *)this + 720LL);
  if ( v3 )
  {
    if ( (*(_DWORD *)(v1 + 712) & 0x80u) == 0 )
    {
      GreAcquireSemaphore(*(_QWORD *)(v3 + 504));
      v4 = *(_QWORD *)this;
      v5 = 0LL;
      *(_DWORD *)(v4 + 712) |= 0x80u;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5);
    }
  }
}
