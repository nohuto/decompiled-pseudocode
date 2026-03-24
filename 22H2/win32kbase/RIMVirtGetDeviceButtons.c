/*
 * XREFs of RIMVirtGetDeviceButtons @ 0x1C01609E4
 * Callers:
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0160080 (RIMVirtCreatePointerDeviceInfo.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C00298B0 (Win32AllocPoolZInit.c)
 *     Win32AllocPool @ 0x1C002C2D0 (Win32AllocPool.c)
 */

__int64 __fastcall RIMVirtGetDeviceButtons(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  unsigned int v7; // ebx
  __int64 v8; // r14
  void *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rax
  void *v14; // rax
  int v15; // eax
  unsigned int v16; // r9d
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v25; // [rsp+20h] [rbp-38h]

  v5 = *(unsigned __int16 *)(a4 + 46);
  v7 = 0;
  if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 5) <= 1 )
  {
    *(_DWORD *)(a2 + 980) = *(_DWORD *)(a5 + 1264);
    v8 = (unsigned int)v5;
    v9 = Win32AllocPoolZInit(12 * v5, 2019849042LL);
    *(_QWORD *)(a2 + 968) = v9;
    if ( v9 )
    {
      if ( (_WORD)v5 )
      {
        v10 = 0LL;
        do
        {
          v11 = *(_QWORD *)(a5 + 1256);
          v12 = *(_DWORD *)(v10 + v11 + 8);
          v13 = *(_QWORD *)(a2 + 968);
          *(_QWORD *)(v13 + v10) = *(_QWORD *)(v10 + v11);
          *(_DWORD *)(v13 + v10 + 8) = v12;
          v10 += 12LL;
          --v8;
        }
        while ( v8 );
      }
      goto LABEL_12;
    }
LABEL_11:
    v7 = -1073741668;
    goto LABEL_12;
  }
  v14 = Win32AllocPoolZInit(12LL * *(unsigned int *)(a2 + 720), 2019849042LL);
  *(_QWORD *)(a2 + 968) = v14;
  if ( !v14 )
    goto LABEL_11;
  v15 = *(_DWORD *)(a2 + 720);
  v16 = 0;
  for ( *(_DWORD *)(a2 + 980) = v15; v16 < *(_DWORD *)(a2 + 980); *(_DWORD *)(v21 + 4 * v19 + 8) = v20 )
  {
    v17 = *(_QWORD *)(a5 + 1256);
    v18 = v16++;
    v19 = 3 * v18;
    v20 = *(_DWORD *)(v17 + 12 * v18 + 8);
    v25 = *(_QWORD *)(v17 + 12 * v18);
    v21 = *(_QWORD *)(a2 + 968);
    *(_QWORD *)(v21 + 4 * v19) = v25;
  }
LABEL_12:
  v22 = *(unsigned int *)(a5 + 1268);
  *(_DWORD *)(a2 + 984) = v22;
  if ( !(_DWORD)v22 )
    v7 = -1073741668;
  *(_DWORD *)(a2 + 336) = *(_DWORD *)(a5 + 568);
  if ( v7 != -1073741668 )
  {
    v23 = Win32AllocPool(2 * v22, 0x65687352u);
    *(_QWORD *)(a2 + 768) = v23;
    if ( !v23 )
      return (unsigned int)-1073741668;
  }
  return v7;
}
