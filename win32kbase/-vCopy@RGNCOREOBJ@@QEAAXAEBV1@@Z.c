void __fastcall RGNCOREOBJ::vCopy(RGNCOREOBJ *this, const struct RGNCOREOBJ *a2)
{
  *(_DWORD *)(*(_QWORD *)this + 24LL) = *(_DWORD *)(*(_QWORD *)a2 + 24LL);
  *(_DWORD *)(*(_QWORD *)this + 28LL) = *(_DWORD *)(*(_QWORD *)a2 + 28LL);
  *(_OWORD *)(*(_QWORD *)this + 32LL) = *(_OWORD *)(*(_QWORD *)a2 + 32LL);
  memmove(
    *(void **)(*(_QWORD *)this + 8LL),
    *(const void **)(*(_QWORD *)a2 + 8LL),
    *(unsigned int *)(*(_QWORD *)a2 + 24LL));
  *(_QWORD *)(*(_QWORD *)this + 16LL) = *(_QWORD *)(*(_QWORD *)this + 8LL)
                                      + *(_DWORD *)(*(_QWORD *)a2 + 16LL)
                                      - *(_DWORD *)(*(_QWORD *)a2 + 8LL);
}
