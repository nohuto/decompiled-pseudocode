__int64 __fastcall CallCheckMultiPlaneOverlaySupport1DDI(
        __int64 a1,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **a2,
        void **a3,
        struct ADAPTER_DISPLAY *a4,
        int *a5,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a6)
{
  void **v7; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdi
  _BYTE *Pool2; // r9
  __int64 CurrentProcess; // rax
  unsigned int v13; // ebx
  char *v14; // r14
  __int64 v15; // r10
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT v20; // [rsp+20h] [rbp-E0h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h]
  _BYTE v22[312]; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+180h] [rbp+80h]

  v7 = a3;
  P = 0LL;
  v23 = 0;
  *a5 = 0;
  a6->Value = 0;
  v9 = (unsigned int)a1;
  if ( (unsigned int)a1 <= 3 )
  {
    Pool2 = v22;
    P = v22;
    if ( (_DWORD)a1 )
    {
      memset(v22, 0, 104LL * (unsigned int)a1);
      Pool2 = P;
    }
  }
  else
  {
    v10 = (unsigned int)a1;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)a1 < 0x68 )
    {
LABEL_7:
      CurrentProcess = PsGetCurrentProcess(a1);
      v13 = -1073741801;
      WdLogSingleEntry3(3LL, v10, -1073741801LL, CurrentProcess);
      goto LABEL_24;
    }
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 104LL * (unsigned int)a1, 1265072196LL);
    P = Pool2;
  }
  v23 = v9;
  v10 = v9;
  if ( !Pool2 )
    goto LABEL_7;
  if ( (_DWORD)v9 )
  {
    a3 = (void **)(Pool2 + 16);
    v14 = (char *)((char *)a2 - (char *)v7);
    do
    {
      v15 = *(__int64 *)((char *)v7 + (_QWORD)v14);
      *(a3 - 2) = *v7;
      *((_DWORD *)a3 - 2) = *(_DWORD *)(v15 + 16);
      *(_OWORD *)a3 = *(_OWORD *)(*(_QWORD *)(v15 + 24) + 4LL);
      *((_OWORD *)a3 + 1) = *(_OWORD *)(*(_QWORD *)(v15 + 24) + 20LL);
      *((_OWORD *)a3 + 2) = *(_OWORD *)(*(_QWORD *)(v15 + 24) + 36LL);
      *((_DWORD *)a3 + 12) = *(_DWORD *)(*(_QWORD *)(v15 + 24) + 52LL);
      v16 = *(_DWORD *)(*(_QWORD *)(v15 + 24) + 72LL);
      if ( v16 == 6 || v16 == 8 )
        *((_DWORD *)a3 + 15) |= 1u;
      if ( *(_DWORD *)(*(_QWORD *)(v15 + 24) + 72LL) == 8 || *(_DWORD *)(*(_QWORD *)(v15 + 24) + 72LL) == 9 )
        *((_DWORD *)a3 + 15) |= 2u;
      v17 = *((_DWORD *)a3 - 1) ^ ((unsigned __int8)*((_DWORD *)a3 - 1) ^ (unsigned __int8)**(_DWORD **)(v15 + 24)) & 1;
      *((_DWORD *)a3 - 1) = v17;
      *((_DWORD *)a3 - 1) = v17 ^ (**(_DWORD **)(v15 + 24) ^ v17) & 2;
      *((_DWORD *)a3 + 13) ^= (*((_DWORD *)a3 + 13) ^ *(_DWORD *)(*(_QWORD *)(v15 + 24) + 56LL)) & 1;
      if ( *(_DWORD *)(*(_QWORD *)(v15 + 24) + 76LL) == 1 )
      {
        *((_DWORD *)a3 + 20) = 1;
      }
      else if ( *(_DWORD *)(*(_QWORD *)(v15 + 24) + 76LL) == 2 )
      {
        *((_DWORD *)a3 + 20) = 2;
      }
      ++v7;
      a3 += 13;
      --v10;
    }
    while ( v10 );
  }
  *(&v20.PlaneCount + 1) = 0;
  *(_QWORD *)&v20.Supported = 0LL;
  v20.PlaneCount = v9;
  v20.pPlanes = (DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *)Pool2;
  v18 = ADAPTER_DISPLAY::DdiCheckMultiPlaneOverlaySupport(a4, &v20, (__int64)a3);
  if ( v18 >= 0 )
    *a5 = v20.Supported;
  v13 = v18;
LABEL_24:
  if ( P != v22 && P )
    ExFreePoolWithTag(P, 0);
  return v13;
}
