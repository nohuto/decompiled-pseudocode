__int64 __fastcall DrvSetVideoParameters(PCUNICODE_STRING String1, __int64 a2, _OWORD *a3, int a4, int a5)
{
  unsigned int v9; // esi
  __int64 DeviceFromName; // r14
  _DWORD *v12; // rdi
  _OWORD *v13; // rcx
  _OWORD *v14; // rax
  __int64 v15; // r15
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // eax
  _OWORD *v19; // rax
  unsigned int v20; // [rsp+80h] [rbp+8h] BYREF

  v9 = -5;
  DeviceFromName = 0LL;
  WdLogSingleEntry2(4LL, String1);
  if ( String1 )
  {
    DeviceFromName = DrvGetDeviceFromName(String1);
    if ( !DeviceFromName )
      goto LABEL_8;
  }
  else
  {
    if ( a2 )
      DeviceFromName = *(_QWORD *)(a2 + 2552);
    if ( !DeviceFromName )
      goto LABEL_8;
  }
  if ( DeviceFromName == -4 )
  {
LABEL_8:
    WdLogSingleEntry0(5LL);
    return v9;
  }
  if ( a3 )
  {
    if ( !a5 || (*(_DWORD *)(DeviceFromName + 160) & 0x800000) != 0 )
    {
      v12 = (_DWORD *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                        gpLeakTrackingAllocator,
                        260LL,
                        0x2C8uLL,
                        0x73726447u);
      if ( v12 )
      {
        v13 = v12;
        v14 = a3;
        v15 = 2LL;
        v16 = 2LL;
        do
        {
          *v13 = *v14;
          v13[1] = v14[1];
          v13[2] = v14[2];
          v13[3] = v14[3];
          v13[4] = v14[4];
          v13[5] = v14[5];
          v13[6] = v14[6];
          v13 += 8;
          *(v13 - 1) = v14[7];
          v14 += 8;
          --v16;
        }
        while ( v16 );
        *v13 = *v14;
        v13[1] = v14[1];
        v13[2] = v14[2];
        v13[3] = v14[3];
        v13[4] = v14[4];
        v13[5] = v14[5];
        *((_DWORD *)v13 + 24) = *((_DWORD *)v14 + 24);
        if ( !a4
          || (v17 = v12[5], v17 == 1)
          || v17 == 2 && ((v12[6] & 0x100) != 0 && v12[21] == 2 || (v12[6] & 0x100) != 0 && v12[21] == 4 && !v12[24]) )
        {
          v18 = GreDeviceIoControlImpl(
                  *(PDEVICE_OBJECT *)(DeviceFromName + 136),
                  0x230020u,
                  v12,
                  0x164u,
                  v12,
                  0x164u,
                  &v20,
                  0,
                  1);
          if ( v18 )
            v18 = -5;
          v9 = v18;
          v19 = v12;
          do
          {
            *a3 = *v19;
            a3[1] = v19[1];
            a3[2] = v19[2];
            a3[3] = v19[3];
            a3[4] = v19[4];
            a3[5] = v19[5];
            a3[6] = v19[6];
            a3 += 8;
            *(a3 - 1) = v19[7];
            v19 += 8;
            --v15;
          }
          while ( v15 );
          *a3 = *v19;
          a3[1] = v19[1];
          a3[2] = v19[2];
          a3[3] = v19[3];
          a3[4] = v19[4];
          a3[5] = v19[5];
          *((_DWORD *)a3 + 24) = *((_DWORD *)v19 + 24);
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v12);
          WdLogSingleEntry1(5LL, (int)v9);
        }
        else
        {
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v12);
        }
        return v9;
      }
      WdLogSingleEntry0(5LL);
    }
    return 0xFFFFFFFFLL;
  }
  return v9;
}
