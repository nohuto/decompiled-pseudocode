/*
 * XREFs of NtGdiCreateDIBSection @ 0x1C00AB8E0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapBitsSize @ 0x1C00ABCE4 (GreGetBitmapBitsSize.c)
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x1C00ABD84 (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 *     GreCreateDIBitmapReal @ 0x1C00ABE5C (GreCreateDIBitmapReal.c)
 *     GreGetDCDpiScaleValue @ 0x1C01073A4 (GreGetDCDpiScaleValue.c)
 */

__int64 __fastcall NtGdiCreateDIBSection(
        HDC a1,
        void *a2,
        int a3,
        struct tagBITMAPINFO *a4,
        unsigned int a5,
        size_t Size,
        char a7,
        __int64 a8,
        ULONG64 a9)
{
  __int64 DIBitmapReal; // rdi
  int DCDpiScaleValue; // r8d
  struct tagBITMAPINFO *v14; // rcx
  ULONG64 v15; // rdx
  NTSTATUS v16; // esi
  HANDLE v17; // rax
  void *v18; // rsi
  _QWORD *v19; // r8
  KPROCESSOR_MODE CurrentThreadPreviousMode; // al
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 CurrentProcess; // rax
  ULONG v26; // ecx
  int v27; // [rsp+70h] [rbp-68h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-60h] BYREF
  struct tagBITMAPINFO *v29; // [rsp+80h] [rbp-58h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp-50h] BYREF
  PVOID Object; // [rsp+90h] [rbp-48h] BYREF
  HANDLE v32[8]; // [rsp+98h] [rbp-40h] BYREF
  unsigned int BitmapBitsSize; // [rsp+F8h] [rbp+20h]

  DIBitmapReal = 0LL;
  v27 = 0;
  if ( a4 )
  {
    v29 = 0LL;
    BaseAddress = 0LL;
    bCaptureBitmapInfo(a4, a5, (unsigned int)Size, &v29);
    if ( (a7 & 0x10) != 0 )
    {
      DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
      if ( DCDpiScaleValue > 1 )
      {
        v14 = v29;
        if ( 0x7FFFFFFF / DCDpiScaleValue < (int)abs32(v29->bmiHeader.biHeight)
          || 0x7FFFFFFF / DCDpiScaleValue < (int)abs32(v29->bmiHeader.biWidth) )
        {
          ExRaiseStatus(-1073741675);
        }
        v29->bmiHeader.biHeight *= DCDpiScaleValue;
        v14->bmiHeader.biWidth *= DCDpiScaleValue;
      }
    }
    if ( v29 )
    {
      BitmapBitsSize = GreGetBitmapBitsSize(v29);
      v15 = BitmapBitsSize;
      RegionSize = BitmapBitsSize;
      if ( !BitmapBitsSize )
      {
LABEL_19:
        FreeThreadBufferWithTag(v29, v15);
        return DIBitmapReal;
      }
      if ( a2 )
      {
        v32[0] = (HANDLE)(a3 & 0xFFFF0000);
        RegionSize = BitmapBitsSize + (unsigned __int64)(unsigned __int16)a3;
        CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
        Object = 0LL;
        v16 = ObReferenceObjectByHandle(a2, 6u, MmSectionObjectType, CurrentThreadPreviousMode, &Object, 0LL);
        if ( v16 >= 0 )
        {
          CurrentProcess = PsGetCurrentProcess(v23, v22, v24);
          v16 = MmMapViewOfSection(Object, CurrentProcess, &BaseAddress, 0LL, RegionSize, v32, &RegionSize, 1, 0, 4);
          if ( v16 < 0 )
            EngSetLastError(0x57u);
          ObfDereferenceObject(Object);
          goto LABEL_12;
        }
        v26 = 87;
      }
      else
      {
        v16 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
        a3 = 0;
        if ( v16 >= 0 )
          goto LABEL_12;
        v26 = 8;
      }
      EngSetLastError(v26);
LABEL_12:
      if ( v16 >= 0 )
      {
        Object = (char *)BaseAddress + (unsigned __int16)a3;
        v17 = MmSecureVirtualMemory(BaseAddress, RegionSize, 4u);
        v18 = v17;
        v32[0] = v17;
        if ( v17
          && (DIBitmapReal = GreCreateDIBitmapReal(
                               a1,
                               a5,
                               Size,
                               BitmapBitsSize,
                               (__int64)a2,
                               a3,
                               (__int64)v17,
                               a7 & 0x14 | 2u,
                               a8,
                               0LL)) != 0 )
        {
          v19 = (_QWORD *)a9;
          v15 = MmUserProbeAddress;
          if ( a9 >= MmUserProbeAddress )
            v19 = (_QWORD *)MmUserProbeAddress;
          *v19 = Object;
          v27 = 1;
        }
        else
        {
          EngSetLastError(0x57u);
        }
        if ( !v27 )
        {
          if ( DIBitmapReal )
          {
            bDeleteSurface(DIBitmapReal);
            DIBitmapReal = 0LL;
          }
          else
          {
            if ( v18 )
              MmUnsecureVirtualMemory(v18);
            if ( a2 )
            {
              ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
            }
            else
            {
              RegionSize = 0LL;
              ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Object, &RegionSize, 0x8000u);
            }
          }
        }
      }
      goto LABEL_19;
    }
  }
  return DIBitmapReal;
}
