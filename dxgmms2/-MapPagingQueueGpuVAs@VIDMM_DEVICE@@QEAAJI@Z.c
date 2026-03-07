__int64 __fastcall VIDMM_DEVICE::MapPagingQueueGpuVAs(VIDMM_DEVICE *this, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 result; // rax
  unsigned int v5; // ebx
  int v6; // eax

  v3 = 176LL * a2;
  result = VIDMM_DEVICE_PAGING_QUEUE::MapGpuVA((VIDMM_DEVICE_PAGING_QUEUE *)(v3 + *((_QWORD *)this + 10)));
  v5 = 0;
  if ( (int)result >= 0 )
  {
    result = VIDMM_DEVICE_PAGING_QUEUE::MapGpuVA((VIDMM_DEVICE_PAGING_QUEUE *)(v3 + *((_QWORD *)this + 11)));
    if ( (int)result >= 0 )
    {
      result = *((_QWORD *)this + 12);
      if ( result )
      {
        v6 = VIDMM_DEVICE_PAGING_QUEUE::MapGpuVA((VIDMM_DEVICE_PAGING_QUEUE *)(result + v3));
        if ( v6 < 0 )
          return (unsigned int)v6;
        return v5;
      }
    }
  }
  return result;
}
