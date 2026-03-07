void __fastcall CPTPEngine::SetContactRestingState(CPTPEngine *this, struct CContactState *a2, int a3)
{
  int v3; // r9d
  int v4; // r8d

  v3 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 1) != 0 && -__CFSHR__(v3, 8) != a3 )
  {
    v4 = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)((_BYTE)a3 << 7)) & 0x80;
    *(_DWORD *)a2 = v4;
    if ( (v4 & 0x80u) == 0 )
    {
      *((_DWORD *)a2 + 1) |= 3u;
      ++*((_DWORD *)this + 907);
      --*((_DWORD *)this + 906);
    }
    else
    {
      ++*((_DWORD *)this + 906);
      --*((_DWORD *)this + 907);
    }
  }
}
