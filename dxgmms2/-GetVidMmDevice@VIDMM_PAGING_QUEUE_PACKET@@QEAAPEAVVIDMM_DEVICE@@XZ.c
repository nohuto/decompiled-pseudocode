struct VIDMM_DEVICE *__fastcall VIDMM_PAGING_QUEUE_PACKET::GetVidMmDevice(VIDMM_PAGING_QUEUE_PACKET *this)
{
  struct VIDMM_DEVICE *result; // rax

  if ( *((_BYTE *)this + 24) )
    return (struct VIDMM_DEVICE *)*((_QWORD *)this + 7);
  result = (struct VIDMM_DEVICE *)*((_QWORD *)this + 9);
  if ( !result )
  {
    result = (struct VIDMM_DEVICE *)*((_QWORD *)this + 8);
    if ( result )
      return (struct VIDMM_DEVICE *)*((_QWORD *)result + 1);
  }
  return result;
}
