_BOOL8 __fastcall XDCOBJ::bRedirHooked(XDCOBJ *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  v2 = *(_QWORD *)(SGDGetSessionState(this) + 32);
  v3 = *(_QWORD *)(*(_QWORD *)this + 48LL);
  return v3 == *(_QWORD *)(v2 + 23376) || v3 == *(_QWORD *)(v2 + 8608);
}
