/*
 * XREFs of BiUpdateBcdObject @ 0x14082DA80
 * Callers:
 *     BiBindEfiEntries @ 0x14082D024 (BiBindEfiEntries.c)
 * Callees:
 *     BiMapEfiDeviceForSpaces @ 0x140390584 (BiMapEfiDeviceForSpaces.c)
 *     RtlCompareMemory @ 0x140420DD0 (RtlCompareMemory.c)
 *     BiDeleteElement @ 0x14082CDF8 (BiDeleteElement.c)
 *     BiSetRegistryValue @ 0x14082D198 (BiSetRegistryValue.c)
 *     BcdSetElementDataWithFlags @ 0x14082D894 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14082E398 (BcdGetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x14082E5DC (BcdCloseObject.c)
 *     BcdOpenObject @ 0x14082E620 (BcdOpenObject.c)
 *     BiGetRegistryValue @ 0x14082EB20 (BiGetRegistryValue.c)
 *     BiGetFilePathFromEfiPath @ 0x14082F3C8 (BiGetFilePathFromEfiPath.c)
 *     BiGetDeviceFromEfiPath @ 0x14082F530 (BiGetDeviceFromEfiPath.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiUpdateBcdObject(__int64 a1, __int64 a2)
{
  ULONG *v2; // rsi
  PVOID v4; // r13
  PVOID v5; // r14
  void *Pool2; // r15
  int v7; // eax
  void *v8; // rdi
  int v9; // ebx
  ULONG v10; // eax
  int v11; // r8d
  _WORD *v12; // r12
  __int64 v13; // rax
  SIZE_T v14; // rbx
  int ElementDataWithFlags; // eax
  int v16; // r8d
  __int64 v17; // rax
  char *v18; // rbx
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // r8
  int v23; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v24; // [rsp+34h] [rbp-2Ch] BYREF
  PVOID P; // [rsp+38h] [rbp-28h] BYREF
  PVOID v26; // [rsp+40h] [rbp-20h] BYREF
  void *Source2; // [rsp+48h] [rbp-18h] BYREF
  void *v28; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v30; // [rsp+B0h] [rbp+50h] BYREF
  unsigned int v31; // [rsp+B8h] [rbp+58h] BYREF

  v2 = *(ULONG **)(a2 + 40);
  v31 = 0;
  v24 = 0;
  v4 = 0LL;
  P = 0LL;
  v5 = 0LL;
  v26 = 0LL;
  Pool2 = 0LL;
  Source2 = 0LL;
  v23 = 0;
  v28 = 0LL;
  v30 = 0;
  v7 = BcdOpenObject(a1, a2 + 16, &v28);
  v8 = v28;
  v9 = v7;
  if ( v7 < 0 )
    goto LABEL_26;
  if ( (*(_DWORD *)(a2 + 48) & 2) != 0
    && (int)BiGetRegistryValue(v28, L"FirmwareVariable", L"Description", 3LL, &Source2, &v23) >= 0 )
  {
    v10 = v2[1];
    if ( v10 == v23 && RtlCompareMemory(v2, Source2, v10) == v2[1] )
    {
LABEL_6:
      v12 = (_WORD *)((char *)v2 + v2[4]);
      v13 = -1LL;
      do
        ++v13;
      while ( v12[v13] );
      v14 = (unsigned int)(2 * v13 + 2);
      ElementDataWithFlags = BcdGetElementDataWithFlags((_DWORD)v8, 301989892, v11, 0, (__int64)&v30);
      if ( ElementDataWithFlags == -1073741789 )
      {
        Pool2 = (void *)ExAllocatePool2(258LL, v30, 1262764866LL);
        if ( !Pool2 )
        {
LABEL_35:
          BiDeleteElement(v8, 0x12000004u);
          BcdSetElementDataWithFlags(v8, 0x12000004u, v22, (__int64)v12, v14);
LABEL_15:
          v17 = v2[5];
          if ( *(ULONG *)((char *)v2 + v17 + 8) == 4 )
          {
            v18 = (char *)v2 + v17;
            if ( (int)BiGetDeviceFromEfiPath((char *)v2 + v17 + 12) >= 0 )
            {
              BiDeleteElement(v8, 0x11000001u);
              BiMapEfiDeviceForSpaces(a2, (const void **)&P, &v31);
              v4 = P;
              BcdSetElementDataWithFlags(v8, 0x11000001u, v20, (__int64)P, v31);
            }
            else
            {
              v4 = P;
            }
            if ( (int)BiGetFilePathFromEfiPath(v18 + 12, &v26, &v24) >= 0 )
            {
              BiDeleteElement(v8, 0x12000002u);
              v5 = v26;
              BcdSetElementDataWithFlags(v8, 0x12000002u, v21, (__int64)v26, v24);
            }
            else
            {
              v5 = v26;
            }
          }
          v9 = 0;
          if ( v4 )
            ExFreePoolWithTag(v4, 0x4B444342u);
          if ( v5 )
            ExFreePoolWithTag(v5, 0x4B444342u);
          goto LABEL_24;
        }
        ElementDataWithFlags = BcdGetElementDataWithFlags((_DWORD)v8, 301989892, v16, (_DWORD)Pool2, (__int64)&v30);
      }
      if ( ElementDataWithFlags >= 0 && Pool2 && v30 == (_DWORD)v14 && RtlCompareMemory(v12, Pool2, v14) == v14 )
        goto LABEL_15;
      goto LABEL_35;
    }
  }
  v9 = BiSetRegistryValue((__int64)v8, L"FirmwareVariable", (__int64)L"Description", 3u, v2, v2[1]);
  if ( v9 >= 0 )
  {
    *(_DWORD *)(a2 + 48) |= 2u;
    goto LABEL_6;
  }
LABEL_24:
  if ( Source2 )
    ExFreePoolWithTag(Source2, 0x4B444342u);
LABEL_26:
  if ( v8 )
    BcdCloseObject(v8);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x4B444342u);
  return (unsigned int)v9;
}
