/*
 * XREFs of ?QueryNameStringFromHandle@@YAJPEAXPEAU_OBJECT_NAME_INFORMATION@@KD@Z @ 0x1C00BC5BC
 * Callers:
 *     ?bIsFileInSystemFontsDir@@YAHPEAX@Z @ 0x1C00BC504 (-bIsFileInSystemFontsDir@@YAHPEAX@Z.c)
 *     vInitFontsDirectoryNameInformation @ 0x1C00BD320 (vInitFontsDirectoryNameInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall QueryNameStringFromHandle(void *a1, struct _OBJECT_NAME_INFORMATION *a2, __int64 a3, char a4)
{
  NTSTATUS v5; // eax
  PVOID v6; // rdi
  unsigned int v7; // ebx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  ULONG ReturnLength; // [rsp+68h] [rbp+20h] BYREF

  LOBYTE(ReturnLength) = a4;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(a1, 1u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
  v6 = Object;
  v7 = v5;
  if ( v5 >= 0 )
  {
    ReturnLength = 0;
    v7 = ObQueryNameString(Object, a2, 0x190u, &ReturnLength);
    ObfDereferenceObject(v6);
  }
  return v7;
}
