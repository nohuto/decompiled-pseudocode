void __fastcall VidSchiGpuPerfTracing(struct _VIDSCH_NODE *a1)
{
  __int64 v1; // rdi
  LARGE_INTEGER PerformanceCounter; // rbx
  int v4; // ecx
  int v5; // esi
  LARGE_INTEGER v6; // rax
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rcx
  unsigned __int128 v9; // rax
  unsigned __int64 v10; // rbx
  int v11; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v12[2]; // [rsp+78h] [rbp-88h] BYREF
  int *v13; // [rsp+80h] [rbp-80h]
  int v14; // [rsp+88h] [rbp-78h]
  int v15; // [rsp+8Ch] [rbp-74h]
  __int128 *v16; // [rsp+90h] [rbp-70h]
  int v17; // [rsp+98h] [rbp-68h]
  __int64 v18; // [rsp+9Ch] [rbp-64h]
  int v19; // [rsp+A4h] [rbp-5Ch]
  _OWORD v20[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v21; // [rsp+D0h] [rbp-30h]
  int v22; // [rsp+E0h] [rbp-20h]
  char v23; // [rsp+E4h] [rbp-1Ch]
  __int128 v24; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v25; // [rsp+F8h] [rbp-8h]
  __int64 v26; // [rsp+108h] [rbp+8h]
  int v27; // [rsp+110h] [rbp+10h]

  v1 = *((_QWORD *)a1 + 3);
  v12[1] = 0;
  v15 = 0;
  v18 = 0LL;
  v19 = 0;
  v24 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v27 = 0;
  memset(v20, 0, sizeof(v20));
  v22 = 0;
  v23 = 0;
  v21 = 0LL;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v4 = *((_DWORD *)a1 + 1);
  v12[0] = 24;
  v11 = v4;
  v13 = &v11;
  v16 = &v24;
  v14 = 4;
  v17 = 44;
  v5 = DxgCoreInterface[11](
         *(ADAPTER_DISPLAY **)(v1 + 16),
         (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)v12);
  if ( v5 >= 0 )
  {
    v11 = 0;
    v13 = &v11;
    v12[0] = 25;
    v16 = v20;
    v14 = 4;
    v17 = 53;
    v5 = DxgCoreInterface[11](
           *(ADAPTER_DISPLAY **)(v1 + 16),
           (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)v12);
  }
  v6 = KeQueryPerformanceCounter(0LL);
  if ( v5 >= 0 && (byte_1C00769C4 & 2) != 0 )
  {
    v7 = *(_QWORD *)(v1 + 2624);
    v8 = v6.QuadPart - PerformanceCounter.QuadPart;
    v9 = (unsigned __int64)(v6.QuadPart - PerformanceCounter.QuadPart) * (unsigned __int128)0x3E8uLL;
    if ( is_mul_ok(v8, 0x3E8uLL) )
      v10 = v9 / v7;
    else
      LOBYTE(v10) = -24 * (v8 / v7) + 1000 * (v8 % v7) / v7;
    McTemplateK0xqxxxxqxqxx_EtwWriteTransfer(
      *((unsigned __int16 *)a1 + 2),
      DWORD2(v21),
      v22,
      *(_QWORD *)(*(_QWORD *)(v1 + 16) + 404LL),
      *((_WORD *)a1 + 3),
      v20[0],
      SBYTE12(v21),
      v22,
      SBYTE8(v21),
      *((_WORD *)a1 + 2),
      v24,
      SBYTE8(v25),
      SBYTE4(v26),
      v10);
  }
}
