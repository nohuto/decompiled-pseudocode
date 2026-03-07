char IommupHvInterruptRoutine()
{
  char v0; // di
  unsigned int i; // ebx
  unsigned __int64 v2; // rdx
  int v3; // eax

  v0 = 0;
  for ( i = 0; i < IommupHvPageRequestQueueCount; ++i )
  {
    v2 = IommupHvPageRequestQueues + ((unsigned __int64)i << 6);
    v3 = *(_DWORD *)(*(_QWORD *)(v2 + 8) + 8LL);
    if ( (_WORD)v3 )
    {
      if ( (_BYTE)v3 )
        *(_BYTE *)(*(_QWORD *)(v2 + 8) + 8LL) = 0;
      v0 = 1;
      (*(void (__fastcall **)(_QWORD))(HalIommuDispatch + 96))(i);
    }
  }
  return v0;
}
