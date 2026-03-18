/*
 * XREFs of NtGdiCreateDIBSection @ 0x1C0029440
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapBitsSize @ 0x1C0029854 (GreGetBitmapBitsSize.c)
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x1C002BBA0 (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 *     GreCreateDIBitmapReal @ 0x1C002BC78 (GreCreateDIBitmapReal.c)
 *     GreGetDCDpiScaleValue @ 0x1C00C3E00 (GreGetDCDpiScaleValue.c)
 */

__int64 __fastcall NtGdiCreateDIBSection(
        HDC a1,
        HANDLE Handle,
        int a3,
        struct tagBITMAPINFO *a4,
        unsigned int a5,
        size_t Size,
        char a7,
        __int64 a8,
        ULONG64 a9)
{
  __int64 DIBitmapReal; // rsi
  int DCDpiScaleValue; // r8d
  struct tagBITMAPINFO *v14; // rcx
  NTSTATUS v15; // ebx
  HANDLE v16; // rax
  void *v17; // rbx
  _QWORD *v18; // r8
  KPROCESSOR_MODE CurrentThreadPreviousMode; // al
  __int64 CurrentProcess; // rax
  ULONG v22; // ecx
  int v23; // [rsp+70h] [rbp-78h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-70h] BYREF
  struct tagBITMAPINFO *v25; // [rsp+80h] [rbp-68h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp-60h] BYREF
  PVOID Object; // [rsp+90h] [rbp-58h] BYREF
  _DWORD v28[2]; // [rsp+98h] [rbp-50h] BYREF
  PVOID v29; // [rsp+A0h] [rbp-48h]
  unsigned int BitmapBitsSize; // [rsp+108h] [rbp+20h]

  DIBitmapReal = 0LL;
  v23 = 0;
  if ( a4 )
  {
    v25 = 0LL;
    BaseAddress = 0LL;
    bCaptureBitmapInfo(a4, a5, (unsigned int)Size, &v25);
    if ( (a7 & 0x10) != 0 )
    {
      DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
      if ( DCDpiScaleValue > 1 )
      {
        v14 = v25;
        if ( 0x7FFFFFFF / DCDpiScaleValue < (int)abs32(v25->bmiHeader.biHeight)
          || 0x7FFFFFFF / DCDpiScaleValue < (int)abs32(v25->bmiHeader.biWidth) )
        {
          ExRaiseStatus(-1073741675);
        }
        v25->bmiHeader.biHeight *= DCDpiScaleValue;
        v14->bmiHeader.biWidth *= DCDpiScaleValue;
      }
    }
    if ( v25 )
    {
      BitmapBitsSize = GreGetBitmapBitsSize(v25);
      RegionSize = BitmapBitsSize;
      if ( !BitmapBitsSize )
      {
LABEL_19:
        FreeThreadBufferWithTag(v25);
        return DIBitmapReal;
      }
      if ( Handle )
      {
        v28[0] = a3 & 0xFFFF0000;
        v28[1] = 0;
        RegionSize = BitmapBitsSize + (unsigned __int64)(unsigned __int16)a3;
        CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
        Object = 0LL;
        v15 = ObReferenceObjectByHandle(Handle, 6u, MmSectionObjectType, CurrentThreadPreviousMode, &Object, 0LL);
        v29 = Object;
        if ( v15 >= 0 )
        {
          CurrentProcess = PsGetCurrentProcess();
          v15 = MmMapViewOfSection(v29, CurrentProcess, &BaseAddress, 0LL, RegionSize, v28, &RegionSize, 1, 0, 4);
          if ( v15 < 0 )
            EngSetLastError(0x57u);
          ObfDereferenceObject(v29);
          goto LABEL_12;
        }
        v22 = 87;
      }
      else
      {
        v15 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
        a3 = 0;
        if ( v15 >= 0 )
          goto LABEL_12;
        v22 = 8;
      }
      EngSetLastError(v22);
LABEL_12:
      if ( v15 >= 0 )
      {
        Object = (char *)BaseAddress + (unsigned __int16)a3;
        v16 = MmSecureVirtualMemory(BaseAddress, RegionSize, 4u);
        v17 = v16;
        v29 = v16;
        if ( v16
          && (DIBitmapReal = GreCreateDIBitmapReal(
                               a1,
                               a5,
                               Size,
                               BitmapBitsSize,
                               (__int64)Handle,
                               a3,
                               (__int64)v16,
                               a7 & 0x14 | 2u,
                               a8,
                               0LL)) != 0 )
        {
          v18 = (_QWORD *)a9;
          if ( a9 >= MmUserProbeAddress )
            v18 = (_QWORD *)MmUserProbeAddress;
          *v18 = Object;
          v23 = 1;
        }
        else
        {
          EngSetLastError(0x57u);
        }
        if ( !v23 )
        {
          if ( DIBitmapReal )
          {
            bDeleteSurface(DIBitmapReal);
            DIBitmapReal = 0LL;
          }
          else
          {
            if ( v17 )
              MmUnsecureVirtualMemory(v17);
            if ( Handle )
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
