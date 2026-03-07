void __fastcall CInputQueueProp::InvalidateInputQueues(CInputQueueProp *this)
{
  __int64 i; // rbp
  __int64 v3; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 8); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  CDynamicArray<IInputQueue *,2003858261>::Reset((char *)this + 24);
  if ( !*((_BYTE *)this + 48) )
    HMAssignmentUnlock((char *)this + 40);
}
