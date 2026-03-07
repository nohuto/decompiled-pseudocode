NTSTATUS __fastcall NtCreateNamedPipeFile(
        HANDLE *a1,
        ACCESS_MASK a2,
        OBJECT_ATTRIBUTES *a3,
        struct _IO_STATUS_BLOCK *a4,
        ULONG ShareAccess,
        ULONG Disposition,
        ULONG CreateOptions,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        __int64 *a14)
{
  _DWORD InternalParameters[6]; // [rsp+70h] [rbp-38h] BYREF
  __int64 v16; // [rsp+88h] [rbp-20h]
  char v17; // [rsp+90h] [rbp-18h]
  int v18; // [rsp+91h] [rbp-17h]
  __int16 v19; // [rsp+95h] [rbp-13h]
  char v20; // [rsp+97h] [rbp-11h]

  v16 = 0LL;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( a14 )
  {
    v17 = 1;
    if ( KeGetCurrentThread()->PreviousMode )
    {
      if ( ((unsigned __int8)a14 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = *a14;
    }
    else
    {
      v16 = *a14;
    }
  }
  else
  {
    v17 = 0;
  }
  InternalParameters[0] = a8;
  InternalParameters[1] = a9;
  InternalParameters[2] = a10;
  InternalParameters[3] = a11;
  InternalParameters[4] = a12;
  InternalParameters[5] = a13;
  return IoCreateFile(
           a1,
           a2,
           a3,
           a4,
           0LL,
           0,
           ShareAccess,
           Disposition,
           CreateOptions,
           0LL,
           0,
           CreateFileTypeNamedPipe,
           InternalParameters,
           0);
}
