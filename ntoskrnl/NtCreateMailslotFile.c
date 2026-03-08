/*
 * XREFs of NtCreateMailslotFile @ 0x140947BE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     IoCreateFile @ 0x140781BC0 (IoCreateFile.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall NtCreateMailslotFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        OBJECT_ATTRIBUTES *a3,
        struct _IO_STATUS_BLOCK *a4,
        ULONG CreateOptions,
        unsigned int a6,
        unsigned int a7,
        __int64 a8)
{
  __int128 InternalParameters; // [rsp+70h] [rbp-28h] BYREF
  __int64 v10; // [rsp+80h] [rbp-18h]

  InternalParameters = 0LL;
  v10 = 0LL;
  if ( a8 )
  {
    LOBYTE(v10) = 1;
    if ( KeGetCurrentThread()->PreviousMode )
    {
      if ( (a8 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *((_QWORD *)&InternalParameters + 1) = *(_QWORD *)a8;
    }
    else
    {
      *((_QWORD *)&InternalParameters + 1) = *(_QWORD *)a8;
    }
  }
  *(_QWORD *)&InternalParameters = __PAIR64__(a7, a6);
  return IoCreateFile(
           FileHandle,
           DesiredAccess,
           a3,
           a4,
           0LL,
           0,
           3u,
           2u,
           CreateOptions,
           0LL,
           0,
           CreateFileTypeMailslot,
           &InternalParameters,
           0);
}
