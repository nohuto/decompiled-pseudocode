/*
 * XREFs of NtFlipObjectOpen @ 0x1C0080400
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenEndpoint@FlipManagerObject@@QEAAJ_NPEAPEAX1@Z @ 0x1C0081770 (-OpenEndpoint@FlipManagerObject@@QEAAJ_NPEAPEAX1@Z.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00817F8 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtFlipObjectOpen(void *a1, int a2, HANDLE *a3, _QWORD *a4)
{
  void *v7; // rdi
  int v8; // esi
  HANDLE Handle; // [rsp+20h] [rbp-28h] BYREF
  PVOID Object; // [rsp+28h] [rbp-20h] BYREF
  void *v12; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 && a3 && a4 )
  {
    Object = 0LL;
    Handle = 0LL;
    v7 = 0LL;
    v12 = 0LL;
    v8 = FlipManagerObject::ResolveHandle(a1, 0, (char)a3, (struct FlipManagerObject **)&Object);
    if ( v8 >= 0 )
    {
      v8 = FlipManagerObject::OpenEndpoint((FlipManagerObject *)Object, a2 != 0, &Handle, &v12);
      v7 = v12;
    }
    if ( v8 >= 0 )
    {
      if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a3 = Handle;
      if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a4 = v7;
      Handle = 0LL;
      v7 = 0LL;
      v12 = 0LL;
    }
    if ( Handle )
      ObCloseHandle(Handle, 1);
    if ( v7 )
      ObCloseHandle(v7, 1);
    if ( Object )
      ObfDereferenceObject(Object);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v8;
}
