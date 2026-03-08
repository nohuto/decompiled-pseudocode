/*
 * XREFs of ?SetBlurredWallpaperSurfaceInternal@CConnection@DirectComposition@@AEAAJPEAXPEBUtagRECT@@@Z @ 0x1C00913F0
 * Callers:
 *     ?SetBlurredWallpaperSurface@CConnection@DirectComposition@@QEAAJPEAXPEBUtagRECT@@@Z @ 0x1C0091358 (-SetBlurredWallpaperSurface@CConnection@DirectComposition@@QEAAJPEAXPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAJPEBUResourceObject@2@PEBUtagRECT@@@Z @ 0x1C0091508 (-EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAJPEBUResourceObject@2@PEBUtag.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C00A7DB4 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::SetBlurredWallpaperSurfaceInternal(
        PVOID *this,
        void *a2,
        const struct tagRECT *a3)
{
  const struct DirectComposition::ResourceObject *v3; // rbx
  int v4; // esi
  int v7; // eax
  char v8; // dl
  DirectComposition::CConnection *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  PVOID v13; // rcx
  __int64 CurrentProcess; // rax
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = 0;
  Object = 0LL;
  if ( !a2
    || (v7 = DirectComposition::ResourceObject::ResolveHandle(
               a2,
               1u,
               1,
               (struct DirectComposition::ResourceObject **)&Object),
        v3 = (const struct DirectComposition::ResourceObject *)Object,
        v4 = v7,
        v7 >= 0) )
  {
    v8 = 0;
    if ( v3 != this[35] )
    {
      if ( v3 && *((_DWORD *)v3 + 9) != 202 )
      {
        v4 = -1073741811;
        goto LABEL_16;
      }
      v8 = 1;
    }
    v9 = (DirectComposition::CConnection *)(*(_QWORD *)&a3->left - (_QWORD)this[36]);
    if ( *(PVOID *)&a3->left == this[36] )
      v9 = (DirectComposition::CConnection *)(*(_QWORD *)&a3->right - (_QWORD)this[37]);
    if ( v9 || v8 )
    {
      v4 = DirectComposition::CConnection::EmitSetBlurredWallpaperSurface(v9, v3, a3);
      if ( v4 >= 0 )
      {
        v13 = this[35];
        if ( v13 )
          ObfDereferenceObject(v13);
        this[35] = v3;
        CurrentProcess = (__int64)v3;
        v3 = 0LL;
        *((struct tagRECT *)this + 18) = *a3;
        if ( CurrentProcess )
          CurrentProcess = PsGetCurrentProcess(v13, v10, v11, v12);
        this[34] = (PVOID)CurrentProcess;
      }
    }
  }
LABEL_16:
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v4;
}
