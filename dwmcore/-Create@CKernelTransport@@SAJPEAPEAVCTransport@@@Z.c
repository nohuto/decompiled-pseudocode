__int64 __fastcall CKernelTransport::Create(struct CTransport **a1)
{
  __int64 v2; // rcx
  struct CTransport *v3; // rdi
  HANDLE EventW; // rax
  int Connection; // eax
  __int64 v6; // rcx
  unsigned int v7; // esi
  int v9; // ebx
  __int64 v10; // rcx
  signed int LastError; // eax
  __int64 v12; // rcx

  v3 = (struct CTransport *)DefaultHeap::AllocClear(0x18uLL);
  if ( !v3 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, -2147024882, 0x3Fu, 0LL);
    return v7;
  }
  *(_QWORD *)v3 = &CKernelTransport::`vftable';
  SetLastError(0);
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)v3 + 2) = EventW;
  if ( !EventW )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    if ( v9 >= 0 )
      v9 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v9, 0x51u, 0LL);
    v7 = v9;
    goto LABEL_14;
  }
  Connection = NtDCompositionCreateConnection(EventW, (char *)v3 + 8);
  if ( Connection < 0 )
  {
    v9 = Connection | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, Connection | 0x10000000, 0x54u, 0LL);
    v7 = v9;
    if ( v9 >= 0 )
      goto LABEL_5;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x40u, 0LL);
    (**(void (__fastcall ***)(struct CTransport *, __int64))v3)(v3, 1LL);
    return v7;
  }
  v7 = 0;
LABEL_5:
  *a1 = v3;
  return v7;
}
