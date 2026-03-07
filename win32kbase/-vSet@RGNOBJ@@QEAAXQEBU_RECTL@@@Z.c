void __fastcall RGNOBJ::vSet(RGNOBJ *this, const struct _RECTL *const a2)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL);
  RGNCOREOBJ::vSet((RGNCOREOBJ *)&v2, a2);
}
