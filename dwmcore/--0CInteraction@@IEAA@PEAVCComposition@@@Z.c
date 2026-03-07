CInteraction *__fastcall CInteraction::CInteraction(CInteraction *this, struct CComposition *a2)
{
  unsigned int *v3; // rdi
  unsigned int v4; // edx
  HANDLE_TABLE *v5; // rcx
  int v6; // ecx
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CInteraction::`vftable'{for `CResource'};
  *((_DWORD *)this + 46) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 8) = &CInteraction::`vftable'{for `IInteractionResource'};
  *((_DWORD *)this + 49) = 4;
  CMILMatrix::GetD3DMatrix((CMILMatrix *)&CMILMatrix::Identity, (struct _D3DMATRIX *)((char *)this + 288));
  CInteractionProcessor::CInteractionProcessor((CInteraction *)((char *)this + 352));
  *((_QWORD *)this + 216) = 0LL;
  v3 = (unsigned int *)((char *)this + 1704);
  *((_DWORD *)this + 426) = 0;
  AcquireSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  if ( (int)HANDLE_TABLE::GetNewEntry(v5, v4, (unsigned int *)this + 426) >= 0 )
    *((_QWORD *)CInteraction::GetEntry(*v3) + 1) = this;
  ReleaseSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  QueryPerformanceCounter(&PerformanceCount);
  *((LARGE_INTEGER *)this + 214) = PerformanceCount;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McTemplateU0ppq_EventWriteTransfer(v6, (unsigned int)&INTERACTION_CREATED, (_DWORD)this, (_DWORD)this, *v3);
  return this;
}
