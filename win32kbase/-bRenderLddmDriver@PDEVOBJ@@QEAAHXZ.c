__int64 __fastcall PDEVOBJ::bRenderLddmDriver(PDEVOBJ *this)
{
  __int64 v2; // rdx
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // edx
  bool v6; // zf
  __int64 v8; // rsi
  __int64 v9; // rax

  v2 = *(_QWORD *)(*(_QWORD *)this + 2552LL);
  if ( ((v2 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
  {
    v3 = *(_DWORD *)(v2 + 160);
    v4 = 0;
    v5 = v3 & 0x800000;
    if ( (v3 & 0x4000000) == 0 )
    {
      v6 = v5 == 0;
LABEL_4:
      LOBYTE(v4) = !v6;
      return v4;
    }
    v6 = v5 == 0;
    if ( v5 )
      goto LABEL_4;
    v8 = *(_QWORD *)(SGDGetSessionState(this) + 24);
    if ( (unsigned int)IsCddCddRemoteSessionFilteringAllowed() )
    {
      v9 = *(_QWORD *)(*(_QWORD *)this + 2552LL);
      if ( (*(_DWORD *)(v9 + 160) & 0x4000000) != 0 || *(_DWORD *)(v8 + 1224) )
      {
        v6 = *(_QWORD *)(v9 + 272) == 0LL;
        goto LABEL_4;
      }
    }
  }
  return 0LL;
}
