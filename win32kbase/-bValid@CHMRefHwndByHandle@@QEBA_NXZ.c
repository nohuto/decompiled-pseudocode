bool __fastcall CHMRefHwndByHandle::bValid(CHMRefHwndByHandle *this)
{
  return *((_QWORD *)this + 1) != 0LL;
}
