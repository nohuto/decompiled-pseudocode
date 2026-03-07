void __fastcall TXTCLEANUP::vMopUp(TXTCLEANUP *this)
{
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(**(_QWORD **)this + 1128LL);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v3);
  v2 = **(_QWORD **)this;
  *(_DWORD *)(v2 + 36) |= 0x10u;
  *(_QWORD *)(v2 + 1128) = 0LL;
}
