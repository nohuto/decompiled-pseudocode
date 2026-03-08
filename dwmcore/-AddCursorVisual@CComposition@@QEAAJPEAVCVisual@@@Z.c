/*
 * XREFs of ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x18010A3F0
 * Callers:
 *     ?Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETCURSOR@@@Z @ 0x18010A38C (-Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_P.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C3DD8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18010A4B8 (-Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x18012A454 (-GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ??_GCExcludeVisualReference@@QEAAPEAXI@Z @ 0x1801B148C (--_GCExcludeVisualReference@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCExcludeVisualReference@@$0A@@@QEAAJI@Z @ 0x1801B1EFC (-RemoveAt@-$DynArray@PEAVCExcludeVisualReference@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CComposition::AddCursorVisual(CComposition *this, struct CVisual *a2)
{
  int v2; // edi
  unsigned int v3; // ebx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // r8d
  int v10; // edi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v15; // r15
  CExcludeVisualReference *v16; // rsi
  CExcludeVisualReference *v17; // rcx
  unsigned int v18; // r8d
  unsigned int v19; // edx
  __int64 v20; // rcx
  CExcludeVisualReference *v21; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 248);
  v3 = 0;
  v21 = 0LL;
  if ( v2 <= 0 )
  {
LABEL_2:
    v6 = CExcludeVisualReference::Create(a2, &v21);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xA64u, 0LL);
      goto LABEL_7;
    }
    v8 = *((_DWORD *)this + 248);
    v9 = v8 + 1;
    if ( v8 + 1 < v8 )
    {
      v3 = -2147024362;
      v10 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else
    {
      v10 = 0;
      if ( v9 <= *((_DWORD *)this + 247) )
      {
        v12 = *((unsigned int *)this + 248);
        *(_QWORD *)(*((_QWORD *)this + 121) + 8 * v12) = v21;
        *((_DWORD *)this + 248) = v9;
        goto LABEL_6;
      }
      v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 968, 8, 1, &v21);
      v10 = v11;
      v3 = v11;
      if ( v11 >= 0 )
      {
LABEL_6:
        v3 = v10;
        v21 = 0LL;
        goto LABEL_7;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v11, 0xC0u, 0LL);
    }
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v10, 0xA66u, 0LL);
    goto LABEL_7;
  }
  v15 = (_QWORD *)((char *)this + 968);
  while ( 1 )
  {
    v16 = *(CExcludeVisualReference **)(*v15 + 8LL * (unsigned int)(v2 - 1));
    if ( !CExcludeVisualReference::GetVisual(v16) )
    {
      DynArray<CExcludeVisualReference *,0>::RemoveAt(v15, v18);
      if ( v16 )
        CExcludeVisualReference::`scalar deleting destructor'(v16, v19);
      goto LABEL_17;
    }
    if ( CExcludeVisualReference::GetVisual(v17) == a2 )
      break;
LABEL_17:
    if ( --v2 <= 0 )
      goto LABEL_2;
  }
  if ( !v16 )
    goto LABEL_2;
LABEL_7:
  if ( v21 )
    CExcludeVisualReference::`scalar deleting destructor'(v21, v12);
  return v3;
}
