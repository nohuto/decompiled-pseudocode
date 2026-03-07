_BOOL8 __fastcall CPTPEngine::CrossedTPMoveFilteringThreshold(
        CPTPEngine *this,
        struct CContactState *a2,
        struct tagPOINT a3)
{
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // rdx

  v3 = *((_QWORD *)a2 + 7);
  v5 = (unsigned int)(*((_DWORD *)this + 88) * *((_DWORD *)this + 88));
  if ( SHIDWORD(v3) < a3.y )
    v5 = (unsigned int)(*((_DWORD *)this + 89) * *((_DWORD *)this + 89));
  v4 = (unsigned int)(*((_DWORD *)this + 87) * *((_DWORD *)this + 87));
  return v4 * (HIDWORD(v3) - a3.y) * (HIDWORD(v3) - a3.y) + v5 * ((int)v3 - a3.x) * ((int)v3 - a3.x) >= (unsigned __int64)(v4 * v5);
}
