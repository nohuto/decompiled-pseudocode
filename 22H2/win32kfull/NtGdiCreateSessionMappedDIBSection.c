/*
 * XREFs of NtGdiCreateSessionMappedDIBSection @ 0x1C00A94F0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapBitsSize @ 0x1C00ABCE4 (GreGetBitmapBitsSize.c)
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x1C00ABD84 (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 *     GreCreateDIBitmapReal @ 0x1C00ABE5C (GreCreateDIBitmapReal.c)
 */

__int64 __fastcall NtGdiCreateSessionMappedDIBSection(
        HDC a1,
        void *a2,
        int a3,
        struct tagBITMAPINFO *a4,
        unsigned int a5,
        unsigned int Size,
        char a7,
        __int64 a8)
{
  __int64 DIBitmapReal; // rsi
  PVOID v12; // rdi
  __int64 v13; // rdx
  KPROCESSOR_MODE CurrentThreadPreviousMode; // al
  NTSTATUS v15; // eax
  signed int v16; // r12d
  PVOID v17; // r15
  ULONG v19; // ecx
  PVOID Object; // [rsp+70h] [rbp-58h] BYREF
  PVOID MappedBase; // [rsp+78h] [rbp-50h] BYREF
  _DWORD v22[2]; // [rsp+80h] [rbp-48h] BYREF
  _QWORD v23[8]; // [rsp+88h] [rbp-40h] BYREF
  unsigned int BitmapBitsSize; // [rsp+D8h] [rbp+10h]

  DIBitmapReal = 0LL;
  v23[0] = 0LL;
  Object = 0LL;
  MappedBase = 0LL;
  if ( !a2 || !a4 )
  {
    v19 = 87;
    goto LABEL_21;
  }
  if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    v19 = 5;
LABEL_21:
    EngSetLastError(v19);
    return 0LL;
  }
  bCaptureBitmapInfo(a4, a5, Size, (struct tagBITMAPINFO **)&Object);
  v12 = Object;
  if ( Object )
  {
    BitmapBitsSize = GreGetBitmapBitsSize(Object);
    v13 = BitmapBitsSize;
    v23[0] = BitmapBitsSize;
    if ( BitmapBitsSize )
    {
      v22[0] = a3 & 0xFFFF0000;
      v22[1] = 0;
      v23[1] = (unsigned __int16)a3;
      v23[0] = BitmapBitsSize + (unsigned __int64)(unsigned __int16)a3;
      CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
      Object = 0LL;
      v15 = ObReferenceObjectByHandle(a2, 4u, MmSectionObjectType, CurrentThreadPreviousMode, &Object, 0LL);
      v16 = v15;
      v17 = Object;
      if ( v15 < 0 )
      {
        EngSetLastError(v15);
      }
      else
      {
        v16 = MmMapViewInSessionSpaceEx(Object, &MappedBase, v23, v22, 0LL);
        ObfDereferenceObject(v17);
        v17 = 0LL;
      }
      if ( v16 < 0 )
        EngSetLastError(v16);
      else
        DIBitmapReal = GreCreateDIBitmapReal(a1, a5, Size, BitmapBitsSize, (__int64)a2, a3, 0LL, a7 & 4 | 0xAu, a8, 0LL);
      if ( !DIBitmapReal )
      {
        EngSetLastError(0x57u);
        if ( MappedBase )
          MmUnmapViewInSessionSpace(MappedBase);
        if ( v17 )
          ObfDereferenceObject(v17);
      }
    }
    FreeThreadBufferWithTag(v12, v13);
  }
  return DIBitmapReal;
}
