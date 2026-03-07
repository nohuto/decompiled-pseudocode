bool __fastcall VIDMM_DEVICE::IsResumedRecently(VIDMM_DEVICE *this)
{
  return *((_QWORD *)this + 29) > *(_QWORD *)(*(_QWORD *)this + 4632LL);
}
