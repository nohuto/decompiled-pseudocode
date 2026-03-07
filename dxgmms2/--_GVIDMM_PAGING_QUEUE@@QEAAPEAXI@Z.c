VIDMM_PAGING_QUEUE *__fastcall VIDMM_PAGING_QUEUE::`scalar deleting destructor'(VIDMM_PAGING_QUEUE *P)
{
  VIDMM_PAGING_QUEUE::~VIDMM_PAGING_QUEUE(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
