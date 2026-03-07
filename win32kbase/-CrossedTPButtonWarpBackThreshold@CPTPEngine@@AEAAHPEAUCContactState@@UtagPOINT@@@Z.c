_BOOL8 __fastcall CPTPEngine::CrossedTPButtonWarpBackThreshold(
        CPTPEngine *this,
        struct CContactState *a2,
        struct tagPOINT a3)
{
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // rdx

  if ( (*((_DWORD *)this + 67) & 0x200) == 0 )
    return 1LL;
  v3 = *((_QWORD *)a2 + 7);
  v5 = (unsigned int)(*((_DWORD *)this + 91) * *((_DWORD *)this + 91));
  if ( SHIDWORD(v3) < a3.y )
    v5 = (unsigned int)(*((_DWORD *)this + 92) * *((_DWORD *)this + 92));
  v4 = (unsigned int)(*((_DWORD *)this + 90) * *((_DWORD *)this + 90));
  return v4 * (HIDWORD(v3) - a3.y) * (HIDWORD(v3) - a3.y) + v5 * ((int)v3 - a3.x) * ((int)v3 - a3.x) >= (unsigned __int64)(v4 * v5);
}
