__int64 __fastcall DirectComposition::CApplicationChannel::GetChannelRDPHeaders(
        DirectComposition::CApplicationChannel *this,
        struct UCE_RDP_HEADER **a2,
        struct UCE_RDP_HEADER **a3)
{
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rcx

  v5 = *((_QWORD *)this + *((unsigned int *)this + 662) + 329);
  result = DirectComposition::CBatchSharedMemoryPool::GetUserModeViewAtOffset(
             *((DirectComposition::CBatchSharedMemoryPool **)this + 328),
             v5,
             (void **)a3);
  if ( (int)result >= 0 )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 328) + 56LL);
    ++*((_DWORD *)this + 662);
    *a2 = (struct UCE_RDP_HEADER *)(v5 + v7);
  }
  return result;
}
