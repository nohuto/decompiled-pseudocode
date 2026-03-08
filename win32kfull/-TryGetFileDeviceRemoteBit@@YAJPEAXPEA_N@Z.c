/*
 * XREFs of ?TryGetFileDeviceRemoteBit@@YAJPEAXPEA_N@Z @ 0x1C00BC65C
 * Callers:
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00BC0F8 (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TryGetFileDeviceRemoteBit(void *a1, bool *a2)
{
  NTSTATUS v3; // ebx
  PVOID v4; // rcx
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  Object = 0LL;
  *a2 = 0;
  v3 = ObReferenceObjectByHandle(a1, 0x80000000, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
  if ( v3 >= 0 )
  {
    v4 = Object;
    if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 52LL) & 0x10) != 0 )
      *a2 = 1;
    ObfDereferenceObject(v4);
  }
  return (unsigned int)v3;
}
