VIDMM_PROCESS_FENCE_STORAGE *__fastcall VIDMM_PROCESS_FENCE_STORAGE::VIDMM_PROCESS_FENCE_STORAGE(
        VIDMM_PROCESS_FENCE_STORAGE *this,
        struct VIDMM_PROCESS *a2)
{
  char v3; // al

  *(_QWORD *)this = a2;
  if ( !a2 || (v3 = 1, (*(_DWORD *)(*((_QWORD *)a2 + 4) + 424LL) & 0x100) == 0) )
    v3 = 0;
  *((_BYTE *)this + 64) = v3;
  *((_QWORD *)this + 4) = (char *)this + 24;
  *((_QWORD *)this + 3) = (char *)this + 24;
  *((_QWORD *)this + 2) = (char *)this + 8;
  *((_QWORD *)this + 1) = (char *)this + 8;
  *((_BYTE *)this + 65) = 0;
  *((_QWORD *)this + 6) = (char *)this + 40;
  *((_QWORD *)this + 5) = (char *)this + 40;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 7);
  return this;
}
