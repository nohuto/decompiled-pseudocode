/*
 * XREFs of NtQueryMutant @ 0x140A02BD0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeQueryOwnerMutant @ 0x14057116C (KeQueryOwnerMutant.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 */

__int64 __fastcall NtQueryMutant(HANDLE Handle, int a2, CLIENT_ID *a3, unsigned int a4, unsigned __int64 a5)
{
  KPROCESSOR_MODE PreviousMode; // r14
  _DWORD *v10; // rbx
  __int64 v11; // rcx
  NTSTATUS v12; // esi
  int v13; // r8d
  char v14; // al
  bool v15; // cl
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  CLIENT_ID ClientId; // [rsp+38h] [rbp-30h] BYREF

  ClientId = 0LL;
  if ( !a2 )
  {
    if ( a4 == 8 )
      goto LABEL_7;
    return 3221225476LL;
  }
  if ( a2 != 1 )
    return 3221225475LL;
  if ( a4 != 16 )
    return 3221225476LL;
LABEL_7:
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(a3, a4, 4u);
    v10 = (_DWORD *)a5;
    if ( a5 )
    {
      v11 = 0x7FFFFFFF0000LL;
      if ( a5 < 0x7FFFFFFF0000LL )
        v11 = a5;
      *(_DWORD *)v11 = *(_DWORD *)v11;
    }
  }
  else
  {
    v10 = (_DWORD *)a5;
  }
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(Handle, 1u, ExMutantObjectType, PreviousMode, &Object, 0LL);
  if ( v12 >= 0 )
  {
    if ( a2 )
    {
      KeQueryOwnerMutant((PKMUTANT)Object, &ClientId);
      if ( PreviousMode )
      {
        *a3 = ClientId;
        if ( v10 )
          *v10 = 16;
      }
      else
      {
        *a3 = ClientId;
        if ( v10 )
          *v10 = 16;
      }
    }
    else
    {
      v13 = *((_DWORD *)Object + 1);
      v14 = *((_BYTE *)Object + 48) & 1;
      v15 = *((_QWORD *)Object + 5) == (_QWORD)KeGetCurrentThread();
      if ( PreviousMode )
      {
        LODWORD(a3->UniqueProcess) = v13;
        BYTE4(a3->UniqueProcess) = v15;
        BYTE5(a3->UniqueProcess) = v14;
        if ( v10 )
          *v10 = 8;
      }
      else
      {
        LODWORD(a3->UniqueProcess) = v13;
        BYTE4(a3->UniqueProcess) = v15;
        BYTE5(a3->UniqueProcess) = v14;
        if ( v10 )
          *v10 = 8;
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v12;
}
