/*
 * XREFs of ??_GCLogicalSurfaceHandleMap@@UEAAPEAXI@Z @ 0x1801B42D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

CLogicalSurfaceHandleMap *__fastcall CLogicalSurfaceHandleMap::`scalar deleting destructor'(
        CLogicalSurfaceHandleMap *this,
        char a2)
{
  struct _RTL_GENERIC_TABLE *v3; // rdi
  PVOID v5; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CLogicalSurfaceHandleMap::`vftable';
  v3 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
  while ( 1 )
  {
    RestartKey = 0LL;
    v5 = RtlEnumerateGenericTableWithoutSplaying(v3, &RestartKey);
    if ( !v5 )
      break;
    if ( !RtlDeleteElementGenericTable(v3, v5) )
      RaiseFailFastException(0LL, 0LL, 1u);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
