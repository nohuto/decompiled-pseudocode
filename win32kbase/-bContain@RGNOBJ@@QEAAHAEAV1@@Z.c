_BOOL8 __fastcall RGNOBJ::bContain(RGNOBJ *this, struct RGNOBJ *a2)
{
  _DWORD *v2; // r8
  _DWORD *v3; // rdx

  v2 = *(_DWORD **)a2;
  v3 = *(_DWORD **)this;
  return *(_DWORD *)(*(_QWORD *)this + 56LL) <= v2[14] && v3[16] >= v2[16] && v3[15] <= v2[15] && v3[17] >= v2[17];
}
