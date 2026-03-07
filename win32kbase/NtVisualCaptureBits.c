__int64 __fastcall NtVisualCaptureBits(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        PVOID Handle,
        HANDLE a9)
{
  PVOID v9; // rbp
  PVOID v10; // rsi
  int v14; // eax
  void (__fastcall ***v15)(_QWORD); // rdi
  unsigned int v16; // ebx
  NTSTATUS v17; // eax
  PVOID v18; // rbp
  NTSTATUS v19; // eax
  PVOID Object[2]; // [rsp+50h] [rbp-28h] BYREF

  v9 = Handle;
  v10 = 0LL;
  Object[0] = 0LL;
  if ( Handle && a9 )
  {
    v14 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(
            a1,
            (struct DirectComposition::CApplicationChannel **)Object);
    v15 = (void (__fastcall ***)(_QWORD))Object[0];
    v16 = v14;
    if ( v14 >= 0 )
    {
      Handle = 0LL;
      v17 = ObReferenceObjectByHandle(v9, 0x100002u, (POBJECT_TYPE)ExEventObjectType, 1, &Handle, 0LL);
      v18 = Handle;
      v16 = v17;
      if ( v17 >= 0 )
      {
        Object[0] = 0LL;
        v19 = ObReferenceObjectByHandle(a9, 6u, MmSectionObjectType, 1, Object, 0LL);
        v10 = Object[0];
        v16 = v19;
        if ( v19 >= 0 )
          v16 = DirectComposition::CApplicationChannel::VisualCaptureBits(v15, a2, a3, a4, a5, a6, a7, v18, Object[0]);
      }
      if ( v18 )
        ObfDereferenceObject(v18);
      if ( v10 )
        ObfDereferenceObject(v10);
    }
    if ( v15 )
      (**v15)(v15);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v16;
}
