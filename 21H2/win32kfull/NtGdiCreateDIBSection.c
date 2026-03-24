/*
 * XREFs of NtGdiCreateDIBSection @ 0x1C00ABAE0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapBitsSize @ 0x1C00ABFB4 (GreGetBitmapBitsSize.c)
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x1C00AC054 (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 *     GreCreateDIBitmapReal @ 0x1C00AC12C (GreCreateDIBitmapReal.c)
 *     GreGetDCDpiScaleValue @ 0x1C0107724 (GreGetDCDpiScaleValue.c)
 *     Feature_2249667896__private_IsEnabledDeviceUsage @ 0x1C016B1FC (Feature_2249667896__private_IsEnabledDeviceUsage.c)
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
  __int64 DIBitmapReal; // rsi
  int DCDpiScaleValue; // r8d
  struct tagBITMAPINFO *v14; // rcx
  ULONG64 v15; // rdx
  NTSTATUS v16; // edi
  ULONG v17; // ecx
  KPROCESSOR_MODE CurrentThreadPreviousMode; // al
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 CurrentProcess; // rax
  HANDLE v23; // rax
  void *v24; // rdi
  _QWORD *v25; // r8
  ULONG64 v26; // rcx
  int v28; // [rsp+70h] [rbp-68h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-60h] BYREF
  struct tagBITMAPINFO *v30; // [rsp+80h] [rbp-58h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp-50h] BYREF
  PVOID Object; // [rsp+90h] [rbp-48h] BYREF
  HANDLE v33[8]; // [rsp+98h] [rbp-40h] BYREF
  unsigned int BitmapBitsSize; // [rsp+F8h] [rbp+20h]

  DIBitmapReal = 0LL;
  v28 = 0;
  if ( a4 )
  {
    v30 = 0LL;
    BaseAddress = 0LL;
    bCaptureBitmapInfo(a4, a5, (unsigned int)Size, &v30);
    if ( (a7 & 0x10) != 0 )
    {
      DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
      if ( DCDpiScaleValue > 1 )
      {
        v14 = v30;
        if ( 0x7FFFFFFF / DCDpiScaleValue < (int)abs32(v30->bmiHeader.biHeight)
          || 0x7FFFFFFF / DCDpiScaleValue < (int)abs32(v30->bmiHeader.biWidth) )
        {
          ExRaiseStatus(-1073741675);
        }
        v30->bmiHeader.biHeight *= DCDpiScaleValue;
        v14->bmiHeader.biWidth *= DCDpiScaleValue;
      }
    }
    if ( v30 )
    {
      BitmapBitsSize = GreGetBitmapBitsSize(v30);
      v15 = BitmapBitsSize;
      RegionSize = BitmapBitsSize;
      if ( !BitmapBitsSize )
      {
LABEL_39:
        FreeThreadBufferWithTag(v30, v15);
        return DIBitmapReal;
      }
      if ( a2 )
      {
        v33[0] = (HANDLE)(a3 & 0xFFFF0000);
        RegionSize = BitmapBitsSize + (unsigned __int64)(unsigned __int16)a3;
        CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
        Object = 0LL;
        v16 = ObReferenceObjectByHandle(a2, 6u, MmSectionObjectType, CurrentThreadPreviousMode, &Object, 0LL);
        if ( v16 >= 0 )
        {
          CurrentProcess = PsGetCurrentProcess(v20, v19, v21);
          v16 = MmMapViewOfSection(Object, CurrentProcess, &BaseAddress, 0LL, RegionSize, v33, &RegionSize, 1, 0, 4);
          if ( v16 < 0 )
            EngSetLastError(0x57u);
          ObfDereferenceObject(Object);
          goto LABEL_19;
        }
        v17 = 87;
      }
      else
      {
        v16 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
        a3 = 0;
        if ( v16 >= 0 )
          goto LABEL_19;
        v17 = 8;
      }
      EngSetLastError(v17);
LABEL_19:
      if ( v16 >= 0 )
      {
        Object = (char *)BaseAddress + (unsigned __int16)a3;
        if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage(Object, v15) )
          v23 = (HANDLE)GrepSecureVirtualMemory(BaseAddress, RegionSize, 4LL);
        else
          v23 = MmSecureVirtualMemory(BaseAddress, RegionSize, 4u);
        v24 = v23;
        v33[0] = v23;
        if ( v23
          && (DIBitmapReal = GreCreateDIBitmapReal(
                               a1,
                               a5,
                               Size,
                               BitmapBitsSize,
                               (__int64)a2,
                               a3,
                               (__int64)v23,
                               a7 & 0x14 | 2u,
                               a8,
                               0LL)) != 0 )
        {
          v25 = (_QWORD *)a9;
          v26 = MmUserProbeAddress;
          v15 = MmUserProbeAddress;
          if ( a9 >= MmUserProbeAddress )
            v25 = (_QWORD *)MmUserProbeAddress;
          *v25 = Object;
          v28 = 1;
        }
        else
        {
          EngSetLastError(0x57u);
        }
        if ( !v28 )
        {
          if ( DIBitmapReal )
          {
            bDeleteSurface(DIBitmapReal);
            DIBitmapReal = 0LL;
          }
          else
          {
            if ( v24 )
            {
              if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage(v26, v15) )
                GrepUnsecureVirtualMemory(v24);
              else
                MmUnsecureVirtualMemory(v24);
            }
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
      goto LABEL_39;
    }
  }
  return DIBitmapReal;
}
