__int64 __fastcall CD3DDevice::CopySubresourceRegion(
        __int64 a1,
        __int64 a2,
        int a3,
        int *a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        int a9)
{
  int v9; // eax
  int v10; // edi
  __int64 v11; // rcx
  __int64 result; // rax
  int v13; // edx
  int v14; // ecx
  int v15; // [rsp+60h] [rbp-21h] BYREF
  int v16; // [rsp+64h] [rbp-1Dh]
  int v17; // [rsp+68h] [rbp-19h]
  int v18; // [rsp+6Ch] [rbp-15h]
  int v19; // [rsp+70h] [rbp-11h]
  int v20; // [rsp+74h] [rbp-Dh]

  v9 = *a4;
  v10 = a2;
  v11 = *(_QWORD *)(a1 + 560);
  v17 = 0;
  v15 = v9;
  v16 = a4[1];
  v18 = a4[2];
  v19 = a4[3];
  v20 = 1;
  result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, _DWORD, __int64, int, int *, int))(*(_QWORD *)v11 + 920LL))(
             v11,
             a5,
             a6,
             a7,
             a8,
             0,
             a2,
             a3,
             &v15,
             a9);
  if ( (a9 & 4) != 0 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    return McTemplateU0xxdddddd_EventWriteTransfer(v14, v13, a5, v10, v15, v16, v18, v19, a7, a8);
  return result;
}
