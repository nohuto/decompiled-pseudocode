/*
 * XREFs of ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@IEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x18003550C
 * Callers:
 *     ?FinalRelease@CScratchRenderTargetBitmap@@UEAAXXZ @ 0x180034BF0 (-FinalRelease@CScratchRenderTargetBitmap@@UEAAXXZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180089410 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18008F164 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C3DD8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x1800EA8C0 (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CRenderTargetBitmapCache::ReturnRenderTargetBitmap(
        CRenderTargetBitmapCache *this,
        struct CScratchRenderTargetBitmap *a2)
{
  unsigned __int64 CurrentFrameId; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // edi
  unsigned int v7; // eax
  unsigned int v8; // r8d
  int v9; // eax
  unsigned int v10; // ecx
  unsigned __int64 v11; // rbp
  __int64 v12; // rsi
  struct CScratchRenderTargetBitmap *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  if ( *((_BYTE *)a2 + 177) )
    --*((_DWORD *)this + 10);
  CurrentFrameId = GetCurrentFrameId();
  *(_QWORD *)(v5 + 168) = CurrentFrameId;
  v6 = *((_DWORD *)this + 6);
  if ( v6 >= 0x20 )
  {
    v11 = GetCurrentFrameId();
    do
    {
      v4 = *(_QWORD *)this;
      v12 = *(_QWORD *)(*(_QWORD *)this + 8LL * --v6);
      if ( v11 - *(_QWORD *)(v12 + 168) > 1 )
      {
        DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt(this, v6);
        *(_BYTE *)(v12 + 176) = 0;
        CMILRefCountBaseT<IUnknown>::InternalRelease(v12);
      }
    }
    while ( v6 );
  }
  v7 = *((_DWORD *)this + 6);
  v8 = v7 + 1;
  if ( v7 + 1 < v7 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    if ( v8 <= *((_DWORD *)this + 5) )
    {
      *(_QWORD *)(*(_QWORD *)this + 8LL * v7) = v13;
      *((_DWORD *)this + 6) = v8;
LABEL_7:
      CMILRefCountImpl::AddReference((struct CScratchRenderTargetBitmap *)((char *)v13 + 8));
      return;
    }
    v9 = DynArrayImpl<0>::AddMultipleAndSet(this, 8LL, 1LL, &v13);
    if ( v9 >= 0 )
      goto LABEL_7;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xC0u, 0LL);
  }
}
