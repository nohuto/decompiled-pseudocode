void __fastcall _VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry(_VIDSCH_FLIP_QUEUE_ENTRY *this)
{
  _DWORD *v1; // rdi

  v1 = (_DWORD *)*((_QWORD *)this + 147);
  memset(this, 0, 0x568uLL);
  *((_QWORD *)this + 147) = v1;
  memset(v1 + 4, 0, v1[1] * ((v1[2] << 6) + ((8 * v1[2] + 231) & 0xFFFFFFF8)));
}
