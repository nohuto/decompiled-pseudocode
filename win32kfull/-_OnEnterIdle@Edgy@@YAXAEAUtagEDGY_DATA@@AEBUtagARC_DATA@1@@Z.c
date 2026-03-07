void __fastcall Edgy::_OnEnterIdle(Edgy *this, struct tagEDGY_DATA **a2, const struct Edgy::tagARC_DATA *a3)
{
  Edgy::_StoreLastUpDataAndPost(this, *a2, a3);
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = 0;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 50) = 0;
  *((_QWORD *)this + 28) = 0LL;
}
