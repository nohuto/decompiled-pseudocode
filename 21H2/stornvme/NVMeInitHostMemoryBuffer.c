/*
 * XREFs of NVMeInitHostMemoryBuffer @ 0x1C0006EB0
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0006F74 (NVMeControllerInitPart2.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     __security_check_cookie @ 0x1C000E880 (__security_check_cookie.c)
 *     memmove @ 0x1C0010700 (memmove.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C0024584 (NVMeSetHostMemoryBuffer.c)
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
  unsigned int v12; // ebp
  int v14; // eax
  unsigned __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // ecx
  size_t Size; // [rsp+28h] [rbp-180h]
  unsigned int v19; // [rsp+64h] [rbp-144h]
  _DWORD v20[2]; // [rsp+68h] [rbp-140h]
  _QWORD Src[16]; // [rsp+70h] [rbp-138h] BYREF
  _QWORD v22[16]; // [rsp+F0h] [rbp-B8h] BYREF

  v4 = (_QWORD *)(a1 + 3800);
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 3800);
  if ( v6 )
    goto LABEL_19;
  v8 = *(_QWORD *)(a1 + 1640);
  v9 = 0;
  v10 = (unsigned int)(*(_DWORD *)(v8 + 276) << 12);
  v11 = *(_DWORD *)(v8 + 272) << 12;
  if ( v11 )
  {
    v14 = *(_DWORD *)(a1 + 124);
    if ( v14 )
    {
      if ( v14 != -1 )
      {
        v11 = *(_DWORD *)(a1 + 124);
        if ( (v14 & 0xFFF) != 0 )
          v11 = (v14 + 4095) & 0xFFFFF000;
        if ( v11 < (unsigned int)v10 )
          v11 = v10;
      }
      v19 = 1 << (((*(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) >> 7) & 0xF) + 12);
      v12 = StorPortExtendedFunction(69LL, a1, v10, v11);
      if ( v12 )
        goto LABEL_4;
      v5 = 8;
      NVMeZeroMemory(Src, 0x80u);
      v15 = 0LL;
      v16 = 8LL;
      do
      {
        v17 = v22[v15 / 2 + 1];
        v9 += v17;
        Src[v15 / 2] = v22[v15 / 2];
        v15 += 4LL;
        v20[v15] = v17 / v19;
        --v16;
      }
      while ( v16 );
      v12 = StorPortExtendedFunction(0LL, a1, 136LL, 1701672526LL);
      if ( v12 )
        goto LABEL_20;
      *(_DWORD *)*v4 = v9;
      memmove((void *)(*v4 + 8LL), Src, 0x80uLL);
      *(_DWORD *)(*v4 + 4LL) = 128;
      v6 = *(_QWORD *)(a1 + 3800);
LABEL_19:
      LODWORD(Size) = *(_DWORD *)(v6 + 4);
      v12 = NVMeSetHostMemoryBuffer(a1, (void *)(v6 + 8), Size);
      if ( !v12 )
        return v12;
LABEL_20:
      if ( v5 )
        StorPortExtendedFunction(70LL, a1, v22, v5);
      goto LABEL_4;
    }
  }
  v12 = -1056964606;
LABEL_4:
  if ( *v4 )
  {
    StorPortExtendedFunction(1LL, a1, *v4, a4);
    *v4 = 0LL;
  }
  return v12;
}
