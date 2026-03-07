void __fastcall COPMSimpleBufferPool<_DXGKMDT_OPM_GET_INFO_PARAMETERS>::CAutoUnlockBuffer::~CAutoUnlockBuffer(
        __int64 a1)
{
  PLOOKASIDE_LIST_EX *v1; // rax

  v1 = *(PLOOKASIDE_LIST_EX **)(a1 + 8);
  if ( v1 )
  {
    if ( *(_QWORD *)a1 )
      ExFreeToLookasideListEx(*v1, *(PVOID *)a1);
  }
}
