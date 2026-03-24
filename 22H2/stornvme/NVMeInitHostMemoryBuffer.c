/*
 * XREFs of NVMeInitHostMemoryBuffer @ 0x1C000EC10
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000DDD0 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005A70 (NVMeZeroMemory.c)
 *     __security_check_cookie @ 0x1C00066D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0007D80 (memmove.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C001B5EC (NVMeSetHostMemoryBuffer.c)
 */

__int64 __fastcall NVMeInitHostMemoryBuffer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r14
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v8; // rax
  int v9; // r12d
  __int64 v10; // r8
  unsigned int v11; // edx
  int v12; // eax
  unsigned int v13; // ebp
  unsigned __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // ecx
  size_t Size; // [rsp+28h] [rbp-180h]
  unsigned int v19; // [rsp+64h] [rbp-144h]
  _DWORD v20[2]; // [rsp+68h] [rbp-140h]
  _QWORD Src[16]; // [rsp+70h] [rbp-138h] BYREF
  _QWORD v22[16]; // [rsp+F0h] [rbp-B8h] BYREF

  v4 = (_QWORD *)(a1 + 3784);
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 3784);
  if ( v6 )
    goto LABEL_15;
  v8 = *(_QWORD *)(a1 + 1624);
  v9 = 0;
  v10 = (unsigned int)(*(_DWORD *)(v8 + 276) << 12);
  v11 = *(_DWORD *)(v8 + 272) << 12;
  if ( v11 )
  {
    v12 = *(_DWORD *)(a1 + 116);
    if ( v12 )
    {
      if ( v12 != -1 )
      {
        v11 = *(_DWORD *)(a1 + 116);
        if ( (v12 & 0xFFF) != 0 )
          v11 = (v12 + 4095) & 0xFFFFF000;
        if ( v11 < (unsigned int)v10 )
          v11 = v10;
      }
      v19 = 1 << (((*(_DWORD *)(*(_QWORD *)(a1 + 160) + 20LL) >> 7) & 0xF) + 12);
      v13 = StorPortExtendedFunction(69LL, a1, v10, v11);
      if ( v13 )
        goto LABEL_18;
      v5 = 8;
      NVMeZeroMemory(Src, 0x80u);
      v14 = 0LL;
      v15 = 8LL;
      do
      {
        v16 = v22[v14 / 2 + 1];
        v9 += v16;
        Src[v14 / 2] = v22[v14 / 2];
        v14 += 4LL;
        v20[v14] = v16 / v19;
        --v15;
      }
      while ( v15 );
      v13 = StorPortExtendedFunction(0LL, a1, 136LL, 1701672526LL);
      if ( v13 )
        goto LABEL_16;
      *(_DWORD *)*v4 = v9;
      memmove((void *)(*v4 + 8LL), Src, 0x80uLL);
      *(_DWORD *)(*v4 + 4LL) = 128;
      v6 = *(_QWORD *)(a1 + 3784);
LABEL_15:
      LODWORD(Size) = *(_DWORD *)(v6 + 4);
      v13 = NVMeSetHostMemoryBuffer(a1, (void *)(v6 + 8), Size);
      if ( !v13 )
        return v13;
LABEL_16:
      if ( v5 )
        StorPortExtendedFunction(70LL, a1, v22, v5);
      goto LABEL_18;
    }
  }
  v13 = -1056964606;
LABEL_18:
  if ( *v4 )
  {
    StorPortExtendedFunction(1LL, a1, *v4, a4);
    *v4 = 0LL;
  }
  return v13;
}
