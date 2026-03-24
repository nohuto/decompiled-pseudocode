/*
 * XREFs of NtPrivilegeCheck @ 0x140607FA0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     SepPrivilegeCheck @ 0x140345460 (SepPrivilegeCheck.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1405DD318 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureLuidAndAttributesArray @ 0x1406089BC (SeCaptureLuidAndAttributesArray.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtPrivilegeCheck(HANDLE ClientToken, PPRIVILEGE_SET RequiredPrivileges, PBOOLEAN Result)
{
  char PreviousMode; // r14
  NTSTATUS result; // eax
  struct _DMA_ADAPTER *v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  ULONG Control; // r12d
  NTSTATUS v11; // ebx
  void *v12; // rbx
  BOOLEAN v13; // di
  int Object; // [rsp+20h] [rbp-88h]
  int HandleInformation; // [rsp+28h] [rbp-80h]
  int v16; // [rsp+30h] [rbp-78h]
  ULONG PrivilegeCount; // [rsp+50h] [rbp-58h]
  NTSTATUS v18; // [rsp+54h] [rbp-54h]
  unsigned int Size; // [rsp+5Ch] [rbp-4Ch] BYREF
  ULONG Size_4; // [rsp+60h] [rbp-48h]
  PVOID v21; // [rsp+68h] [rbp-40h] BYREF
  void *Src; // [rsp+70h] [rbp-38h] BYREF

  Src = 0LL;
  Size = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v21 = 0LL;
  result = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &v21, 0LL);
  v18 = result;
  if ( result >= 0 )
  {
    v7 = (struct _DMA_ADAPTER *)v21;
    if ( *((_DWORD *)v21 + 48) == 2 && *((int *)v21 + 49) < 1 )
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
      v11 = v18;
      if ( v18 >= 0 )
      {
        v11 = SeCaptureLuidAndAttributesArray(
                RequiredPrivileges->Privilege,
                Object,
                HandleInformation,
                v16,
                (__int64)&Src,
                (__int64)&Size);
        if ( v11 >= 0 )
        {
          v12 = Src;
          v13 = SepPrivilegeCheck((__int64)v21, (__int64)Src, PrivilegeCount, Control, PreviousMode);
          HalPutDmaAdapter((PADAPTER_OBJECT)v21);
          memmove(RequiredPrivileges->Privilege, v12, Size);
          *Result = v13;
          SeReleaseLuidAndAttributesArray(v12, PreviousMode);
          return 0;
        }
      }
      v7 = (struct _DMA_ADAPTER *)v21;
    }
    HalPutDmaAdapter(v7);
    return v11;
  }
  return result;
}
