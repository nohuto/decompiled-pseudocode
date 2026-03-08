/*
 * XREFs of ?SetHandleArrayProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJIPEAPEAX_KPEA_N@Z @ 0x1C026CBC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAAXXZ @ 0x1C026CAA4 (-ReleaseBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CCaptureRenderTargetMarshaler::SetHandleArrayProperty(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        __int64 a2,
        void **a3,
        unsigned __int64 a4,
        DirectComposition::CCaptureRenderTargetMarshaler *Object)
{
  DirectComposition::CCaptureRenderTargetMarshaler *v5; // r12
  NTSTATUS v6; // esi
  DirectComposition::CCaptureRenderTargetMarshaler *v9; // rbx
  __int64 i; // r14
  __int64 v11; // rbp
  __int64 DxgkWin32kInterface; // rax
  struct _OBJECT_TYPE *v13; // rax
  void *v14; // rcx

  v5 = Object;
  v6 = 0;
  v9 = this;
  *(_BYTE *)Object = 0;
  if ( (_DWORD)a2 == 3 )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v11 = (unsigned int)i;
      if ( (unsigned int)i >= a4 )
        break;
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(this, a2);
      v13 = (struct _OBJECT_TYPE *)(*(__int64 (**)(void))(DxgkWin32kInterface + 480))();
      v14 = a3[i];
      Object = 0LL;
      v6 = ObReferenceObjectByHandle(v14, 0xF0001u, v13, 1, (PVOID *)&Object, 0LL);
      if ( v6 < 0 )
      {
        if ( a3 && (_DWORD)i )
        {
          do
          {
            ObfDereferenceObject(*a3++);
            --v11;
          }
          while ( v11 );
        }
        return (unsigned int)v6;
      }
      this = Object;
      a3[i] = Object;
    }
    if ( *((_QWORD *)v9 + 13) )
    {
      DirectComposition::CCaptureRenderTargetMarshaler::ReleaseBuffers(v9);
      *((_DWORD *)v9 + 4) |= 0x100u;
    }
    *((_QWORD *)v9 + 12) = 0LL;
    *((_QWORD *)v9 + 13) = a4;
    *((_QWORD *)v9 + 11) = a3;
    *(_BYTE *)v5 = 1;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
