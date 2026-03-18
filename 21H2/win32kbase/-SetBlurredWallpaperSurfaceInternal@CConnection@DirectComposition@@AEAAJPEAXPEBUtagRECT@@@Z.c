/*
 * XREFs of ?SetBlurredWallpaperSurfaceInternal@CConnection@DirectComposition@@AEAAJPEAXPEBUtagRECT@@@Z @ 0x1C0213654
 * Callers:
 *     ?SetBlurredWallpaperSurface@CConnection@DirectComposition@@QEAAJPEAXPEBUtagRECT@@@Z @ 0x1C02135BC (-SetBlurredWallpaperSurface@CConnection@DirectComposition@@QEAAJPEAXPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C0093F84 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAJPEBUResourceObject@2@PEBUtagRECT@@@Z @ 0x1C0212E40 (-EmitSetBlurredWallpaperSurface@CConnection@DirectComposition@@AEAAJPEBUResourceObject@2@PEBUtag.c)
 */

__int64 __fastcall DirectComposition::CConnection::SetBlurredWallpaperSurfaceInternal(
        DirectComposition::CConnection *this,
        void *a2,
        const struct tagRECT *a3)
{
  const struct DirectComposition::ResourceObject *v3; // rbx
  int v4; // esi
  const struct tagRECT *v5; // r14
  int v7; // eax
  char v8; // dl
  DirectComposition::CConnection *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  void *v13; // rcx
  __int64 CurrentProcess; // rax
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = 0;
  Object = 0LL;
  v5 = a3;
  if ( !a2
    || (LOBYTE(a3) = 1,
        v7 = DirectComposition::ResourceObject::ResolveHandle(
               a2,
               1LL,
               (__int64)a3,
               (struct DirectComposition::ResourceObject **)&Object),
        v3 = (const struct DirectComposition::ResourceObject *)Object,
        v4 = v7,
        v7 >= 0) )
  {
    v8 = 0;
    if ( v3 != *((const struct DirectComposition::ResourceObject **)this + 34) )
    {
      if ( v3 && *((_DWORD *)v3 + 9) != 201 )
      {
        v4 = -1073741811;
        goto LABEL_18;
      }
      v8 = 1;
    }
    v9 = (DirectComposition::CConnection *)(*(_QWORD *)&v5->left - *((_QWORD *)this + 35));
    if ( *(_QWORD *)&v5->left == *((_QWORD *)this + 35) )
      v9 = (DirectComposition::CConnection *)(*(_QWORD *)&v5->right - *((_QWORD *)this + 36));
    if ( v9 || v8 )
    {
      v4 = DirectComposition::CConnection::EmitSetBlurredWallpaperSurface(v9, v3, v5);
      if ( v4 >= 0 )
      {
        v13 = (void *)*((_QWORD *)this + 34);
        if ( v13 )
          ObfDereferenceObject(v13);
        *((_QWORD *)this + 34) = v3;
        CurrentProcess = (__int64)v3;
        v3 = 0LL;
        *(struct tagRECT *)((char *)this + 280) = *v5;
        if ( CurrentProcess )
          CurrentProcess = PsGetCurrentProcess(v13, v10, v11, v12);
        *((_QWORD *)this + 33) = CurrentProcess;
      }
    }
  }
LABEL_18:
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v4;
}
