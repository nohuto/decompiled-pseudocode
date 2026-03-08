/*
 * XREFs of NtGdiCreateDIBSection @ 0x1C008FFA0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetDCDpiScaleValue @ 0x1C0014EA8 (GreGetDCDpiScaleValue.c)
 *     ?GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1C00906B0 (-GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     ?noOverflowCJSCAN@@YAKKGGK@Z @ 0x1C0091284 (-noOverflowCJSCAN@@YAKKGGK@Z.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall NtGdiCreateDIBSection(
        HDC a1,
        void *a2,
        int a3,
        char *a4,
        int a5,
        size_t Size,
        char a7,
        __int64 a8,
        ULONG64 a9)
{
  __int64 DIBitmapReal; // r13
  unsigned __int16 *v12; // rdi
  unsigned int v13; // edx
  int v14; // r9d
  unsigned int v15; // ecx
  int v16; // r10d
  unsigned int v17; // r8d
  unsigned int v18; // eax
  int v19; // eax
  int DCDpiScaleValue; // r8d
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // r8d
  unsigned int v24; // r8d
  unsigned int v25; // r8d
  int v26; // r11d
  unsigned int v27; // eax
  int v28; // ecx
  unsigned int v29; // ecx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  __int64 v32; // r15
  NTSTATUS v33; // ebx
  unsigned __int16 v34; // ax
  HANDLE v35; // rax
  void *v36; // rbx
  void *v37; // r15
  _QWORD *v38; // rdx
  KPROCESSOR_MODE CurrentThreadPreviousMode; // al
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 CurrentProcess; // rax
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+70h] [rbp-98h] BYREF
  PVOID Object; // [rsp+78h] [rbp-90h] BYREF
  int v48; // [rsp+80h] [rbp-88h]
  int v49; // [rsp+88h] [rbp-80h]
  unsigned __int16 *v50; // [rsp+90h] [rbp-78h]
  PVOID BaseAddress; // [rsp+98h] [rbp-70h] BYREF
  PVOID v52; // [rsp+A0h] [rbp-68h]
  PVOID v53; // [rsp+A8h] [rbp-60h]
  __int64 v54; // [rsp+B0h] [rbp-58h]
  __int64 v55; // [rsp+B8h] [rbp-50h]
  __int16 v56; // [rsp+C0h] [rbp-48h]

  DIBitmapReal = 0LL;
  v49 = 0;
  if ( !a4 )
    return DIBitmapReal;
  v12 = 0LL;
  v50 = 0LL;
  BaseAddress = 0LL;
  if ( (unsigned int)(Size - 4) <= 0x270FFFC )
  {
    v12 = (unsigned __int16 *)AllocThreadBufferWithTag((unsigned int)Size, 1886221383LL, 0LL);
    v50 = v12;
    if ( v12 )
    {
      if ( &a4[(unsigned int)Size] < a4 || (unsigned __int64)&a4[(unsigned int)Size] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v12, a4, (unsigned int)Size);
      v13 = *(_DWORD *)v12;
      if ( *(_DWORD *)v12 < 0x28u || (unsigned int)Size < v13 )
        goto LABEL_63;
      v14 = a5;
      v48 = a5;
      v15 = *((_DWORD *)v12 + 8);
      v16 = *((_DWORD *)v12 + 4);
      v17 = v12[7];
      switch ( v16 )
      {
        case 3:
          if ( a5 == 1 )
          {
            v14 = 0;
            v48 = 0;
          }
          if ( v17 != 32 && v17 != 16 )
            goto LABEL_36;
          if ( v13 <= 0x28 )
          {
            v15 = 3;
            v18 = 3;
            goto LABEL_14;
          }
          v18 = 0;
          goto LABEL_33;
        case 0:
          if ( v17 > 8 )
            goto LABEL_29;
          if ( v12[7] != 1 )
          {
            if ( v12[7] != 4 )
            {
              if ( v12[7] != 8 )
              {
LABEL_29:
                if ( a5 == 1 )
                {
                  v14 = 0;
                  v48 = 0;
                }
                v18 = 0;
                if ( v17 != 32 && v17 != 16 && v17 != 24 )
                  goto LABEL_36;
                break;
              }
LABEL_41:
              v18 = 256;
              break;
            }
LABEL_61:
            v18 = 16;
            break;
          }
LABEL_42:
          v18 = 2;
          break;
        case 10:
          v23 = v17 - 1;
          if ( !v23 )
            goto LABEL_42;
          v24 = v23 - 3;
          if ( !v24 )
            goto LABEL_61;
          v25 = v24 - 4;
          if ( !v25 )
            goto LABEL_41;
          v18 = 0;
          if ( v25 != 24 )
            goto LABEL_19;
          break;
        case 2:
        case 12:
          if ( v17 != 4 )
            goto LABEL_36;
          goto LABEL_61;
        case 1:
        case 11:
          if ( v17 != 8 )
            goto LABEL_36;
          v18 = 256;
          break;
        default:
          v18 = 0;
          if ( (unsigned int)(v16 - 4) > 1 )
            goto LABEL_19;
          break;
      }
      if ( v15 )
      {
LABEL_14:
        if ( v15 <= v18 )
          goto LABEL_15;
      }
LABEL_33:
      v15 = v18;
LABEL_15:
      if ( v14 == 1 )
      {
        v19 = 2;
      }
      else
      {
        v19 = 4;
        if ( v14 == 2 )
          v19 = 0;
      }
      v18 = (v19 * v15 + v13 + 3) & 0xFFFFFFFC;
      if ( v18 >= v13 )
      {
LABEL_19:
        if ( (_DWORD)Size == v18 )
          goto LABEL_20;
LABEL_63:
        FreeThreadBufferWithTag(v12);
        v12 = 0LL;
        v50 = 0LL;
        goto LABEL_20;
      }
LABEL_36:
      v18 = 0;
      goto LABEL_19;
    }
  }
LABEL_20:
  if ( (a7 & 0x10) != 0 )
  {
    DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
    if ( DCDpiScaleValue > 1 )
    {
      if ( 0x7FFFFFFF / DCDpiScaleValue < (int)abs32(*((_DWORD *)v12 + 2)) )
        goto LABEL_64;
      v21 = *((_DWORD *)v12 + 1);
      v22 = -v21;
      if ( v21 >= 0 )
        v22 = *((_DWORD *)v12 + 1);
      if ( 0x7FFFFFFF / DCDpiScaleValue < v22 )
LABEL_64:
        ExRaiseStatus(-1073741675);
      *((_DWORD *)v12 + 2) *= DCDpiScaleValue;
      *((_DWORD *)v12 + 1) = DCDpiScaleValue * v21;
    }
  }
  v26 = a3;
  if ( v12 )
  {
    if ( *(_DWORD *)v12 == 12 )
    {
      LODWORD(v31) = noOverflowCJSCAN(v12[2], v12[4], v12[5], v12[3]);
    }
    else
    {
      v27 = *((_DWORD *)v12 + 4);
      if ( v27 <= 0xA && (v28 = 1033, _bittest(&v28, v27)) )
      {
        v29 = abs32(*((_DWORD *)v12 + 2));
        v30 = ((*((unsigned int *)v12 + 1) * v12[6] * (unsigned __int64)v12[7] + 31) >> 3) & 0x1FFFFFFFFFFFFFFCLL;
        if ( v30 > 0xFFFFFFFF )
        {
          LODWORD(v31) = 0;
        }
        else
        {
          v31 = v29 * v30;
          if ( v31 > 0xFFFFFFFF )
            LODWORD(v31) = 0;
        }
      }
      else
      {
        LODWORD(v31) = *((_DWORD *)v12 + 5);
      }
    }
    v32 = (unsigned int)v31;
    RegionSize = (unsigned int)v31;
    if ( !(_DWORD)v31 )
      goto LABEL_81;
    if ( a2 )
    {
      v46 = v26 & 0xFFFF0000;
      RegionSize = (unsigned int)v31 + (unsigned __int64)(unsigned __int16)v26;
      CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
      Object = 0LL;
      v33 = ObReferenceObjectByHandle(a2, 6u, MmSectionObjectType, CurrentThreadPreviousMode, &Object, 0LL);
      v52 = Object;
      if ( v33 < 0 )
      {
        EngSetLastError(0x57u);
      }
      else
      {
        CurrentProcess = PsGetCurrentProcess(v42, v41, v43);
        v33 = MmMapViewOfSection(v52, CurrentProcess, &BaseAddress, 0LL, RegionSize, &v46, &RegionSize, 1, 0, 4);
        if ( v33 < 0 )
          EngSetLastError(0x57u);
        ObfDereferenceObject(v52);
      }
      v34 = a3;
    }
    else
    {
      v33 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
      v34 = 0;
      a3 = 0;
      if ( v33 >= 0 )
        goto LABEL_75;
      EngSetLastError(8u);
      v34 = 0;
    }
    if ( v33 < 0 )
    {
LABEL_81:
      FreeThreadBufferWithTag(v12);
      return DIBitmapReal;
    }
LABEL_75:
    Object = (char *)BaseAddress + v34;
    v35 = MmSecureVirtualMemory(BaseAddress, RegionSize, 4u);
    v36 = v35;
    v52 = v35;
    if ( v35 )
    {
      v53 = Object;
      v54 = v32;
      v55 = 0LL;
      v56 = 0;
      v37 = a2;
      DIBitmapReal = GreCreateDIBitmapReal(a1, a5, Size, (__int64)a2, a3, (__int64)v35, a7 & 0x14 | 2u, a8, 0LL);
      v46 = DIBitmapReal;
      if ( DIBitmapReal )
      {
        v38 = (_QWORD *)a9;
        if ( a9 >= MmUserProbeAddress )
          v38 = (_QWORD *)MmUserProbeAddress;
        *v38 = Object;
        v49 = 1;
      }
      else
      {
        EngSetLastError(0x57u);
      }
    }
    else
    {
      EngSetLastError(0x57u);
      v37 = a2;
    }
    if ( !v49 )
    {
      if ( DIBitmapReal )
      {
        bDeleteSurface(DIBitmapReal);
        DIBitmapReal = 0LL;
      }
      else
      {
        if ( v36 )
          MmUnsecureVirtualMemory(v36);
        if ( v37 )
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
    goto LABEL_81;
  }
  return DIBitmapReal;
}
