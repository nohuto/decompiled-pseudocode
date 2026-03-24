/*
 * XREFs of ?GetDevice@CRenderTargetBitmap@@UEBAPEAVCD3DDevice@@XZ @ 0x180060D44
 * Callers:
 *     ?FinalRelease@CScratchRenderTargetBitmap@@UEAAXXZ @ 0x180060C40 (-FinalRelease@CScratchRenderTargetBitmap@@UEAAXXZ.c)
 *     ?GetDevice@CRenderTargetBitmap@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ @ 0x1800F5740 (-GetDevice@CRenderTargetBitmap@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ.c)
 *     ?GetDevice@CRenderTargetBitmap@@$4PPPPPPPM@7EBAPEAVCD3DDevice@@XZ @ 0x1800F8BA0 (-GetDevice@CRenderTargetBitmap@@$4PPPPPPPM@7EBAPEAVCD3DDevice@@XZ.c)
 *     ?GetDevice@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBAPEAVCD3DDevice@@XZ @ 0x1800F8CE0 (-GetDevice@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBAPEAVCD3DDevice@@XZ.c)
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CRenderTargetBitmap::GetDevice(CRenderTargetBitmap *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  v1 = *((_QWORD *)this - 7);
  if ( !v1 )
    return 0LL;
  v2 = v1 + 8 + *(int *)(*(_QWORD *)(v1 + 8) + 8LL);
  return (struct CD3DDevice *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
}
