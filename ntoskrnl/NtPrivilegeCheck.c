NTSTATUS __stdcall NtPrivilegeCheck(HANDLE ClientToken, PPRIVILEGE_SET RequiredPrivileges, PBOOLEAN Result)
{
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS result; // eax
  PVOID v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  ULONG Control; // r12d
  NTSTATUS v11; // ebx
  void *v12; // rbx
  BOOLEAN v13; // di
  __int64 v14; // rdx
  int Object; // [rsp+20h] [rbp-88h]
  int HandleInformation; // [rsp+28h] [rbp-80h]
  int v17; // [rsp+30h] [rbp-78h]
  ULONG PrivilegeCount; // [rsp+50h] [rbp-58h]
  NTSTATUS v19; // [rsp+54h] [rbp-54h]
  unsigned int Size; // [rsp+5Ch] [rbp-4Ch] BYREF
  ULONG Size_4; // [rsp+60h] [rbp-48h]
  PVOID v22; // [rsp+68h] [rbp-40h] BYREF
  void *Src; // [rsp+70h] [rbp-38h] BYREF

  Src = 0LL;
  Size = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v22 = 0LL;
  result = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &v22, 0LL);
  v19 = result;
  if ( result >= 0 )
  {
    v7 = v22;
    if ( *((_DWORD *)v22 + 48) == 2 && *((int *)v22 + 49) < 1 )
    {
      v11 = -1073741659;
    }
    else
    {
      if ( ((unsigned __int8)RequiredPrivileges & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = 0x7FFFFFFF0000LL;
      v9 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)RequiredPrivileges < 0x7FFFFFFF0000LL )
        v9 = (__int64)RequiredPrivileges;
      *(_BYTE *)v9 = *(_BYTE *)v9;
      *(_BYTE *)(v9 + 19) = *(_BYTE *)(v9 + 19);
      PrivilegeCount = RequiredPrivileges->PrivilegeCount;
      Size_4 = 12 * (RequiredPrivileges->PrivilegeCount - 1) + 20;
      ProbeForWrite(RequiredPrivileges, Size_4, 4u);
      if ( (unsigned __int64)Result < 0x7FFFFFFF0000LL )
        v8 = (__int64)Result;
      *(_BYTE *)v8 = *(_BYTE *)v8;
      Control = RequiredPrivileges->Control;
      v11 = v19;
      if ( v19 >= 0 )
      {
        v11 = SeCaptureLuidAndAttributesArray(
                RequiredPrivileges->Privilege,
                Object,
                HandleInformation,
                v17,
                (__int64)&Src,
                (__int64)&Size);
        if ( v11 >= 0 )
        {
          v12 = Src;
          v13 = SepPrivilegeCheck((__int64)v22, (__int64)Src, PrivilegeCount, Control, PreviousMode);
          ObfDereferenceObject(v22);
          memmove(RequiredPrivileges->Privilege, v12, Size);
          *Result = v13;
          LOBYTE(v14) = PreviousMode;
          SeReleaseLuidAndAttributesArray(v12, v14);
          return 0;
        }
      }
      v7 = v22;
    }
    ObfDereferenceObject(v7);
    return v11;
  }
  return result;
}
